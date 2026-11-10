/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f1060; name: FUN_003f1060
 */


ulong FUN_003f1060(long param_1,long param_2,long param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  int *piVar8;
  
  uVar5 = FUN_003ee6a0();
  if (param_5 != 0) {
    piVar6 = (int *)(param_1 + (long)param_4 * 4);
    lVar7 = (long)param_4;
    uVar4 = (uint)uVar5;
    if (param_5 < 0) {
      iVar2 = *(int *)(param_3 + lVar7 * 4);
      iVar3 = iVar2 + uVar4;
      if (iVar2 != 0) {
        uVar4 = 1;
      }
      uVar5 = (ulong)uVar4;
      *piVar6 = -iVar3;
      if (param_5 != -1) {
        param_5 = param_5 + -4;
        piVar6 = (int *)(lVar7 * 4 + param_1 + 8);
        piVar8 = (int *)(lVar7 * 4 + param_3);
        do {
          uVar4 = (uint)uVar5;
          iVar3 = piVar8[1] + uVar4;
          if (piVar8[1] != 0) {
            uVar4 = 1;
          }
          piVar6[-1] = -iVar3;
          if (param_5 == -6) {
            return (ulong)uVar4;
          }
          iVar3 = piVar8[2] + uVar4;
          if (piVar8[2] != 0) {
            uVar4 = 1;
          }
          *piVar6 = -iVar3;
          if (-4 < param_5 + 4) {
            return (ulong)uVar4;
          }
          iVar3 = piVar8[3] + uVar4;
          if (piVar8[3] != 0) {
            uVar4 = 1;
          }
          piVar6[1] = -iVar3;
          if (param_5 == -8) {
            return (ulong)uVar4;
          }
          iVar2 = piVar8[4];
          iVar3 = iVar2 + uVar4;
          param_5 = param_5 + 4;
          if (iVar2 != 0) {
            uVar4 = 1;
          }
          uVar5 = (ulong)uVar4;
          piVar6[2] = -iVar3;
          piVar6 = piVar6 + 4;
          piVar8 = piVar8 + 4;
        } while (param_5 < -5);
      }
    }
    else {
      if (uVar4 == 0) {
        piVar8 = (int *)(param_2 + lVar7 * 4);
        *piVar6 = *piVar8;
      }
      else {
        lVar7 = lVar7 * 4;
        do {
          piVar6 = (int *)(param_2 + lVar7);
          piVar8 = (int *)(param_1 + lVar7);
          uVar4 = (uint)uVar5;
          iVar3 = *piVar6 - uVar4;
          if (*piVar6 != 0) {
            uVar4 = 0;
          }
          *piVar8 = iVar3;
          if (param_5 < 2) {
            return (ulong)uVar4;
          }
          iVar3 = piVar6[1] - uVar4;
          if (piVar6[1] != 0) {
            uVar4 = 0;
          }
          piVar8[1] = iVar3;
          if (param_5 == 2) {
            return (ulong)uVar4;
          }
          iVar3 = piVar6[2] - uVar4;
          if (piVar6[2] != 0) {
            uVar4 = 0;
          }
          uVar5 = (ulong)uVar4;
          piVar8[2] = iVar3;
          if (param_5 < 4) {
            return uVar5;
          }
          iVar3 = piVar6[3];
          piVar8[3] = iVar3 - uVar4;
          if (iVar3 != 0) {
            uVar4 = 0;
          }
          param_5 = param_5 + -4;
          if (param_5 == 0) {
            return (ulong)uVar4;
          }
          param_2 = param_2 + 0x10;
          param_1 = param_1 + 0x10;
        } while (uVar4 != 0);
        piVar8 = (int *)(param_2 + lVar7);
        piVar6 = (int *)(param_1 + lVar7);
        *piVar6 = *piVar8;
      }
      if (param_5 == 1) {
        return 0;
      }
      piVar6 = piVar6 + 2;
      do {
        piVar6[-1] = piVar8[1];
        if (param_5 == 2) {
          return 0;
        }
        *piVar6 = piVar8[2];
        if (param_5 < 4) {
          return 0;
        }
        piVar6[1] = piVar8[3];
        uVar5 = 0;
        if (param_5 + -4 == 0) {
          return 0;
        }
        piVar6[2] = piVar8[4];
        piVar6 = piVar6 + 4;
        bVar1 = 5 < param_5;
        param_5 = param_5 + -4;
        piVar8 = piVar8 + 4;
      } while (bVar1);
    }
  }
  return uVar5;
}


