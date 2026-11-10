/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02368df0; name: FUN_02368df0
 */


undefined8 FUN_02368df0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auVar2 [12];
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_02368ed0(param_1,1);
  if ((DAT_04848828 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04848828);
    if (iVar3 != 0) {
      DAT_04848f48 = '\x01';
      __cxa_guard_release(&DAT_04848828);
    }
  }
  puVar1 = &LAB_0236cab4;
  if (DAT_04848f48 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  auVar2 = FUN_02368f5c(uVar4,puVar1,0);
  FUN_00c46da0((double)auVar2._0_4_,param_1);
  FUN_00c46da0((double)auVar2._4_4_,param_1);
  FUN_00c46da0((double)auVar2._8_4_,param_1);
  return 3;
}


