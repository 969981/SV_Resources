/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078b8e8; name: FUN_0078b8e8
 */


void FUN_0078b8e8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_007bfae0(lVar1);
    FUN_007bfaa0(lVar1);
    *param_1 = 0;
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    FUN_007bfae0(lVar1);
    FUN_007bfaa0(lVar1);
    param_1[1] = 0;
  }
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    FUN_007bfae0(lVar1);
    FUN_007bfaa0(lVar1);
    param_1[2] = 0;
  }
  FUN_0284e3d4(param_1 + 0xb1);
  FUN_0078d104(param_1 + 0x17);
  FUN_0078c6f8(param_1 + 4);
  return;
}


