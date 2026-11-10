/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02134a84; name: FUN_02134a84
 */


void FUN_02134a84(undefined1 param_1 [16],undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  int *piVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  float fVar11;
  undefined8 uVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  
  puVar3 = PTR_PTR_047d9248;
  uVar4 = param_2[0x2c];
  uVar14 = param_1._8_8_;
  auVar12._0_8_ = param_1._0_8_;
  if (uVar4 != 0) {
    uVar7 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar4 - 1 & 0x55c0d7a581349f0f;
    }
    else {
      uVar8 = 0x55c0d7a581349f0f;
      if (uVar4 < 0x55c0d7a581349f10) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = 0x55c0d7a581349f0f / uVar4;
        }
        uVar8 = 0x55c0d7a581349f0f - uVar8 * uVar4;
      }
    }
    fVar11 = 0.0;
    plVar9 = *(long **)(param_2[0x2b] + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar9[1] == 0x55c0d7a581349f0f) {
            if (plVar9[2] == 0x55c0d7a581349f0f) goto LAB_02134bac;
          }
          else if ((plVar9[1] & uVar4 - 1) != uVar8) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar9[1];
          if (uVar10 == 0x55c0d7a581349f0f) {
            if (plVar9[2] == 0x55c0d7a581349f0f) goto LAB_02134bac;
          }
          else {
            if (uVar4 <= uVar10) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar10 / uVar4;
              }
              uVar10 = uVar10 - uVar1 * uVar4;
            }
            if (uVar10 != uVar8) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
    goto LAB_02134bb0;
  }
  fVar11 = 0.0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  goto LAB_02134c84;
LAB_02134bac:
  fVar11 = *(float *)(plVar9 + 6);
LAB_02134bb0:
  if (uVar7 < 2) {
    uVar8 = uVar4 - 1 & 0x6000c69c69ec6a76;
  }
  else {
    uVar8 = 0x6000c69c69ec6a76;
    if (uVar4 < 0x6000c69c69ec6a77) {
      uVar8 = 0;
      if (uVar4 != 0) {
        uVar8 = 0x6000c69c69ec6a76 / uVar4;
      }
      uVar8 = 0x6000c69c69ec6a76 - uVar8 * uVar4;
    }
  }
  plVar9 = *(long **)(param_2[0x2b] + uVar8 * 8);
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
    if (uVar7 < 2) {
      do {
        if (plVar9[1] == 0x6000c69c69ec6a76) {
          if (plVar9[2] == 0x6000c69c69ec6a76) goto LAB_02134c80;
        }
        else if ((plVar9[1] & uVar4 - 1) != uVar8) break;
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
    else {
      do {
        uVar7 = plVar9[1];
        if (uVar7 == 0x6000c69c69ec6a76) {
          if (plVar9[2] == 0x6000c69c69ec6a76) goto LAB_02134c80;
        }
        else {
          if (uVar4 <= uVar7) {
            uVar10 = 0;
            if (uVar4 != 0) {
              uVar10 = uVar7 / uVar4;
            }
            uVar7 = uVar7 - uVar10 * uVar4;
          }
          if (uVar7 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  goto LAB_02134c84;
LAB_02134c80:
  lVar2 = plVar9[6];
  uVar15 = (undefined1)lVar2;
  uVar16 = (undefined1)((ulong)lVar2 >> 8);
  uVar17 = (undefined1)((ulong)lVar2 >> 0x10);
  uVar18 = (undefined1)((ulong)lVar2 >> 0x18);
LAB_02134c84:
  piVar5 = (int *)*param_2;
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 0x17) ||
     (uVar4 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0xb], uVar4 == 0)) {
    uVar4 = 0;
  }
  else {
    puVar6 = (uint *)((long)piVar5 + uVar4);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    if (3 < *puVar6) {
      puVar6 = puVar6 + 4;
      piVar5 = (int *)((long)puVar6 + (ulong)*puVar6);
      puVar6 = (uint *)((long)piVar5 + (ulong)*(ushort *)((long)piVar5 + (8 - (long)*piVar5)));
      piVar5 = (int *)((long)puVar6 + (ulong)*puVar6);
      if ((4 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
         (uVar4 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar4 != 0)) {
        uVar4 = (ulong)*(uint *)((long)piVar5 + uVar4);
        goto LAB_02134d70;
      }
    }
    uVar4 = 0;
  }
LAB_02134d70:
  (**(code **)(PTR_PTR_047d9248 + uVar4 * 8))(param_1);
  auVar12._8_8_ = uVar14;
  (**(code **)(puVar3 + uVar4 * 8))(auVar12);
  auVar13._8_8_ = uVar14;
  auVar13._0_8_ = auVar12._0_8_;
  (**(code **)(puVar3 + uVar4 * 8))
            (auVar13,SUB41(fVar11 / (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))
                           ,0));
  return;
}


