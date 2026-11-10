/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01455790; name: FUN_01455790
 */


void FUN_01455790(long param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  
  if ((ulong)(long)param_2 < (ulong)(*(long *)(param_1 + 0x2e0) - *(long *)(param_1 + 0x2d8) >> 3))
  {
    plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 0x2d8) + (long)param_2 * 8) + 0x70);
                    /* WARNING: Could not recover jumptable at 0x014557c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x98))(plVar1,param_3);
    return;
  }
  return;
}


