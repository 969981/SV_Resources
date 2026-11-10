/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052cf60; name: thunk_FUN_00533960
 */


undefined1  [16] thunk_FUN_00533960(char *param_1,long *param_2)

{
  uint uVar1;
  char *__nptr;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  double dVar8;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  ulong uStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  char *pcStack_58;
  char *apcStack_50 [2];
  
  dVar8 = strtod(param_1,&pcStack_58);
  if (param_2 == (long *)0x0) {
    cVar2 = *pcStack_58;
  }
  else {
    *param_2 = (long)pcStack_58;
    cVar2 = *pcStack_58;
  }
  uVar10 = extraout_var;
  if (cVar2 == '.') {
    iVar6 = snprintf((char *)apcStack_50,0x10,"%.1f",0x3ff8000000000000);
    uStack_70 = 0;
    uStack_68 = 0;
    pcStack_60 = (char *)0x0;
    sVar7 = strlen(param_1);
    FUN_002cdbb0(&uStack_70,sVar7 + (long)iVar6 + -3);
    FUN_0053422c(&uStack_70,param_1,pcStack_58);
    FUN_0021d540(&uStack_70,(ulong)apcStack_50 | 1,(long)(iVar6 + -2));
    sVar7 = strlen(pcStack_58 + 1);
    FUN_0021d540(&uStack_70,pcStack_58 + 1,sVar7);
    __nptr = (char *)((ulong)&uStack_70 | 1);
    if ((uStack_70 & 1) != 0) {
      __nptr = pcStack_60;
    }
    dVar8 = strtod(__nptr,apcStack_50);
    uVar4 = uStack_70;
    uVar10 = extraout_var_00;
    if ((param_2 != (long *)0x0) &&
       ((long)pcStack_58 - (long)param_1 < (long)apcStack_50[0] - (long)__nptr)) {
      uVar5 = (uint)uStack_68;
      bVar3 = (byte)uStack_70 >> 1;
      sVar7 = strlen(param_1);
      uVar1 = (uint)bVar3;
      if ((uVar4 & 1) != 0) {
        uVar1 = uVar5;
      }
      *param_2 = (long)(param_1 +
                       (((long)apcStack_50[0] - (long)__nptr) - (long)(int)(uVar1 - (int)sVar7)));
    }
    if ((uVar4 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,pcStack_60);
    }
  }
  auVar9._8_8_ = uVar10;
  auVar9._0_8_ = dVar8;
  return auVar9;
}


