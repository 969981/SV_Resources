/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004297f0; name: FUN_004297f0
 */


void FUN_004297f0(ulong *param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  ushort uVar2;
  uint3 uVar3;
  uint uVar4;
  uint5 uVar5;
  uint6 uVar6;
  uint7 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_3 == 0) {
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    uVar9 = (ulong)*param_2;
    if (param_3 < 2) {
      uVar8 = 1;
    }
    else {
      uVar2 = CONCAT11(param_2[1],*param_2);
      uVar9 = (ulong)uVar2;
      if (param_3 == 2) {
        uVar8 = 2;
      }
      else {
        uVar3 = CONCAT12(param_2[2],uVar2);
        uVar9 = (ulong)uVar3;
        if (param_3 < 4) {
          uVar8 = 3;
        }
        else {
          uVar4 = CONCAT13(param_2[3],uVar3);
          uVar9 = (ulong)uVar4;
          if (param_3 == 4) {
            uVar8 = 4;
          }
          else {
            uVar5 = CONCAT14(param_2[4],uVar4);
            uVar9 = (ulong)uVar5;
            if (param_3 < 6) {
              uVar8 = 5;
            }
            else {
              uVar6 = CONCAT15(param_2[5],uVar5);
              uVar9 = (ulong)uVar6;
              if (param_3 == 6) {
                uVar8 = 6;
              }
              else {
                uVar7 = CONCAT16(param_2[6],uVar6);
                uVar9 = (ulong)uVar7;
                if (param_3 < 8) {
                  uVar8 = 7;
                }
                else {
                  uVar9 = CONCAT17(param_2[7],uVar7);
                  uVar8 = 8;
                }
              }
            }
          }
        }
      }
    }
  }
  *param_1 = uVar9;
  if (uVar8 < param_3) {
    uVar10 = (ulong)param_2[uVar8];
    uVar9 = uVar8 + 1;
    if (uVar9 < param_3) {
      uVar2 = CONCAT11(param_2[uVar9],param_2[uVar8]);
      uVar10 = (ulong)uVar2;
      uVar9 = uVar8 + 2;
      if (uVar9 < param_3) {
        uVar3 = CONCAT12(param_2[uVar9],uVar2);
        uVar10 = (ulong)uVar3;
        uVar9 = uVar8 + 3;
        if (uVar9 < param_3) {
          uVar4 = CONCAT13(param_2[uVar9],uVar3);
          uVar10 = (ulong)uVar4;
          uVar9 = uVar8 + 4;
          if (uVar9 < param_3) {
            uVar5 = CONCAT14(param_2[uVar9],uVar4);
            uVar10 = (ulong)uVar5;
            uVar9 = uVar8 + 5;
            if (uVar9 < param_3) {
              uVar6 = CONCAT15(param_2[uVar9],uVar5);
              uVar10 = (ulong)uVar6;
              uVar9 = uVar8 + 6;
              if (uVar9 < param_3) {
                uVar7 = CONCAT16(param_2[uVar9],uVar6);
                uVar10 = (ulong)uVar7;
                uVar9 = uVar8 + 7;
                if (uVar9 < param_3) {
                  pbVar1 = param_2 + uVar9;
                  uVar9 = uVar8 + 8;
                  param_1[1] = CONCAT17(*pbVar1,uVar7);
                  goto joined_r0x0042996c;
                }
              }
            }
          }
        }
      }
    }
    param_1[1] = uVar10;
    if (uVar9 < param_3) goto LAB_00429970;
LAB_00429a24:
    param_1[2] = 0;
joined_r0x00429ae4:
    if (param_3 <= uVar9) goto LAB_00429ae8;
LAB_00429a34:
    uVar10 = (ulong)param_2[uVar9];
    uVar8 = uVar9 + 1;
    if (param_3 <= uVar8) {
LAB_00429b9c:
      param_1[3] = uVar10;
      goto joined_r0x00429af4;
    }
    uVar2 = CONCAT11(param_2[uVar8],param_2[uVar9]);
    uVar10 = (ulong)uVar2;
    uVar8 = uVar9 + 2;
    if (param_3 <= uVar8) goto LAB_00429b9c;
    uVar3 = CONCAT12(param_2[uVar8],uVar2);
    uVar10 = (ulong)uVar3;
    uVar8 = uVar9 + 3;
    if (param_3 <= uVar8) goto LAB_00429b9c;
    uVar4 = CONCAT13(param_2[uVar8],uVar3);
    uVar10 = (ulong)uVar4;
    uVar8 = uVar9 + 4;
    if (param_3 <= uVar8) goto LAB_00429b9c;
    uVar5 = CONCAT14(param_2[uVar8],uVar4);
    uVar10 = (ulong)uVar5;
    uVar8 = uVar9 + 5;
    if (param_3 <= uVar8) goto LAB_00429b9c;
    uVar6 = CONCAT15(param_2[uVar8],uVar5);
    uVar10 = (ulong)uVar6;
    uVar8 = uVar9 + 6;
    if (param_3 <= uVar8) goto LAB_00429b9c;
    uVar7 = CONCAT16(param_2[uVar8],uVar6);
    uVar10 = (ulong)uVar7;
    uVar8 = uVar9 + 7;
    if (param_3 <= uVar8) goto LAB_00429b9c;
    pbVar1 = param_2 + uVar8;
    uVar8 = uVar9 + 8;
    param_1[3] = CONCAT17(*pbVar1,uVar7);
    if (uVar8 < param_3) goto LAB_00429af8;
LAB_00429bac:
    param_1[4] = 0;
  }
  else {
    param_1[1] = 0;
    uVar9 = uVar8;
joined_r0x0042996c:
    if (param_3 <= uVar9) goto LAB_00429a24;
LAB_00429970:
    uVar10 = (ulong)param_2[uVar9];
    uVar8 = uVar9 + 1;
    if (param_3 <= uVar8) {
LAB_00429ad8:
      param_1[2] = uVar10;
      uVar9 = uVar8;
      goto joined_r0x00429ae4;
    }
    uVar2 = CONCAT11(param_2[uVar8],param_2[uVar9]);
    uVar10 = (ulong)uVar2;
    uVar8 = uVar9 + 2;
    if (param_3 <= uVar8) goto LAB_00429ad8;
    uVar3 = CONCAT12(param_2[uVar8],uVar2);
    uVar10 = (ulong)uVar3;
    uVar8 = uVar9 + 3;
    if (param_3 <= uVar8) goto LAB_00429ad8;
    uVar4 = CONCAT13(param_2[uVar8],uVar3);
    uVar10 = (ulong)uVar4;
    uVar8 = uVar9 + 4;
    if (param_3 <= uVar8) goto LAB_00429ad8;
    uVar5 = CONCAT14(param_2[uVar8],uVar4);
    uVar10 = (ulong)uVar5;
    uVar8 = uVar9 + 5;
    if (param_3 <= uVar8) goto LAB_00429ad8;
    uVar6 = CONCAT15(param_2[uVar8],uVar5);
    uVar10 = (ulong)uVar6;
    uVar8 = uVar9 + 6;
    if (param_3 <= uVar8) goto LAB_00429ad8;
    uVar7 = CONCAT16(param_2[uVar8],uVar6);
    uVar10 = (ulong)uVar7;
    uVar8 = uVar9 + 7;
    if (param_3 <= uVar8) goto LAB_00429ad8;
    uVar9 = uVar9 + 8;
    param_1[2] = CONCAT17(param_2[uVar8],uVar7);
    if (uVar9 < param_3) goto LAB_00429a34;
LAB_00429ae8:
    param_1[3] = 0;
    uVar8 = uVar9;
joined_r0x00429af4:
    if (param_3 <= uVar8) goto LAB_00429bac;
LAB_00429af8:
    uVar10 = (ulong)param_2[uVar8];
    uVar9 = uVar8 + 1;
    if (uVar9 < param_3) {
      uVar2 = CONCAT11(param_2[uVar9],param_2[uVar8]);
      uVar10 = (ulong)uVar2;
      uVar9 = uVar8 + 2;
      if (param_3 <= uVar9) goto LAB_00429c60;
      uVar3 = CONCAT12(param_2[uVar9],uVar2);
      uVar10 = (ulong)uVar3;
      uVar9 = uVar8 + 3;
      if (param_3 <= uVar9) goto LAB_00429c60;
      uVar4 = CONCAT13(param_2[uVar9],uVar3);
      uVar10 = (ulong)uVar4;
      uVar9 = uVar8 + 4;
      if (param_3 <= uVar9) goto LAB_00429c60;
      uVar5 = CONCAT14(param_2[uVar9],uVar4);
      uVar10 = (ulong)uVar5;
      uVar9 = uVar8 + 5;
      if (param_3 <= uVar9) goto LAB_00429c60;
      uVar6 = CONCAT15(param_2[uVar9],uVar5);
      uVar10 = (ulong)uVar6;
      uVar9 = uVar8 + 6;
      if (param_3 <= uVar9) goto LAB_00429c60;
      uVar7 = CONCAT16(param_2[uVar9],uVar6);
      uVar10 = (ulong)uVar7;
      uVar9 = uVar8 + 7;
      if (param_3 <= uVar9) goto LAB_00429c60;
      param_1[4] = CONCAT17(param_2[uVar9],uVar7);
      uVar8 = uVar8 + 8;
    }
    else {
LAB_00429c60:
      param_1[4] = uVar10;
      uVar8 = uVar9;
    }
  }
  if (uVar8 < param_3) {
    uVar10 = (ulong)param_2[uVar8];
    uVar9 = uVar8 + 1;
    if (uVar9 < param_3) {
      uVar2 = CONCAT11(param_2[uVar9],param_2[uVar8]);
      uVar10 = (ulong)uVar2;
      uVar9 = uVar8 + 2;
      if (uVar9 < param_3) {
        uVar3 = CONCAT12(param_2[uVar9],uVar2);
        uVar10 = (ulong)uVar3;
        uVar9 = uVar8 + 3;
        if (uVar9 < param_3) {
          uVar4 = CONCAT13(param_2[uVar9],uVar3);
          uVar10 = (ulong)uVar4;
          uVar9 = uVar8 + 4;
          if (uVar9 < param_3) {
            uVar5 = CONCAT14(param_2[uVar9],uVar4);
            uVar10 = (ulong)uVar5;
            uVar9 = uVar8 + 5;
            if (uVar9 < param_3) {
              uVar6 = CONCAT15(param_2[uVar9],uVar5);
              uVar10 = (ulong)uVar6;
              uVar9 = uVar8 + 6;
              if (uVar9 < param_3) {
                uVar7 = CONCAT16(param_2[uVar9],uVar6);
                uVar10 = (ulong)uVar7;
                uVar9 = uVar8 + 7;
                if (uVar9 < param_3) {
                  param_1[5] = CONCAT17(param_2[uVar9],uVar7);
                  uVar9 = uVar8 + 8;
                  goto joined_r0x00429c58;
                }
              }
            }
          }
        }
      }
    }
    param_1[5] = uVar10;
  }
  else {
    param_1[5] = 0;
    uVar9 = uVar8;
  }
