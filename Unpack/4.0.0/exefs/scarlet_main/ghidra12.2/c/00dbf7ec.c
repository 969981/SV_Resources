/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dbf7ec; name: FUN_00dbf7ec
 */


bool FUN_00dbf7ec(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00dbf838(*(undefined8 *)(param_1 + 0x70));
  uVar2 = FUN_00dbfb7c(*(undefined8 *)(param_1 + 0x70));
  return (uVar1 & 0xfff0 ^ uVar1 >> 0x10 ^ uVar2 >> 0x10 ^ uVar2 & 0xfff0) < 0x10;
}


