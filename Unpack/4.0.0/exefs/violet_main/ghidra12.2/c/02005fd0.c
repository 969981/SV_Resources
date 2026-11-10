/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02005fd0; name: FUN_02005fd0
 */


void FUN_02005fd0(long *param_1,ulong param_2)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  
  puVar1 = (ulong *)(param_1 + 1);
  if (param_2 == 0) {
    lVar6 = *param_1;
    *param_1 = 0;
    if (lVar6 != 0) {
      FUN_020062b0(puVar1);
    }
    *puVar1 = 0;
  }
  else {
    lVar6 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],param_2 << 3,8);
    if (lVar6 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xe8))();
    }
    lVar7 = *param_1;
    *param_1 = lVar6;
    if (lVar7 != 0) {
      FUN_020062b0(puVar1);
    }
    uVar4 = param_2 - 1;
    uVar13 = param_2;
    if (param_2 == 0 || uVar4 == 0) {
      uVar13 = 1;
    }
    uVar8 = uVar13 & 3;
    *puVar1 = param_2;
    if (uVar13 - 1 < 3) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        *(undefined8 *)(*param_1 + uVar10 * 8) = 0;
        *(undefined8 *)(*param_1 + uVar10 * 8 + 8) = 0;
        *(undefined8 *)(*param_1 + uVar10 * 8 + 0x10) = 0;
        lVar6 = uVar10 * 8;
        uVar10 = uVar10 + 4;
        *(undefined8 *)(*param_1 + lVar6 + 0x18) = 0;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar10);
    }
    if (uVar8 != 0) {
      lVar6 = uVar10 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar6) = 0;
        uVar8 = uVar8 - 1;
        lVar6 = lVar6 + 8;
      } while (uVar8 != 0);
    }
    plVar9 = (long *)param_1[6];
    if (plVar9 != (long *)0x0) {
      uVar13 = param_2 - (param_2 >> 1 & 0x5555555555555555);
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uVar8 = plVar9[1];
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 < 2) {
        uVar8 = uVar8 & uVar4;
      }
      else if (param_2 <= uVar8) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar8 / param_2;
        }
        uVar8 = uVar8 - uVar10 * param_2;
      }
      *(long **)(*param_1 + uVar8 * 8) = param_1 + 6;
      puVar5 = PTR_DAT_047d8b70;
      plVar11 = (long *)*plVar9;
      if (plVar11 != (long *)0x0) {
        if (uVar13 < 2) {
          do {
            uVar13 = plVar11[1] & uVar4;
            if (uVar13 == uVar8) {
              uVar13 = uVar8;
            }
            else {
              plVar12 = plVar11;
              if (*(long *)(*param_1 + uVar13 * 8) == 0) {
                *(long **)(*param_1 + uVar13 * 8) = plVar9;
              }
              else {
                do {
                  plVar14 = plVar12;
                  plVar12 = (long *)*plVar14;
                  if (plVar12 == (long *)0x0) break;
                  plVar2 = (long *)puVar5;
                  if (plVar11[2] != 0) {
                    plVar2 = (long *)(plVar11[2] + 0x30);
                  }
                  plVar3 = (long *)puVar5;
                  if (plVar12[2] != 0) {
                    plVar3 = (long *)(plVar12[2] + 0x30);
                  }
                } while (*plVar2 == *plVar3);
                *plVar9 = (long)plVar12;
                *plVar14 = **(long **)(*param_1 + uVar13 * 8);
                **(undefined8 **)(*param_1 + uVar13 * 8) = plVar11;
                plVar11 = plVar9;
                uVar13 = uVar8;
              }
            }
            plVar12 = (long *)*plVar11;
            plVar9 = plVar11;
            uVar8 = uVar13;
            plVar11 = plVar12;
          } while (plVar12 != (long *)0x0);
        }
        else {
          do {
            uVar13 = plVar11[1];
            if (param_2 <= uVar13) {
              uVar4 = 0;
              if (param_2 != 0) {
                uVar4 = uVar13 / param_2;
              }
              uVar13 = uVar13 - uVar4 * param_2;
            }
            if (uVar13 == uVar8) {
              uVar13 = uVar8;
            }
            else {
              plVar12 = plVar11;
              if (*(long *)(*param_1 + uVar13 * 8) == 0) {
                *(long **)(*param_1 + uVar13 * 8) = plVar9;
              }
              else {
                do {
                  plVar14 = plVar12;
                  plVar12 = (long *)*plVar14;
                  if (plVar12 == (long *)0x0) break;
                  plVar2 = (long *)puVar5;
                  if (plVar11[2] != 0) {
                    plVar2 = (long *)(plVar11[2] + 0x30);
                  }
                  plVar3 = (long *)puVar5;
                  if (plVar12[2] != 0) {
                    plVar3 = (long *)(plVar12[2] + 0x30);
                  }
                } while (*plVar2 == *plVar3);
                *plVar9 = (long)plVar12;
                *plVar14 = **(long **)(*param_1 + uVar13 * 8);
                **(undefined8 **)(*param_1 + uVar13 * 8) = plVar11;
                plVar11 = plVar9;
                uVar13 = uVar8;
              }
            }
            plVar12 = (long *)*plVar11;
            plVar9 = plVar11;
            uVar8 = uVar13;
            plVar11 = plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
  }
  return;
}


