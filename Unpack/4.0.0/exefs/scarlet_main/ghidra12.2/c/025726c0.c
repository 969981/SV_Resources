/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025726c0; name: FUN_025726c0
 */


undefined8 FUN_025726c0(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_02572760(param_1,1);
  if ((DAT_04850c90 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04850c90);
    if (iVar2 != 0) {
      DAT_04851ae0 = '\x01';
      __cxa_guard_release(&DAT_04850c90);
    }
  }
  puVar1 = PTR_LAB_047df658;
  if (DAT_04851ae0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_025727ec(uVar3,puVar1,0);
  return 0;
}


