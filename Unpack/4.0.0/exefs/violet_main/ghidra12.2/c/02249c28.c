/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02249c28; name: FUN_02249c28
 */


void FUN_02249c28(undefined8 *param_1)

{
  (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,1);
  (**(code **)(*(long *)*param_1 + 0xd8))();
  *(undefined1 *)((long)param_1 + 0x31) = 0;
  if ((undefined1 *)param_1[7] != (undefined1 *)0x0) {
    *(undefined1 *)param_1[7] = 1;
  }
  return;
}


