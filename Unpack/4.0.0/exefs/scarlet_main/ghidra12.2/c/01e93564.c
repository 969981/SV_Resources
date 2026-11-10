/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e93564; name: FUN_01e93564
 */


void FUN_01e93564(long param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar5 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar5;
  plVar1 = *(long **)(lVar5 + 0x1c8);
  plVar2 = *(long **)(lVar5 + 0x1c0);
  do {
    if (plVar2 == plVar1) {
      return;
    }
    lVar5 = *plVar2;
    uVar4 = FUN_00f280dc(lVar5 + 0x28);
    plVar2 = plVar2 + 1;
  } while ((uVar4 & 1) == 0);
  if (*(int *)(param_1 + 0x16a8) == *(int *)(lVar5 + 0xe300)) {
    return;
  }
  FUN_01fa821c(*(undefined8 *)(param_1 + 8),"RaidGemForceLottery");
  return;
}


