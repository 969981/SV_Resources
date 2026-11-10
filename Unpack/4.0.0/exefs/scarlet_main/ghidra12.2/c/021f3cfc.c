/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f3cfc; name: FUN_021f3cfc
 */


undefined1 FUN_021f3cfc(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e97b78(*(undefined8 *)(param_1 + 0x70));
  return (&UNK_03d62f7c)[(param_2 & 0xff) + (uVar1 & 0xffffffff) * 4 + (uVar1 & 0xffffffff)];
}


