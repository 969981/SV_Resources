/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0047efe0; name: FUN_0047efe0
 */


undefined8 FUN_0047efe0(undefined8 param_1,long param_2,ulong param_3)

{
  for (; param_3 >> 0x3c != 0; param_3 = param_3 + 0xf000000000000000) {
    FUN_0047f050(param_1,param_2,0x8000000000000000);
    param_2 = param_2 + 0x1000000000000000;
  }
  if (param_3 != 0) {
    FUN_0047f050(param_1,param_2,param_3 << 3);
  }
  return 1;
}


