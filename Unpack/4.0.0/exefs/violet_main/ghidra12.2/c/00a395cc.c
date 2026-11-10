/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


