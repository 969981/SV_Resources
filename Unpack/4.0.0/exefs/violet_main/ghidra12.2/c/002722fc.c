/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002722fc; name: FUN_002722fc
 */


void FUN_002722fc(long param_1)

{
                    /* try { // try from 00272320 to 00272323 has its CatchHandler @ 00272338 */
  (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x198))(*(long **)PTR_DAT_047cbb08,param_1 + 8);
  FUN_00272980(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28));
  return;
}


