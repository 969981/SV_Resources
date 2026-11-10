/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089a2b0; name: FUN_0089a2b0
 */


long FUN_0089a2b0(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if (*(int *)(param_1 + 0x48) == 0) {
LAB_0089a2fc:
    lVar3 = 0;
  }
  else {
    plVar4 = (long *)(param_1 + 0x40);
    do {
      lVar2 = *plVar4;
      if (lVar2 == param_1 + 0x38) goto LAB_0089a2fc;
      lVar3 = *(long *)(lVar2 + -0x20);
      plVar4 = (long *)(lVar2 + 8);
      iVar1 = strcmp(param_2,*(char **)(lVar3 + 0x10));
    } while (iVar1 != 0);
  }
  return lVar3;
}


