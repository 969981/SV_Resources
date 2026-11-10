/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00499a30; name: FUN_00499a30
 */


undefined4 FUN_00499a30(long param_1)

{
  FUN_00498ee0();
  if ((*(uint *)(param_1 + 0xe0) >> 7 & 1) != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0xe0) >> 1 & 1) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0xe4);
}


