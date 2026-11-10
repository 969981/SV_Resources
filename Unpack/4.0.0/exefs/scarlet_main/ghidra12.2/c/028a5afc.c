/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a5afc; name: FUN_028a5afc
 */


long FUN_028a5afc(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  lVar2 = FUN_028aa4e4();
  if (lVar2 != param_2) {
    do {
      lVar4 = lVar2;
      lVar2 = FUN_028aa4e4(param_1,lVar4,param_3);
    } while (lVar2 != lVar4);
    return lVar4;
  }
  lVar2 = FUN_028a5af0();
  if (lVar2 == 0) {
    return 0;
  }
  lVar4 = tpidr_el0;
  plVar5 = *(long **)(lVar4 + 0x30);
  if (plVar5 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar5 = DAT_04859430;
    *(long **)(lVar4 + 0x30) = DAT_04859430;
  }
  uVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00c4e600();
    if (0 < *(int *)(lVar4 + 0x12c8)) {
      lVar2 = FUN_00c48fe8(plVar5,lVar2,0,8);
      return lVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x028a5bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (**(code **)(*plVar5 + 0x18))(plVar5,lVar2,0,8);
  return lVar2;
}


