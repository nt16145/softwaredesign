package basic;

public class Applebox  {
    private String boxname;
    private int size;
    private int count;
    public Applebox(int initialsize,String bname) {
        boxname = bname;
        size = initialsize;
        count = 0;
    } //コンストラクタ

    //s = 8;
    public void setSize(int s){
        int retentionsize = size;
        if(count <= s) {
            this.size = s;
        }
        else {
            this.size = count;
        }
        if(this.size > retentionsize) {
            System.out.println(boxname + "became larger!");
        }
        else if(this.size < retentionsize) {
            System.out.println(boxname + "became smaller!");
        }
        else {
            System.out.println(boxname + "is not changed.");
        }
    }//セッター


    public int getSize() {
        return this.size;
    }
    public int getCount(){
        return this.count;
    }
    //privateフィールドにアクセスできるようにするためのゲッター

    pull()
    {
        TODO
    }
    put()
    {
        TODO
    }
}