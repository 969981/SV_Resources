/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00452db0; name: FUN_00452db0
 */


void * FUN_00452db0(void *param_1,size_t param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  void *pvVar2;
  
  if (DAT_047f19bc == 1) {
    if (param_1 == (void *)0x0) {
      pvVar2 = (void *)FUN_0049dc40(param_2);
      if (pvVar2 != (void *)0x0) {
        return pvVar2;
      }
      if ((PTR_FUN_044aa1a8 != (undefined *)0x0) && (PTR_FUN_044aa1a8 != PTR_FUN_047cd438))
      goto LAB_00452e58;
      goto LAB_00452e98;
    }
    if (param_2 == 0) {
      iVar1 = FUN_0049dcf0(param_1);
      if (iVar1 == 1) {
        return (void *)0x0;
      }
    }
    else {
      pvVar2 = (void *)FUN_0049ddc0(param_1,param_2);
      if (pvVar2 != (void *)0x0) {
        return pvVar2;
      }
    }
  }
  if ((PTR_FUN_044aa1a8 != (undefined *)0x0) && (PTR_FUN_044aa1a8 != PTR_FUN_047cd438)) {
LAB_00452e58:
                    /* WARNING: Could not recover jumptable at 0x00452e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar2 = (void *)(*(code *)PTR_FUN_044aa1a8)(param_1,param_2,param_3,param_4);
    return pvVar2;
  }
  if (param_1 != (void *)0x0) {
    if (param_2 != 0) {
      pvVar2 = realloc(param_1,param_2);
      return pvVar2;
    }
    if ((DAT_047f19bc == 1) && (iVar1 = FUN_0049dcf0(param_1), iVar1 == 1)) {
      return (void *)0x0;
    }
    if ((PTR_FUN_044aa1b0 == (undefined *)0x0) || (PTR_FUN_044aa1b0 == PTR_FUN_047cd440)) {
      free(param_1);
      return (void *)0x0;
    }
    (*(code *)PTR_FUN_044aa1b0)(param_1,param_3,param_4);
    return (void *)0x0;
  }
LAB_00452e98:
  if ((DAT_047f19bc == 1) && (pvVar2 = (void *)FUN_0049dc40(param_2), pvVar2 != (void *)0x0)) {
    return pvVar2;
  }
  if ((PTR_FUN_044aa1a0 != (undefined *)0x0) && (PTR_FUN_044aa1a0 != PTR_FUN_047cd430)) {
                    /* WARNING: Could not recover jumptable at 0x00452ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar2 = (void *)(*(code *)PTR_FUN_044aa1a0)(param_2,param_3,param_4);
    return pvVar2;
  }
  if (param_2 == 0) {
    return (void *)0x0;
  }
  if ((DAT_047f19b8 & 1) == 0) {
    DAT_047f19b8 = 1;
  }
  pvVar2 = malloc(param_2);
  return pvVar2;
}


