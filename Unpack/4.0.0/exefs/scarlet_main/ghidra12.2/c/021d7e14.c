/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d7e14; name: FUN_021d7e14
 */


void FUN_021d7e14(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1c8);
  *(undefined1 *)(param_1 + 0x448) = 1;
  for (; (lVar1 != 0 && (lVar1 = *(long *)(lVar1 + 0x10), lVar1 != 0));
      lVar1 = *(long *)(lVar1 + 0x1a0)) {
    *(undefined1 *)(lVar1 + 0x420) = 1;
  }
  return;
}


