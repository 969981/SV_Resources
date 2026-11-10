/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02575e00; name: FUN_02575e00
 */


undefined8 FUN_02575e00(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_02574b80(param_1,1);
  if ((DAT_04850d30 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04850d30);
    if (iVar1 != 0) {
      DAT_04850d20 = &LAB_02b9fbe0;
      DAT_04850d28 = 0;
      __cxa_guard_release(&DAT_04850d30,uVar2);
    }
  }
  uVar2 = FUN_02575e94(&DAT_04850d20,uVar2);
  FUN_00c85bd0(param_1,uVar2);
  return 1;
}


