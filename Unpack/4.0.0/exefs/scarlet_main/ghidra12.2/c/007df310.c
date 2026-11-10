/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007df310; name: FUN_007df310
 */


undefined1 FUN_007df310(ulong param_1)

{
  undefined1 uVar1;
  
  uVar1 = PTR_DAT_047d1428[param_1 & 0xff];
  PTR_DAT_047d1428[param_1 & 0xff] = 0;
  return uVar1;
}


