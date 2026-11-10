/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b9cd4; name: FUN_007b9cd4
 */


void FUN_007b9cd4(long param_1,void *param_2,uint param_3)

{
  if ((param_2 != (void *)0x0) && (param_3 < 0x21)) {
    memcpy((void *)(param_1 + 0x1259),param_2,(ulong)param_3);
    *(undefined1 *)(param_1 + 0x1279) = 1;
  }
  return;
}


