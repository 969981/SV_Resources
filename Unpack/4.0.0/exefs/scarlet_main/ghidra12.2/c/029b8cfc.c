/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029b8cfc; name: FUN_029b8cfc
 */


void FUN_029b8cfc(float param_1,long param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  float *pfVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong *puVar12;
  long *plVar13;
  float fVar14;
  
  lVar3 = (**(code **)(*param_4 + 0x120))(param_4);
  plVar13 = *(long **)(lVar3 + 0x30);
  if (plVar13 != (long *)0x0) {
    plVar1 = (long *)(param_2 + 8);
    do {
      puVar12 = (ulong *)(plVar13 + 2);
      uVar6 = *puVar12;
      uVar7 = *(ulong *)(param_2 + 0x10);
      if (uVar7 != 0) {
        uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
        uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
        uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar8 < 2) {
          uVar9 = uVar7 - 1 & uVar6;
        }
        else {
          uVar9 = uVar6;
          if (uVar7 <= uVar6) {
            uVar9 = 0;
            if (uVar7 != 0) {
              uVar9 = uVar6 / uVar7;
            }
            uVar9 = uVar6 - uVar9 * uVar7;
          }
        }
        puVar10 = *(undefined8 **)(*plVar1 + uVar9 * 8);
        if ((puVar10 != (undefined8 *)0x0) && (plVar11 = (long *)*puVar10, plVar11 != (long *)0x0))
        {
          if (uVar8 < 2) {
            do {
              if (plVar11[1] == uVar6) {
                if (plVar11[2] == uVar6) goto LAB_029b8e20;
              }
              else if ((plVar11[1] & uVar7 - 1) != uVar9) break;
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
          else {
            do {
              uVar8 = plVar11[1];
              if (uVar8 == uVar6) {
                if (plVar11[2] == uVar6) goto LAB_029b8e20;
              }
              else {
                if (uVar7 <= uVar8) {
                  uVar2 = 0;
                  if (uVar7 != 0) {
                    uVar2 = uVar8 / uVar7;
                  }
                  uVar8 = uVar8 - uVar2 * uVar7;
                }
                if (uVar8 != uVar9) break;
              }
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
        }
      }
      puVar5 = (undefined4 *)FUN_00c42268(plVar1,puVar12);
      *puVar5 = 0;
LAB_029b8e20:
      fVar14 = *(float *)(plVar13 + 6);
      pfVar4 = (float *)FUN_00c42268(plVar1,puVar12);
      *pfVar4 = fVar14 * param_1 + *pfVar4;
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  return;
}


