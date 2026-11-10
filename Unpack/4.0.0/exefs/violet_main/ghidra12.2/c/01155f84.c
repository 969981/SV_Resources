/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01155f84; name: FUN_01155f84
 */


void FUN_01155f84(long param_1,long param_2)

{
  if (param_1 != param_2) {
    FUN_01e266fc();
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    FUN_01e267e4(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


