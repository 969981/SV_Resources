/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01aae0cc; name: FUN_01aae0cc
 */


undefined4 FUN_01aae0cc(long param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x244);
  if ((uVar1 & 0xff) == 0 || 10 < uVar1 >> 8) {
    return 0;
  }
  return *(undefined4 *)(&DAT_03d6b680 + (long)(char)(uVar1 >> 8) * 4);
}


