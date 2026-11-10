/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01461e10; name: FUN_01461e10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01461e10(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  long *plVar10;
  long *plVar11;
  undefined1 *puVar12;
  ulong uVar13;
  int *piVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  long *plVar19;
  long *plVar20;
  undefined8 uVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  int iVar25;
  undefined1 auVar26 [16];
  undefined8 local_108;
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  undefined1 *local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *local_90;
  ulong local_88;
  undefined *puStack_80;
  undefined8 local_78;
  long *local_70;
  
  uVar21 = *param_2;
  local_a8 = (undefined1 *)0x6723799257d05608;
  pcStack_a0 = PTR_DAT_047dcf20;
  local_98 = 0x1f;
  local_90 = (long *)0x0;
  FUN_01464dd0(&local_88,&local_a8,*(undefined8 *)(param_1 + 0x380));
  puVar8 = (undefined8 *)FUN_015c1da4(uVar21,&local_88);
  plVar22 = (long *)*puVar8;
  if (plVar22 == (long *)0x0) {
LAB_01461ea0:
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    plVar23 = *(long **)(*(long *)(DAT_0485a0d8 + 0x38) + 0x40);
    if (plVar23 != (long *)0x0) {
      plVar19 = plVar23 + 5;
      do {
        lVar24 = *plVar19;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *(int *)plVar19 = (int)lVar24 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar24 == -1) goto LAB_01464d40;
    }
    uVar13 = plVar23[0x22];
    if (uVar13 != 0) {
      uVar15 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar13 - 1 & 0x5fa488b600d25e24;
      }
      else if (uVar13 < 0x5fa488b600d25e25) {
        uVar16 = 0;
        if (uVar13 != 0) {
          uVar16 = 0x5fa488b600d25e24 / uVar13;
        }
        uVar16 = 0x5fa488b600d25e24 - uVar16 * uVar13;
      }
      else {
        uVar16 = 0x5fa488b600d25e24;
      }
      plVar19 = *(long **)(plVar23[0x21] + uVar16 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar19[1] == 0x5fa488b600d25e24) {
              if (plVar19[2] == 0x5fa488b600d25e24) goto LAB_01461fe4;
            }
            else if ((plVar19[1] & uVar13 - 1) != uVar16) break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar19[1];
            if (uVar15 == 0x5fa488b600d25e24) {
              if (plVar19[2] == 0x5fa488b600d25e24) goto LAB_01461fe4;
            }
            else {
              if (uVar13 <= uVar15) {
                uVar5 = 0;
                if (uVar13 != 0) {
                  uVar5 = uVar15 / uVar13;
                }
                uVar15 = uVar15 - uVar5 * uVar13;
              }
              if (uVar15 != uVar16) break;
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    local_b0 = (long *)0x0;
    goto LAB_01462010;
  }
  plVar23 = plVar22 + 5;
  do {
    lVar24 = *plVar23;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
    if (bVar4) {
      *(int *)plVar23 = (int)lVar24 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((int)lVar24 != -1) goto LAB_01461ea0;
  goto LAB_01464d40;
LAB_01461fe4:
  local_b0 = (long *)plVar19[6];
  if (local_b0 != (long *)0x0) {
    plVar19 = local_b0 + 5;
    do {
      lVar24 = *plVar19;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *(int *)plVar19 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d88;
    uVar13 = plVar23[0x22];
  }
LAB_01462010:
  if (uVar13 != 0) {
    uVar15 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar13 - 1 & 0x5e1771f463b934e6;
    }
    else if (uVar13 < 0x5e1771f463b934e7) {
      uVar16 = 0;
      if (uVar13 != 0) {
        uVar16 = 0x5e1771f463b934e6 / uVar13;
      }
      uVar16 = 0x5e1771f463b934e6 - uVar16 * uVar13;
    }
    else {
      uVar16 = 0x5e1771f463b934e6;
    }
    plVar19 = *(long **)(plVar23[0x21] + uVar16 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar19[1] == 0x5e1771f463b934e6) {
            if (plVar19[2] == 0x5e1771f463b934e6) goto LAB_01462110;
          }
          else if ((plVar19[1] & uVar13 - 1) != uVar16) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar19[1];
          if (uVar15 == 0x5e1771f463b934e6) {
            if (plVar19[2] == 0x5e1771f463b934e6) goto LAB_01462110;
          }
          else {
            if (uVar13 <= uVar15) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar15 / uVar13;
              }
              uVar15 = uVar15 - uVar5 * uVar13;
            }
            if (uVar15 != uVar16) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
  local_b8 = (long *)0x0;
  goto LAB_0146213c;
LAB_0146223c:
  local_c0 = (long *)plVar19[6];
  if (local_c0 != (long *)0x0) {
    plVar19 = local_c0 + 5;
    do {
      lVar24 = *plVar19;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *(int *)plVar19 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d88;
    uVar13 = plVar23[0x22];
  }
  goto LAB_01462268;
LAB_01462368:
  local_c8 = (long *)plVar19[6];
  if (local_c8 != (long *)0x0) {
    plVar19 = local_c8 + 5;
    do {
      lVar24 = *plVar19;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *(int *)plVar19 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d88;
    uVar13 = plVar23[0x22];
  }
  goto LAB_01462394;
LAB_0146249c:
  plVar19 = (long *)plVar19[6];
  if (plVar19 != (long *)0x0) {
    plVar20 = plVar19 + 5;
    do {
      lVar24 = *plVar20;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *(int *)plVar20 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d88;
    uVar13 = plVar23[0x22];
  }
  goto LAB_014624c4;
LAB_014625c0:
  local_d0 = (long *)plVar20[6];
  if (local_d0 != (long *)0x0) {
    plVar20 = local_d0 + 5;
    do {
      lVar24 = *plVar20;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *(int *)plVar20 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) {
LAB_01464d88:
      pcVar9 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      goto LAB_01464d60;
    }
  }
  goto LAB_014625e8;
LAB_01464a90:
  piVar14 = piVar14 + 8;
  if (_DAT_00000118 == piVar14) goto LAB_01464a9c;
  goto LAB_01464a78;
LAB_0146333c:
  piVar14 = piVar14 + 8;
  if ((int *)plVar10[0x23] == piVar14) goto LAB_01463348;
  goto LAB_01463324;
LAB_01462110:
  local_b8 = (long *)plVar19[6];
  if (local_b8 != (long *)0x0) {
    plVar19 = local_b8 + 5;
    do {
      lVar24 = *plVar19;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *(int *)plVar19 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d88;
    uVar13 = plVar23[0x22];
  }
LAB_0146213c:
  if (uVar13 != 0) {
    uVar15 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar13 - 1 & 0x61e5ac237b91a893;
    }
    else if (uVar13 < 0x61e5ac237b91a894) {
      uVar16 = 0;
      if (uVar13 != 0) {
        uVar16 = 0x61e5ac237b91a893 / uVar13;
      }
      uVar16 = 0x61e5ac237b91a893 - uVar16 * uVar13;
    }
    else {
      uVar16 = 0x61e5ac237b91a893;
    }
    plVar19 = *(long **)(plVar23[0x21] + uVar16 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar19[1] == 0x61e5ac237b91a893) {
            if (plVar19[2] == 0x61e5ac237b91a893) goto LAB_0146223c;
          }
          else if ((plVar19[1] & uVar13 - 1) != uVar16) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar19[1];
          if (uVar15 == 0x61e5ac237b91a893) {
            if (plVar19[2] == 0x61e5ac237b91a893) goto LAB_0146223c;
          }
          else {
            if (uVar13 <= uVar15) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar15 / uVar13;
              }
              uVar15 = uVar15 - uVar5 * uVar13;
            }
            if (uVar15 != uVar16) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
  local_c0 = (long *)0x0;
LAB_01462268:
  if (uVar13 != 0) {
    uVar15 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar13 - 1 & 0x908e4fb6370db31d;
    }
    else if (uVar13 < 0x908e4fb6370db31e) {
      uVar16 = 0;
      if (uVar13 != 0) {
        uVar16 = 0x908e4fb6370db31d / uVar13;
      }
      uVar16 = 0x908e4fb6370db31d - uVar16 * uVar13;
    }
    else {
      uVar16 = 0x908e4fb6370db31d;
    }
    plVar19 = *(long **)(plVar23[0x21] + uVar16 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar19[1] == 0x908e4fb6370db31d) {
            if (plVar19[2] == -0x6f71b049c8f24ce3) goto LAB_01462368;
          }
          else if ((plVar19[1] & uVar13 - 1) != uVar16) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar19[1];
          if (uVar15 == 0x908e4fb6370db31d) {
            if (plVar19[2] == -0x6f71b049c8f24ce3) goto LAB_01462368;
          }
          else {
            if (uVar13 <= uVar15) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar15 / uVar13;
              }
              uVar15 = uVar15 - uVar5 * uVar13;
            }
            if (uVar15 != uVar16) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
  local_c8 = (long *)0x0;
LAB_01462394:
  if (uVar13 == 0) {
    plVar19 = (long *)0x0;
  }
  else {
    uVar15 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar13 - 1 & 0x6b21fb462691e0eb;
    }
    else if (uVar13 < 0x6b21fb462691e0ec) {
      uVar16 = 0;
      if (uVar13 != 0) {
        uVar16 = 0x6b21fb462691e0eb / uVar13;
      }
      uVar16 = 0x6b21fb462691e0eb - uVar16 * uVar13;
    }
    else {
      uVar16 = 0x6b21fb462691e0eb;
    }
    plVar19 = *(long **)(plVar23[0x21] + uVar16 * 8);
    if ((plVar19 == (long *)0x0) || (plVar19 = (long *)*plVar19, plVar19 == (long *)0x0)) {
      plVar19 = (long *)0x0;
    }
    else {
      if (uVar15 < 2) {
        do {
          if (plVar19[1] == 0x6b21fb462691e0eb) {
            if (plVar19[2] == 0x6b21fb462691e0eb) goto LAB_0146249c;
          }
          else if ((plVar19[1] & uVar13 - 1) != uVar16) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar19[1];
          if (uVar15 == 0x6b21fb462691e0eb) {
            if (plVar19[2] == 0x6b21fb462691e0eb) goto LAB_0146249c;
          }
          else {
            if (uVar13 <= uVar15) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar15 / uVar13;
              }
              uVar15 = uVar15 - uVar5 * uVar13;
            }
            if (uVar15 != uVar16) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      plVar19 = (long *)0x0;
LAB_014624c4:
      if (uVar13 == 0) goto LAB_01464218;
    }
    uVar15 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar13 - 1 & 0x4b1970d18c2be56;
    }
    else if (uVar13 < 0x4b1970d18c2be57) {
      uVar16 = 0;
      if (uVar13 != 0) {
        uVar16 = 0x4b1970d18c2be56 / uVar13;
      }
      uVar16 = 0x4b1970d18c2be56 - uVar16 * uVar13;
    }
    else {
      uVar16 = 0x4b1970d18c2be56;
    }
    plVar20 = *(long **)(plVar23[0x21] + uVar16 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar20[1] == 0x4b1970d18c2be56) {
            if (plVar20[2] == 0x4b1970d18c2be56) goto LAB_014625c0;
          }
          else if ((plVar20[1] & uVar13 - 1) != uVar16) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar20[1];
          if (uVar15 == 0x4b1970d18c2be56) {
            if (plVar20[2] == 0x4b1970d18c2be56) goto LAB_014625c0;
          }
          else {
            if (uVar13 <= uVar15) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar15 / uVar13;
              }
              uVar15 = uVar15 - uVar5 * uVar13;
            }
            if (uVar15 != uVar16) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
LAB_01464218:
  local_d0 = (long *)0x0;
LAB_014625e8:
  puVar8 = (undefined8 *)FUN_0166cefc();
  auVar26 = FUN_0166cf08(*puVar8,2,0);
  uVar13 = (**(code **)(*DAT_0485a020 + 0x80))(DAT_0485a020,0);
  FUN_01464e2c(param_1 + 0x400,param_2);
  lVar24 = *(long *)(param_1 + 0x400);
  pcVar9 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar24 + 0x70) + 0x110),lVar24 + 0x30);
  puVar6 = PTR_DAT_047d8da8;
  if (*pcVar9 == '\0' || *(long *)(pcVar9 + 8) == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    if (*(long *)(*(long *)(pcVar9 + 8) + 0x20) == 0) goto LAB_01464d68;
    puVar8 = (undefined8 *)(**(code **)PTR_DAT_047d8da8)();
  }
  uVar21 = *(undefined8 *)(param_1 + 0x410);
  *puVar8 = *(undefined8 *)(param_1 + 0x408);
  puVar8[1] = uVar21;
  FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar24 + 0x70) + 0x110),lVar24 + 0x30);
  *(undefined8 *)(param_1 + 0x424) = 0x3f80000040800000;
  FUN_01464e2c(param_1 + 0x418,param_2);
  lVar24 = *(long *)(param_1 + 0x418);
  pcVar9 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar24 + 0x70) + 0x110),lVar24 + 0x30);
  puVar8 = (undefined8 *)0x0;
  if ((*pcVar9 != '\0') && (*(long *)(pcVar9 + 8) != 0)) {
    if (*(long *)(*(long *)(pcVar9 + 8) + 0x20) == 0) goto LAB_01464d68;
    puVar8 = (undefined8 *)(**(code **)puVar6)();
  }
  uVar21 = *(undefined8 *)(param_1 + 0x428);
  *puVar8 = *(undefined8 *)(param_1 + 0x420);
  puVar8[1] = uVar21;
  FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar24 + 0x70) + 0x110),lVar24 + 0x30);
  *(undefined8 *)(param_1 + 0x43c) = 0x3f8000003f800000;
  FUN_01464e2c(param_1 + 0x430,param_2);
  lVar24 = *(long *)(param_1 + 0x430);
  pcVar9 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar24 + 0x70) + 0x110),lVar24 + 0x30);
  puVar8 = (undefined8 *)0x0;
  if ((*pcVar9 != '\0') && (*(long *)(pcVar9 + 8) != 0)) {
    if (*(long *)(*(long *)(pcVar9 + 8) + 0x20) == 0) goto LAB_01464d68;
    puVar8 = (undefined8 *)(**(code **)puVar6)();
  }
  uVar21 = *(undefined8 *)(param_1 + 0x440);
  *puVar8 = *(undefined8 *)(param_1 + 0x438);
  puVar8[1] = uVar21;
  FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar24 + 0x70) + 0x110),lVar24 + 0x30);
  *(undefined8 *)(param_1 + 0x454) = 0x3f80000040000000;
  FUN_01464e2c(param_1 + 0x448,param_2);
  lVar24 = *(long *)(param_1 + 0x448);
  pcVar9 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar24 + 0x70) + 0x110),lVar24 + 0x30);
  puVar8 = (undefined8 *)0x0;
  if ((*pcVar9 != '\0') && (*(long *)(pcVar9 + 8) != 0)) {
    if (*(long *)(*(long *)(pcVar9 + 8) + 0x20) == 0) {
LAB_01464d68:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_buffer","Map",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                 ,0x31);
    }
    puVar8 = (undefined8 *)(**(code **)puVar6)();
  }
  uVar21 = *(undefined8 *)(param_1 + 0x458);
  *puVar8 = *(undefined8 *)(param_1 + 0x450);
  puVar8[1] = uVar21;
  FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar24 + 0x70) + 0x110),lVar24 + 0x30);
  local_a8 = &DAT_33989627c9ed4375;
  pcStack_a0 = PTR_s_Main_Opaque_047e1138;
  local_98 = 0x1f;
  local_90 = (long *)0x0;
  FUN_01464dd0(&local_88,&local_a8,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_f0,plVar22,&local_88);
  plVar20 = *(long **)(param_1 + 0x388);
  *(undefined8 *)(param_1 + 0x388) = 0;
  if (plVar20 != (long *)0x0) {
    plVar10 = plVar20 + 5;
    do {
      lVar24 = *plVar10;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar20 + 0x10))();
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  uVar21 = local_f0;
  local_f0 = 0;
  *(undefined8 *)(param_1 + 0x388) = uVar21;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  *(undefined4 *)(*(long *)(param_1 + 0x388) + 0x1e0) = 1;
  uVar21 = *(undefined8 *)(param_1 + 0x388);
  uVar7 = FUN_01464df0(0x3d,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar21,uVar7);
  plVar20 = *(long **)(*(long *)(param_1 + 0x388) + 0x58);
  if (plVar20 != (long *)0x0) {
    plVar10 = plVar20 + 5;
    do {
      lVar24 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 != -1) goto LAB_014628c8;
LAB_01464d40:
    pcVar9 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
    ;
LAB_01464d60:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",pcVar9,0x53,"Reference counter overflows.")
    ;
  }
