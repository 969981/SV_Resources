/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014f70b0; name: FUN_014f70b0
 */


void FUN_014f70b0(undefined4 *param_1,long param_2,ulong *param_3,ulong *param_4,ulong *param_5,
                 undefined8 param_6,undefined4 *param_7,uint param_8)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  float local_94;
  float local_90;
  undefined4 local_8c;
  undefined4 local_88;
  float fStack_84;
  float local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  char local_6c;
  char local_6b;
  char local_6a;
  char local_69;
  char local_68;
  char local_67;
  char local_66;
  
  uVar6 = *param_3;
  uVar15 = *(undefined4 *)(param_2 + 8);
  fVar14 = *(float *)(param_2 + 0xc);
  fVar16 = *(float *)(param_2 + 0x10);
  uVar13 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar12 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(ulong *)(param_2 + 0x30);
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
    plVar10 = *(long **)(*(long *)(param_2 + 0x28) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar10[1] == uVar6) {
            if (plVar10[2] == uVar6) goto LAB_014f71e4;
          }
          else if ((plVar10[1] & uVar7 - 1) != uVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar10[1];
          if (uVar11 == uVar6) {
            if (plVar10[2] == uVar6) goto LAB_014f71e4;
          }
          else {
            if (uVar7 <= uVar11) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar11 / uVar7;
              }
              uVar11 = uVar11 - uVar4 * uVar7;
            }
            if (uVar11 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
    goto LAB_014f71f0;
  }
  goto LAB_014f72b4;
LAB_014f71e4:
  fVar14 = *(float *)((long)plVar10 + 0x1c);
  uVar13 = *(undefined4 *)((long)plVar10 + 0x24);
  uVar12 = *(undefined4 *)((long)plVar10 + 0x2c);
