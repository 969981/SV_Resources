/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a9508; name: FUN_028a9508
 */


void FUN_028a9508(ulong param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long local_28;
  ulong local_8;
  
  if (param_1 < 0xaaaaaaaaaaaaaab) {
    local_28 = tpidr_el0;
    plVar2 = *(long **)(local_28 + 0x30);
    if (plVar2 != (long *)0x0) goto LAB_028a954c;
    unaff_x19 = &DAT_04859000;
    local_8 = param_1;
    if ((DAT_04859438 & 1) == 0) goto LAB_028a95b8;
  }
  else {
    FUN_028a5f50();
LAB_028a95b8:
    iVar1 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar1 != 0) {
      unaff_x19[0x86] = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
  }
  plVar2 = (long *)unaff_x19[0x86];
  *(long **)(local_28 + 0x30) = plVar2;
  param_1 = local_8;
LAB_028a954c:
                    /* WARNING: Could not recover jumptable at 0x028a9570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,param_1 * 0x18,8);
  return;
}


