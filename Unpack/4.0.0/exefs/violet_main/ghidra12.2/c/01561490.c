/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01561490; name: FUN_01561490
 */


void FUN_01561490(undefined8 *param_1,long param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (*(char *)(param_2 + 0x33d) == '\0') {
    lVar6 = *(long *)(*(long *)(param_2 + 0x3d8) + 0x930);
    piVar1 = (int *)(lVar6 + 0x20);
    if (*(int *)(lVar6 + 0x28) != 0) {
      piVar1 = (int *)(lVar6 + 0x24);
    }
    uVar7 = (long)*(int *)(lVar6 + 0x14) + (long)*piVar1 * (long)*(int *)(lVar6 + 0x10);
    if ((ulong)((*(long *)(param_2 + 0x308) - *(long *)(param_2 + 0x300) >> 4) * -0x3333333333333333
               ) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    puVar8 = (undefined8 *)(*(long *)(param_2 + 0x300) + uVar7 * 0x50);
    *param_1 = *puVar8;
    param_1[1] = puVar8[1];
    param_1[2] = puVar8[2];
    plVar5 = (long *)puVar8[3];
  }
  else {
    if ((*PTR_DAT_047d3e28 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28);
      if (iVar4 != 0) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
    }
    puVar3 = PTR_DAT_047d3e30;
    uVar2 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
    *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
    param_1[1] = uVar2;
    plVar5 = *(long **)(puVar3 + 0x18);
    param_1[2] = *(undefined8 *)(puVar3 + 0x10);
  }
  param_1[3] = plVar5;
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01561538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))();
  return;
}


