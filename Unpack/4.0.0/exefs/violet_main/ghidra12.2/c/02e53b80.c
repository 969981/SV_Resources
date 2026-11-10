/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e53b80; name: FUN_02e53b80
 */


undefined8 FUN_02e53b80(long *param_1)

{
  undefined8 uVar1;
  
  if (((*param_1 == 0) || (param_1[1] == 0)) || (*(short *)(param_1[1] + 0x1a) == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x02e53bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)*param_1 + 0x78))();
  return uVar1;
}


