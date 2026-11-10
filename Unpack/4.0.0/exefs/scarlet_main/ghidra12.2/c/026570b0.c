/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026570b0; name: FUN_026570b0
 */


undefined8 FUN_026570b0(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_02656f90(param_1,1);
  if ((DAT_048553a8 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_048553a8);
    if (iVar3 != 0) {
      DAT_04855798 = '\x01';
      __cxa_guard_release(&DAT_048553a8);
    }
  }
  puVar1 = PTR_LAB_047e0358;
  if (DAT_04855798 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_0265701c(uVar4,puVar1,0);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


