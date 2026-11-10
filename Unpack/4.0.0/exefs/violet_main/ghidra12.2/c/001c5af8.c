/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c5af8; name: FUN_001c5af8
 */


void FUN_001c5af8(long *param_1)

{
  memcpy((void *)(*param_1 + 0x1648),(void *)((long)param_1 + 0x1a2),0x2e);
  memcpy((void *)(*param_1 + 0x1680),param_1 + 0x3b,0x2e);
  *(undefined8 *)(*param_1 + 0x16b8) = *(undefined8 *)param_1[0x84];
  *(undefined4 *)(*param_1 + 0x16c0) = *(undefined4 *)(param_1[0x84] + 0x80);
  *(long *)(*param_1 + 0x1678) = param_1[0x3a];
  *(long *)(*param_1 + 0x16b0) = param_1[0x41];
  return;
}


