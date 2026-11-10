/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01042f28; name: FUN_01042f28
 */


undefined8 FUN_01042f28(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar5 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar6 = *param_2;
    uVar12 = 0;
    if (uVar3 != 0) {
      uVar12 = uVar6 / uVar3;
    }
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar11 = uVar3 - 1 & uVar6;
    }
    else {
      uVar11 = uVar6;
      if (uVar3 <= uVar6) {
        uVar11 = uVar6 - uVar12 * uVar3;
      }
    }
    lVar9 = *param_1;
    puVar7 = *(undefined8 **)(lVar9 + uVar11 * 8);
    if ((puVar7 != (undefined8 *)0x0) && (plVar15 = (long *)*puVar7, plVar15 != (long *)0x0)) {
      uVar8 = uVar3 - 1;
      if (uVar5 < 2) {
        do {
          if (plVar15[1] == uVar6) {
            if (plVar15[2] == uVar6) goto LAB_01043038;
          }
          else if ((plVar15[1] & uVar8) != uVar11) {
            return 0;
          }
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar13 = plVar15[1];
        if (uVar13 == uVar6) {
          if (plVar15[2] == uVar6) goto LAB_01043038;
        }
        else {
          if (uVar3 <= uVar13) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar13 / uVar3;
            }
            uVar13 = uVar13 - uVar1 * uVar3;
          }
          if (uVar13 != uVar11) {
            return 0;
          }
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  return 0;
LAB_01043038:
  if (uVar5 < 2) {
    uVar6 = uVar6 & uVar8;
  }
  else if (uVar3 <= uVar6) {
    uVar6 = uVar6 - uVar12 * uVar3;
  }
  plVar10 = *(long **)(lVar9 + uVar6 * 8);
  plVar14 = (long *)*plVar10;
  if (plVar14 != plVar15) {
    plVar10 = plVar14;
    for (plVar14 = (long *)*plVar14; plVar14 != plVar15; plVar14 = (long *)*plVar14) {
      plVar10 = plVar14;
    }
  }
  if (plVar10 != param_1 + 6) {
    uVar12 = plVar10[1];
    if (uVar5 < 2) {
      uVar12 = uVar12 & uVar8;
    }
    else if (uVar3 <= uVar12) {
      uVar11 = 0;
      if (uVar3 != 0) {
        uVar11 = uVar12 / uVar3;
      }
      uVar12 = uVar12 - uVar11 * uVar3;
    }
    if (uVar12 == uVar6) goto LAB_010430cc;
  }
  if (*plVar15 != 0) {
    uVar12 = *(ulong *)(*plVar15 + 8);
    if (uVar5 < 2) {
      uVar12 = uVar12 & uVar8;
    }
    else if (uVar3 <= uVar12) {
      uVar11 = 0;
      if (uVar3 != 0) {
        uVar11 = uVar12 / uVar3;
      }
      uVar12 = uVar12 - uVar11 * uVar3;
    }
    if (uVar12 == uVar6) goto LAB_010430cc;
  }
  *(undefined8 *)(lVar9 + uVar6 * 8) = 0;
LAB_010430cc:
  lVar9 = *plVar15;
  if (lVar9 != 0) {
    uVar12 = *(ulong *)(lVar9 + 8);
    if (uVar5 < 2) {
      uVar12 = uVar12 & uVar8;
    }
    else if (uVar3 <= uVar12) {
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = uVar12 / uVar3;
      }
      uVar12 = uVar12 - uVar5 * uVar3;
    }
    if (uVar12 != uVar6) {
      *(long **)(*param_1 + uVar12 * 8) = plVar10;
      lVar9 = *plVar15;
    }
  }
  *plVar10 = lVar9;
  *plVar15 = 0;
  param_1[0xb] = param_1[0xb] + -1;
  lVar9 = plVar15[7];
  if (lVar9 != 0) {
    lVar4 = plVar15[8];
    lVar2 = lVar9;
    if (lVar4 != lVar9) {
      do {
        lVar2 = lVar4 + -0x20;
        lVar4 = lVar4 + -0x28;
        FUN_0104328c(lVar2);
      } while (lVar9 != lVar4);
      lVar2 = plVar15[7];
    }
    lVar4 = plVar15[9];
    plVar10 = (long *)plVar15[10];
    plVar15[8] = lVar9;
    uVar3 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar3 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar2,lVar4 - lVar2,8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar2,lVar4 - lVar2,8);
    }
  }
  if ((long *)plVar15[6] != (long *)0x0) {
    (**(code **)(*(long *)plVar15[6] + 0x20))();
  }
  if ((long *)plVar15[5] != (long *)0x0) {
    (**(code **)(*(long *)plVar15[5] + 0x20))();
  }
  plVar10 = (long *)param_1[7];
  uVar3 = (**(code **)(*plVar10 + 0xf8))(plVar10);
  if (((uVar3 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
    (**(code **)(*plVar10 + 0x18))(plVar10,plVar15,0x88,8);
  }
  else {
    FUN_00c48fe8(plVar10,plVar15,0x88,8);
  }
  return 1;
}


