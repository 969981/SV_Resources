/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


