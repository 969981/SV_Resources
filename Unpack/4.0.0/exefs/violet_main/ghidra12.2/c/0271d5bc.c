/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0271d5bc; name: FUN_0271d5bc
 */


void FUN_0271d5bc(void)

{
  long lVar1;
  long *plVar2;
  undefined8 local_8;
  
  (**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x18))();
  FUN_00cc620c();
  FUN_00cc6124();
  local_8 = DAT_0485a0f8;
  DAT_0485a0f8 = 0;
  FUN_00cc5904(&local_8);
  FUN_00cc60b0();
  FUN_00cc603c();
  (**(code **)(*DAT_0485a100 + 0x18))();
  plVar2 = DAT_0485a100;
  DAT_0485a100 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    FUN_0271d1ec(&DAT_0485a108);
  }
  FUN_027153c4(DAT_0485a0d8);
  FUN_00cc5fc8();
  FUN_00cc5f54();
  FUN_00cc5ee0();
  lVar1 = DAT_0485a0a8;
  DAT_0485a0a8 = 0;
  if (lVar1 != 0) {
    FUN_0271ce10(&DAT_0485a0b0);
  }
  FUN_02715a2c();
  FUN_0270937c(DAT_0485a0a0);
  FUN_00cc5df8();
  return;
}