LAB_014628c8:
  local_88 = local_88 & 0xffffffffffffff00;
  FUN_00d8219c(plVar20,0,&local_b0,0xffffffff,&local_88);
  local_88 = local_88 & 0xffffffffffffff00;
  FUN_00d829fc(plVar20,&local_b8,&local_88);
  FUN_00d819c8(0,plVar20,0);
  FUN_00f190b8(plVar20,0,1);
  local_a8 = (undefined1 *)0x7a55ce8a291a2bc6;
  pcStack_a0 = PTR_s_VfxDepthCopyPath_047e15d0;
  local_98 = 0x1f;
  local_90 = (long *)0x0;
  FUN_01464dd0(&local_88,&local_a8,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_f0,plVar22,&local_88);
  plVar10 = *(long **)(param_1 + 0x390);
  *(undefined8 *)(param_1 + 0x390) = 0;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  uVar21 = local_f0;
  local_f0 = 0;
  *(undefined8 *)(param_1 + 0x390) = uVar21;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  *(undefined4 *)(*(long *)(param_1 + 0x390) + 0x1e0) = 2;
  uVar21 = *(undefined8 *)(param_1 + 0x390);
  uVar7 = FUN_01464df0(0x86,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar21,uVar7);
  plVar10 = *(long **)(*(long *)(param_1 + 0x390) + 0x58);
  if (plVar10 == (long *)0x0) {
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d8219c(0,0,&local_b0,0xffffffff,&local_88);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d8219c(plVar10,0,&local_b0,0xffffffff,&local_88);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x390) + 0x58);
  if (plVar10 == (long *)0x0) {
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d829fc(0,&local_b8,&local_88);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d829fc(plVar10,&local_b8,&local_88);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x390) + 0x58);
  if (plVar10 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    FUN_00d819c8(0,plVar10,0);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x390) + 0x28a) = 1;
  local_a8 = (undefined1 *)0xc93461363f55a27c;
  pcStack_a0 = PTR_s_kVfxTransparent_047e15d8;
  local_98 = 0x1f;
  local_90 = (long *)0x0;
  FUN_01464dd0(&local_88,&local_a8,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_f0,plVar22,&local_88);
  plVar10 = *(long **)(param_1 + 0x398);
  *(undefined8 *)(param_1 + 0x398) = 0;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  uVar21 = local_f0;
  local_f0 = 0;
  *(undefined8 *)(param_1 + 0x398) = uVar21;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  *(undefined4 *)(*(long *)(param_1 + 0x398) + 0x1e0) = 2;
  uVar21 = *(undefined8 *)(param_1 + 0x398);
  uVar7 = FUN_01464df0(0x8e,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar21,uVar7);
  plVar10 = *(long **)(*(long *)(param_1 + 0x398) + 0x58);
  if (plVar10 == (long *)0x0) {
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d8219c(0,0,&local_b0,0xffffffff,&local_88);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d8219c(plVar10,0,&local_b0,0xffffffff,&local_88);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x398) + 0x58);
  if (plVar10 == (long *)0x0) {
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d829fc(0,&local_b8,&local_88);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d829fc(plVar10,&local_b8,&local_88);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x398) + 0x58);
  if (plVar10 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    FUN_00d819c8(0,plVar10,0);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x398) + 0x28a) = 1;
  local_a8 = (undefined1 *)0xea0b5022203dbcd0;
  pcStack_a0 = PTR_s_VfxBetweenSkyAndCloud_047e15e0;
  local_98 = 0x1f;
  local_90 = (long *)0x0;
  FUN_01464dd0(&local_88,&local_a8,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_f0,plVar22,&local_88);
  plVar10 = *(long **)(param_1 + 0x3c8);
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  uVar21 = local_f0;
  local_f0 = 0;
  *(undefined8 *)(param_1 + 0x3c8) = uVar21;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  *(undefined4 *)(*(long *)(param_1 + 0x3c8) + 0x1e0) = 2;
  uVar21 = *(undefined8 *)(param_1 + 0x3c8);
  uVar7 = FUN_01464df0(0x67,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar21,uVar7);
  plVar10 = *(long **)(*(long *)(param_1 + 0x3c8) + 0x58);
  if (plVar10 == (long *)0x0) {
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d8219c(0,0,&local_b0,0xffffffff,&local_88);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d8219c(plVar10,0,&local_b0,0xffffffff,&local_88);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x3c8) + 0x58);
  if (plVar10 == (long *)0x0) {
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d829fc(0,&local_b8,&local_88);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d829fc(plVar10,&local_b8,&local_88);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x3c8) + 0x58);
  if (plVar10 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    FUN_00d819c8(0,plVar10,0);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x3c8) + 0x28a) = 1;
  local_a8 = (undefined1 *)0xcb5aa2edb0fe0b44;
  pcStack_a0 = PTR_s_VfxAfterCloud_047e15e8;
  local_98 = 0x1f;
  local_90 = (long *)0x0;
  FUN_01464dd0(&local_88,&local_a8,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_f0,plVar22,&local_88);
  plVar10 = *(long **)(param_1 + 0x3d0);
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  uVar21 = local_f0;
  local_f0 = 0;
  *(undefined8 *)(param_1 + 0x3d0) = uVar21;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  *(undefined4 *)(*(long *)(param_1 + 0x3d0) + 0x1e0) = 2;
  uVar21 = *(undefined8 *)(param_1 + 0x3d0);
  uVar7 = FUN_01464df0(0x69,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar21,uVar7);
  plVar10 = *(long **)(*(long *)(param_1 + 0x3d0) + 0x58);
  if (plVar10 == (long *)0x0) {
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d8219c(0,0,&local_b0,0xffffffff,&local_88);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d8219c(plVar10,0,&local_b0,0xffffffff,&local_88);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x3d0) + 0x58);
  if (plVar10 == (long *)0x0) {
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d829fc(0,&local_b8,&local_88);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d829fc(plVar10,&local_b8,&local_88);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x3d0) + 0x58);
  if (plVar10 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    FUN_00d819c8(0,plVar10,0);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x3d0) + 0x28a) = 1;
  local_a8 = (undefined1 *)0x5b86ab8f6f1d1e69;
  pcStack_a0 = PTR_s_VfxFast_047e15f0;
  local_98 = 0x1f;
  local_90 = (long *)0x0;
  FUN_01464dd0(&local_88,&local_a8,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_f0,plVar22,&local_88);
  plVar10 = *(long **)(param_1 + 0x3a0);
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  uVar21 = local_f0;
  local_f0 = 0;
  *(undefined8 *)(param_1 + 0x3a0) = uVar21;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  *(undefined4 *)(*(long *)(param_1 + 0x3a0) + 0x1e0) = 2;
  uVar21 = *(undefined8 *)(param_1 + 0x3a0);
  uVar7 = FUN_01464df0(0x87,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar21,uVar7);
  plVar10 = *(long **)(*(long *)(param_1 + 0x3a0) + 0x58);
  if (plVar10 == (long *)0x0) {
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d8219c(0,0,&local_c8,0xffffffff,&local_88);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d8219c(plVar10,0,&local_c8,0xffffffff,&local_88);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x3a0) + 0x58);
  if (plVar10 == (long *)0x0) {
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d829fc(0,&local_c0,&local_88);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d829fc(plVar10,&local_c0,&local_88);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x3a0) + 0x58);
  if (plVar10 == (long *)0x0) {
    FUN_00d81b84(0,0,0,0x3f800000,0,0);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    FUN_00d81b84(0,0,0,0x3f800000,plVar10,0);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x3a0) + 0x58);
  if (plVar10 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    FUN_00d819c8(0,plVar10,0);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x3a0) + 0x28a) = 1;
  local_a8 = (undefined1 *)0x38276a9ecccb17a6;
  pcStack_a0 = PTR_s_VfxFastRefraction_047e15f8;
  local_98 = 0x1f;
  local_90 = (long *)0x0;
  FUN_01464dd0(&local_88,&local_a8,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_f0,plVar22,&local_88);
  plVar10 = *(long **)(param_1 + 0x3c0);
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  uVar21 = local_f0;
  local_f0 = 0;
  *(undefined8 *)(param_1 + 0x3c0) = uVar21;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  uVar21 = *(undefined8 *)(param_1 + 0x3c0);
  uVar7 = FUN_01464df0(0x89,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar21,uVar7);
  FUN_01343f00(*(undefined8 *)(param_1 + 0x3c0),uVar13 >> 0x20,0xe);
  plVar10 = *(long **)(*(long *)(param_1 + 0x3c0) + 0x58);
  iVar25 = (int)(uVar13 >> 0x20);
  if (plVar10 == (long *)0x0) {
    iVar25 = iVar25 + 5;
    local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,2);
    local_f0 = CONCAT44(local_f0._4_4_,iVar25);
    local_88 = (ulong)local_88._1_7_ << 8;
    piVar14 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_01464a78:
      if ((*piVar14 != 2) || (piVar14[1] != iVar25)) goto LAB_01464a90;
      if (local_d0 != (long *)0x0) {
        plVar10 = local_d0 + 5;
        do {
          lVar24 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *(int *)plVar10 = (int)lVar24 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((int)lVar24 == -1) goto LAB_01464dac;
      }
      plVar10 = *(long **)(piVar14 + 2);
      *(long **)(piVar14 + 2) = local_d0;
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + 5;
        do {
          lVar24 = *plVar1;
          iVar25 = (int)lVar24 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar25;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar25 != 0) {
          if ((int)lVar24 != 0) goto LAB_014633c8;
          goto LAB_01464cb4;
        }
        lVar24 = *plVar10;
        goto LAB_01464560;
      }
      goto LAB_014633c8;
    }
