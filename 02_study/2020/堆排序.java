import java.util.Arrays;

public class HeapSort {
    //test
    public static void main(String[] args) {
        int testTime = 500000;
        int maxSize = 100;
        int maxValue=100;
        boolean succeed = true;
        for(int i = 0 ; i<testTime;i++) {
            int[] arr1 = generateRandomArray(maxSize, maxValue);
            int[] arr2 = copyArray(arr1);
            heapSort(arr1);
            comparator(arr2);
            if (!isEqual(arr1, arr2)) {
                succeed = false;
                printArray(arr1);
                printArray(arr2);
                break;
            }
        }
        System.out.println(succeed?"Nice":"fucking fucked!");
        int[] arr = generateRandomArray(maxSize,maxValue);
        printArray(arr);
        heapSort(arr);
        printArray(arr);
    }
    //堆排序
    //堆是在数组中进行伸缩的，
    public static void heapSort(int[] arr){
        if(arr==null || arr.length<2){
            return;
        }
        //先创建堆，将元素插入堆中
        for(int i = 0 ;i<arr.length;i++){
            heapInsert(arr,i);
        }
        int size = arr.length;
        //将0位置的元素和树的最后一个元素的位置进行交换
        swap(arr,0,--size);
        while (size>0){ //只要树还有元素，就将树中最后一个元素的位置和树根元素进行交换
            //将交换后的堆顶元素进行调整
            heapify(arr,0,size);
            //将最后一个元素和堆顶元素记性交换
            swap(arr,0,--size);

        }

    }
    //建立大根堆的过程，时间复杂度为O(logn)
    public static void heapInsert(int[] arr,int index){
        //将元素插入堆，如果插入元素位置的元素大于父节点位置的元素，那就将这两个位置的元素位置互换
        //最终的结果是创建一个大根堆
        while (arr[index]>arr[(index-1)/2]){
            swap(arr,index,(index-1)/2);
            index = (index - 1)/2;
        }
    }
    //交换数组中两个元素的位置
    public static void swap(int[] arr,int i ,int j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    //当大根堆中有个位置的元素被换掉，就需要进行相应的调整
    //0-heapsize-1的范围上已经形成了堆，再往右就越界
    public static void heapify(int[] arr,int index,int size){
        //得到左孩子节点的索引
        int left = 2*index+1;
        //当左子树的下标没有超过数组长度的时候，即左孩子下标没有越界，如果left已经越界了，那就表示其父节点已经是叶子节点了
        while (left<size){
            //只有右孩子不越界，并且右孩子的值要比左孩子的值要大，才会作为largest值出现
            int largest = left+1<size&&arr[left+1]>arr[left]?left+1:left;//找出左右节点中值比较大的节点
            //左孩子和右孩子最大值和父节点index之间谁大，谁就是largest下标
            largest = arr[largest]>arr[index]?largest:index;
            //如果父节点的值比两个子节点的值都大的话，就退出
            if(largest==index){
                break;
            }
            //如果父节点的值小于两个子节点中比较大的值的节点的时候，就将父节点和子节点中值较大的进行交换
            swap(arr,largest,index);
            //这是一个值变小一直向下沉的操作
            index=largest;
            //索引交换了之后，接着向下做调整操作
            left=index*2+1;
        }
    }
    //test
    public static  int[] generateRandomArray(int maxSize,int maxValue){
        int[] arr = new int[(int) ((maxSize + 1) * Math.random())+1];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = (int) ((maxValue + 1) * Math.random()) - (int) (maxValue * Math.random());
        }
        return arr;
    }
    //test
    public static int[] copyArray(int[] arr){
        if(arr==null || arr.length==0){
            return null;
        }
        int[] res = new int[arr.length];
        for(int i = 0 ; i<arr.length;i++){
            res[i] = arr[i];
        }
        return res;
    }

    //test
    public static void comparator(int[] arr) {
        Arrays.sort(arr);
    }
    //test
    public static boolean isEqual(int[] arr1,int[] arr2){
        if((arr1!=null&&arr2==null)||(arr1==null&&arr2!=null)){
            return false;
        }
        if(arr1==null&&arr2==null){
            return true;
        }
        if(arr1.length!=arr2.length){
            return false;
        }
        for(int i = 0 ; i <arr1.length;i++){
            if(arr1[i]!=arr2[i]){
                return false;
            }
        }
        return true;

    }
    //test
    public static void printArray(int[] arr){
        if(arr==null||arr.length==0){
            return;
        }
        for(int i =0 ;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
}






















public static Node2 convert1(Node2 head) {
 2    Queue<Node2> queue = new LinkedList<>();
 3    //将节点按中序遍历放进队列里
 4    inOrderToQueue(head, queue);
 5    head = queue.poll();
 6    Node2 pre = head;
 7    pre.left = null;
 8    Node2 cur = null;
 9    while (!queue.isEmpty()) {
10        cur = queue.poll();
11        pre.right = cur;
12        cur.left = pre;
13        pre = cur;
14    }
15    pre.right = null;
16    return head;
17}
18
19private static void inOrderToQueue(Node2 head, Queue<Node2> queue) {
20    if (head == null) {
21        return;
22    }
23    inOrderToQueue(head.left, queue);
24    queue.offer(head);
25    inOrderToQueue(head.right, queue);
26}


