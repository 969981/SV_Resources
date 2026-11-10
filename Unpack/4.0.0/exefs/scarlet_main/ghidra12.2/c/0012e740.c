/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0012e740; name: FUN_0012e740
 */


void FUN_0012e740(long *param_1,double *param_2)

{
  char *param0;
  int iVar1;
  long lVar2;
  size_t sVar3;
  lconv *plVar4;
  long lVar5;
  long *plVar6;
  
  iVar1 = *(int *)((long)param_1 + 0xc);
  if (0x9c < iVar1) {
    lVar5 = *param_1;
    plVar6 = *(long **)(lVar5 + 0x10);
    lVar2 = FUN_0013be00(lVar5,param_1 + 2);
    *plVar6 = lVar2;
    *(byte *)(plVar6 + 1) = *(byte *)(lVar2 + 8) | 0x40;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 0x10;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    FUN_00140b30(lVar5);
    iVar1 = 0;
    param_1[1] = 1;
  }
  param0 = (char *)((long)param_1 + (long)iVar1 + 0x10);
  if (*(char *)(param_2 + 1) == '\x03') {
    iVar1 = snprintf(param0,0x2c,"%lld",*param_2);
  }
  else {
    iVar1 = snprintf(param0,0x2c,"%.14g",*param_2);
    sVar3 = strspn(param0,"-0123456789");
    if (param0[sVar3] == '\0') {
      plVar4 = localeconv();
      lVar2 = (long)iVar1;
      iVar1 = iVar1 + 2;
      param0[lVar2] = *plVar4->decimal_point;
      (param0 + lVar2)[1] = '0';
    }
  }
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + iVar1;
  return;
}


