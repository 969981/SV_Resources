/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ab714; name: FUN_007ab714
 */


void FUN_007ab714(long *param_1)

{
  ulong uVar1;
  
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar1 = FUN_0078cdf4();
  if ((uVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007ab740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,0);
  return;
}


