/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0146b594; name: FUN_0146b594
 */


void FUN_0146b594(ulong param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long local_28;
  ulong local_8;
  
  if (param_1 < 0x555555555555556) {
    local_28 = tpidr_el0;
    plVar2 = *(long **)(local_28 + 0x30);
    if (plVar2 != (long *)0x0) goto LAB_0146b5d8;
    unaff_x19 = &DAT_04859000;
    local_8 = param_1;
    if ((DAT_04859438 & 1) == 0) goto LAB_0146b644;
  }
  else {
    FUN_028a5f50();
LAB_0146b644:
    iVar1 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar1 != 0) {
      unaff_x19[0x86] = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
  }
  plVar2 = (long *)unaff_x19[0x86];
  *(long **)(local_28 + 0x30) = plVar2;
  param_1 = local_8;
LAB_0146b5d8:
                    /* WARNING: Could not recover jumptable at 0x0146b5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,param_1 * 0x30,8);
  return;
}


