/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f69064; name: FUN_01f69064
 */


void FUN_01f69064(int *param_1,void *param_2,long *param_3)

{
  undefined8 local_40;
  int local_38 [2];
  
  *(undefined1 *)(*param_3 + param_3[2]) = 0xbc;
  param_3[2] = param_3[2] + 1;
  local_40 = 0x9f6;
  FUN_0111b0ac(local_38,&local_40);
  if (local_38[0] == 0) {
    memcpy((void *)(*param_3 + param_3[2]),param_2,0x9f6);
    param_3[2] = param_3[2] + 0x9f6;
  }
  *param_1 = local_38[0];
  return;
}


