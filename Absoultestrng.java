import java.io.File;

class Main {

  public static void main(String[] args) {

    // link to file Test.class
    File file = new File("C:\\Users\\Sudip Bhandari\\Desktop\\Programiz\\Java Article\\Test.class");

    // get file name using getName()
    String fileName = file.getName();
    System.out.println("File Name: " + fileName);

  }
}
