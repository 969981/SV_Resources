/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b6105c; name: FUN_02b6105c
 */


undefined8 FUN_02b6105c(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    *param_2 = 0;
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x02b6108c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&UNK_02b61090 + (ulong)(byte)(&DAT_03d626a7)[param_1 - 1] * 4))(0);
  return uVar1;
}


