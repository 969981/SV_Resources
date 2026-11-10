/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e72c64; name: FUN_00e72c64
 */


void FUN_00e72c64(long param_1,ulong param_2,long param_3,undefined8 *param_4,undefined8 *param_5)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 *puVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar19;
  undefined8 *puVar18;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long *plVar27;
  long *plVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  ulong local_88;
  ulong local_80 [2];
  ulong local_68;
  
  fVar42 = *(float *)(param_3 + 0x34);
  if (param_4 == (undefined8 *)0x0) {
    if (param_5 != (undefined8 *)0x0) {
      fVar38 = (float)*(ulong *)(param_1 + 0x70);
      fVar37 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
      fVar36 = (float)*(undefined8 *)(param_1 + 0x60);
      fVar34 = (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
      fVar35 = (float)*(undefined8 *)(param_1 + 0x50);
      local_68 = (ulong)(((((float)*param_5 - fVar42) - fVar36) * fVar38) / fVar35);
      uVar22 = (ulong)(((((float)param_5[1] - fVar42) - fVar37) * fVar38) / fVar34);
      local_88 = *(ulong *)(param_1 + 0x70) - 1;
      puVar3 = &local_88;
      if ((long)local_68 <= (long)local_88) {
        puVar3 = &local_68;
      }
      local_80[0] = 0;
      puVar4 = local_80;
      if (-1 < (long)local_68) {
        puVar4 = puVar3;
      }
      uVar24 = *puVar4;
      local_68 = uVar22;
      local_80[0] = 0;
      puVar3 = &local_88;
      if ((long)uVar22 <= (long)local_88) {
        puVar3 = &local_68;
      }
      puVar4 = local_80;
      if (-1 < (long)uVar22) {
        puVar4 = puVar3;
      }
      uVar22 = *puVar4;
      local_68 = (ulong)((((fVar42 + (float)*param_5) - fVar36) * fVar38) / fVar35);
      local_80[0] = 0;
      puVar3 = &local_88;
      if ((long)local_68 <= (long)local_88) {
        puVar3 = &local_68;
      }
      puVar4 = local_80;
      if (-1 < (long)local_68) {
        puVar4 = puVar3;
      }
      uVar32 = *puVar4;
      local_80[0] = 0;
      local_68 = (ulong)((((fVar42 + (float)param_5[1]) - fVar37) * fVar38) / fVar34);
      puVar3 = &local_88;
      if ((long)local_68 <= (long)local_88) {
        puVar3 = &local_68;
      }
      puVar4 = local_80;
      if (-1 < (long)local_68) {
        puVar4 = puVar3;
      }
      uVar33 = *puVar4;
      if ((uVar22 < uVar33 + 1) && (uVar24 < uVar32 + 1)) {
        uVar23 = 1L << (param_2 & 0x3f);
        uVar26 = ~uVar23;
        do {
          uVar25 = uVar24;
          do {
            lVar5 = *(long *)(param_1 + 0x78);
            lVar21 = uVar25 + *(long *)(param_1 + 0x70) * uVar22;
            plVar27 = (long *)(lVar5 + lVar21 * 0x28 + 8);
            lVar9 = *plVar27;
            if (lVar9 != 0) {
              if ((*(ulong *)(lVar9 + 0x90) & uVar23) != 0) {
                FUN_00e746ac(param_3);
                *(ulong *)(*plVar27 + 0x90) = *(ulong *)(*plVar27 + 0x90) & uVar26;
                lVar9 = *plVar27;
              }
              uVar30 = *(ulong *)(lVar9 + 0x88);
              uVar17 = uVar30 & uVar26;
              *(ulong *)(lVar9 + 0x88) = uVar17;
              if (uVar30 != 0 && uVar17 == 0) {
                plVar28 = *(long **)(lVar9 + 0x58);
                for (plVar27 = *(long **)(lVar9 + 0x50); plVar27 != plVar28; plVar27 = plVar27 + 1)
                {
                  plVar14 = (long *)*plVar27;
                  plVar1 = plVar14 + 0xb;
                  lVar9 = nn::os::GetCurrentThread();
                  while (*plVar1 == 0) {
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar8) {
                      *plVar1 = lVar9;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                    if (cVar7 == '\0') goto LAB_00e741d4;
                  }
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(plVar14 + 0xc));
                  do {
                    if (*plVar1 != 0) {
                      do {
                        ClearExclusiveLocal();
                        nn::os::WaitLightEvent((LightEventType *)(plVar14 + 0xc));
                        while (*plVar1 == 0) {
                          cVar7 = '\x01';
                          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                          if (bVar8) {
                            *plVar1 = lVar9;
                            cVar7 = ExclusiveMonitorsStatus();
                          }
                          if (cVar7 == '\0') goto LAB_00e741d4;
                        }
                      } while( true );
                    }
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar8) {
                      *plVar1 = lVar9;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
LAB_00e741d4:
                  if ((plVar14[8] != 0) && (lVar9 = *(long *)(plVar14[8] + 0x10), lVar9 != 0)) {
                    (**(code **)(*plVar14 + 0x80))(plVar14,lVar9 + -0x28);
                  }
                  *(undefined1 *)(plVar14 + 10) = 0;
                  plVar14[0xb] = 0;
                  nn::os::SignalLightEvent((LightEventType *)(plVar14 + 0xc));
                }
              }
            }
            bVar8 = uVar25 != uVar32;
            uVar25 = uVar25 + 1;
            *(undefined1 *)(lVar5 + lVar21 * 0x28) = 0;
          } while (bVar8);
          bVar8 = uVar22 != uVar33;
          uVar22 = uVar22 + 1;
        } while (bVar8);
      }
    }
  }
  else {
    fVar34 = *(float *)(param_3 + 0x30);
    local_88 = *(ulong *)(param_1 + 0x70);
    fVar36 = (float)local_88;
    fVar41 = fVar34 + (float)*param_4;
    fVar39 = (float)*(undefined8 *)(param_1 + 0x60);
    fVar43 = ((float)*param_4 - fVar34) - fVar39;
    fVar35 = (float)param_4[1];
    fVar40 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
    fVar38 = (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
    fVar37 = (float)*(undefined8 *)(param_1 + 0x50);
    if (param_5 == (undefined8 *)0x0) {
      local_68 = (ulong)((fVar43 * fVar36) / fVar37);
      local_88 = local_88 - 1;
      puVar3 = &local_88;
      if ((long)local_68 <= (long)local_88) {
        puVar3 = &local_68;
      }
      puVar4 = local_80;
      if (-1 < (long)local_68) {
        puVar4 = puVar3;
      }
      local_80[0] = 0;
      uVar22 = *puVar4;
      local_80[0] = 0;
      local_68 = (ulong)((((fVar35 - fVar34) - fVar40) * fVar36) / fVar38);
      puVar3 = &local_88;
      if ((long)local_68 <= (long)local_88) {
        puVar3 = &local_68;
      }
      puVar4 = local_80;
      if (-1 < (long)local_68) {
        puVar4 = puVar3;
      }
      uVar24 = *puVar4;
      local_68 = (ulong)(((fVar41 - fVar39) * fVar36) / fVar37);
      puVar3 = &local_88;
      if ((long)local_68 <= (long)local_88) {
        puVar3 = &local_68;
      }
      local_80[0] = 0;
      puVar4 = local_80;
      if (-1 < (long)local_68) {
        puVar4 = puVar3;
      }
      uVar32 = *puVar4;
      local_68 = (ulong)((((fVar34 + fVar35) - fVar40) * fVar36) / fVar38);
      local_80[0] = 0;
      puVar3 = &local_88;
      if ((long)local_68 <= (long)local_88) {
        puVar3 = &local_68;
      }
      puVar4 = local_80;
      if (-1 < (long)local_68) {
        puVar4 = puVar3;
      }
      uVar33 = *puVar4;
      if (uVar33 + 1 <= uVar24) {
        return;
      }
      if (uVar32 + 1 <= uVar22) {
        return;
      }
      uVar23 = 1L << (param_2 & 0x3f);
      do {
        uVar26 = uVar22;
        do {
          lVar5 = *(long *)(param_1 + 0x78);
          lVar21 = uVar26 + *(long *)(param_1 + 0x70) * uVar24;
          plVar27 = (long *)(lVar5 + lVar21 * 0x28 + 8);
          lVar9 = *plVar27;
          if (lVar9 != 0) {
            uVar25 = *(ulong *)(lVar9 + 0x88);
            if (uVar25 == 0) {
              puVar18 = *(undefined8 **)(lVar9 + 0x50);
              puVar6 = *(undefined8 **)(lVar9 + 0x58);
              if (puVar18 == puVar6) {
                uVar25 = 0;
              }
              else {
                FUN_00f505cc(*puVar18,1);
                if (puVar18 + 1 != puVar6) {
                  FUN_00f505cc(puVar18[1],1);
                  if (puVar18 + 2 != puVar6) {
                    puVar18 = puVar18 + 2;
                    do {
                      puVar19 = puVar18 + 1;
                      FUN_00f505cc(*puVar18,1);
                      puVar18 = puVar19;
                    } while (puVar6 != puVar19);
                  }
                }
                uVar25 = *(ulong *)(lVar9 + 0x88);
              }
            }
            *(ulong *)(lVar9 + 0x88) = uVar25 | uVar23;
            if ((*(ulong *)(*plVar27 + 0x90) & uVar23) == 0) {
              FUN_00e74338(param_3);
              *(ulong *)(*plVar27 + 0x90) = *(ulong *)(*plVar27 + 0x90) | uVar23;
            }
          }
          bVar8 = uVar26 != uVar32;
          uVar26 = uVar26 + 1;
          *(undefined1 *)(lVar5 + lVar21 * 0x28) = 1;
        } while (bVar8);
        bVar8 = uVar24 != uVar33;
        uVar24 = uVar24 + 1;
      } while (bVar8);
    }
    else {
      local_68 = (ulong)((fVar43 * fVar36) / fVar37);
      uVar22 = (ulong)(((fVar41 - fVar39) * fVar36) / fVar37);
      local_88 = local_88 - 1;
      puVar3 = &local_88;
      if ((long)local_68 <= (long)local_88) {
        puVar3 = &local_68;
      }
      puVar4 = local_80;
      if (-1 < (long)local_68) {
        puVar4 = puVar3;
      }
      local_80[0] = 0;
      uVar24 = (ulong)((((fVar34 + fVar35) - fVar40) * fVar36) / fVar38);
      local_68 = (ulong)((((fVar35 - fVar34) - fVar40) * fVar36) / fVar38);
      puVar3 = &local_88;
      if ((long)local_68 <= (long)local_88) {
        puVar3 = &local_68;
      }
      puVar2 = local_80;
      if (-1 < (long)local_68) {
        puVar2 = puVar3;
      }
      uVar32 = *puVar4;
      local_80[0] = 0;
      puVar3 = &local_88;
      if ((long)uVar22 <= (long)local_88) {
        puVar3 = &local_68;
      }
      uVar33 = *puVar2;
      local_68 = uVar22;
      local_80[0] = 0;
      puVar4 = local_80;
      if (-1 < (long)uVar22) {
        puVar4 = puVar3;
      }
      uVar22 = *puVar4;
      local_68 = uVar24;
      local_80[0] = 0;
      puVar3 = &local_88;
      if ((long)uVar24 <= (long)local_88) {
        puVar3 = &local_68;
      }
      puVar4 = local_80;
      if (-1 < (long)uVar24) {
        puVar4 = puVar3;
      }
      uVar23 = *puVar4;
      uVar24 = (ulong)(((((float)param_5[1] - fVar34) - fVar40) * fVar36) / fVar38);
      local_68 = (ulong)(((((float)*param_5 - fVar34) - fVar39) * fVar36) / fVar37);
      local_80[0] = 0;
      puVar3 = &local_88;
      if ((long)local_68 <= (long)local_88) {
        puVar3 = &local_68;
      }
      puVar4 = local_80;
      if (-1 < (long)local_68) {
        puVar4 = puVar3;
      }
      uVar26 = *puVar4;
      local_80[0] = 0;
      puVar3 = &local_88;
      if ((long)uVar24 <= (long)local_88) {
        puVar3 = &local_68;
      }
      local_68 = uVar24;
      puVar4 = local_80;
      if (-1 < (long)uVar24) {
        puVar4 = puVar3;
      }
      uVar24 = *puVar4;
      local_68 = (ulong)((((fVar34 + (float)*param_5) - fVar39) * fVar36) / fVar37);
      local_80[0] = 0;
      puVar3 = &local_88;
      if ((long)local_68 <= (long)local_88) {
        puVar3 = &local_68;
      }
      puVar4 = local_80;
      if (-1 < (long)local_68) {
        puVar4 = puVar3;
      }
      local_80[0] = 0;
      uVar25 = *puVar4 + 1;
      local_68 = (ulong)((((fVar34 + (float)param_5[1]) - fVar40) * fVar36) / fVar38);
      puVar3 = &local_88;
      if ((long)local_68 <= (long)local_88) {
        puVar3 = &local_68;
      }
      uVar30 = uVar22 + 1;
      uVar17 = uVar23 + 1;
      puVar4 = local_80;
      if (-1 < (long)local_68) {
        puVar4 = puVar3;
      }
      uVar29 = *puVar4;
      uVar31 = uVar25;
      if (uVar30 <= uVar25) {
        uVar31 = uVar22 + 1;
      }
      uVar12 = uVar24;
      if (uVar17 <= uVar24) {
        uVar12 = uVar23 + 1;
      }
      if ((uVar33 < uVar12) && (uVar32 < uVar31)) {
        uVar10 = 1L << (param_2 & 0x3f);
        uVar20 = uVar33;
        do {
          uVar13 = uVar32;
          do {
            lVar5 = *(long *)(param_1 + 0x78);
            lVar21 = uVar13 + *(long *)(param_1 + 0x70) * uVar20;
            plVar27 = (long *)(lVar5 + lVar21 * 0x28 + 8);
            lVar9 = *plVar27;
            if (lVar9 != 0) {
              uVar16 = *(ulong *)(lVar9 + 0x88);
              if (uVar16 == 0) {
                puVar18 = *(undefined8 **)(lVar9 + 0x50);
                puVar6 = *(undefined8 **)(lVar9 + 0x58);
                if (puVar18 == puVar6) {
                  uVar16 = 0;
                }
                else {
                  FUN_00f505cc(*puVar18,1);
                  if (puVar18 + 1 != puVar6) {
                    FUN_00f505cc(puVar18[1],1);
                    for (puVar18 = puVar18 + 2; puVar18 != puVar6; puVar18 = puVar18 + 1) {
                      FUN_00f505cc(*puVar18,1);
                    }
                  }
                  uVar16 = *(ulong *)(lVar9 + 0x88);
                }
              }
              *(ulong *)(lVar9 + 0x88) = uVar16 | uVar10;
              if ((*(ulong *)(*plVar27 + 0x90) & uVar10) == 0) {
                FUN_00e74338(param_3);
                *(ulong *)(*plVar27 + 0x90) = *(ulong *)(*plVar27 + 0x90) | uVar10;
              }
            }
            uVar13 = uVar13 + 1;
            *(undefined1 *)(lVar5 + lVar21 * 0x28) = 1;
          } while (uVar13 != uVar31);
          uVar20 = uVar20 + 1;
        } while (uVar20 != uVar12);
      }
      if (uVar24 <= uVar33) {
        uVar24 = uVar33;
      }
      uVar31 = uVar26;
      if (uVar30 <= uVar26) {
        uVar31 = uVar30;
      }
      uVar29 = uVar29 + 1;
      if ((uVar32 < uVar31) && (uVar24 < uVar17)) {
        uVar12 = 1L << (param_2 & 0x3f);
        do {
          uVar20 = uVar32;
          do {
            lVar5 = *(long *)(param_1 + 0x78);
            lVar9 = uVar20 + *(long *)(param_1 + 0x70) * uVar24;
            plVar27 = (long *)(lVar5 + lVar9 * 0x28 + 8);
            lVar21 = *plVar27;
            if (lVar21 != 0) {
              uVar10 = *(ulong *)(lVar21 + 0x88);
              if (uVar10 == 0) {
                puVar18 = *(undefined8 **)(lVar21 + 0x50);
                puVar6 = *(undefined8 **)(lVar21 + 0x58);
                if (puVar18 == puVar6) {
                  uVar10 = 0;
                }
                else {
                  FUN_00f505cc(*puVar18,1);
                  if (puVar18 + 1 != puVar6) {
                    FUN_00f505cc(puVar18[1],1);
                    for (puVar18 = puVar18 + 2; puVar18 != puVar6; puVar18 = puVar18 + 1) {
                      FUN_00f505cc(*puVar18,1);
                    }
                  }
                  uVar10 = *(ulong *)(lVar21 + 0x88);
                }
              }
              *(ulong *)(lVar21 + 0x88) = uVar10 | uVar12;
              if ((*(ulong *)(*plVar27 + 0x90) & uVar12) == 0) {
                FUN_00e74338(param_3);
                *(ulong *)(*plVar27 + 0x90) = *(ulong *)(*plVar27 + 0x90) | uVar12;
              }
            }
            uVar20 = uVar20 + 1;
            *(undefined1 *)(lVar5 + lVar9 * 0x28) = 1;
          } while (uVar20 != uVar31);
          bVar8 = uVar24 != uVar23;
          uVar24 = uVar24 + 1;
        } while (bVar8);
      }
      if (uVar25 <= uVar32) {
        uVar25 = uVar32;
      }
      uVar24 = uVar29;
      if (uVar17 <= uVar29) {
        uVar24 = uVar17;
      }
      if ((uVar25 < uVar30) && (uVar33 < uVar24)) {
        uVar12 = 1L << (param_2 & 0x3f);
        uVar31 = uVar33;
        do {
          uVar20 = uVar25;
          do {
            lVar5 = *(long *)(param_1 + 0x78);
            lVar9 = uVar20 + *(long *)(param_1 + 0x70) * uVar31;
            plVar27 = (long *)(lVar5 + lVar9 * 0x28 + 8);
            lVar21 = *plVar27;
            if (lVar21 != 0) {
              uVar10 = *(ulong *)(lVar21 + 0x88);
              if (uVar10 == 0) {
                puVar18 = *(undefined8 **)(lVar21 + 0x50);
                puVar6 = *(undefined8 **)(lVar21 + 0x58);
                if (puVar18 == puVar6) {
                  uVar10 = 0;
                }
                else {
                  FUN_00f505cc(*puVar18,1);
                  if (puVar18 + 1 != puVar6) {
                    FUN_00f505cc(puVar18[1],1);
                    for (puVar18 = puVar18 + 2; puVar18 != puVar6; puVar18 = puVar18 + 1) {
                      FUN_00f505cc(*puVar18,1);
                    }
                  }
                  uVar10 = *(ulong *)(lVar21 + 0x88);
                }
              }
              *(ulong *)(lVar21 + 0x88) = uVar10 | uVar12;
              if ((*(ulong *)(*plVar27 + 0x90) & uVar12) == 0) {
                FUN_00e74338(param_3);
                *(ulong *)(*plVar27 + 0x90) = *(ulong *)(*plVar27 + 0x90) | uVar12;
              }
            }
            bVar8 = uVar20 != uVar22;
            uVar20 = uVar20 + 1;
            *(undefined1 *)(lVar5 + lVar9 * 0x28) = 1;
          } while (bVar8);
          uVar31 = uVar31 + 1;
        } while (uVar31 != uVar24);
      }
      if (uVar26 <= uVar32) {
        uVar26 = uVar32;
      }
      if (uVar29 <= uVar33) {
        uVar29 = uVar33;
      }
      if ((uVar26 < uVar30) && (uVar29 < uVar17)) {
        uVar24 = 1L << (param_2 & 0x3f);
        do {
          uVar32 = uVar26;
          do {
            lVar5 = *(long *)(param_1 + 0x78);
            lVar9 = uVar32 + *(long *)(param_1 + 0x70) * uVar29;
            plVar27 = (long *)(lVar5 + lVar9 * 0x28 + 8);
            lVar21 = *plVar27;
            if (lVar21 != 0) {
              uVar33 = *(ulong *)(lVar21 + 0x88);
              if (uVar33 == 0) {
                puVar18 = *(undefined8 **)(lVar21 + 0x50);
                puVar6 = *(undefined8 **)(lVar21 + 0x58);
                if (puVar18 == puVar6) {
                  uVar33 = 0;
                }
                else {
                  FUN_00f505cc(*puVar18,1);
                  if (puVar18 + 1 != puVar6) {
                    FUN_00f505cc(puVar18[1],1);
                    for (puVar18 = puVar18 + 2; puVar18 != puVar6; puVar18 = puVar18 + 1) {
                      FUN_00f505cc(*puVar18,1);
                    }
                  }
                  uVar33 = *(ulong *)(lVar21 + 0x88);
                }
              }
              *(ulong *)(lVar21 + 0x88) = uVar33 | uVar24;
              if ((*(ulong *)(*plVar27 + 0x90) & uVar24) == 0) {
                FUN_00e74338(param_3);
                *(ulong *)(*plVar27 + 0x90) = *(ulong *)(*plVar27 + 0x90) | uVar24;
              }
            }
            bVar8 = uVar32 != uVar22;
            uVar32 = uVar32 + 1;
            *(undefined1 *)(lVar5 + lVar9 * 0x28) = 1;
          } while (bVar8);
          bVar8 = uVar29 != uVar23;
          uVar29 = uVar29 + 1;
        } while (bVar8);
      }
    }
    if (param_5 != (undefined8 *)0x0) {
      fVar38 = (float)*(ulong *)(param_1 + 0x70);
      fVar37 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
      fVar36 = (float)*(undefined8 *)(param_1 + 0x60);
      fVar35 = (float)*(undefined8 *)(param_1 + 0x50);
      local_88 = *(ulong *)(param_1 + 0x70) - 1;
      local_68 = (ulong)(((((float)*param_5 - fVar42) - fVar36) * fVar38) / fVar35);
      fVar34 = (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
      uVar22 = (ulong)(((((float)param_5[1] - fVar42) - fVar37) * fVar38) / fVar34);
      uVar32 = (ulong)((((fVar42 + (float)param_5[1]) - fVar37) * fVar38) / fVar34);
      uVar24 = (ulong)((((fVar42 + (float)*param_5) - fVar36) * fVar38) / fVar35);
      puVar3 = &local_88;
      if ((long)local_68 <= (long)local_88) {
        puVar3 = &local_68;
      }
      puVar4 = local_80;
      if (-1 < (long)local_68) {
        puVar4 = puVar3;
      }
      puVar3 = &local_88;
      if ((long)uVar22 <= (long)local_88) {
        puVar3 = &local_68;
      }
      local_80[0] = 0;
      puVar2 = local_80;
      if (-1 < (long)uVar22) {
        puVar2 = puVar3;
      }
      uVar33 = *puVar4;
      local_80[0] = 0;
      local_68 = uVar22;
      uVar22 = *puVar2;
      local_68 = uVar24;
      puVar3 = &local_88;
      if ((long)uVar24 <= (long)local_88) {
        puVar3 = &local_68;
      }
      local_80[0] = 0;
      puVar4 = local_80;
      if (-1 < (long)uVar24) {
        puVar4 = puVar3;
      }
      uVar23 = *puVar4;
      local_68 = uVar32;
      local_80[0] = 0;
      uVar24 = (ulong)((((fVar42 + (float)*param_4) - fVar36) * fVar38) / fVar35);
      puVar3 = &local_88;
      if ((long)uVar32 <= (long)local_88) {
        puVar3 = &local_68;
      }
      puVar4 = local_80;
      if (-1 < (long)uVar32) {
        puVar4 = puVar3;
      }
      uVar25 = *puVar4;
      uVar32 = uVar25 + 1;
      local_68 = (ulong)(((((float)*param_4 - fVar42) - fVar36) * fVar38) / fVar35);
      uVar26 = (ulong)(((((float)param_4[1] - fVar42) - fVar37) * fVar38) / fVar34);
      puVar3 = &local_88;
      if ((long)local_68 <= (long)local_88) {
        puVar3 = &local_68;
      }
      local_80[0] = 0;
      puVar4 = local_80;
      if (-1 < (long)local_68) {
        puVar4 = puVar3;
      }
      uVar30 = *puVar4;
      local_80[0] = 0;
      local_68 = uVar26;
      puVar3 = &local_88;
      if ((long)uVar26 <= (long)local_88) {
        puVar3 = &local_68;
      }
      puVar4 = local_80;
      if (-1 < (long)uVar26) {
        puVar4 = puVar3;
      }
      uVar26 = *puVar4;
      puVar3 = &local_88;
      if ((long)uVar24 <= (long)local_88) {
        puVar3 = &local_68;
      }
      local_68 = uVar24;
      puVar4 = local_80;
      if (-1 < (long)uVar24) {
        puVar4 = puVar3;
      }
      local_80[0] = 0;
      local_80[0] = 0;
      uVar24 = *puVar4 + 1;
      local_68 = (ulong)((((fVar42 + (float)param_4[1]) - fVar37) * fVar38) / fVar34);
      puVar3 = &local_88;
      if ((long)local_68 <= (long)local_88) {
        puVar3 = &local_68;
      }
      uVar17 = uVar23 + 1;
      puVar4 = local_80;
      if (-1 < (long)local_68) {
        puVar4 = puVar3;
      }
      uVar29 = *puVar4;
      uVar31 = uVar24;
      if (uVar17 <= uVar24) {
        uVar31 = uVar23 + 1;
      }
      uVar12 = uVar26;
      if (uVar32 <= uVar26) {
        uVar12 = uVar25 + 1;
      }
      if ((uVar22 < uVar12) && (uVar33 < uVar31)) {
        uVar10 = 1L << (param_2 & 0x3f);
        uVar13 = ~uVar10;
        uVar20 = uVar22;
        do {
          uVar16 = uVar33;
          do {
            lVar5 = *(long *)(param_1 + 0x78);
            lVar21 = uVar16 + *(long *)(param_1 + 0x70) * uVar20;
            plVar27 = (long *)(lVar5 + lVar21 * 0x28 + 8);
            lVar9 = *plVar27;
            if (lVar9 != 0) {
              if ((*(ulong *)(lVar9 + 0x90) & uVar10) != 0) {
                FUN_00e746ac(param_3);
                *(ulong *)(*plVar27 + 0x90) = *(ulong *)(*plVar27 + 0x90) & uVar13;
                lVar9 = *plVar27;
              }
              uVar11 = *(ulong *)(lVar9 + 0x88);
              uVar15 = uVar11 & uVar13;
              *(ulong *)(lVar9 + 0x88) = uVar15;
              if (uVar11 != 0 && uVar15 == 0) {
                plVar27 = *(long **)(lVar9 + 0x50);
                plVar28 = *(long **)(lVar9 + 0x58);
                if (plVar27 != plVar28) {
                  do {
                    plVar14 = (long *)*plVar27;
                    plVar1 = plVar14 + 0xb;
                    lVar9 = nn::os::GetCurrentThread();
LAB_00e73798:
                    if (*plVar1 == 0) goto code_r0x00e737a0;
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(plVar14 + 0xc));
                    do {
                      if (*plVar1 != 0) {
                        do {
                          ClearExclusiveLocal();
                          nn::os::WaitLightEvent((LightEventType *)(plVar14 + 0xc));
                          while (*plVar1 == 0) {
                            cVar7 = '\x01';
                            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                            if (bVar8) {
                              *plVar1 = lVar9;
                              cVar7 = ExclusiveMonitorsStatus();
                            }
                            if (cVar7 == '\0') goto LAB_00e737a8;
                          }
                        } while( true );
                      }
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar8) {
                        *plVar1 = lVar9;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
LAB_00e737a8:
                    if ((plVar14[8] != 0) && (lVar9 = *(long *)(plVar14[8] + 0x10), lVar9 != 0)) {
                      (**(code **)(*plVar14 + 0x80))(plVar14,lVar9 + -0x28);
                    }
                    *(undefined1 *)(plVar14 + 10) = 0;
                    plVar14[0xb] = 0;
                    nn::os::SignalLightEvent((LightEventType *)(plVar14 + 0xc));
                    plVar27 = plVar27 + 1;
                    if (plVar27 == plVar28) break;
                  } while( true );
                }
              }
            }
            uVar16 = uVar16 + 1;
            *(undefined1 *)(lVar5 + lVar21 * 0x28) = 0;
          } while (uVar16 != uVar31);
          uVar20 = uVar20 + 1;
        } while (uVar20 != uVar12);
      }
      if (uVar26 <= uVar22) {
        uVar26 = uVar22;
      }
      uVar29 = uVar29 + 1;
      uVar31 = uVar30;
      if (uVar17 <= uVar30) {
        uVar31 = uVar17;
      }
      if ((uVar26 < uVar32) && (uVar33 < uVar31)) {
        uVar12 = 1L << (param_2 & 0x3f);
        uVar20 = ~uVar12;
        do {
          uVar10 = uVar33;
          do {
            lVar5 = *(long *)(param_1 + 0x78);
            lVar21 = uVar10 + *(long *)(param_1 + 0x70) * uVar26;
            plVar27 = (long *)(lVar5 + lVar21 * 0x28 + 8);
            lVar9 = *plVar27;
            if (lVar9 != 0) {
              if ((*(ulong *)(lVar9 + 0x90) & uVar12) != 0) {
                FUN_00e746ac(param_3);
                *(ulong *)(*plVar27 + 0x90) = *(ulong *)(*plVar27 + 0x90) & uVar20;
                lVar9 = *plVar27;
              }
              uVar13 = *(ulong *)(lVar9 + 0x88);
              uVar16 = uVar13 & uVar20;
              *(ulong *)(lVar9 + 0x88) = uVar16;
              if (uVar13 != 0 && uVar16 == 0) {
                plVar27 = *(long **)(lVar9 + 0x50);
                plVar28 = *(long **)(lVar9 + 0x58);
                if (plVar27 != plVar28) {
                  do {
                    plVar14 = (long *)*plVar27;
                    plVar1 = plVar14 + 0xb;
                    lVar9 = nn::os::GetCurrentThread();
LAB_00e73974:
                    if (*plVar1 == 0) goto code_r0x00e7397c;
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(plVar14 + 0xc));
                    do {
                      if (*plVar1 != 0) {
                        do {
                          ClearExclusiveLocal();
                          nn::os::WaitLightEvent((LightEventType *)(plVar14 + 0xc));
                          while (*plVar1 == 0) {
                            cVar7 = '\x01';
                            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                            if (bVar8) {
                              *plVar1 = lVar9;
                              cVar7 = ExclusiveMonitorsStatus();
                            }
                            if (cVar7 == '\0') goto LAB_00e73984;
                          }
                        } while( true );
                      }
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar8) {
                        *plVar1 = lVar9;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
LAB_00e73984:
                    if ((plVar14[8] != 0) && (lVar9 = *(long *)(plVar14[8] + 0x10), lVar9 != 0)) {
                      (**(code **)(*plVar14 + 0x80))(plVar14,lVar9 + -0x28);
                    }
                    *(undefined1 *)(plVar14 + 10) = 0;
                    plVar14[0xb] = 0;
                    nn::os::SignalLightEvent((LightEventType *)(plVar14 + 0xc));
                    plVar27 = plVar27 + 1;
                    if (plVar27 == plVar28) break;
                  } while( true );
                }
              }
            }
            uVar10 = uVar10 + 1;
            *(undefined1 *)(lVar5 + lVar21 * 0x28) = 0;
          } while (uVar10 != uVar31);
          bVar8 = uVar26 != uVar25;
          uVar26 = uVar26 + 1;
        } while (bVar8);
      }
      if (uVar24 <= uVar33) {
        uVar24 = uVar33;
      }
      uVar26 = uVar29;
      if (uVar32 <= uVar29) {
        uVar26 = uVar32;
      }
      if ((uVar22 < uVar26) && (uVar24 < uVar17)) {
        uVar12 = 1L << (param_2 & 0x3f);
        uVar20 = ~uVar12;
        uVar31 = uVar22;
        do {
          uVar10 = uVar24;
          do {
            lVar5 = *(long *)(param_1 + 0x78);
            lVar21 = uVar10 + *(long *)(param_1 + 0x70) * uVar31;
            plVar27 = (long *)(lVar5 + lVar21 * 0x28 + 8);
            lVar9 = *plVar27;
            if (lVar9 != 0) {
              if ((*(ulong *)(lVar9 + 0x90) & uVar12) != 0) {
                FUN_00e746ac(param_3);
                *(ulong *)(*plVar27 + 0x90) = *(ulong *)(*plVar27 + 0x90) & uVar20;
                lVar9 = *plVar27;
              }
              uVar13 = *(ulong *)(lVar9 + 0x88);
              uVar16 = uVar13 & uVar20;
              *(ulong *)(lVar9 + 0x88) = uVar16;
              if (uVar13 != 0 && uVar16 == 0) {
                plVar27 = *(long **)(lVar9 + 0x50);
                plVar28 = *(long **)(lVar9 + 0x58);
                if (plVar27 != plVar28) {
                  do {
                    plVar14 = (long *)*plVar27;
                    plVar1 = plVar14 + 0xb;
                    lVar9 = nn::os::GetCurrentThread();
LAB_00e73b4c:
                    if (*plVar1 == 0) goto code_r0x00e73b54;
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(plVar14 + 0xc));
                    do {
                      if (*plVar1 != 0) {
                        do {
                          ClearExclusiveLocal();
                          nn::os::WaitLightEvent((LightEventType *)(plVar14 + 0xc));
                          while (*plVar1 == 0) {
                            cVar7 = '\x01';
                            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                            if (bVar8) {
                              *plVar1 = lVar9;
                              cVar7 = ExclusiveMonitorsStatus();
                            }
                            if (cVar7 == '\0') goto LAB_00e73b5c;
                          }
                        } while( true );
                      }
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar8) {
                        *plVar1 = lVar9;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
LAB_00e73b5c:
                    if ((plVar14[8] != 0) && (lVar9 = *(long *)(plVar14[8] + 0x10), lVar9 != 0)) {
                      (**(code **)(*plVar14 + 0x80))(plVar14,lVar9 + -0x28);
                    }
                    *(undefined1 *)(plVar14 + 10) = 0;
                    plVar14[0xb] = 0;
                    nn::os::SignalLightEvent((LightEventType *)(plVar14 + 0xc));
                    plVar27 = plVar27 + 1;
                    if (plVar27 == plVar28) break;
                  } while( true );
                }
              }
            }
            *(undefined1 *)(lVar5 + lVar21 * 0x28) = 0;
            bVar8 = uVar10 != uVar23;
            uVar10 = uVar10 + 1;
          } while (bVar8);
          uVar31 = uVar31 + 1;
        } while (uVar31 != uVar26);
      }
      if (uVar30 <= uVar33) {
        uVar30 = uVar33;
      }
      if (uVar29 <= uVar22) {
        uVar29 = uVar22;
      }
      if ((uVar29 < uVar32) && (uVar30 < uVar17)) {
        uVar22 = 1L << (param_2 & 0x3f);
        uVar24 = ~uVar22;
        do {
          uVar32 = uVar30;
          do {
            lVar5 = *(long *)(param_1 + 0x78);
            lVar21 = uVar32 + *(long *)(param_1 + 0x70) * uVar29;
            plVar27 = (long *)(lVar5 + lVar21 * 0x28 + 8);
            lVar9 = *plVar27;
            if (lVar9 != 0) {
              if ((*(ulong *)(lVar9 + 0x90) & uVar22) != 0) {
                FUN_00e746ac(param_3);
                *(ulong *)(*plVar27 + 0x90) = *(ulong *)(*plVar27 + 0x90) & uVar24;
                lVar9 = *plVar27;
              }
              uVar33 = *(ulong *)(lVar9 + 0x88);
              uVar26 = uVar33 & uVar24;
              *(ulong *)(lVar9 + 0x88) = uVar26;
              if (uVar33 != 0 && uVar26 == 0) {
                puVar18 = *(undefined8 **)(lVar9 + 0x50);
                puVar6 = *(undefined8 **)(lVar9 + 0x58);
                if (puVar18 != puVar6) {
                  do {
                    plVar28 = (long *)*puVar18;
                    plVar27 = plVar28 + 0xb;
                    lVar9 = nn::os::GetCurrentThread();
LAB_00e73d20:
                    if (*plVar27 == 0) goto code_r0x00e73d28;
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(plVar28 + 0xc));
                    do {
                      if (*plVar27 != 0) {
                        do {
                          ClearExclusiveLocal();
                          nn::os::WaitLightEvent((LightEventType *)(plVar28 + 0xc));
                          while (*plVar27 == 0) {
                            cVar7 = '\x01';
                            bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                            if (bVar8) {
                              *plVar27 = lVar9;
                              cVar7 = ExclusiveMonitorsStatus();
                            }
                            if (cVar7 == '\0') goto LAB_00e73d30;
                          }
                        } while( true );
                      }
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                      if (bVar8) {
                        *plVar27 = lVar9;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
LAB_00e73d30:
                    if ((plVar28[8] != 0) && (lVar9 = *(long *)(plVar28[8] + 0x10), lVar9 != 0)) {
                      (**(code **)(*plVar28 + 0x80))(plVar28,lVar9 + -0x28);
                    }
                    *(undefined1 *)(plVar28 + 10) = 0;
                    plVar28[0xb] = 0;
                    nn::os::SignalLightEvent((LightEventType *)(plVar28 + 0xc));
                    puVar18 = puVar18 + 1;
                    if (puVar18 == puVar6) break;
                  } while( true );
                }
              }
            }
            bVar8 = uVar32 != uVar23;
            uVar32 = uVar32 + 1;
            *(undefined1 *)(lVar5 + lVar21 * 0x28) = 0;
          } while (bVar8);
          bVar8 = uVar29 != uVar25;
          uVar29 = uVar29 + 1;
        } while (bVar8);
      }
    }
  }
  return;
code_r0x00e737a0:
  cVar7 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar8) {
    *plVar1 = lVar9;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00e737a8;
  goto LAB_00e73798;
code_r0x00e7397c:
  cVar7 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar8) {
    *plVar1 = lVar9;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00e73984;
  goto LAB_00e73974;
code_r0x00e73b54:
  cVar7 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar8) {
    *plVar1 = lVar9;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00e73b5c;
  goto LAB_00e73b4c;
code_r0x00e73d28:
  cVar7 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
  if (bVar8) {
    *plVar27 = lVar9;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00e73d30;
  goto LAB_00e73d20;
}


