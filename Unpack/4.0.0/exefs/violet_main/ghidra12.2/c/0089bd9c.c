/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089bd9c; name: FUN_0089bd9c
 */


void FUN_0089bd9c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x30);
  lVar2 = param_1 + 0x28;
  if (lVar2 != lVar3) {
    lVar4 = lVar3;
    do {
      iVar1 = strcmp(*(char **)(lVar4 + 0x10),"In");
      if (iVar1 == 0) {
        if (lVar4 != 0) goto LAB_0089bdfc;
        break;
      }
      lVar4 = *(long *)(lVar4 + 8);
    } while (lVar2 != lVar4);
  }
  goto LAB_0089be1c;
  while (lVar3 = *(long *)(lVar3 + 8), lVar2 != lVar3) {
LAB_0089bdfc:
    iVar1 = strcmp(*(char **)(lVar3 + 0x10),"In");
    if (iVar1 == 0) goto LAB_0089be1c;
  }
  lVar3 = 0;
LAB_0089be1c:
  *(long *)(param_1 + 0x20) = lVar3;
  FUN_008bdd9c(param_1,lVar3);
  *(undefined2 *)(param_1 + 0x10d) = 0;
  lVar2 = FUN_008bd410(param_1 + 0x48);
  if ((lVar2 != 0) && (*(char *)(param_1 + 0x10f) == '\0')) {
    (**(code **)PTR_DAT_047d2260)(lVar2,*(undefined8 *)PTR_DAT_047d2268);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}


