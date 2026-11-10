/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a52580; name: FUN_00a52580
 */


void FUN_00a52580(undefined4 *param_1,long param_2,int param_3)

{
  if (param_3 < 0x402) {
    FUN_00a664dc(param_2 + (long)param_3 * 0x18 + 0x2c);
    return;
  }
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 3) = 0;
  param_1[4] = 0xffffffff;
  return;
}


