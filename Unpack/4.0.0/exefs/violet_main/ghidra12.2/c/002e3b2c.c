/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e3b2c; name: FUN_002e3b2c
 */


void FUN_002e3b2c(long *param_1)

{
  uint uVar1;
  size_t sVar2;
  bool bVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  void *local_58;
  
  if ((ulong)param_1[4] < 0x80) {
    puVar16 = (undefined8 *)param_1[2];
    puVar19 = (undefined8 *)param_1[1];
    uVar10 = (long)puVar16 - (long)puVar19 >> 3;
    lVar8 = param_1[3] - *param_1;
    if ((ulong)(lVar8 >> 3) <= uVar10) {
      uVar9 = lVar8 >> 2;
      if (lVar8 == 0) {
        uVar9 = 1;
      }
      if (uVar9 >> 0x3d != 0) {
LAB_002e40ac:
                    /* WARNING: Subroutine does not return */
        FUN_002e36d0();
      }
      puVar4 = operator_new(uVar9 * 8);
                    /* try { // try from 002e3cb4 to 002e3cbb has its CatchHandler @ 002e40c8 */
      pvVar5 = operator_new(0x1000);
      puVar17 = puVar4 + uVar10;
      puVar12 = puVar4 + uVar9;
      if (uVar10 == uVar9) {
        if (puVar4 <= puVar17 && (long)puVar17 - (long)puVar4 != 0) {
          lVar8 = (long)puVar17 - (long)puVar4 >> 3;
          uVar10 = lVar8 + 2;
          if (-1 < lVar8 + 1) {
            uVar10 = lVar8 + 1;
          }
          puVar17 = (undefined8 *)((long)puVar17 + (uVar10 & 0x3ffffffffffffffe) * -4);
          *puVar17 = pvVar5;
          goto joined_r0x002e3d30;
        }
        uVar10 = (long)puVar12 - (long)puVar4 >> 2;
        if ((long)puVar12 - (long)puVar4 == 0) {
          uVar10 = 1;
        }
        if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002e40b0 to 002e40b3 has its CatchHandler @ 002e40b8 */
          FUN_002e36d0();
        }
                    /* try { // try from 002e3dc0 to 002e3dc3 has its CatchHandler @ 002e40b8 */
        puVar7 = operator_new(uVar10 << 3);
        puVar12 = puVar7 + uVar10;
        puVar17 = (undefined8 *)((long)puVar7 + (uVar10 & 0x7ffffffffffffffc) * 2);
        operator_delete(puVar4);
        puVar19 = (undefined8 *)param_1[1];
        puVar16 = (undefined8 *)param_1[2];
        puVar11 = puVar17 + 1;
        *puVar17 = pvVar5;
        puVar4 = puVar7;
        if (puVar16 != puVar19) goto LAB_002e3e28;
      }
      else {
        *puVar17 = pvVar5;
joined_r0x002e3d30:
        puVar11 = puVar17 + 1;
        puVar7 = puVar4;
        if (puVar16 != puVar19) {
LAB_002e3e28:
          do {
            if (puVar17 == puVar7) {
              if (puVar11 < puVar12) {
                lVar8 = (long)puVar12 - (long)puVar11 >> 3;
                uVar10 = lVar8 + 2;
                if (-1 < lVar8 + 1) {
                  uVar10 = lVar8 + 1;
                }
                sVar2 = (long)puVar11 - (long)puVar17;
                puVar11 = (undefined8 *)((long)puVar11 + (uVar10 & 0x3ffffffffffffffe) * 4);
                puVar19 = puVar11;
                if (sVar2 != 0) {
                  puVar19 = (undefined8 *)((long)puVar11 - sVar2);
                  memmove(puVar19,puVar17,sVar2);
                }
                puVar17 = puVar19;
              }
              else {
                uVar10 = (long)puVar12 - (long)puVar7 >> 2;
                if ((long)puVar12 - (long)puVar7 == 0) {
                  uVar10 = 1;
                }
                if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002e40a8 to 002e40ab has its CatchHandler @ 002e40b4 */
                  FUN_002e36d0();
                }
                    /* try { // try from 002e3e98 to 002e3e9b has its CatchHandler @ 002e40d0 */
                puVar7 = operator_new(uVar10 << 3);
                puVar12 = puVar7 + uVar10;
                uVar10 = uVar10 + 3 >> 2;
                puVar19 = puVar7 + uVar10;
                lVar8 = (long)puVar11 - (long)puVar17;
                if (lVar8 == 0) {
                  puVar11 = puVar19;
                }
                else {
                  uVar1 = ((uint)(lVar8 - 8U >> 3) & 0x1fffffff) + 1;
                  puVar4 = puVar19;
                  puVar14 = puVar17;
                  if ((uVar1 & 7) != 0) {
                    lVar15 = -((ulong)uVar1 & 7);
                    puVar11 = puVar19;
                    puVar13 = puVar17;
                    do {
                      puVar14 = puVar13 + 1;
                      bVar3 = lVar15 != -1;
                      lVar15 = lVar15 + 1;
                      puVar4 = puVar11 + 1;
                      *puVar11 = *puVar13;
                      puVar11 = puVar4;
                      puVar13 = puVar14;
                    } while (bVar3);
                  }
                  puVar11 = (undefined8 *)((long)puVar19 + lVar8);
                  if (0x37 < lVar8 - 8U) {
                    do {
                      *puVar4 = *puVar14;
                      puVar4[1] = puVar14[1];
                      puVar4[2] = puVar14[2];
                      puVar4[3] = puVar14[3];
                      puVar4[4] = puVar14[4];
                      puVar4[5] = puVar14[5];
                      puVar4[6] = puVar14[6];
                      puVar4[7] = puVar14[7];
                      puVar4 = puVar4 + 8;
                      puVar14 = puVar14 + 8;
                    } while (puVar7 + uVar10 + (lVar8 >> 3) != puVar4);
                  }
                }
                operator_delete(puVar17);
                puVar17 = puVar19;
              }
            }
            puVar16 = puVar16 + -1;
            puVar17 = puVar17 + -1;
            *puVar17 = *puVar16;
          } while (puVar16 != (undefined8 *)param_1[1]);
          pvVar5 = (void *)*param_1;
          *param_1 = (long)puVar7;
          param_1[1] = (long)puVar17;
          param_1[2] = (long)puVar11;
          param_1[3] = (long)puVar12;
          goto joined_r0x002e3f90;
        }
      }
      pvVar5 = (void *)*param_1;
      *param_1 = (long)puVar4;
      param_1[1] = (long)puVar17;
      param_1[2] = (long)puVar11;
      param_1[3] = (long)puVar12;
joined_r0x002e3f90:
      if (pvVar5 == (void *)0x0) {
        return;
      }
      operator_delete(pvVar5);
      return;
    }
    if ((undefined8 *)param_1[3] != puVar16) {
      local_58 = operator_new(0x1000);
      FUN_002e40e8(param_1,&local_58);
      return;
    }
    local_58 = operator_new(0x1000);
    FUN_002e427c(param_1,&local_58);
    puVar19 = (undefined8 *)param_1[2];
    puVar16 = (undefined8 *)param_1[1] + 1;
    uVar18 = *(undefined8 *)param_1[1];
    param_1[1] = (long)puVar16;
    if (puVar19 != (undefined8 *)param_1[3]) goto LAB_002e402c;
    puVar17 = (undefined8 *)*param_1;
    lVar8 = (long)puVar16 - (long)puVar17;
    if (puVar16 < puVar17 || lVar8 == 0) {
      lVar8 = param_1[3] - (long)puVar17;
      uVar10 = lVar8 >> 2;
      if (lVar8 == 0) {
        uVar10 = 1;
      }
      if (uVar10 >> 0x3d != 0) goto LAB_002e40ac;
      pvVar6 = operator_new(uVar10 * 8);
      puVar12 = (undefined8 *)((long)pvVar6 + (uVar10 >> 2) * 8);
      pvVar5 = (void *)((long)pvVar6 + uVar10 * 8);
      lVar8 = (long)puVar19 - (long)puVar16;
      if (lVar8 != 0) {
        uVar1 = ((uint)(lVar8 - 8U >> 3) & 0x1fffffff) + 1;
        puVar19 = (undefined8 *)((long)puVar12 + lVar8);
        if ((uVar1 & 3) == 0) {
          puVar17 = puVar12;
        }
        else {
          lVar15 = -((ulong)uVar1 & 3);
          puVar4 = puVar12;
          puVar11 = puVar16;
          do {
            puVar16 = puVar11 + 1;
            bVar3 = lVar15 != -1;
            lVar15 = lVar15 + 1;
            puVar17 = puVar4 + 1;
            *puVar4 = *puVar11;
            puVar4 = puVar17;
            puVar11 = puVar16;
          } while (bVar3);
        }
        if (0x17 < lVar8 - 8U) {
          do {
            *puVar17 = *puVar16;
            puVar17[1] = puVar16[1];
            puVar17[2] = puVar16[2];
            puVar17[3] = puVar16[3];
            puVar17 = puVar17 + 4;
            puVar16 = puVar16 + 4;
          } while ((undefined8 *)((long)pvVar6 + (lVar8 >> 3) * 8 + (uVar10 >> 2) * 8) != puVar17);
        }
        goto LAB_002e4010;
      }
LAB_002e3fb0:
      *param_1 = (long)pvVar6;
      param_1[1] = (long)puVar12;
      param_1[2] = (long)puVar12;
      param_1[3] = (long)pvVar5;
      puVar19 = puVar12;
      goto joined_r0x002e3fbc;
    }
  }
  else {
    puVar19 = (undefined8 *)param_1[2];
    param_1[4] = param_1[4] - 0x80;
    puVar16 = (undefined8 *)param_1[1] + 1;
    uVar18 = *(undefined8 *)param_1[1];
    param_1[1] = (long)puVar16;
    if (puVar19 != (undefined8 *)param_1[3]) goto LAB_002e402c;
    puVar17 = (undefined8 *)*param_1;
    lVar8 = (long)puVar16 - (long)puVar17;
    if (puVar16 < puVar17 || lVar8 == 0) {
      lVar8 = param_1[3] - (long)puVar17;
      uVar10 = lVar8 >> 2;
      if (lVar8 == 0) {
        uVar10 = 1;
      }
      if (uVar10 >> 0x3d != 0) goto LAB_002e40ac;
      pvVar6 = operator_new(uVar10 * 8);
      puVar12 = (undefined8 *)((long)pvVar6 + (uVar10 >> 2) * 8);
      pvVar5 = (void *)((long)pvVar6 + uVar10 * 8);
      lVar8 = (long)puVar19 - (long)puVar16;
      if (lVar8 == 0) goto LAB_002e3fb0;
      uVar1 = ((uint)(lVar8 - 8U >> 3) & 0x1fffffff) + 1;
      puVar19 = (undefined8 *)((long)puVar12 + lVar8);
      puVar17 = puVar12;
      if ((uVar1 & 3) != 0) {
        lVar15 = -((ulong)uVar1 & 3);
        puVar4 = puVar12;
        puVar11 = puVar16;
        do {
          puVar16 = puVar11 + 1;
          bVar3 = lVar15 != -1;
          lVar15 = lVar15 + 1;
          puVar17 = puVar4 + 1;
          *puVar4 = *puVar11;
          puVar4 = puVar17;
          puVar11 = puVar16;
        } while (bVar3);
      }
      if (0x17 < lVar8 - 8U) {
        do {
          *puVar17 = *puVar16;
          puVar17[1] = puVar16[1];
          puVar17[2] = puVar16[2];
          puVar17[3] = puVar16[3];
          puVar17 = puVar17 + 4;
          puVar16 = puVar16 + 4;
        } while ((undefined8 *)((long)pvVar6 + (lVar8 >> 3) * 8 + (uVar10 >> 2) * 8) != puVar17);
      }
LAB_002e4010:
      puVar17 = (undefined8 *)*param_1;
      *param_1 = (long)pvVar6;
      param_1[1] = (long)puVar12;
      param_1[2] = (long)puVar19;
      param_1[3] = (long)pvVar5;
joined_r0x002e3fbc:
      if (puVar17 != (undefined8 *)0x0) {
        operator_delete(puVar17);
        puVar19 = (undefined8 *)param_1[2];
      }
      goto LAB_002e402c;
    }
  }
  lVar8 = lVar8 >> 3;
  lVar15 = lVar8 + 2;
  if (-1 < lVar8 + 1) {
    lVar15 = lVar8 + 1;
  }
  sVar2 = (long)puVar19 - (long)puVar16;
  puVar19 = puVar16 + -(lVar15 >> 1);
  if (sVar2 != 0) {
    memmove(puVar19,puVar16,sVar2);
    puVar16 = (undefined8 *)param_1[1];
  }
  puVar19 = (undefined8 *)((long)puVar19 + sVar2);
  param_1[1] = (long)(puVar16 + -(lVar15 >> 1));
  param_1[2] = (long)puVar19;
LAB_002e402c:
  *puVar19 = uVar18;
  param_1[2] = param_1[2] + 8;
  return;
}


