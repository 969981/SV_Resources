/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003cae10; name: FUN_003cae10
 */


void FUN_003cae10(undefined1 *param_1,undefined8 *param_2)

{
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  *(undefined1 *)param_2 = *param_1;
  param_2[1] = (ulong)(byte)param_1[1] << 0x10 | (ulong)(byte)param_1[2] << 8 |
               (ulong)(byte)param_1[3];
  *(ushort *)(param_2 + 2) = *(ushort *)(param_1 + 4) >> 8 | *(ushort *)(param_1 + 4) << 8;
  param_2[3] = (ulong)(byte)param_1[6] << 0x10 | (ulong)(byte)param_1[7] << 8 |
               (ulong)(byte)param_1[8];
  param_2[4] = (ulong)(byte)param_1[9] << 0x10 | (ulong)(byte)param_1[10] << 8 |
               (ulong)(byte)param_1[0xb];
  return;
}


