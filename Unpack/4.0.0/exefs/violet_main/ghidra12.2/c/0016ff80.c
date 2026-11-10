/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0016ff80; name: FUN_0016ff80
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00170040) */
/* WARNING: Removing unreachable block (ram,0x001702a4) */

void FUN_0016ff80(long *param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar4 = param_1[2];
  uVar15 = param_4 - param_3;
  uVar14 = (long)uVar15 >> 4;
  uVar8 = uVar4 + uVar14;
  if ((ulong)param_1[1] < uVar8) {
    iVar7 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,"needmakefit",
                         "newsize <= m_capacity");
    if (iVar7 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar8 = param_1[2] + uVar14;
  }
  uVar1 = uVar14 + param_2;
  param_1[2] = uVar8;
  if (uVar4 < uVar1) {
    lVar9 = *param_1;
    uVar14 = uVar4 - param_2;
    uVar8 = uVar1 - uVar4;
    if (uVar8 != 0) {
      uVar15 = uVar4 + 1;
      if (uVar1 == uVar15) {
        lVar11 = 0;
      }
      else {
        lVar11 = 0;
        puVar10 = (undefined8 *)(lVar9 + uVar15 * 0x10);
        puVar13 = (undefined8 *)(param_3 + (uVar15 - param_2) * 0x10);
        do {
          uVar5 = puVar13[-1];
          lVar11 = lVar11 + 2;
          puVar10[-2] = puVar13[-2];
          puVar10[-1] = uVar5;
          uVar5 = puVar13[1];
          *puVar10 = *puVar13;
          puVar10[1] = uVar5;
          puVar10 = puVar10 + 4;
          puVar13 = puVar13 + 4;
        } while (uVar8 - (uVar8 & 1) != lVar11);
      }
      if ((uVar8 & 1) != 0) {
        puVar10 = (undefined8 *)(param_3 + uVar14 * 0x10 + lVar11 * 0x10);
        puVar13 = (undefined8 *)(lVar9 + uVar4 * 0x10 + lVar11 * 0x10);
        uVar5 = puVar10[1];
        *puVar13 = *puVar10;
        puVar13[1] = uVar5;
      }
      lVar9 = *param_1;
    }
    if (uVar14 == 0) {
      return;
    }
    lVar11 = lVar9 + uVar1 * 0x10;
    lVar9 = lVar9 + param_2 * 0x10;
    if (uVar4 == param_2 + 1U) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      puVar10 = (undefined8 *)(lVar11 + 0x10);
      puVar13 = (undefined8 *)(lVar9 + 0x10);
      do {
        uVar5 = puVar13[-1];
        lVar12 = lVar12 + -2;
        puVar10[-2] = puVar13[-2];
        puVar10[-1] = uVar5;
        uVar5 = puVar13[1];
        *puVar10 = *puVar13;
        puVar10[1] = uVar5;
        puVar10 = puVar10 + 4;
        puVar13 = puVar13 + 4;
      } while ((param_2 + (uVar14 & 1)) - uVar4 != lVar12);
      lVar12 = -lVar12;
    }
    if ((uVar14 & 1) != 0) {
      puVar10 = (undefined8 *)(lVar9 + lVar12 * 0x10);
      puVar13 = (undefined8 *)(lVar11 + lVar12 * 0x10);
      uVar5 = puVar10[1];
      *puVar13 = *puVar10;
      puVar13[1] = uVar5;
    }
    lVar9 = *param_1 + param_2 * 0x10;
    if (uVar4 == param_2 + 1U) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      puVar10 = (undefined8 *)(param_3 + 0x10);
      puVar13 = (undefined8 *)(lVar9 + 0x10);
      do {
        uVar5 = puVar10[-1];
        lVar11 = lVar11 + -2;
        puVar13[-2] = puVar10[-2];
        puVar13[-1] = uVar5;
        uVar5 = puVar10[1];
        *puVar13 = *puVar10;
        puVar13[1] = uVar5;
        puVar10 = puVar10 + 4;
        puVar13 = puVar13 + 4;
      } while ((param_2 + (uVar14 & 1)) - uVar4 != lVar11);
      lVar11 = -lVar11;
    }
    if ((uVar14 & 1) == 0) {
      return;
    }
    puVar10 = (undefined8 *)(param_3 + lVar11 * 0x10);
    puVar13 = (undefined8 *)(lVar9 + lVar11 * 0x10);
    uVar5 = puVar10[1];
    *puVar13 = *puVar10;
    puVar13[1] = uVar5;
    return;
  }
  lVar9 = *param_1;
  uVar8 = uVar15 >> 4 & 1;
  if (uVar15 == 0) goto LAB_00170110;
  lVar9 = lVar9 + uVar4 * 0x10;
  if (uVar15 == 0x10) {
    lVar11 = 0;
LAB_001700f4:
    puVar10 = (undefined8 *)(lVar9 + lVar11 * 0x10);
    puVar13 = (undefined8 *)(lVar9 + uVar14 * -0x10 + lVar11 * 0x10);
    uVar5 = puVar13[1];
    *puVar10 = *puVar13;
    puVar10[1] = uVar5;
  }
  else {
    lVar11 = 0;
    puVar10 = (undefined8 *)(lVar9 + 0x10);
    do {
      puVar13 = puVar10 + uVar14 * -2;
      uVar5 = puVar13[-1];
      puVar10[-2] = puVar13[-2];
      puVar10[-1] = uVar5;
      lVar11 = lVar11 + 2;
      uVar5 = puVar13[1];
      *puVar10 = *puVar13;
      puVar10[1] = uVar5;
      puVar10 = puVar10 + 4;
    } while (uVar14 - uVar8 != lVar11);
    if (uVar8 != 0) goto LAB_001700f4;
  }
  lVar9 = *param_1;
