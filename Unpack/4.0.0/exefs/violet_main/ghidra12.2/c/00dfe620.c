/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dfe620; name: FUN_00dfe620
 */


void FUN_00dfe620(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x00dfe668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(param_1,plVar1,param_2);
  return;
}


