/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03513760; name: FUN_03513760
 */


void FUN_03513760(undefined1 *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = 1;
  if (DAT_048b0b00 != '\0') {
    nn::os::SignalEvent((EventType *)PTR_DAT_047e6fe8);
    nn::os::WaitThread((ThreadType *)&DAT_048b0ac0);
    nn::os::DestroyThread((ThreadType *)&DAT_048b0ac0);
    lVar2 = DAT_048b0c80;
    if ((DAT_048b0c88 != 0) && (DAT_048b0c80 != 0)) {
      lVar1 = tpidr_el0;
      plVar5 = *(long **)(lVar1 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar1 + 0x30) = DAT_04859430;
      }
      uVar4 = FUN_00c4e564(plVar5);
      if ((uVar4 & 1) == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar2,0,8);
      }
      else {
        FUN_00c48fe8(plVar5,lVar2,0,8);
      }
    }
    DAT_048b0c80 = 0;
    DAT_048b0b00 = '\0';
  }
  return;
}