joined_r0x00429c58:
  if (param_3 <= uVar9) {
    param_1[6] = 0;
    return;
  }
  uVar8 = (ulong)param_2[uVar9];
  if (uVar9 + 1 < param_3) {
    uVar2 = CONCAT11(param_2[uVar9 + 1],param_2[uVar9]);
    uVar8 = (ulong)uVar2;
    if (uVar9 + 2 < param_3) {
      uVar3 = CONCAT12(param_2[uVar9 + 2],uVar2);
      uVar8 = (ulong)uVar3;
      if (uVar9 + 3 < param_3) {
        uVar4 = CONCAT13(param_2[uVar9 + 3],uVar3);
        uVar8 = (ulong)uVar4;
        if (uVar9 + 4 < param_3) {
          uVar5 = CONCAT14(param_2[uVar9 + 4],uVar4);
          uVar8 = (ulong)uVar5;
          if (uVar9 + 5 < param_3) {
            uVar6 = CONCAT15(param_2[uVar9 + 5],uVar5);
            uVar8 = (ulong)uVar6;
            if (uVar9 + 6 < param_3) {
              uVar7 = CONCAT16(param_2[uVar9 + 6],uVar6);
              uVar8 = (ulong)uVar7;
              if (uVar9 + 7 < param_3) {
                uVar8 = CONCAT17(param_2[uVar9 + 7],uVar7);
              }
            }
          }
        }
      }
    }
  }
  param_1[6] = uVar8;
  return;
}


