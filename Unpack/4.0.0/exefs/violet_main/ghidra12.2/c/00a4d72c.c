/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a4d72c; name: FUN_00a4d72c
 */


void FUN_00a4d72c(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 0x402) {
    FUN_00a655bc(param_1 + (long)param_3 * 0x18 + 0x2c,param_2,(undefined1 *)(param_1 + 0x61e8));
    *(undefined1 *)(param_1 + 0x622a) = *(undefined1 *)(param_1 + 0x61e8);
  }
  return;
}


