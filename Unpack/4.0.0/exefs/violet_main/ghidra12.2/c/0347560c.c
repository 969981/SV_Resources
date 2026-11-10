/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0347560c; name: FUN_0347560c
 */


int FUN_0347560c(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x248))();
  if (iVar1 == 1) {
    plVar2 = (long *)FUN_0346b86c(param_1 + 0x1c,(int)param_2[3]);
    if (plVar2 == (long *)0x0) {
      iVar1 = 2;
    }
    else {
      *plVar2 = (long)param_2;
      (**(code **)(*param_2 + 0x38))(param_2,param_1);
      (**(code **)(*param_1 + 0x28))(param_1);
      iVar1 = 1;
    }
  }
  (**(code **)(*param_2 + 0x30))(param_2);
  return iVar1;
}


