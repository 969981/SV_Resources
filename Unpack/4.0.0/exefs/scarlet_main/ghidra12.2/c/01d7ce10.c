/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d7ce10; name: FUN_01d7ce10
 */


undefined8 FUN_01d7ce10(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_01d7cec0(param_1,1);
  if ((DAT_04831b00 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04831b00);
    if (iVar2 != 0) {
      DAT_048320c0 = '\x01';
      __cxa_guard_release(&DAT_04831b00);
    }
  }
  puVar1 = PTR_FUN_047d7fe0;
  if (DAT_048320c0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  iVar2 = FUN_01d7cf4c(uVar3,puVar1,0);
  FUN_00c5d960(param_1,(long)iVar2);
  return 1;
}


