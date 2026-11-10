/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0111e884; name: FUN_0111e884
 */


void FUN_0111e884(undefined8 *param_1,long param_2,uint param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((int)param_3 < *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0xc)) {
    puVar3 = (undefined8 *)(*(long *)(*(long *)(param_2 + 0x40) + 0x20) + (ulong)param_3 * 0x28);
    uVar4 = puVar3[1];
    *param_1 = *puVar3;
    param_1[1] = uVar4;
  }
  else {
    if ((*PTR_DAT_047d3e28 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28);
      if (iVar2 != 0) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
    }
    puVar3 = (undefined8 *)PTR_DAT_047d3e30;
    uVar4 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
    *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
    param_1[1] = uVar4;
  }
  plVar1 = (long *)puVar3[3];
  param_1[2] = puVar3[2];
  param_1[3] = plVar1;
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0111e8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}


