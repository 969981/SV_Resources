/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e08b3c; name: FUN_01e08b3c
 */


undefined1  [16] FUN_01e08b3c(undefined8 param_1)

{
  int iVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  if ((DAT_04839b78 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04839b78);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00b1ecf8,&DAT_04839b68,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839b78);
    }
  }
  DAT_04839b60 = DAT_04839b68;
  if (DAT_04839b68 == 0) {
    return ZEXT816(0);
  }
  FUN_01ebb4dc(DAT_04839b68,param_1);
  auVar2._4_4_ = extraout_var;
  auVar2._0_4_ = extraout_s0;
  auVar2._8_8_ = extraout_var_00;
  return auVar2;
}


