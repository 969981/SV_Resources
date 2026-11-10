/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f3030; name: FUN_003f3030
 */


undefined8 FUN_003f3030(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  if ((int)param_1[1] != 0) {
    if (param_2 == 0) {
      FUN_003eb9f0(param_1,0,(int)param_1[1],0);
    }
    else {
      iVar1 = FUN_003ee150(*param_1,*param_1);
      if (iVar1 != 0) {
        lVar2 = FUN_003eb9a0(param_1,(int)param_1[1] + 1);
        if (lVar2 == 0) {
          return 0;
        }
        lVar2 = param_1[1];
        *(int *)(param_1 + 1) = (int)lVar2 + 1;
        *(int *)(*param_1 + (long)(int)lVar2 * 4) = iVar1;
      }
    }
  }
  return 1;
}


