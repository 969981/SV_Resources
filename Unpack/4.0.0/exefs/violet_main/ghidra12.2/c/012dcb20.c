/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012dcb20; name: FUN_012dcb20
 */


void FUN_012dcb20(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x20) = 2;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(char **)(param_1 + 0x28) = "Havok Worker";
  return;
}


