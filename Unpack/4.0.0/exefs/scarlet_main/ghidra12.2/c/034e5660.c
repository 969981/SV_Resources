/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034e5660; name: FUN_034e5660
 */


void FUN_034e5660(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  long *plVar6;
  
  *param_1 = (long)&PTR_FUN_047c5a10;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x26));
  *param_1 = (long)(PTR_DAT_047e6f50 + 0x10);
  puVar1 = PTR_DAT_047e2fd0;
  puVar4 = (ulong *)param_1[0x1f];
  while (puVar4 != (ulong *)0x0) {
    uVar5 = *puVar4;
    (**(code **)(puVar1 + 0x30))(0x10);
    puVar4 = (ulong *)(uVar5 & 0x3fffffffffffffff);
  }
  param_1[0x1f] = 0;
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1 + 0x1a) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    param_1[0x19] = 0;
    *(undefined4 *)((long)param_1 + 0xd4) = 0;
  }
  if (param_1[0x12] != 0) {
    *(undefined4 *)(param_1 + 0x13) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    param_1[0x12] = 0;
    *(undefined4 *)((long)param_1 + 0x9c) = 0;
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xd));
  lVar3 = tpidr_el0;
  plVar6 = *(long **)(lVar3 + 0x30);
  if (plVar6 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar6 = DAT_04859430;
    *(long **)(lVar3 + 0x30) = DAT_04859430;
  }
  uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if (((uVar5 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x034e5768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x18))(plVar6,param_1,0,8);
    return;
  }
  FUN_00c48fe8(plVar6,param_1,0,8);
  return;
}