LAB_00170110:
  uVar2 = lVar9 + param_2 * 0x10;
  lVar11 = uVar4 - uVar1;
  uVar3 = uVar2 + uVar14 * 0x10;
  if (uVar2 < uVar3) {
    if (-1 < lVar11 + -1) {
      puVar10 = (undefined8 *)(lVar9 + uVar4 * 0x10);
      do {
        puVar13 = puVar10 + -2;
        uVar5 = (puVar13 + uVar14 * -2)[1];
        lVar11 = lVar11 + -1;
        *puVar13 = puVar13[uVar14 * -2];
        puVar10[-1] = uVar5;
        puVar10 = puVar13;
      } while (0 < lVar11);
    }
  }
  else if (lVar11 != 0) {
    uVar6 = ((int)uVar4 - (int)uVar14) - (int)param_2;
    if (uVar4 + ~uVar14 == param_2) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      puVar10 = (undefined8 *)(uVar2 + 0x10);
      do {
        uVar5 = puVar10[-1];
        puVar13 = puVar10 + uVar14 * 2;
        puVar13[-2] = puVar10[-2];
        puVar13[-1] = uVar5;
        lVar9 = lVar9 + -2;
        uVar5 = puVar10[1];
        *puVar13 = *puVar10;
        puVar13[1] = uVar5;
        puVar10 = puVar10 + 4;
      } while ((uVar1 + ((ulong)uVar6 & 1)) - uVar4 != lVar9);
      lVar9 = -lVar9;
    }
    if ((uVar6 & 1) != 0) {
      puVar10 = (undefined8 *)(uVar2 + lVar9 * 0x10);
      puVar13 = (undefined8 *)(uVar3 + lVar9 * 0x10);
      uVar5 = puVar10[1];
      *puVar13 = *puVar10;
      puVar13[1] = uVar5;
    }
  }
  if (uVar15 != 0) {
    if (uVar15 == 0x10) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      puVar10 = (undefined8 *)(param_3 + 0x10);
      puVar13 = (undefined8 *)(uVar2 + 0x10);
      do {
        uVar5 = puVar10[-1];
        lVar9 = lVar9 + 2;
        puVar13[-2] = puVar10[-2];
        puVar13[-1] = uVar5;
        uVar5 = puVar10[1];
        *puVar13 = *puVar10;
        puVar13[1] = uVar5;
        puVar10 = puVar10 + 4;
        puVar13 = puVar13 + 4;
      } while (uVar14 - uVar8 != lVar9);
      if (uVar8 == 0) {
        return;
      }
    }
    puVar10 = (undefined8 *)(param_3 + lVar9 * 0x10);
    puVar13 = (undefined8 *)(uVar2 + lVar9 * 0x10);
    uVar5 = puVar10[1];
    *puVar13 = *puVar10;
    puVar13[1] = uVar5;
  }
  return;
}


