/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022d696c; name: FUN_022d696c
 */


void FUN_022d696c(long *param_1,code *param_2,ulong param_3,undefined4 *param_4)

{
  long *plVar1;
  long lVar2;
  
  if ((*param_1 != 0) && (lVar2 = *(long *)(*param_1 + 0x10), lVar2 != 0)) {
    plVar1 = (long *)(lVar2 + ((long)param_3 >> 1) + -0x28);
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    (*param_2)(0,plVar1,*param_4);
  }
  return;
}


