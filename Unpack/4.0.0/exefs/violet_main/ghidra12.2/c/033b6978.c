/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033b6978; name: FUN_033b6978
 */


void FUN_033b6978(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x78))(param_1,0,0);
  if (lVar1 != 0) {
    do {
      FUN_033b6978(lVar1,param_2);
      lVar1 = (**(code **)(*param_1 + 0x78))(param_1,0,lVar1);
    } while (lVar1 != 0);
  }
  lVar1 = (**(code **)(*param_1 + 0x48))(param_1,0,0,0);
  if (lVar1 != 0) {
    do {
      iVar2 = (int)param_2[1];
      lVar3 = (long)iVar2;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar2) {
        FUN_033b8000(param_2,lVar3 + 1);
        iVar2 = (int)param_2[1];
      }
      *(long *)(*param_2 + (long)iVar2 * 8) = lVar1;
      *(int *)(param_2 + 1) = (int)(lVar3 + 1);
      lVar1 = (**(code **)(*param_1 + 0x48))(param_1,0,0,lVar1);
    } while (lVar1 != 0);
  }
  return;
}


