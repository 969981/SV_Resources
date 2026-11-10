/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00453330; name: thunk_FUN_00452c30
 */


void * thunk_FUN_00452c30(size_t param_1,undefined8 param_2,undefined4 param_3)

{
  void *pvVar1;
  
  if ((DAT_047f19bc == 1) && (pvVar1 = (void *)FUN_0049dc40(param_1), pvVar1 != (void *)0x0)) {
    return pvVar1;
  }
  if ((PTR_FUN_044aa1a0 != (undefined *)0x0) && (PTR_FUN_044aa1a0 != PTR_FUN_047cd430)) {
                    /* WARNING: Could not recover jumptable at 0x00452c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*(code *)PTR_FUN_044aa1a0)(param_1,param_2,param_3);
    return pvVar1;
  }
  if (param_1 == 0) {
    return (void *)0x0;
  }
  if ((DAT_047f19b8 & 1) == 0) {
    DAT_047f19b8 = 1;
  }
  pvVar1 = malloc(param_1);
  return pvVar1;
}


