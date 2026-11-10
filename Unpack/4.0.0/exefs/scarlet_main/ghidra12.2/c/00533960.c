/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00533960; name: FUN_00533960
 */


undefined1  [16] FUN_00533960(char *param_1,long *param_2)

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
  ulong local_70;
  undefined8 local_68;
  char *local_60;
  char *local_58;
  char *local_50 [2];
  
  dVar8 = strtod(param_1,&local_58);
  if (param_2 == (long *)0x0) {
    cVar2 = *local_58;
  }
  else {
    *param_2 = (long)local_58;
    cVar2 = *local_58;
  }
  uVar10 = extraout_var;
  if (cVar2 == '.') {
    iVar6 = snprintf((char *)local_50,0x10,"%.1f",0x3ff8000000000000);
    local_70 = 0;
    local_68 = 0;
    local_60 = (char *)0x0;
    sVar7 = strlen(param_1);
                    /* try { // try from 005339ec to 00533a3b has its CatchHandler @ 00533ad8 */
    FUN_002cdbb0(&local_70,sVar7 + (long)iVar6 + -3);
    FUN_0053422c(&local_70,param_1,local_58);
    FUN_0021d540(&local_70,(ulong)local_50 | 1,(long)(iVar6 + -2));
    sVar7 = strlen(local_58 + 1);
    FUN_0021d540(&local_70,local_58 + 1,sVar7);
    __nptr = (char *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      __nptr = local_60;
    }
    dVar8 = strtod(__nptr,local_50);
    uVar4 = local_70;
    uVar10 = extraout_var_00;
    if ((param_2 != (long *)0x0) &&
       ((long)local_58 - (long)param_1 < (long)local_50[0] - (long)__nptr)) {
      uVar5 = (uint)local_68;
      bVar3 = (byte)local_70 >> 1;
      sVar7 = strlen(param_1);
      uVar1 = (uint)bVar3;
      if ((uVar4 & 1) != 0) {
        uVar1 = uVar5;
      }
      *param_2 = (long)(param_1 +
                       (((long)local_50[0] - (long)__nptr) - (long)(int)(uVar1 - (int)sVar7)));
    }
    if ((uVar4 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_60);
    }
  }
  auVar9._8_8_ = uVar10;
  auVar9._0_8_ = dVar8;
  return auVar9;
}


