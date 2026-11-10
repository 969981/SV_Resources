/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0167fde0; name: FUN_0167fde0
 */


void FUN_0167fde0(undefined8 param_1,short *param_2,short *param_3)

{
  short sVar1;
  
  sVar1 = *param_2;
  if (*param_3 != 0) {
    sVar1 = *param_3;
  }
  FUN_0129aff0(param_1,0x8b,(char)param_3[1],*(undefined1 *)((long)param_3 + 3),sVar1,
               (char)param_2[4],(char)param_3[2],(char)param_3[3],(char)param_3[6],
               *(undefined1 *)((long)param_3 + 7),(char)param_2[5],
               *(undefined1 *)((long)param_3 + 5));
  return;
}


