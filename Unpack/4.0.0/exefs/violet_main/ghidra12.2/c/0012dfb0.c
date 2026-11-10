/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0012dfb0; name: FUN_0012dfb0
 */


void FUN_0012dfb0(undefined8 param_1,double *param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  lconv *plVar4;
  double dVar5;
  char acStack_5c [44];
  
  if (*(char *)(param_2 + 1) == '\x03') {
    iVar1 = snprintf(acStack_5c,0x2c,"%lld",*param_2);
  }
  else {
    iVar2 = snprintf(acStack_5c,0x2c,"%.14g",*param_2);
    sVar3 = strspn(acStack_5c,"-0123456789");
    iVar1 = iVar2;
    if (acStack_5c[sVar3] == '\0') {
      plVar4 = localeconv();
      iVar1 = iVar2 + 2;
      acStack_5c[iVar2] = *plVar4->decimal_point;
      acStack_5c[(long)iVar2 + 1] = '0';
    }
  }
  dVar5 = (double)FUN_0013be00(param_1,acStack_5c,(long)iVar1);
  *param_2 = dVar5;
  *(byte *)(param_2 + 1) = *(byte *)((long)dVar5 + 8) | 0x40;
  return;
}


