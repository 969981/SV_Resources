/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008b44e0; name: FUN_008b44e0
 */


void FUN_008b44e0(long *param_1,undefined8 param_2,uint param_3)

{
  (**(code **)(*param_1 + 0x58))();
                    /* WARNING: Could not recover jumptable at 0x008b4518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_3 & 1);
  return;
}


