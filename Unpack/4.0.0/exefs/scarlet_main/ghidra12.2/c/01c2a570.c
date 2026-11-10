/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c2a570; name: FUN_01c2a570
 */


undefined8 FUN_01c2a570(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_01c2a610(param_1,1);
  if ((DAT_04811988 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04811988);
    if (iVar2 != 0) {
      DAT_04812218 = '\x01';
      __cxa_guard_release(&DAT_04811988);
    }
  }
  puVar1 = PTR_FUN_047d5d58;
  if (DAT_04812218 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01c2a69c(uVar3,puVar1,0);
  return 0;
}


