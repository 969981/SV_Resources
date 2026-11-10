/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c7aa84; name: FUN_01c7aa84
 */


undefined1  [16] FUN_01c7aa84(undefined8 param_1)

{
  int iVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  if ((DAT_04839b28 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04839b28);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00b1e40c,&DAT_04839b18,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839b28);
    }
  }
  DAT_04839b10 = DAT_04839b18;
  if (DAT_04839b18 == 0) {
    return ZEXT816(0);
  }
  FUN_01eba284(DAT_04839b18,param_1);
  auVar2._4_4_ = extraout_var;
  auVar2._0_4_ = extraout_s0;
  auVar2._8_8_ = extraout_var_00;
  return auVar2;
}


