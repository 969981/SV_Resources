/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e21b24; name: FUN_01e21b24
 */


void FUN_01e21b24(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3a4) = param_2;
  FUN_01e21c18(param_1 + 0x3b0,1,0xffffffff);
  FUN_01e21c48(param_1 + 0x3b0,1,*(undefined4 *)(param_1 + 0x3a4));
  return;
}


