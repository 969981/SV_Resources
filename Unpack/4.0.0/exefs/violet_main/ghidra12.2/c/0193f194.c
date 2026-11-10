/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0193f194; name: FUN_0193f194
 */


void FUN_0193f194(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0193f1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x4f8))(plVar1,param_3,param_4);
  return;
}


