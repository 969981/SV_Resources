/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02348b40; name: FUN_02348b40
 */


undefined8 * FUN_02348b40(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_048480a0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_048480a0);
      if (iVar1 == 0) {
        puVar2 = &DAT_04848098;
      }
      else {
        DAT_04848098 = uRam0000000000000001;
        __cxa_guard_release(&DAT_048480a0);
        puVar2 = &DAT_04848098;
      }
    }
    else {
      puVar2 = &DAT_04848098;
    }
  }
  return puVar2;
}


