/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03483288; name: FUN_03483288
 */


undefined8 FUN_03483288(long param_1,float *param_2,int param_3,long param_4,uint param_5)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  
  if ((*(int *)(param_1 + 0x20) == param_3) && ((*(uint *)(param_1 + 0x30) & 0x7fffffff) == param_5)
     ) {
    if (param_5 == 0) {
      return 0;
    }
    pfVar4 = *(float **)(param_1 + 0x18);
    uVar3 = 0;
    while (iVar7 = *(int *)(*(long *)(param_1 + 0x28) + uVar3 * 0x18 + 8),
          iVar7 == *(int *)(param_4 + uVar3 * 8 + 4)) {
      if (iVar7 != 0) {
        bVar2 = *param_2 != *pfVar4;
        if (1 < iVar7) {
          pfVar5 = param_2 + 4;
          pfVar6 = pfVar4 + 4;
          param_2 = pfVar5 + (ulong)(iVar7 - 2U) * 4;
          pfVar4 = pfVar6 + (ulong)(iVar7 - 2U) * 4;
          iVar7 = iVar7 + -1;
          do {
            if (bVar2) {
              return 1;
            }
            if (pfVar5[-3] != pfVar6[-3]) {
              return 1;
            }
            if (pfVar5[-2] != pfVar6[-2]) {
              return 1;
            }
            if (pfVar5[-1] != pfVar6[-1]) {
              return 1;
            }
            bVar2 = *pfVar5 != *pfVar6;
            iVar7 = iVar7 + -1;
            pfVar5 = pfVar5 + 4;
            pfVar6 = pfVar6 + 4;
          } while (iVar7 != 0);
        }
        if (bVar2) {
          return 1;
        }
        if (param_2[1] != pfVar4[1]) {
          return 1;
        }
        if (param_2[2] != pfVar4[2]) {
          return 1;
        }
        param_2 = param_2 + 4;
        pfVar4 = pfVar4 + 4;
      }
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar1;
      if (uVar1 == param_5) {
        return 0;
      }
    }
  }
  return 1;
}