LAB_01464a9c:
    FUN_00d11148(0x110,&local_a8,&local_f0,&local_d0,&local_88);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    iVar25 = iVar25 + 5;
    local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,2);
    local_f0 = CONCAT44(local_f0._4_4_,iVar25);
    local_88 = (ulong)local_88._1_7_ << 8;
    piVar14 = (int *)plVar10[0x22];
    if (piVar14 != (int *)plVar10[0x23]) {
LAB_01463324:
      if ((*piVar14 != 2) || (piVar14[1] != iVar25)) goto LAB_0146333c;
      if (local_d0 != (long *)0x0) {
        plVar11 = local_d0 + 5;
        do {
          lVar24 = *plVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *(int *)plVar11 = (int)lVar24 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((int)lVar24 == -1) {
LAB_01464dac:
          local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,2);
          pcVar9 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          goto LAB_01464d60;
        }
      }
      plVar11 = *(long **)(piVar14 + 2);
      *(long **)(piVar14 + 2) = local_d0;
      if (plVar11 != (long *)0x0) {
        plVar2 = plVar11 + 5;
        do {
          lVar24 = *plVar2;
          iVar25 = (int)lVar24 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar25;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar25 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
        else if ((int)lVar24 == 0) {
LAB_01464cb4:
          local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,2);
          pcVar9 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          goto LAB_01464d38;
        }
      }
      goto LAB_014633b0;
    }
