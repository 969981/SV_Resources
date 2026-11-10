/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00891408; name: FUN_00891408
 */


long * FUN_00891408(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)FUN_008b3cc0(param_1 + 5,param_3);
  if (plVar1 == (long *)0x0) {
    for (plVar1 = (long *)param_1[2]; param_1 + 1 != plVar1; plVar1 = (long *)plVar1[1]) {
      plVar2 = (long *)FUN_008b3cc0(plVar1[2] + 0x90,param_3);
      if (plVar2 != (long *)0x0) {
        return plVar2;
      }
    }
    lVar3 = FUN_008914dc(param_1,param_3);
    plVar1 = (long *)FUN_008b384c(lVar3 + 0x90,param_3);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*param_1 + 0x98))(param_1,plVar1,param_2,param_3);
      (**(code **)(*plVar1 + 0x30))(plVar1);
    }
  }
  return plVar1;
}


