/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00163f90; name: FUN_00163f90
 */


long FUN_00163f90(long *param_1,byte *param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  long local_68;
  
  if ((byte *)param_1[4] < param_2) {
    lVar3 = 0;
  }
  else {
    if ((byte *)*param_1 < param_2 + 0x100) {
      plVar8 = (long *)param_1[5];
      if ((int)plVar8[2] < 1) {
        lVar7 = 0;
        lVar3 = 0;
      }
      else {
        lVar1 = param_1[1];
        lVar3 = 0;
        lVar5 = param_1[6];
        iVar9 = 0;
        lVar6 = 0;
        do {
          iVar2 = FUN_00162e90(*(undefined8 *)(*plVar8 + lVar3 * 8),(int)lVar1,param_2,param_3,
                               &local_68,lVar5);
          lVar7 = local_68;
          if (iVar2 <= iVar9) {
            lVar7 = lVar6;
            iVar2 = iVar9;
          }
          iVar9 = iVar2;
          lVar3 = lVar3 + 1;
          lVar6 = lVar7;
        } while (lVar3 < (int)plVar8[2]);
        lVar3 = (long)iVar9;
      }
      *param_4 = lVar7;
      if (param_2 + lVar3 < (byte *)*param_1) {
        lVar3 = *param_1 - (long)param_2;
        *param_4 = param_1[2];
      }
      *param_1 = (long)(param_2 + lVar3);
      param_1[2] = *param_4;
      pbVar4 = (byte *)param_1[4];
    }
    else {
      lVar3 = *param_1 - (long)param_2;
      *param_4 = param_1[2];
      pbVar4 = (byte *)param_1[4];
    }
    if (param_2 < pbVar4) {
      *(uint *)(param_1 + 1) =
           (uint)param_2[(int)param_1[3]] +
           ((int)param_1[1] - *(int *)((long)param_1 + 0xc) * (uint)*param_2) * 0x2c2c57ed;
    }
  }
  return lVar3;
}


