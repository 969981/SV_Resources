/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011dbca0; name: FUN_011dbca0
 */


ulong FUN_011dbca0(long param_1)

{
  ulong uVar1;
  char local_18 [2];
  ushort local_16;
  
  FUN_015ede48(local_18,param_1 + 0x48);
  uVar1 = 0;
  if (local_18[0] != '\0') {
    uVar1 = (ulong)local_16 << 0x10;
  }
  return uVar1 | local_18[0] != '\0';
}


