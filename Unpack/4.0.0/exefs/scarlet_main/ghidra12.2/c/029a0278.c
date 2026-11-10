/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029a0278; name: FUN_029a0278
 */


bool FUN_029a0278(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_8;
  
  iVar1 = *(int *)(param_1 + 0xc) + -1;
  if (*(int *)(param_1 + 0xc) < 1) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0xc) = iVar1;
  if (*param_2 != 0) {
    local_8 = param_3;
    FUN_014797a4(param_1 + 0x50,param_2,&local_8);
  }
  return iVar1 == 0;
}


