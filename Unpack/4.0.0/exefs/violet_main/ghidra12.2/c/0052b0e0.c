/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052b0e0; name: FUN_0052b0e0
 */


void FUN_0052b0e0(long *param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
                    /* try { // try from 0052b108 to 0052b157 has its CatchHandler @ 0052b190 */
  (**(code **)(*plVar1 + 0x40))(plVar1,param_1);
  (**(code **)(*param_1 + 0x28))(param_1);
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  (**(code **)(*param_2 + 0x28))(param_2);
  (**(code **)(*param_2 + 0x40))(param_2,plVar1);
  if (plVar1 == (long *)0x0) {
    return;
  }
  (**(code **)*plVar1)(plVar1);
  FUN_0049e790(PTR_LAB_047cba48,plVar1);
  return;
}


