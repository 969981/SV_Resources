/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031f90b0; name: FUN_031f90b0
 */


bool FUN_031f90b0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = FUN_031f9138();
  lVar3 = param_1[1];
  if ((int)lVar3 == iVar4) {
    iVar5 = iVar4;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar4) {
      FUN_031f9248(param_1,(long)(iVar4 + 1));
      iVar5 = (int)param_1[1];
    }
    puVar1 = (undefined8 *)(*param_1 + (long)iVar5 * 0x10);
    uVar2 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    *(int *)(param_1 + 1) = iVar4 + 1;
  }
  return (int)lVar3 == iVar4;
}


