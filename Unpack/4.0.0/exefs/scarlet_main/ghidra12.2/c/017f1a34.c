/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f1a34; name: FUN_017f1a34
 */


undefined4 FUN_017f1a34(long param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
  cVar1 = *(char *)(param_1 + 0xa0);
  if (((iVar2 == 1) &&
      ((((cVar1 == *(char *)(param_1 + 0xac) || (cVar1 == *(char *)(param_1 + 0xad))) ||
        (*(char *)(param_1 + 0xa1) == *(char *)(param_1 + 0xac))) ||
       (*(char *)(param_1 + 0xa1) == *(char *)(param_1 + 0xad))))) ||
     ((cVar1 == *(char *)(param_1 + 0xb8) || (cVar1 == *(char *)(param_1 + 0xb9))))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (*(char *)(param_1 + 0xa1) != *(char *)(param_1 + 0xb9) &&
        *(char *)(param_1 + 0xa1) != *(char *)(param_1 + 0xb8)) {
      uVar3 = 0xfffffff6;
    }
  }
  return uVar3;
}