LAB_014f71f0:
  uVar9 = *param_5;
  if (uVar8 < 2) {
    uVar11 = uVar9 & uVar7 - 1;
  }
  else if (uVar9 < uVar7) {
    uVar11 = uVar9;
  }
  else {
    uVar11 = 0;
    if (uVar7 != 0) {
      uVar11 = uVar9 / uVar7;
    }
    uVar11 = uVar9 - uVar11 * uVar7;
  }
  plVar10 = *(long **)(*(long *)(param_2 + 0x28) + uVar11 * 8);
  if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
    if (uVar8 < 2) {
      do {
        if (plVar10[1] == uVar9) {
          if (plVar10[2] == uVar9) goto LAB_014f72a8;
        }
        else if ((plVar10[1] & uVar7 - 1) != uVar11) break;
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
    else {
      do {
        uVar8 = plVar10[1];
        if (uVar8 == uVar9) {
          if (plVar10[2] == uVar9) goto LAB_014f72a8;
        }
        else {
          if (uVar7 <= uVar8) {
            uVar4 = 0;
            if (uVar7 != 0) {
              uVar4 = uVar8 / uVar7;
            }
            uVar8 = uVar8 - uVar4 * uVar7;
          }
          if (uVar8 != uVar11) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  goto LAB_014f72b4;
LAB_014f7368:
  FUN_014f7728(&local_88,plVar10 + 3,param_5,param_6);
  if ((((((local_6b != '\0' || local_6c != '\0') || local_6a != '\0') || local_69 != '\0') ||
       local_68 != '\0') || local_67 != '\0') || local_66 != '\0') goto LAB_014f73c0;
  uVar6 = *param_3;
  goto LAB_014f7450;
LAB_014f74fc:
  FUN_014f7728(&local_88,plVar10 + 3,param_5,param_6);
  if ((((((local_6b != '\0' || local_6c != '\0') || local_6a != '\0') || local_69 != '\0') ||
       local_68 != '\0') || local_67 != '\0') || local_66 != '\0') {
LAB_014f73c0:
    goto LAB_014f758c;
  }
  goto LAB_014f754c;
LAB_014f72a8:
  uVar15 = (undefined4)plVar10[3];
  fVar16 = *(float *)(plVar10 + 4);
  uVar5 = (undefined4)plVar10[5];
LAB_014f72b4:
  uVar7 = *(ulong *)(param_2 + 0x1f8);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar9 = *param_4;
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar11 = uVar7 - 1 & uVar9;
    }
    else if (uVar9 < uVar7) {
      uVar11 = uVar9;
    }
    else {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar9 / uVar7;
      }
      uVar11 = uVar9 - uVar11 * uVar7;
    }
    plVar10 = *(long **)(*(long *)(param_2 + 0x1f0) + uVar11 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar10[1] == uVar9) {
            if (plVar10[2] == uVar9) goto LAB_014f7368;
          }
          else if ((plVar10[1] & uVar7 - 1) != uVar11) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == uVar9) {
            if (plVar10[2] == uVar9) goto LAB_014f7368;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar11) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
LAB_014f7450:
  uVar7 = *(ulong *)(param_2 + 400);
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
    plVar10 = *(long **)(*(long *)(param_2 + 0x188) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar10[1] == uVar6) {
            if (plVar10[2] == uVar6) goto LAB_014f74fc;
          }
          else if ((plVar10[1] & uVar7 - 1) != uVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == uVar6) {
            if (plVar10[2] == uVar6) goto LAB_014f74fc;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar11 = 0;
              if (uVar7 != 0) {
                uVar11 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar11 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
LAB_014f754c:
  FUN_014f7728(&local_88,param_2 + 0x90,param_5,param_6);
LAB_014f758c:
  if (local_6c != '\0') {
    uVar15 = local_88;
  }
  if (local_6b != '\0') {
    fVar14 = fStack_84;
  }
  local_90 = fVar14;
  local_8c = uVar15;
  if (local_6a != '\0') {
    fVar16 = local_80;
  }
  if (local_69 != '\0') {
    uVar13 = uStack_7c;
  }
  local_98 = uVar13;
  local_94 = fVar16;
  if (local_68 != '\0') {
    uVar5 = local_78;
  }
  if (local_67 != '\0') {
    uVar12 = uStack_74;
  }
  local_a4 = 0;
  if (local_66 != '\0') {
    local_a4 = local_70;
  }
  local_a0 = uVar12;
  local_9c = uVar5;
  if (param_7 == (undefined4 *)0x0) {
    if ((param_8 & 1) != 0) {
      fVar16 = fVar14 + fVar16;
    }
  }
  else {
    puVar2 = &local_8c;
    if (*(char *)(param_7 + 7) != '\0') {
      puVar2 = param_7;
    }
    uVar15 = *puVar2;
    pfVar1 = &local_90;
    if (*(char *)((long)param_7 + 0x1d) != '\0') {
      pfVar1 = (float *)(param_7 + 1);
    }
    fVar14 = *pfVar1;
    pfVar1 = &local_94;
    if (*(char *)((long)param_7 + 0x1e) != '\0') {
      pfVar1 = (float *)(param_7 + 2);
    }
    puVar2 = &local_98;
    if (*(char *)((long)param_7 + 0x1f) != '\0') {
      puVar2 = param_7 + 3;
    }
    fVar16 = *pfVar1;
    uVar13 = *puVar2;
    puVar2 = &local_9c;
    if (*(char *)(param_7 + 8) != '\0') {
      puVar2 = param_7 + 4;
    }
    uVar5 = *puVar2;
    puVar2 = &local_a0;
    if (*(char *)((long)param_7 + 0x21) != '\0') {
      puVar2 = param_7 + 5;
    }
    puVar3 = &local_a4;
    if (*(char *)((long)param_7 + 0x22) != '\0') {
      puVar3 = param_7 + 6;
    }
    uVar12 = *puVar2;
    local_a4 = *puVar3;
  }
  *param_1 = uVar15;
  param_1[1] = fVar14;
  param_1[2] = fVar16;
  param_1[3] = uVar13;
  param_1[4] = uVar5;
  param_1[5] = uVar12;
  param_1[6] = local_a4;
  return;
}


