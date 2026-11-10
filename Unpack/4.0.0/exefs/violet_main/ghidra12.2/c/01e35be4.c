/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e35be4; name: FUN_01e35be4
 */


void FUN_01e35be4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_2 + 0x60) != -1) {
    if ((*PTR_DAT_047d6c20 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047d6c20);
      if (iVar3 != 0) {
        FUN_00100190(param_1,PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6c20);
      }
    }
    uVar4 = *(undefined8 *)PTR_DAT_047d6c28;
    *(undefined8 *)PTR_DAT_047d6c30 = uVar4;
    FUN_01e39bec(param_1,uVar4,*(undefined8 *)(param_2 + 0x60));
    return;
  }
  if ((*PTR_DAT_047d3e28 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28);
    if (iVar3 != 0) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
  }
  puVar2 = PTR_DAT_047d3e30;
  uVar4 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
  param_1[1] = uVar4;
  plVar1 = *(long **)(puVar2 + 0x18);
  param_1[2] = *(undefined8 *)(puVar2 + 0x10);
  param_1[3] = plVar1;
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01e35c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}