LAB_01463348:
    FUN_00d11148(plVar10 + 0x22,&local_a8,&local_f0,&local_d0,&local_88);
LAB_014633b0:
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      lVar24 = *plVar10;
LAB_01464560:
      (**(code **)(lVar24 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
LAB_014633c8:
  plVar10 = *(long **)(*(long *)(param_1 + 0x3c0) + 0x58);
  if (plVar10 == (long *)0x0) {
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d8219c(0,0,&local_c8,0xffffffff,&local_88);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d8219c(plVar10,0,&local_c8,0xffffffff,&local_88);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x3c0) + 0x58);
  if (plVar10 == (long *)0x0) {
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d829fc(0,&local_c0,&local_88);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d829fc(plVar10,&local_c0,&local_88);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x3c0) + 0x58);
  if (plVar10 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    FUN_00d819c8(0,plVar10,0);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  FUN_01271098(*(undefined8 *)(param_1 + 0x3c0),0x12);
  *(undefined1 *)(*(long *)(param_1 + 0x3c0) + 0x28a) = 1;
  local_a8 = (undefined1 *)0xf6c75e1d89bbded5;
  pcStack_a0 = PTR_s_VfxFastTransparent_047e1600;
  local_98 = 0x1f;
  local_90 = (long *)0x0;
  FUN_01464dd0(&local_88,&local_a8,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_f0,plVar22,&local_88);
  plVar10 = *(long **)(param_1 + 0x3a8);
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  uVar21 = local_f0;
  local_f0 = 0;
  *(undefined8 *)(param_1 + 0x3a8) = uVar21;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  *(undefined4 *)(*(long *)(param_1 + 0x3a8) + 0x1e0) = 2;
  uVar21 = *(undefined8 *)(param_1 + 0x3a8);
  uVar7 = FUN_01464df0(0x8a,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar21,uVar7);
  plVar10 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x58);
  if (plVar10 == (long *)0x0) {
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d8219c(0,0,&local_c8,0xffffffff,&local_88);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d8219c(plVar10,0,&local_c8,0xffffffff,&local_88);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x58);
  if (plVar10 == (long *)0x0) {
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d829fc(0,&local_c0,&local_88);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d829fc(plVar10,&local_c0,&local_88);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x58);
  if (plVar10 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    FUN_00d819c8(0,plVar10,0);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x3a8) + 0x28a) = 1;
  local_a8 = (undefined1 *)0x3dd9b363950db482;
  pcStack_a0 = PTR_s_VfxFastAdditionalTransparent_047e1608;
  local_98 = 0x1f;
  local_90 = (long *)0x0;
  FUN_01464dd0(&local_88,&local_a8,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_f0,plVar22,&local_88);
  plVar10 = *(long **)(param_1 + 0x3b0);
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  uVar21 = local_f0;
  local_f0 = 0;
  *(undefined8 *)(param_1 + 0x3b0) = uVar21;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  *(undefined4 *)(*(long *)(param_1 + 0x3b0) + 0x1e0) = 2;
  uVar21 = *(undefined8 *)(param_1 + 0x3b0);
  uVar7 = FUN_01464df0(0x8b,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar21,uVar7);
  plVar10 = *(long **)(*(long *)(param_1 + 0x3b0) + 0x58);
  if (plVar10 == (long *)0x0) {
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d8219c(0,0,&local_c8,0xffffffff,&local_88);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d8219c(plVar10,0,&local_c8,0xffffffff,&local_88);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x3b0) + 0x58);
  if (plVar10 == (long *)0x0) {
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d829fc(0,&local_c0,&local_88);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d829fc(plVar10,&local_c0,&local_88);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x3b0) + 0x58);
  if (plVar10 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    FUN_00d819c8(0,plVar10,0);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x3b0) + 0x28a) = 1;
  local_a8 = (undefined1 *)0xab7303624130ec51;
  pcStack_a0 = PTR_s_VfxFastSubtractionTransparent_047e1610;
  local_98 = 0x1f;
  local_90 = (long *)0x0;
  FUN_01464dd0(&local_88,&local_a8,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_f0,plVar22,&local_88);
  plVar10 = *(long **)(param_1 + 0x3b8);
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  uVar21 = local_f0;
  local_f0 = 0;
  *(undefined8 *)(param_1 + 0x3b8) = uVar21;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  *(undefined4 *)(*(long *)(param_1 + 0x3b8) + 0x1e0) = 2;
  uVar21 = *(undefined8 *)(param_1 + 0x3b8);
  uVar7 = FUN_01464df0(0x8c,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar21,uVar7);
  plVar10 = *(long **)(*(long *)(param_1 + 0x3b8) + 0x58);
  if (plVar10 == (long *)0x0) {
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d8219c(0,0,&local_c8,0xffffffff,&local_88);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d8219c(plVar10,0,&local_c8,0xffffffff,&local_88);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x3b8) + 0x58);
  if (plVar10 == (long *)0x0) {
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d829fc(0,&local_c0,&local_88);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d829fc(plVar10,&local_c0,&local_88);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x3b8) + 0x58);
  if (plVar10 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    FUN_00d819c8(0,plVar10,0);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x3b8) + 0x28a) = 1;
  puVar6 = PTR_s_VfxFastComposite_047e1618;
  uVar21 = *param_2;
  local_98 = 0x1f;
  local_90 = (long *)0x0;
  local_a8 = (undefined1 *)0xa570189337f64e98;
  pcStack_a0 = PTR_s_VfxFastComposite_047e1618;
  FUN_01464dd0(&local_88,&local_a8,*(undefined8 *)(param_1 + 0x380));
  FUN_012710b8(&local_f0,uVar21,&local_88);
  plVar10 = *(long **)(param_1 + 0x3d8);
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  uVar21 = local_f0;
  local_f0 = 0;
  *(undefined8 *)(param_1 + 0x3d8) = uVar21;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  uVar21 = *(undefined8 *)(param_1 + 0x3d8);
  uVar7 = FUN_01464df0(0x8d,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar21,uVar7);
  FUN_01271098(*(undefined8 *)(param_1 + 0x3d8),0x12);
  plVar10 = *(long **)(*(long *)(param_1 + 0x3d8) + 0x58);
  if (plVar10 == (long *)0x0) {
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d8219c(0,0,&local_b0,0xffffffff,&local_88);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d8219c(plVar10,0,&local_b0,0xffffffff,&local_88);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x3d8) + 0x58);
  if (plVar10 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    FUN_00d819c8(0,plVar10,0);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  local_88 = 0xe9cc127eac0e0df1;
  puStack_80 = PTR_s_CopyImage_047d8ad8;
  local_78 = 0x1f;
  local_70 = (long *)0x0;
  FUN_012a632c(&local_a8,plVar23,&local_88);
  plVar10 = *(long **)(param_1 + 0x3e0);
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  puVar12 = local_a8;
  local_a8 = (undefined1 *)0x0;
  *(undefined1 **)(param_1 + 0x3e0) = puVar12;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))(local_70);
    puVar12 = *(undefined1 **)(param_1 + 0x3e0);
  }
  FUN_00eb6400(puVar12);
  FUN_00d100a8(*(undefined8 *)(param_1 + 0x3e0));
  puVar8 = (undefined8 *)FUN_0166cefc();
  local_78 = 0x1f;
  local_70 = (long *)0x0;
  local_a8 = (undefined1 *)0x56ce5af419b06b46;
  pcStack_a0 = "[Vfx Fast Composite]";
  local_98 = 0x14;
  local_90 = (long *)0x0;
  local_88 = 0xa570189337f64e98;
  puStack_80 = puVar6;
  FUN_01343d88(&local_f0,*puVar8,&local_88,&local_a8,0);
  plVar10 = *(long **)(param_1 + 1000);
  *(undefined8 *)(param_1 + 1000) = 0;
  puVar6 = PTR_s_VfxFast_047e15f0;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  uVar21 = local_f0;
  local_f0 = 0;
  *(undefined8 *)(param_1 + 1000) = uVar21;
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  lVar24 = *(long *)(param_1 + 1000);
  uVar21 = FUN_015f804c(*(undefined8 *)(param_1 + 0x3e0));
  FUN_00d10690(*(undefined8 *)(lVar24 + 200),0,uVar21);
  FUN_00eb2008(*(undefined8 *)(*(long *)(param_1 + 1000) + 200),4);
  FUN_00eb3bec(*(undefined8 *)(*(long *)(param_1 + 1000) + 200),0);
  FUN_00eb4900(*(undefined8 *)(*(long *)(param_1 + 1000) + 200),0);
  FUN_00eb2d18(*(undefined8 *)(*(long *)(param_1 + 1000) + 200),2,1);
  FUN_016a74cc(*(undefined8 *)(param_1 + 1000),0,&local_c8,0);
  FUN_01559fbc(*(undefined8 *)(param_1 + 1000),0,auVar26._0_8_,auVar26._8_8_,0);
  local_d8 = 2;
  local_f0 = 0x200000000;
  uStack_e8 = 0x500000001;
  local_e0 = 0x100000001;
  local_100 = FUN_015b2874(*param_2,&local_f0);
  FUN_00ebe848(*(undefined8 *)(*(long *)(param_1 + 1000) + 200),0,local_100);
  FUN_00eb1310(*(undefined8 *)(*(long *)(param_1 + 1000) + 200),0,1);
  puVar8 = (undefined8 *)FUN_0166cefc();
  local_78 = 0x1f;
  local_70 = (long *)0x0;
  local_a8 = (undefined1 *)0x143edb5d9f630640;
  pcStack_a0 = "VFX2:SyncSmallDepth";
  local_98 = 0x13;
  local_90 = (long *)0x0;
  local_88 = 0x5b86ab8f6f1d1e69;
  puStack_80 = puVar6;
  FUN_00dfeda8(&local_108,*puVar8,&local_88,&local_a8,0);
  plVar10 = *(long **)(param_1 + 0x3f0);
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  uVar21 = local_108;
  local_108 = 0;
  *(undefined8 *)(param_1 + 0x3f0) = uVar21;
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  *(undefined4 *)(*(long *)(param_1 + 0x3f0) + 0xf0) = 0xffffff9c;
  lVar24 = DAT_0485a0f0;
  lVar17 = *(long *)(param_1 + 1000);
  if (*(long *)(DAT_0485a0f0 + 0x38) != *(long *)(DAT_0485a0f0 + 0x30)) {
    *(ulong *)(lVar17 + 0xd0) = *(ulong *)(lVar17 + 0xd0) & 0xfffffffe;
    *(ulong *)(*(long *)(param_1 + 0x3f0) + 0xd0) =
         *(ulong *)(*(long *)(param_1 + 0x3f0) + 0xd0) & 0xfffffffe;
    lVar17 = *(long *)(param_1 + 1000);
    if (1 < (ulong)((*(long *)(lVar24 + 0x38) - *(long *)(lVar24 + 0x30) >> 4) * -0x5555555555555555
                   )) {
      *(ulong *)(lVar17 + 0xd0) = *(ulong *)(lVar17 + 0xd0) & 0xfffffffd;
      *(ulong *)(*(long *)(param_1 + 0x3f0) + 0xd0) =
           *(ulong *)(*(long *)(param_1 + 0x3f0) + 0xd0) & 0xfffffffd;
      lVar17 = *(long *)(param_1 + 1000);
      if (2 < (ulong)((*(long *)(lVar24 + 0x38) - *(long *)(lVar24 + 0x30) >> 4) *
                     -0x5555555555555555)) {
        *(ulong *)(lVar17 + 0xd0) = *(ulong *)(lVar17 + 0xd0) & 0xfffffffb;
        *(ulong *)(*(long *)(param_1 + 0x3f0) + 0xd0) =
             *(ulong *)(*(long *)(param_1 + 0x3f0) + 0xd0) & 0xfffffffb;
        lVar17 = *(long *)(param_1 + 1000);
        if (3 < (ulong)((*(long *)(lVar24 + 0x38) - *(long *)(lVar24 + 0x30) >> 4) *
                       -0x5555555555555555)) {
          uVar13 = 3;
          do {
            uVar18 = (uint)uVar13;
            uVar13 = uVar13 + 1;
            uVar15 = (ulong)(uint)~(1 << (ulong)(uVar18 & 0x1f));
            *(ulong *)(lVar17 + 0xd0) = *(ulong *)(lVar17 + 0xd0) & uVar15;
            *(ulong *)(*(long *)(param_1 + 0x3f0) + 0xd0) =
                 *(ulong *)(*(long *)(param_1 + 0x3f0) + 0xd0) & uVar15;
            lVar17 = *(long *)(param_1 + 1000);
          } while (uVar13 < (ulong)((*(long *)(lVar24 + 0x38) - *(long *)(lVar24 + 0x30) >> 4) *
                                   -0x5555555555555555));
        }
      }
    }
  }
  *(ulong *)(lVar17 + 0xd0) =
       (ulong)(*(uint *)(lVar17 + 0xd0) | 1 << (ulong)(*(uint *)(param_1 + 0x380) & 0x1f));
  *(ulong *)(*(long *)(param_1 + 0x3f0) + 0xd0) =
       (ulong)(*(uint *)(*(long *)(param_1 + 0x3f0) + 0xd0) |
              1 << (ulong)(*(uint *)(param_1 + 0x380) & 0x1f));
  local_a8 = (undefined1 *)0x2e2befbb0a24dfec;
  pcStack_a0 = PTR_s_kAfterVfx_047e1180;
  local_98 = 0x1f;
  local_90 = (long *)0x0;
  FUN_01464dd0(&local_88,&local_a8,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_108,plVar22,&local_88);
  plVar10 = *(long **)(param_1 + 0x3f8);
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  uVar21 = local_108;
  local_108 = 0;
  *(undefined8 *)(param_1 + 0x3f8) = uVar21;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  uVar21 = *(undefined8 *)(param_1 + 0x3f8);
  uVar7 = FUN_01464df0(0x8f,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar21,uVar7);
  plVar10 = *(long **)(*(long *)(param_1 + 0x3f8) + 0x58);
  if (plVar10 == (long *)0x0) {
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d8219c(0,0,&local_b0,0xffffffff,&local_88);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d8219c(plVar10,0,&local_b0,0xffffffff,&local_88);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x3f8) + 0x58);
  if (plVar10 == (long *)0x0) {
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d829fc(0,&local_b8,&local_88);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    local_88 = (ulong)local_88._1_7_ << 8;
    FUN_00d829fc(plVar10,&local_b8,&local_88);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x3f8) + 0x58);
  if (plVar10 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar24 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar24 == -1) goto LAB_01464d40;
    FUN_00d819c8(0,plVar10,0);
    do {
      lVar24 = *plVar1;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  if (plVar20 != (long *)0x0) {
    plVar10 = plVar20 + 5;
    do {
      lVar24 = *plVar10;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  if (local_d0 != (long *)0x0) {
    plVar20 = local_d0 + 5;
    do {
      lVar24 = *plVar20;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *(int *)plVar20 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  if (plVar19 != (long *)0x0) {
    plVar20 = plVar19 + 5;
    do {
      lVar24 = *plVar20;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *(int *)plVar20 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  if (local_c8 != (long *)0x0) {
    plVar19 = local_c8 + 5;
    do {
      lVar24 = *plVar19;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *(int *)plVar19 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*local_c8 + 0x10))();
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  if (local_c0 != (long *)0x0) {
    plVar19 = local_c0 + 5;
    do {
      lVar24 = *plVar19;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *(int *)plVar19 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  if (local_b8 != (long *)0x0) {
    plVar19 = local_b8 + 5;
    do {
      lVar24 = *plVar19;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *(int *)plVar19 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  if (local_b0 != (long *)0x0) {
    plVar19 = local_b0 + 5;
    do {
      lVar24 = *plVar19;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *(int *)plVar19 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  if (plVar23 != (long *)0x0) {
    plVar19 = plVar23 + 5;
    do {
      lVar24 = *plVar19;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *(int *)plVar19 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
    }
    else if ((int)lVar24 == 0) goto LAB_01464d18;
  }
  if (plVar22 != (long *)0x0) {
    plVar23 = plVar22 + 5;
    do {
      lVar24 = *plVar23;
      iVar25 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar4) {
        *(int *)plVar23 = iVar25;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
    else if ((int)lVar24 == 0) {
LAB_01464d18:
      pcVar9 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
LAB_01464d38:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",pcVar9
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


