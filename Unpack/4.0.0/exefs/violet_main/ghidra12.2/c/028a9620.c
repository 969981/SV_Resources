/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a9620; name: FUN_028a9620
 */


void FUN_028a9620(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long local_28;
  long local_8;
  
  if (param_1 < 0) {
    FUN_028a5f50();
LAB_028a96bc:
    iVar1 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar1 != 0) {
      unaff_x19[0x86] = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
  }
  else {
    local_28 = tpidr_el0;
    plVar2 = *(long **)(local_28 + 0x30);
    if (plVar2 != (long *)0x0) goto LAB_028a9654;
    unaff_x19 = &DAT_04859000;
    local_8 = param_1;
    if ((DAT_04859438 & 1) == 0) goto LAB_028a96bc;
  }
  plVar2 = (long *)unaff_x19[0x86];
  *(long **)(local_28 + 0x30) = plVar2;
  param_1 = local_8;
LAB_028a9654:
                    /* WARNING: Could not recover jumptable at 0x028a9674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,param_1 << 1,8);
  return;
}


