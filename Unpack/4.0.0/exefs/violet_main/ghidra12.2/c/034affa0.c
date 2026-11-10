/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034affa0; name: FUN_034affa0
 */


void FUN_034affa0(long param_1,uint param_2)

{
  long *plVar1;
  
  FUN_034b0008(param_1,param_2 & 1);
  if (((param_2 & 1) != 0) && (plVar1 = *(long **)(param_1 + 0xa0), plVar1 != (long *)0x0)) {
    param_2 = param_2 & 0xfffffffe;
    (**(code **)(*plVar1 + 0x130))(plVar1,1);
  }
  plVar1 = *(long **)(param_1 + 0x98);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x034afff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x130))(plVar1,param_2);
  return;
}


