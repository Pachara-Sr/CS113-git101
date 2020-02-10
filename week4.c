
int main(){
    /* การนิยามฟังก์ชัน
    return-value-type function-name( parameter-list )
{
:
:
}

*/


/* function prototype

return-value-type function-name(parameter-list);   มีไว้บอกcompilerว่ามีฟังก์ชันนี้อยู่แต่ยังไม่นิยาม

*/

// การใช้ returnจะเป็นการส่งค่ากลับไปยังตัวfunction
// ถ้ามีการ recursion โปรแกรมจะเก็บค่าตัวแปร ณ ขณะนั้นก่อนเรียกซ้ำไว้แยกต่างหาก

// ตัวแปร local ถูกประกาศใน block มีค่าแค่ใน block นั้นๆ
// ตัวแปร global ถูกประกาศนอก block มีค่าในทุกๆตำแหน่งหลังประกาศ
// ถ้าตัวแปร global กับ local ประกาศซ้ำชื่อ ฟังก์ชัน ที่ประาศ local ก็จะใช้ local ตัวนั้น โดยการเปลี่ยนแปลงค่าใน local จะไม่เปลี่ยน global

}