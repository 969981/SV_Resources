/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021618e0; name: FUN_021618e0
 */


undefined8 FUN_021618e0(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x250) == '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x021618f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x78))();
  return uVar1;
}


