/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01679498; name: FUN_01679498
 */


void FUN_01679498(long param_1,short *param_2,short *param_3,undefined2 *param_4)

{
  short sVar1;
  
  if (*(int *)(param_3 + 0x18) != 0) {
    FUN_0167fe4c(param_1,param_3,*param_4);
  }
  if (param_4[1] == -1) {
    FUN_016799f0(*(undefined8 *)(param_1 + 0x18),param_3,0);
    FUN_016799f0(*(undefined8 *)(param_1 + 0x18),param_3,1);
    FUN_016799f0(*(undefined8 *)(param_1 + 0x18),param_3,2);
    FUN_0167fde0(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
    return;
  }
  FUN_01679624(*(undefined8 *)(param_1 + 0x18),param_4[2],0x7e,0,
               *(undefined1 *)((long)param_3 + 0xd),(char)param_3[8],
               *(undefined1 *)((long)param_3 + 0x13),(char)param_3[0xb],
               *(undefined1 *)((long)param_3 + 0x19));
  FUN_01679624(*(undefined8 *)(param_1 + 0x18),param_4[3],0x7e,1,(char)param_3[7],
               *(undefined1 *)((long)param_3 + 0x11),(char)param_3[10],
               *(undefined1 *)((long)param_3 + 0x17),(char)param_3[0xd]);
  FUN_01679624(*(undefined8 *)(param_1 + 0x18),param_4[4],0x7e,2,
               *(undefined1 *)((long)param_3 + 0xf),(char)param_3[9],
               *(undefined1 *)((long)param_3 + 0x15),(char)param_3[0xc],
               *(undefined1 *)((long)param_3 + 0x1b));
  sVar1 = *param_2;
  if (*param_3 != 0) {
    sVar1 = *param_3;
  }
  FUN_01679624(*(undefined8 *)(param_1 + 0x18),param_4[1],0x8b,(char)param_3[1],
               *(undefined1 *)((long)param_3 + 3),sVar1,(char)param_2[4],(char)param_3[2],
               (char)param_3[3],(char)param_3[6],*(undefined1 *)((long)param_3 + 7),(char)param_2[5]
               ,*(undefined1 *)((long)param_3 + 5));
  return;
}


