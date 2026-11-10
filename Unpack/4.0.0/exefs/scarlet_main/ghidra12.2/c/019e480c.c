/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019e480c; name: FUN_019e480c
 */


void FUN_019e480c(undefined1 *param_1,long param_2,int param_3)

{
  undefined1 uVar1;
  
  param_2 = param_2 + (long)param_3 * 0x40;
  uVar1 = *(undefined1 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_00d0a71c(param_1 + 8,param_2 + 0x128);
  memcpy(param_1 + 0x18,(void *)(param_2 + 0x138),0x28);
  return;
}


