/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008d43a0; name: FUN_008d43a0
 */


void FUN_008d43a0(long param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008d43cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)PTR_DAT_047d2540 + 0x10))
            (*(long **)PTR_DAT_047d2540,(param_1 + param_3) - 1U & -param_3,param_2);
  return;
}


