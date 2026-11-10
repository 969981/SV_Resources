/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a8118; name: FUN_007a8118
 */


undefined8 FUN_007a8118(long *param_1)

{
  undefined8 uVar1;
  
  if (*(short *)((long)param_1 + 0x1a) == -1) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x007a8130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x60))();
  return uVar1;
}


