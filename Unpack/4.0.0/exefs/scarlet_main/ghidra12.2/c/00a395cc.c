/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a395cc; name: FUN_00a395cc
 */


void FUN_00a395cc(long *param_1)

{
  DAT_04835af0 = param_1;
  DAT_04835af8 = (**(code **)(*param_1 + 0x10))(param_1,0xfd20,8);
  DAT_04835b08 = (**(code **)(*DAT_04835af0 + 0x10))(DAT_04835af0,0xfd20,8);
  DAT_04835b18 = (**(code **)(*DAT_04835af0 + 0x10))(DAT_04835af0,0xfd20,8);
  return;
}


