/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019e9320; name: FUN_019e9320
 */


undefined4 FUN_019e9320(void)

{
  char cVar1;
  
  cVar1 = FUN_0168d1c0();
  if ((byte)(cVar1 - 1U) < 10) {
    return *(undefined4 *)(&DAT_03d60578 + (long)(char)(cVar1 - 1U) * 4);
  }
  return 4;
}


