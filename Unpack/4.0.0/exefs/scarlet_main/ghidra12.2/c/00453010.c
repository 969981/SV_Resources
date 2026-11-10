/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00453010; name: FUN_00453010
 */


void * FUN_00453010(void *param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  void *pvVar2;
  
  if (param_1 == (void *)0x0) {
    if ((DAT_047f19bc == 1) && (pvVar2 = (void *)FUN_0049dc40(param_3), pvVar2 != (void *)0x0)) {
      return pvVar2;
    }
    if ((PTR_FUN_044aa1a0 != (undefined *)0x0) && (PTR_FUN_044aa1a0 != PTR_FUN_047cd430)) {
                    /* WARNING: Could not recover jumptable at 0x004530ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar2 = (void *)(*(code *)PTR_FUN_044aa1a0)(param_3,param_4,param_5);
      return pvVar2;
    }
    if (param_3 != 0) {
      if ((DAT_047f19b8 & 1) == 0) {
        DAT_047f19b8 = 1;
      }
      pvVar2 = malloc(param_3);
      return pvVar2;
    }
  }
  else {
    if (param_3 != 0) {
      if (param_3 <= param_2 && param_2 - param_3 != 0) {
        FUN_00453300((long)param_1 + param_3);
        return param_1;
      }
      if ((DAT_047f19bc != 1) ||
         (pvVar2 = (void *)FUN_0049dc40(param_3,param_2 - param_3), pvVar2 == (void *)0x0)) {
        if ((PTR_FUN_044aa1a0 == (undefined *)0x0) || (PTR_FUN_044aa1a0 == PTR_FUN_047cd430)) {
          if ((DAT_047f19b8 & 1) == 0) {
            DAT_047f19b8 = 1;
          }
          pvVar2 = malloc(param_3);
        }
        else {
          pvVar2 = (void *)(*(code *)PTR_FUN_044aa1a0)(param_3,param_4,param_5);
        }
        if (pvVar2 == (void *)0x0) {
          return (void *)0x0;
        }
      }
      memcpy(pvVar2,param_1,param_2);
      if (param_2 != 0) {
        FUN_00453300(param_1,param_2);
      }
      if ((DAT_047f19bc == 1) && (iVar1 = FUN_0049dcf0(param_1), iVar1 == 1)) {
        return pvVar2;
      }
      if ((PTR_FUN_044aa1b0 == (undefined *)0x0) || (PTR_FUN_044aa1b0 == PTR_FUN_047cd440)) {
        free(param_1);
        return pvVar2;
      }
      (*(code *)PTR_FUN_044aa1b0)(param_1,param_4,param_5);
      return pvVar2;
    }
    if (param_2 != 0) {
      FUN_00453300(param_1,param_2);
    }
    if ((DAT_047f19bc != 1) || (iVar1 = FUN_0049dcf0(param_1), iVar1 != 1)) {
      if ((PTR_FUN_044aa1b0 == (undefined *)0x0) || (PTR_FUN_044aa1b0 == PTR_FUN_047cd440)) {
        free(param_1);
      }
      else {
        (*(code *)PTR_FUN_044aa1b0)(param_1,param_4,param_5);
      }
    }
  }
  return (void *)0x0;
}


