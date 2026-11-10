/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0216f0b8; name: FUN_0216f0b8
 */


void FUN_0216f0b8(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  char local_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *local_28;
  
  if ((ulong)((*(long *)(param_2 + 0x90) - *(long *)(param_2 + 0x88) >> 4) * 0x34f72c234f72c235) <=
      (param_3 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  FUN_01340a44(local_48,*(long *)(param_2 + 0x88) + (param_3 & 0xffffffff) * 0x1d0,1);
  if (local_48[0] == '\0') {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar2 = PTR_DAT_047d3e30;
    uVar1 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
    *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
    param_1[1] = uVar1;
    plVar4 = *(long **)(puVar2 + 0x18);
    param_1[2] = *(undefined8 *)(puVar2 + 0x10);
  }
  else {
    *param_1 = local_40;
    param_1[1] = uStack_38;
    param_1[2] = local_30;
    plVar4 = local_28;
  }
  param_1[3] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  if ((local_48[0] != '\0') && (local_28 != (long *)0x0)) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


