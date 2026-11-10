/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a2d9bc; name: FUN_01a2d9bc
 */


void FUN_01a2d9bc(long *param_1,long *param_2,code *param_3,ulong param_4)

{
  long *plVar1;
  
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *(long *)(*param_2 + ((long)param_4 >> 1)));
    }
    plVar1 = (long *)(*param_3)();
    plVar1 = (long *)*plVar1;
    *param_1 = (long)plVar1;
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01a2da04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))();
      return;
    }
  }
  return;
}


