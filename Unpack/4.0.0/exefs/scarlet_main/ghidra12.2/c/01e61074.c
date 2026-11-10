/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e61074; name: FUN_01e61074
 */


void FUN_01e61074(int *param_1,undefined8 param_2,void *param_3,long *param_4)

{
  undefined8 local_40;
  int local_38 [2];
  
  local_40 = 0x100;
  FUN_0111b0ac(local_38,&local_40,param_4);
  if (local_38[0] == 0) {
    memcpy((void *)(*param_4 + param_4[2]),param_3,0x100);
    param_4[2] = param_4[2] + 0x100;
  }
  *param_1 = local_38[0];
  return;
}


