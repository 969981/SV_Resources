/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d71d0; name: FUN_007d71d0
 */


void FUN_007d71d0(long param_1,uint param_2)

{
  if ((param_2 & 0xff) < (uint)*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50)) {
    *(undefined1 *)(*(long *)(param_1 + 0x788) + ((ulong)param_2 & 0xff)) = 1;
  }
  return;
}


