/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03483170; name: FUN_03483170
 */


void FUN_03483170(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  FUN_03482f54();
  if (param_1 == 0) {
    return;
  }
  lVar3 = tpidr_el0;
  plVar4 = *(long **)(lVar3 + 0x30);
  if (plVar4 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar4 = DAT_04859430;
    *(long **)(lVar3 + 0x30) = DAT_04859430;
  }
  uVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00c4e600();
    if (0 < *(int *)(lVar3 + 0x12c8)) {
      FUN_00c48fe8(plVar4,param_1,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x034831e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,param_1,0,8);
  return;
}


