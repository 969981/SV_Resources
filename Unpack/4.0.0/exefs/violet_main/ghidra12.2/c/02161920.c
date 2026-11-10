/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02161920; name: FUN_02161920
 */


undefined8 FUN_02161920(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x250) == '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x02161934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x80))();
  return uVar1;
}


