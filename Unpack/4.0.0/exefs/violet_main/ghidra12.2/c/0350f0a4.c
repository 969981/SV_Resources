/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0350f0a4; name: FUN_0350f0a4
 */


void FUN_0350f0a4(long *param_1)

{
  (**(code **)(*param_1 + 0x70))();
  FUN_03480ed4(param_1 + 7);
  if (param_1[0x1d] != 0) {
    *(undefined8 *)((long)param_1 + 0xfc) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
    param_1[0x1d] = 0;
    *(undefined4 *)(param_1 + 0x1f) = 0;
  }
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  return;
}


