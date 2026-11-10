/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029e2b44; name: FUN_029e2b44
 */


undefined8 FUN_029e2b44(int *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ushort *puVar3;
  
  uVar1 = FUN_019367c0(param_2,param_1);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    puVar3 = (ushort *)((long)param_1 - (long)*param_1);
    if (4 < *puVar3) {
      if ((ulong)puVar3[2] != 0) {
        if ((ulong)param_2[1] < 9) {
          return 0;
        }
        if (param_2[1] - 8U < (long)param_1 + ((ulong)puVar3[2] - *param_2)) {
          return 0;
        }
      }
      if ((6 < *puVar3) && ((ulong)puVar3[3] != 0)) {
        if ((ulong)param_2[1] < 2) {
          return 0;
        }
        if (param_2[1] - 1U < (long)param_1 + ((ulong)puVar3[3] - *param_2)) {
          return 0;
        }
      }
    }
    uVar2 = 1;
    *(int *)(param_2 + 2) = (int)param_2[2] + -1;
  }
  return uVar2;
}


