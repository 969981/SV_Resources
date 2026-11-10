/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d164d0; name: FUN_01d164d0
 */


undefined8 FUN_01d164d0(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_01d16590(param_1,1);
  if ((DAT_0481d310 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_0481d310);
    if (iVar3 != 0) {
      DAT_0482cb78 = '\x01';
      DAT_0482cb80 = 1;
      __cxa_guard_release(&DAT_0481d310);
    }
  }
  uVar1 = 0x70;
  if (DAT_0482cb78 == '\0') {
    uVar1 = 0;
  }
  uVar2 = FUN_01d1661c(uVar4,uVar1,DAT_0482cb80);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


