class LinearSearch {
    public static void main(String[] args) {
        int[] data = { 29, 43, 18, 57, 60, 9, 25, 33, 72 };
        int index = -1;
        int value = 99;
        
        for(int i=0; i<data.length; i++) {
            if(value == data[i]) {
                index = i;
                break;
            }
        }
        
        if(index != -1) {
            System.out.println("Nilai " + value + " berada pada index " + index);
        }
        else {
            System.out.println("Nilai tidak ditemukan");
        }
    }
}
