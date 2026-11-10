/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cbce64; name: FUN_00cbce64
 */


void FUN_00cbce64(long *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0xa8))();
  if (param_1[0x19] == 0) {
    return;
  }
  FUN_00cbcea8(param_1[0x19],param_2);
  return;
}


