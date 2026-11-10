/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03168c70; name: FUN_03168c70
 */


void FUN_03168c70(long param_1)

{
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0x8000000000000000;
  FUN_03165a38((undefined8 *)(param_1 + 0x90),PTR_PTR_047d1a50,0x20);
  if (*(int *)(param_1 + 0x98) != 1) {
    *(undefined4 *)(param_1 + 0x98) = 1;
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  FUN_031690b0();
  if ((*(uint *)(param_1 + 0x11c) & 0x7fffff00) == 0) {
    FUN_0316919c((undefined8 *)(param_1 + 0x110));
  }
  if ((*(uint *)(param_1 + 300) & 0x7fffff00) == 0) {
    FUN_03168fa0((undefined8 *)(param_1 + 0x120),PTR_PTR_047d1a50,0x100);
  }
  if ((*(uint *)(param_1 + 0x13c) & 0x7fffff00) == 0) {
    FUN_03169288((undefined8 *)(param_1 + 0x130),PTR_PTR_047d1a50,0x100);
  }
  if ((*(uint *)(param_1 + 0xb4) & 0x7fffff00) == 0) {
    FUN_02eaee40((undefined8 *)(param_1 + 0xa8),PTR_PTR_047d1a50,0x100);
  }
  if ((*(uint *)(param_1 + 0xc4) & 0x7fffff00) == 0) {
    FUN_02eaee40((undefined8 *)(param_1 + 0xb8),PTR_PTR_047d1a50,0x100);
    return;
  }
  return;
}


