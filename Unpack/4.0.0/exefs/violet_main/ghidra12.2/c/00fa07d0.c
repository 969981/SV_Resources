/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fa07d0; name: FUN_00fa07d0
 */


void FUN_00fa07d0(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  
  if (param_2 == 0) {
    lVar5 = *param_1;
    *param_1 = 0;
    if (lVar5 != 0) {
      lVar14 = param_1[1];
      plVar9 = (long *)param_1[2];
      uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar5,lVar14 << 3,8);
      }
      else {
        FUN_00c48fe8(plVar9,lVar5,lVar14 << 3,8);
      }
    }
    param_1[1] = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],param_2 << 3,8);
    if (lVar5 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xe8))();
    }
    lVar14 = *param_1;
    *param_1 = lVar5;
    if (lVar14 != 0) {
      lVar5 = param_1[1];
      plVar9 = (long *)param_1[2];
      uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar14,lVar5 << 3,8);
      }
      else {
        FUN_00c48fe8(plVar9,lVar14,lVar5 << 3,8);
      }
    }
    uVar3 = param_2 - 1;
    uVar6 = param_2;
    if (param_2 == 0 || uVar3 == 0) {
      uVar6 = 1;
    }
    uVar8 = uVar6 & 3;
    param_1[1] = param_2;
    if (uVar6 - 1 < 3) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        *(undefined8 *)(*param_1 + uVar10 * 8) = 0;
        *(undefined8 *)(*param_1 + uVar10 * 8 + 8) = 0;
        *(undefined8 *)(*param_1 + uVar10 * 8 + 0x10) = 0;
        lVar5 = uVar10 * 8;
        uVar10 = uVar10 + 4;
        *(undefined8 *)(*param_1 + lVar5 + 0x18) = 0;
      } while ((uVar6 & 0xfffffffffffffffc) != uVar10);
    }
    if (uVar8 != 0) {
      lVar5 = uVar10 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar5) = 0;
        uVar8 = uVar8 - 1;
        lVar5 = lVar5 + 8;
      } while (uVar8 != 0);
    }
    plVar9 = (long *)param_1[6];
    if (plVar9 != (long *)0x0) {
      uVar6 = param_2 - (param_2 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar8 = plVar9[1];
      uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar6 < 2) {
        uVar8 = uVar8 & uVar3;
      }
      else if (param_2 <= uVar8) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar8 / param_2;
        }
        uVar8 = uVar8 - uVar10 * param_2;
      }
      *(long **)(*param_1 + uVar8 * 8) = param_1 + 6;
      puVar4 = PTR_DAT_047d8b70;
      plVar11 = (long *)*plVar9;
      if (plVar11 != (long *)0x0) {
        if (uVar6 < 2) {
          do {
            uVar6 = plVar11[1] & uVar3;
            if (uVar6 != uVar8) {
              if (*(long *)(*param_1 + uVar6 * 8) == 0) {
                *(long **)(*param_1 + uVar6 * 8) = plVar9;
                uVar8 = uVar6;
              }
              else {
                plVar12 = plVar11;
                do {
                  plVar13 = plVar12;
                  plVar12 = (long *)*plVar13;
                  if (plVar12 == (long *)0x0) break;
                  plVar1 = (long *)puVar4;
                  if (plVar11[2] != 0) {
                    plVar1 = (long *)(plVar11[2] + 0x30);
                  }
                  plVar2 = (long *)puVar4;
                  if (plVar12[2] != 0) {
                    plVar2 = (long *)(plVar12[2] + 0x30);
                  }
                } while (*plVar1 == *plVar2);
                *plVar9 = (long)plVar12;
                *plVar13 = **(long **)(*param_1 + uVar6 * 8);
                **(undefined8 **)(*param_1 + uVar6 * 8) = plVar11;
                plVar11 = plVar9;
              }
            }
            plVar12 = (long *)*plVar11;
            plVar9 = plVar11;
            plVar11 = plVar12;
          } while (plVar12 != (long *)0x0);
        }
        else {
          do {
            uVar6 = plVar11[1];
            if (param_2 <= uVar6) {
              uVar3 = 0;
              if (param_2 != 0) {
                uVar3 = uVar6 / param_2;
              }
              uVar6 = uVar6 - uVar3 * param_2;
            }
            if (uVar6 != uVar8) {
              plVar12 = plVar11;
              if (*(long *)(*param_1 + uVar6 * 8) == 0) {
                *(long **)(*param_1 + uVar6 * 8) = plVar9;
                uVar8 = uVar6;
              }
              else {
                do {
                  plVar13 = plVar12;
                  plVar12 = (long *)*plVar13;
                  if (plVar12 == (long *)0x0) break;
                  plVar1 = (long *)puVar4;
                  if (plVar11[2] != 0) {
                    plVar1 = (long *)(plVar11[2] + 0x30);
                  }
                  plVar2 = (long *)puVar4;
                  if (plVar12[2] != 0) {
                    plVar2 = (long *)(plVar12[2] + 0x30);
                  }
                } while (*plVar1 == *plVar2);
                *plVar9 = (long)plVar12;
                *plVar13 = **(long **)(*param_1 + uVar6 * 8);
                **(undefined8 **)(*param_1 + uVar6 * 8) = plVar11;
                plVar11 = plVar9;
              }
            }
            plVar12 = (long *)*plVar11;
            plVar9 = plVar11;
            plVar11 = plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
  }
  return;
}


