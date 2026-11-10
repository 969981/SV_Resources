/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01875f64; name: FUN_01875f64
 */


undefined * FUN_01875f64(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined **)(param_1 + 8), puVar2 == (undefined *)0x0)) {
    if (((DAT_04814c70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04814c70), iVar1 != 0)) {
      __cxa_guard_release(&DAT_04814c70);
    }
    puVar2 = &DAT_04814c40;
  }
  return puVar2;
}


