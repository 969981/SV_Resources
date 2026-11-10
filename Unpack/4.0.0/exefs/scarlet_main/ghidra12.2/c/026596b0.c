/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026596b0; name: FUN_026596b0
 */


undefined8 FUN_026596b0(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_02659760(param_1,1);
  if ((DAT_048553d8 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_048553d8);
    if (iVar3 != 0) {
      DAT_048557b0 = '\x01';
      __cxa_guard_release(&DAT_048553d8);
    }
  }
  puVar1 = PTR_FUN_047e0350;
  if (DAT_048557b0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_026597ec(uVar4,puVar1,0);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


