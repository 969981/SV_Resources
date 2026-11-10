/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a5160; name: FUN_028a5160
 */


undefined1  [16]
FUN_028a5160(long *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4,long *param_5,
            undefined8 *param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  
  lVar4 = (long)param_2 - *param_1 >> 3;
  if ((long)param_2 - *param_1 < -7) {
    uVar6 = 0x1fe - lVar4;
    uVar14 = 0x3fd - lVar4;
    if (-1 < (long)uVar6) {
      uVar14 = uVar6;
    }
    puVar3 = (undefined8 *)
             (param_1[-((long)uVar14 >> 9)] + ((uVar14 & 0x1ffffffffffffe00) - uVar6) * 8 + 0xff8);
  }
  else {
    puVar3 = (undefined8 *)
             (*(long *)((long)param_1 + (lVar4 + 1U >> 6 & 0x3fffffffffffff8)) +
             (lVar4 + 1U & 0x1ff) * 8);
  }
  if (puVar3 == param_4) {
    uVar10 = *param_2;
    lVar4 = (long)param_2 - *param_1 >> 3;
    if ((long)param_2 - *param_1 < -7) {
      uVar6 = 0x1fe - lVar4;
      uVar14 = 0x3fd - lVar4;
      if (-1 < (long)uVar6) {
        uVar14 = uVar6;
      }
      plVar1 = param_1 + -((long)uVar14 >> 9);
      lVar4 = *plVar1 + ((uVar14 & 0x1ffffffffffffe00) - uVar6) * 8 + 0xff8;
    }
    else {
      plVar1 = (long *)((long)param_1 + (lVar4 + 1U >> 6 & 0x3fffffffffffff8));
      lVar4 = *plVar1 + (lVar4 + 1U & 0x1ff) * 8;
    }
    auVar16 = FUN_028a57c0(plVar1,lVar4,param_5,param_6,param_1,param_2);
    *auVar16._8_8_ = uVar10;
    return auVar16;
  }
  lVar4 = (long)param_4 - *param_3 >> 3;
  if ((long)param_4 - *param_3 < -7) {
    uVar6 = 0x1fe - lVar4;
    uVar14 = 0x3fd - lVar4;
    if (-1 < (long)uVar6) {
      uVar14 = uVar6;
    }
    puVar3 = (undefined8 *)
             (param_3[-((long)uVar14 >> 9)] + ((uVar14 & 0x1ffffffffffffe00) - uVar6) * 8 + 0xff8);
  }
  else {
    puVar3 = (undefined8 *)
             (*(long *)((long)param_3 + (lVar4 + 1U >> 6 & 0x3fffffffffffff8)) +
             (lVar4 + 1U & 0x1ff) * 8);
  }
  if (puVar3 == param_6) {
    lVar4 = (long)param_6 - *param_5 >> 3;
    if ((long)param_6 - *param_5 < 9) {
      uVar6 = 0x200 - lVar4;
      uVar14 = 0x3ff - lVar4;
      if (-1 < (long)uVar6) {
        uVar14 = uVar6;
      }
      puVar3 = (undefined8 *)
               (param_5[-((long)uVar14 >> 9)] + ((uVar14 & 0x1ffffffffffffe00) - uVar6) * 8 + 0xff8)
      ;
    }
    else {
      puVar3 = (undefined8 *)
               (*(long *)((long)param_5 + (lVar4 - 1U >> 6 & 0x3fffffffffffff8)) +
               (lVar4 - 1U & 0x1ff) * 8);
    }
    uVar10 = *puVar3;
    auVar16 = FUN_028a5810(param_1,param_2);
    *param_2 = uVar10;
    return auVar16;
  }
  if (param_4 == param_2) {
    lVar4 = 0;
  }
  else {
    lVar4 = (((long)param_4 - *param_3 >> 3) + ((long)param_3 - (long)param_1) * 0x40) -
            ((long)param_2 - *param_1 >> 3);
  }
  if (param_6 == param_4) {
    lVar5 = 0;
  }
  else {
    lVar5 = (((long)param_6 - *param_5 >> 3) + ((long)param_5 - (long)param_3) * 0x40) -
            ((long)param_4 - *param_3 >> 3);
  }
  if (lVar4 == lVar5) {
    FUN_028a5870(param_1,param_2,param_3,param_4,param_3,param_4);
    param_2 = param_4;
    param_1 = param_3;
  }
  else {
    lVar8 = lVar5;
    lVar9 = lVar4;
    do {
      lVar7 = lVar8;
      lVar8 = 0;
      if (lVar7 != 0) {
        lVar8 = lVar9 / lVar7;
      }
      lVar8 = lVar9 - lVar8 * lVar7;
      lVar9 = lVar7;
    } while (lVar8 != 0);
    plVar1 = param_1;
    puVar3 = param_2;
    if (lVar7 != 0) {
      uVar14 = lVar7 + ((long)param_2 - *param_1 >> 3);
      if ((long)uVar14 < 1) {
        uVar6 = 0x1ff - uVar14;
        uVar14 = 0x3fe - uVar14;
        if (-1 < (long)uVar6) {
          uVar14 = uVar6;
        }
        plVar1 = param_1 + -((long)uVar14 >> 9);
        puVar3 = (undefined8 *)(*plVar1 + ((uVar14 & 0x1ffffffffffffe00) - uVar6) * 8 + 0xff8);
      }
      else {
        plVar1 = (long *)((long)param_1 + (uVar14 >> 6 & 0x3fffffffffffff8));
        puVar3 = (undefined8 *)(*plVar1 + (uVar14 & 0x1ff) * 8);
      }
    }
    while (puVar3 != param_2) {
      if ((undefined8 *)*plVar1 == puVar3) {
        plVar1 = plVar1 + -1;
        puVar3 = (undefined8 *)(*plVar1 + 0x1000);
      }
      puVar3 = puVar3 + -1;
      uVar10 = *puVar3;
      if (lVar4 == 0) {
        puVar2 = puVar3;
        puVar13 = puVar3;
        plVar12 = plVar1;
        do {
          puVar11 = puVar13;
          *puVar2 = *puVar11;
          puVar13 = param_2;
          plVar15 = param_1;
          if (param_6 != puVar11) {
            lVar8 = (((long)param_6 - *param_5 >> 3) + ((long)param_5 - (long)plVar12) * 0x40) -
                    ((long)puVar11 - *plVar12 >> 3);
            puVar13 = puVar11;
            plVar15 = plVar12;
            if (lVar8 < 1) {
              puVar13 = param_2;
              plVar15 = param_1;
              if (lVar8 != 0) {
                uVar14 = ((long)param_2 - *param_1 >> 3) - lVar8;
                if ((long)uVar14 < 1) {
                  uVar6 = 0x1ff - uVar14;
                  uVar14 = 0x3fe - uVar14;
                  if (-1 < (long)uVar6) {
                    uVar14 = uVar6;
                  }
                  plVar15 = param_1 + -((long)uVar14 >> 9);
                  puVar13 = (undefined8 *)
                            (*plVar15 + ((uVar14 & 0x1ffffffffffffe00) - uVar6) * 8 + 0xff8);
                }
                else {
                  plVar15 = (long *)((long)param_1 + (uVar14 >> 6 & 0x3fffffffffffff8));
                  puVar13 = (undefined8 *)(*plVar15 + (uVar14 & 0x1ff) * 8);
                }
              }
            }
          }
          puVar2 = puVar11;
          plVar12 = plVar15;
        } while (puVar3 != puVar13);
      }
      else {
        uVar14 = lVar4 + ((long)puVar3 - *plVar1 >> 3);
        if ((long)uVar14 < 1) {
          uVar6 = 0x1ff - uVar14;
          uVar14 = 0x3fe - uVar14;
          if (-1 < (long)uVar6) {
            uVar14 = uVar6;
          }
          plVar12 = plVar1 + -((long)uVar14 >> 9);
          puVar13 = (undefined8 *)(*plVar12 + ((uVar14 & 0x1ffffffffffffe00) - uVar6) * 8 + 0xff8);
        }
        else {
          plVar12 = (long *)((long)plVar1 + (uVar14 >> 6 & 0x3fffffffffffff8));
          puVar13 = (undefined8 *)(*plVar12 + (uVar14 & 0x1ff) * 8);
        }
        puVar2 = puVar3;
        do {
          puVar11 = puVar13;
          *puVar2 = *puVar11;
          if (param_6 == puVar11) {
            lVar8 = 0;
          }
          else {
            lVar8 = (((long)param_6 - *param_5 >> 3) + ((long)param_5 - (long)plVar12) * 0x40) -
                    ((long)puVar11 - *plVar12 >> 3);
          }
          if (lVar4 < lVar8) {
            uVar14 = lVar4 + ((long)puVar11 - *plVar12 >> 3);
            if (0 < (long)uVar14) {
              plVar12 = (long *)((long)plVar12 + (uVar14 >> 6 & 0x3fffffffffffff8));
              goto LAB_028a5508;
            }
            uVar6 = 0x1ff - uVar14;
            uVar14 = 0x3fe - uVar14;
            if (-1 < (long)uVar6) {
              uVar14 = uVar6;
            }
            plVar12 = plVar12 + -((long)uVar14 >> 9);
LAB_028a5548:
            puVar13 = (undefined8 *)(*plVar12 + ((uVar14 & 0x1ffffffffffffe00) - uVar6) * 8 + 0xff8)
            ;
          }
          else {
            plVar12 = param_1;
            puVar13 = param_2;
            if (lVar4 - lVar8 != 0) {
              uVar14 = (lVar4 - lVar8) + ((long)param_2 - *param_1 >> 3);
              if ((long)uVar14 < 1) {
                uVar6 = 0x1ff - uVar14;
                uVar14 = 0x3fe - uVar14;
                if (-1 < (long)uVar6) {
                  uVar14 = uVar6;
                }
                plVar12 = param_1 + -((long)uVar14 >> 9);
                goto LAB_028a5548;
              }
              plVar12 = (long *)((long)param_1 + (uVar14 >> 6 & 0x3fffffffffffff8));
LAB_028a5508:
              puVar13 = (undefined8 *)(*plVar12 + (uVar14 & 0x1ff) * 8);
            }
          }
          puVar2 = puVar11;
        } while (puVar3 != puVar13);
      }
      *puVar11 = uVar10;
    }
    if (lVar5 != 0) {
      uVar14 = lVar5 + ((long)param_2 - *param_1 >> 3);
      if ((long)uVar14 < 1) {
        uVar6 = 0x1ff - uVar14;
        uVar14 = 0x3fe - uVar14;
        if (-1 < (long)uVar6) {
          uVar14 = uVar6;
        }
        param_1 = param_1 + -((long)uVar14 >> 9);
        param_2 = (undefined8 *)(*param_1 + ((uVar14 & 0x1ffffffffffffe00) - uVar6) * 8 + 0xff8);
      }
      else {
        param_1 = (long *)((long)param_1 + (uVar14 >> 6 & 0x3fffffffffffff8));
        param_2 = (undefined8 *)(*param_1 + (uVar14 & 0x1ff) * 8);
      }
    }
  }
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  return auVar16;
}


