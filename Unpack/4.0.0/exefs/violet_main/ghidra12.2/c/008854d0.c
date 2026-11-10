/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008854d0; name: FUN_008854d0
 */


void FUN_008854d0(byte *param_1)

{
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    if (*(long *)(param_1 + 8) != 0) {
      FUN_008f093c(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x2c) * 0x48);
    }
    param_1[0x2c] = 0xff;
    param_1[0x2d] = 0xff;
    param_1[0x2e] = 0xff;
    param_1[0x2f] = 0xff;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    if ((*param_1 & 1) != 0) {
      **(undefined8 **)(param_1 + 0x40) = 0;
      **(undefined8 **)(param_1 + 0x48) = 0;
      return;
    }
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
  }
  return;
}


