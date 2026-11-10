/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


