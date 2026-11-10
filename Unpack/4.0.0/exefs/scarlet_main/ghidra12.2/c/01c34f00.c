/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c34f00; name: FUN_01c34f00
 */


undefined8 FUN_01c34f00(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_01c34fa0(param_1,1);
  if ((DAT_04811c20 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04811c20);
    if (iVar2 != 0) {
      DAT_04812358 = '\x01';
      __cxa_guard_release(&DAT_04811c20);
    }
  }
  puVar1 = PTR_LAB_047d5f08;
  if (DAT_04812358 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01c3502c(uVar3,puVar1,0);
  return 0;
}


