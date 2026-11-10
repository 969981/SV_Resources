/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a05f8c; name: FUN_02a05f8c
 */


bool FUN_02a05f8c(long param_1)

{
  bool bVar1;
  int iVar2;
  char *__s2;
  char acStack_40 [32];
  
  if (*(int *)(param_1 + 0x48) == 2) {
    FUN_01b61a00(acStack_40);
    if ((*(byte *)(param_1 + 0x1c0) & 1) == 0) {
      __s2 = (char *)(param_1 + 0x1c1);
    }
    else {
      __s2 = *(char **)(param_1 + 0x1d0);
    }
    iVar2 = strcmp(acStack_40,__s2);
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


