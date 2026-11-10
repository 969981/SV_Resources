/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0299b05c; name: FUN_0299b05c
 */


void FUN_0299b05c(undefined8 *param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x128));
  if (-1 < (int)param_3) {
    uVar6 = (*(long *)(param_2 + 0x1f0) - *(long *)(param_2 + 0x1e8) >> 4) * 0x2e8ba2e8ba2e8ba3;
    if ((int)param_3 < (int)uVar6) {
      if (uVar6 <= param_3) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      puVar5 = (undefined8 *)(*(long *)(param_2 + 0x1e8) + (ulong)param_3 * 0xb0);
      *param_1 = *puVar5;
      param_1[1] = puVar5[1];
      param_1[2] = puVar5[2];
      plVar4 = (long *)puVar5[3];
      goto LAB_0299b10c;
    }
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar2 = PTR_DAT_047d3e30;
  uVar1 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
  param_1[1] = uVar1;
  plVar4 = *(long **)(puVar2 + 0x18);
  param_1[2] = *(undefined8 *)(puVar2 + 0x10);
LAB_0299b10c:
  param_1[3] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x128));
  return;
}


