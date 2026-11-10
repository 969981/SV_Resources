/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029bb5a4; name: FUN_029bb5a4
 */


void FUN_029bb5a4(long *param_1,ulong *param_2,int *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long lVar12;
  
  uVar3 = *(ulong *)(*param_1 + 0x90);
  if (uVar3 != 0) {
    uVar5 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar2 = *param_2;
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = uVar3 - 1 & uVar2;
    }
    else if (uVar2 < uVar3) {
      uVar6 = uVar2;
    }
    else {
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar2 / uVar3;
      }
      uVar6 = uVar2 - uVar6 * uVar3;
    }
    plVar4 = *(long **)(*(long *)(*param_1 + 0x88) + uVar6 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar4[1] == uVar2) {
            if (plVar4[2] == uVar2) goto LAB_029bb630;
          }
          else if ((plVar4[1] & uVar3 - 1) != uVar6) {
            return;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar4[1];
          if (uVar5 == uVar2) {
            if (plVar4[2] == uVar2) {
LAB_029bb630:
              fVar7 = *(float *)(param_1 + 1);
              if (*param_3 != 1) {
                lVar12 = plVar4[8];
                fVar8 = (float)*(undefined8 *)(param_3 + 4);
                fVar9 = (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
                fVar10 = (float)*(undefined8 *)(param_3 + 6);
                fVar11 = (float)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20);
                *(ulong *)(param_3 + 6) =
                     CONCAT44(fVar11 + ((float)((ulong)plVar4[9] >> 0x20) - fVar11) * fVar7,
                              fVar10 + ((float)plVar4[9] - fVar10) * fVar7);
                *(ulong *)(param_3 + 4) =
                     CONCAT44(fVar9 + ((float)((ulong)lVar12 >> 0x20) - fVar9) * fVar7,
                              fVar8 + ((float)lVar12 - fVar8) * fVar7);
                return;
              }
              if (fVar7 <= 0.5) {
                return;
              }
              *(long *)(param_3 + 6) = plVar4[9];
              *(long *)(param_3 + 4) = plVar4[8];
              return;
            }
          }
          else {
            if (uVar3 <= uVar5) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar5 / uVar3;
              }
              uVar5 = uVar5 - uVar1 * uVar3;
            }
            if (uVar5 != uVar6) {
              return;
            }
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  return;
}


