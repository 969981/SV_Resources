/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d0a540; name: FUN_01d0a540
 */


undefined8 FUN_01d0a540(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_01d0a5f0(param_1,1);
  if ((DAT_0481d088 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_0481d088);
    if (iVar3 != 0) {
      DAT_0482cb18 = '\x01';
      __cxa_guard_release(&DAT_0481d088);
    }
  }
  puVar1 = PTR_FUN_047d7268;
  if (DAT_0482cb18 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_01d0a67c(uVar4,puVar1,0);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


