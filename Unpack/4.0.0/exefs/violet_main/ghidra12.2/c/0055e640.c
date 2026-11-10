/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0055e640; name: FUN_0055e640
 */


void FUN_0055e640(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  (**(code **)*param_1)();
                    /* WARNING: Could not recover jumptable at 0x0055e678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1,0x20,8);
  return;
}


