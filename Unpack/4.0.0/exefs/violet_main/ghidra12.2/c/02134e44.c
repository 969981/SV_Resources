/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02134e44; name: FUN_02134e44
 */


undefined1  [16] FUN_02134e44(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  int *piVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  long lVar12;
  float fVar14;
  undefined1 auVar13 [16];
  long lVar15;
  float fVar16;
  float fVar17;
  
  puVar2 = PTR_PTR_047d9248;
  uVar3 = param_2[0x2c];
  if (uVar3 != 0) {
    uVar6 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = uVar3 - 1 & 0x64ef508b127bf414;
    }
    else {
      uVar7 = 0x64ef508b127bf414;
      if (uVar3 < 0x64ef508b127bf415) {
        uVar7 = 0;
        if (uVar3 != 0) {
          uVar7 = 0x64ef508b127bf414 / uVar3;
        }
        uVar7 = 0x64ef508b127bf414 - uVar7 * uVar3;
      }
    }
    lVar12 = 0;
    fVar14 = 0.0;
    plVar8 = *(long **)(param_2[0x2b] + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar8[1] == 0x64ef508b127bf414) {
            if (plVar8[2] == 0x64ef508b127bf414) goto LAB_02134f6c;
          }
          else if ((plVar8[1] & uVar3 - 1) != uVar7) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar8[1];
          if (uVar9 == 0x64ef508b127bf414) {
            if (plVar8[2] == 0x64ef508b127bf414) goto LAB_02134f6c;
          }
          else {
            if (uVar3 <= uVar9) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar9 / uVar3;
              }
              uVar9 = uVar9 - uVar1 * uVar3;
            }
            if (uVar9 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    goto LAB_02134f70;
  }
  lVar12 = 0;
  fVar14 = 0.0;
  fVar16 = 0.0;
  lVar15 = 0;
  goto LAB_02135044;
LAB_02134f6c:
  fVar14 = (float)plVar8[7];
  lVar12 = plVar8[6];
LAB_02134f70:
  if (uVar6 < 2) {
    uVar7 = uVar3 - 1 & 0x210737e39650cf2;
  }
  else {
    uVar7 = 0x210737e39650cf2;
    if (uVar3 < 0x210737e39650cf3) {
      uVar7 = 0;
      if (uVar3 != 0) {
        uVar7 = 0x210737e39650cf2 / uVar3;
      }
      uVar7 = 0x210737e39650cf2 - uVar7 * uVar3;
    }
  }
  plVar8 = *(long **)(param_2[0x2b] + uVar7 * 8);
  lVar15 = 0;
  fVar16 = 0.0;
  if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
    if (uVar6 < 2) {
      do {
        if (plVar8[1] == 0x210737e39650cf2) {
          if (plVar8[2] == 0x210737e39650cf2) goto LAB_02135040;
        }
        else if ((plVar8[1] & uVar3 - 1) != uVar7) break;
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
    else {
      do {
        uVar6 = plVar8[1];
        if (uVar6 == 0x210737e39650cf2) {
          if (plVar8[2] == 0x210737e39650cf2) goto LAB_02135040;
        }
        else {
          if (uVar3 <= uVar6) {
            uVar9 = 0;
            if (uVar3 != 0) {
              uVar9 = uVar6 / uVar3;
            }
            uVar6 = uVar6 - uVar9 * uVar3;
          }
          if (uVar6 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  goto LAB_02135044;
LAB_02135040:
  fVar16 = (float)plVar8[7];
  lVar15 = plVar8[6];
LAB_02135044:
  piVar4 = (int *)*param_2;
  if (((0x16 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
      (uVar3 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xb], uVar3 != 0)) &&
     (puVar5 = (uint *)((long)piVar4 + uVar3), puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5),
     3 < *puVar5)) {
    puVar5 = puVar5 + 4;
    piVar4 = (int *)((long)puVar5 + (ulong)*puVar5);
    puVar5 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (8 - (long)*piVar4)));
    piVar4 = (int *)((long)puVar5 + (ulong)*puVar5);
    if ((4 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
       (uVar3 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar3 != 0)) {
      uVar3 = (ulong)*(uint *)((long)piVar4 + uVar3);
      goto LAB_021350c0;
    }
  }
  uVar3 = 0;
LAB_021350c0:
  fVar10 = (float)(**(code **)(PTR_PTR_047d9248 + uVar3 * 8))(param_1);
  fVar17 = (float)((ulong)lVar12 >> 0x20);
  auVar13._0_4_ = (float)lVar12 + fVar10 * ((float)lVar15 - (float)lVar12);
  fVar10 = (float)(**(code **)(puVar2 + uVar3 * 8))(param_1);
  fVar11 = (float)(**(code **)(puVar2 + uVar3 * 8))(param_1,lVar12);
  auVar13._4_4_ = fVar17 + fVar10 * ((float)((ulong)lVar15 >> 0x20) - fVar17);
  auVar13._8_4_ = fVar14 + fVar11 * (fVar16 - fVar14);
  auVar13._12_4_ = 0;
  return auVar13;
}


