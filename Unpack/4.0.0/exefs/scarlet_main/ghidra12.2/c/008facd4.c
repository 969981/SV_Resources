/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008facd4; name: FUN_008facd4
 */


void FUN_008facd4(long param_1,ushort param_2,byte param_3,byte param_4)

{
  long lVar1;
  
  if ((param_3 < 5) && (param_4 < 6)) {
    lVar1 = param_1 + (ulong)param_3 * 0xc0 + (ulong)param_4 * 0x1c;
    *(ushort *)(lVar1 + 0xf0) = *(ushort *)(lVar1 + 0xf0) | param_2;
  }
  return;
}


