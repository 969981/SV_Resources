/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ba8784; name: FUN_00ba8784
 */


undefined8 FUN_00ba8784(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if (param_2 == 0) {
    lVar1 = tpidr_el0;
    plVar4 = *(long **)(lVar1 + 0x30);
    if (plVar4 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar4 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0xe8,8);
    FUN_00bbf5d4();
  }
  else {
    uVar3 = FUN_00c0e238(param_2,0,0xe8);
    FUN_00bbf5d4();
    FUN_00c0e13c(param_2,uVar3,PTR_LAB_047dacd8);
  }
  return uVar3;
}


