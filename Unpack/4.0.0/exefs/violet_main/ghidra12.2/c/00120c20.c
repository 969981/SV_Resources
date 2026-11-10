/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00120c20; name: FUN_00120c20
 */


void FUN_00120c20(ulong param_1)

{
  nn::os::SleepThread((param_1 & 0xffffffff) * 1000000);
  return;
}


