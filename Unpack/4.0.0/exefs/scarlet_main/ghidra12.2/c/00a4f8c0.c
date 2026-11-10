/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a4f8c0; name: FUN_00a4f8c0
 */


undefined8 FUN_00a4f8c0(int param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (param_1 != 0) {
    if (param_1 == 2) {
      pcStack_38 = "FSYS_DLC2_POKEDEX_ADD";
      local_40 = 0xd829ae6584284137;
    }
    else {
      if (param_1 != 1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("false","IsLocalUnlockPokedex",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/ui/pokedex/pokedex_data_manager.cpp"
                   ,0x10d,"not exist pokedex kind[%d].");
      }
      pcStack_38 = "FSYS_DLC1_POKEDEX_ADD";
      local_40 = 0x20591e9a4877db86;
    }
    local_30 = 0x15;
    local_28 = (long *)0x0;
    if (((*PTR_DAT_047d4928 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4928), iVar1 != 0)) {
      FUN_00100190(&LAB_02af32dc,PTR_DAT_047d4930,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4928);
    }
    lVar3 = *(long *)PTR_DAT_047d4930;
    *(long *)PTR_DAT_047d4938 = lVar3;
    uVar2 = FUN_00fb1cf4(&local_40,lVar3 + 0x198);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}


