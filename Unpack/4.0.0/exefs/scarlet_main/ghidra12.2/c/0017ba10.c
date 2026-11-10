/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0017ba10; name: FUN_0017ba10
 */


ulong FUN_0017ba10(uint param_1)

{
  uint uVar1;
  
  uVar1 = 1 << (ulong)(param_1 & 0x1f);
  return (-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1) + 0xc2f &
         0xfffffffffffffff0;
}


