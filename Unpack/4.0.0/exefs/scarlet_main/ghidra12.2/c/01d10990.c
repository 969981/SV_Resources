/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d10990; name: FUN_01d10990
 */


undefined8 FUN_01d10990(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_01d10a50(param_1,1);
  if ((DAT_0481d238 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_0481d238);
    if (iVar3 != 0) {
      DAT_0482cb48 = '\x01';
      DAT_0482cb50 = 1;
      __cxa_guard_release(&DAT_0481d238);
    }
  }
  uVar1 = 0x70;
  if (DAT_0482cb48 == '\0') {
    uVar1 = 0;
  }
  uVar2 = FUN_01d10adc(uVar4,uVar1,DAT_0482cb50);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


