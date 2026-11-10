/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0012d040; name: FUN_0012d040
 */


void FUN_0012d040(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)FUN_0012d120(param_2 + 0x90);
  *puVar3 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_2 + 0x98) = 0;
  puVar3 = (undefined8 *)FUN_0012d120();
  *puVar3 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_2 + 0xa8) = 0;
  puVar3 = (undefined8 *)FUN_0012d120();
  *puVar3 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_2 + 0xa0) = 0;
  FUN_0012d120();
  if (*(char *)(param_2 + 0x6b) == '\0') {
    iVar2 = *(int *)(param_2 + 0x3c);
    iVar1 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    if (*(int *)(param_2 + 0x38) < iVar1 >> 2) {
      lVar4 = *(long *)(param_2 + 0x18);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      FUN_0013b9b0(param_1,iVar2 >> 1);
      *(long *)(param_2 + 0x20) = (*(long *)(param_2 + 0x18) - lVar4) + *(long *)(param_2 + 0x20);
      *(undefined1 *)(param_2 + 0x65) = 0;
      if (*(char *)(param_2 + 0x6b) != '\0') {
        return;
      }
      lVar4 = *(long *)(param_1 + 0x18);
    }
    else {
      *(undefined1 *)(param_2 + 0x65) = 0;
      lVar4 = *(long *)(param_1 + 0x18);
    }
    while (*(long *)(lVar4 + 0xb0) != 0) {
      FUN_0012d220(param_1);
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x65) = 0;
  }
  return;
}


