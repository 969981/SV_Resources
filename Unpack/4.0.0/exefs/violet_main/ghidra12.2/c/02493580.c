/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02493580; name: FUN_02493580
 */


undefined8 FUN_02493580(undefined8 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = FUN_02493260(param_1,1);
  if ((DAT_0484ae00 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0484ae00);
    if (iVar2 != 0) {
      DAT_0484c020 = '\x01';
      __cxa_guard_release(&DAT_0484ae00);
    }
  }
  puVar1 = &LAB_02b973d8;
  if (DAT_0484c020 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  auVar4 = FUN_02493540(uVar3,puVar1,0);
  FUN_00c46da0((double)auVar4._0_4_,param_1);
  FUN_00c46da0((double)auVar4._4_4_,param_1);
  FUN_00c46da0((double)auVar4._8_4_,param_1);
  FUN_00c46da0((double)auVar4._12_4_,param_1);
  return 4;
}


