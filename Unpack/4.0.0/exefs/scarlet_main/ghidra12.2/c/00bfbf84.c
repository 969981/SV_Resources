/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bfbf84; name: FUN_00bfbf84
 */


void FUN_00bfbf84(void)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  lVar1 = tpidr_el0;
  plVar3 = *(long **)(lVar1 + 0x30);
  if (plVar3 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar3 = DAT_04859430;
    *(long **)(lVar1 + 0x30) = DAT_04859430;
  }
  DAT_0483aa30 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,8,8);
  *DAT_0483aa30 = &PTR_LAB_0455c308;
  return;
}


