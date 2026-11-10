/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010c1f74; name: FUN_010c1f74
 */


void FUN_010c1f74(long *param_1,undefined8 *param_2,char *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  size_t sVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long *plVar23;
  void *pvVar24;
  void *pvVar25;
  undefined8 *puVar26;
  long *__dest;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *local_70;
  undefined8 local_68;
  
  lVar16 = *param_1;
  uVar17 = *param_2;
  uVar2 = *(undefined4 *)(param_2 + 1);
  cVar3 = *param_3;
  lVar18 = *(long *)(lVar16 + 0x2d8);
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar18) {
    FUN_010c2da8(lVar16,uVar17,uVar2,cVar3 != '\0');
    return;
  }
  plVar29 = (long *)(lVar16 + 0x128);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar29 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar29,0x10);
    if (bVar5) {
      *plVar29 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_010c2008;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x130));
  do {
    if (*plVar29 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x130));
        while (*plVar29 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar5) {
            *plVar29 = lVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_010c2008;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar29,0x10);
    if (bVar5) {
      *plVar29 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_010c2008:
  puVar21 = *(undefined8 **)(lVar16 + 0x148);
  puVar12 = *(undefined8 **)(lVar16 + 0x150);
  lVar8 = (long)puVar12 - (long)puVar21;
  uVar19 = 0;
  if (lVar8 != 0) {
    uVar19 = lVar8 * 0x20 - 1;
  }
  uVar1 = *(ulong *)(lVar16 + 0x180);
  uVar14 = *(long *)(lVar16 + 0x188) + uVar1;
  if (uVar19 == uVar14) {
    if (uVar1 < 0x100) {
      puVar21 = *(undefined8 **)(lVar16 + 0x158);
      uVar19 = lVar8 >> 3;
      lVar8 = (long)puVar21 - *(long *)(lVar16 + 0x140);
      if (uVar19 < (ulong)(lVar8 >> 3)) {
        lVar8 = (**(code **)(**(long **)(lVar16 + 400) + 0x10))(*(long **)(lVar16 + 400),0x1000,8);
        if (puVar21 == puVar12) {
          if (lVar8 == 0) {
            (**(code **)(**(long **)(lVar16 + 400) + 0xe8))();
          }
          pvVar24 = *(void **)(lVar16 + 0x148);
          if (pvVar24 == *(void **)(lVar16 + 0x140)) {
            uVar19 = *(ulong *)(lVar16 + 0x150);
            uVar14 = *(ulong *)(lVar16 + 0x158);
            if (uVar19 < uVar14) {
              lVar9 = (long)(uVar14 - uVar19) >> 3;
              lVar18 = lVar9 + 2;
              if (-1 < lVar9 + 1) {
                lVar18 = lVar9 + 1;
              }
              sVar6 = uVar19 - (long)pvVar24;
              pvVar25 = (void *)(uVar19 + (lVar18 >> 1) * 8);
              if (sVar6 != 0) {
                pvVar25 = (void *)((long)pvVar25 - sVar6);
                memmove(pvVar25,pvVar24,sVar6);
                uVar19 = *(ulong *)(lVar16 + 0x150);
              }
              *(void **)(lVar16 + 0x148) = pvVar25;
              *(ulong *)(lVar16 + 0x150) = uVar19 + (lVar18 >> 1) * 8;
            }
            else {
              lVar9 = uVar14 - (long)*(void **)(lVar16 + 0x140);
              lVar18 = lVar9 >> 2;
              if (lVar9 == 0) {
                lVar18 = 1;
              }
              lVar9 = (**(code **)(**(long **)(lVar16 + 0x160) + 0x10))
                                (*(long **)(lVar16 + 0x160),lVar18 << 3,8);
              if (lVar9 == 0) {
                (**(code **)(**(long **)(lVar16 + 0x160) + 0xe8))();
              }
              puVar21 = *(undefined8 **)(lVar16 + 0x148);
              puVar12 = (undefined8 *)(lVar9 + (lVar18 + 3U >> 2) * 8);
              lVar13 = *(long *)(lVar16 + 0x150) - (long)puVar21;
              if (lVar13 == 0) {
                puVar21 = puVar12;
              }
              else {
                lVar20 = (lVar13 >> 3) << 3;
                puVar26 = puVar12;
                do {
                  uVar22 = *(undefined8 *)(lVar16 + 0x160);
                  if (((DAT_04865a38 & 1) == 0) &&
                     (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
                    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                    __cxa_guard_release(&DAT_04865a38);
                  }
                  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
                  if (lVar11 == 0) {
                    *puVar26 = *puVar21;
                  }
                  else {
                    if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_010c2d48;
                    *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar22;
                    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
                    *puVar26 = *puVar21;
                    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
                  }
                  puVar21 = puVar21 + 1;
                  lVar20 = lVar20 + -8;
                  puVar26 = puVar26 + 1;
                } while (lVar20 != 0);
                puVar21 = (undefined8 *)((long)puVar12 + lVar13);
              }
              lVar20 = *(long *)(lVar16 + 0x140);
              *(undefined8 **)(lVar16 + 0x150) = puVar21;
              lVar13 = *(long *)(lVar16 + 0x158);
              *(long *)(lVar16 + 0x140) = lVar9;
              *(undefined8 **)(lVar16 + 0x148) = puVar12;
              *(long *)(lVar16 + 0x158) = lVar9 + lVar18 * 8;
              if (lVar20 != 0) {
                plVar29 = *(long **)(lVar16 + 0x160);
                lVar13 = lVar13 - lVar20;
                uVar19 = (**(code **)(*plVar29 + 0xf8))(plVar29);
                if (((uVar19 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar29 + 0x18))(plVar29,lVar20,lVar13,8);
                }
                else {
                  FUN_00c48fe8(plVar29,lVar20,lVar13,8);
                }
              }
            }
          }
          lVar18 = *(long *)(lVar16 + 0x148);
          uVar22 = *(undefined8 *)(lVar16 + 0x160);
          if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar9 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar9 == 0) {
            *(long *)(lVar18 + -8) = lVar8;
          }
          else {
            if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_010c2d48;
            *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar22;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
            *(long *)(lVar18 + -8) = lVar8;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
          }
          puVar12 = *(undefined8 **)(lVar16 + 0x148);
          *(undefined8 **)(lVar16 + 0x148) = puVar12 + -1;
          local_68 = puVar12[-1];
          goto LAB_010c2040;
        }
        if (lVar8 == 0) {
          (**(code **)(**(long **)(lVar16 + 400) + 0xe8))();
        }
        if (*(long *)(lVar16 + 0x150) == *(long *)(lVar16 + 0x158)) {
          pvVar24 = *(void **)(lVar16 + 0x140);
          pvVar25 = *(void **)(lVar16 + 0x148);
          if (pvVar25 < pvVar24 || (long)pvVar25 - (long)pvVar24 == 0) {
            lVar18 = *(long *)(lVar16 + 0x158) - (long)pvVar24;
            uVar19 = lVar18 >> 2;
            if (lVar18 == 0) {
              uVar19 = 1;
            }
            lVar18 = (**(code **)(**(long **)(lVar16 + 0x160) + 0x10))
                               (*(long **)(lVar16 + 0x160),uVar19 << 3,8);
            if (lVar18 == 0) {
              (**(code **)(**(long **)(lVar16 + 0x160) + 0xe8))();
            }
            puVar21 = *(undefined8 **)(lVar16 + 0x148);
            puVar12 = (undefined8 *)(lVar18 + (uVar19 >> 2) * 8);
            lVar9 = *(long *)(lVar16 + 0x150) - (long)puVar21;
            if (lVar9 == 0) {
              puVar21 = puVar12;
            }
            else {
              lVar13 = (lVar9 >> 3) << 3;
              puVar26 = puVar12;
              do {
                uVar22 = *(undefined8 *)(lVar16 + 0x160);
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar20 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar20 == 0) {
                  *puVar26 = *puVar21;
                }
                else {
                  if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_010c2d48;
                  *(undefined8 *)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = uVar22;
                  *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
                  *puVar26 = *puVar21;
                  *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
                }
                puVar21 = puVar21 + 1;
                lVar13 = lVar13 + -8;
                puVar26 = puVar26 + 1;
              } while (lVar13 != 0);
              puVar21 = (undefined8 *)((long)puVar12 + lVar9);
            }
            lVar13 = *(long *)(lVar16 + 0x140);
            *(undefined8 **)(lVar16 + 0x150) = puVar21;
            lVar9 = *(long *)(lVar16 + 0x158);
            *(long *)(lVar16 + 0x140) = lVar18;
            *(undefined8 **)(lVar16 + 0x148) = puVar12;
            *(ulong *)(lVar16 + 0x158) = lVar18 + uVar19 * 8;
            if (lVar13 != 0) {
              plVar29 = *(long **)(lVar16 + 0x160);
              lVar9 = lVar9 - lVar13;
              uVar19 = (**(code **)(*plVar29 + 0xf8))(plVar29);
              if (((uVar19 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
                (**(code **)(*plVar29 + 0x18))(plVar29,lVar13,lVar9,8);
              }
              else {
                FUN_00c48fe8(plVar29,lVar13,lVar9,8);
              }
            }
          }
          else {
            lVar9 = (long)pvVar25 - (long)pvVar24 >> 3;
            lVar18 = lVar9 + 2;
            if (-1 < lVar9 + 1) {
              lVar18 = lVar9 + 1;
            }
            sVar6 = *(long *)(lVar16 + 0x150) - (long)pvVar25;
            pvVar24 = (void *)((long)pvVar25 + (lVar18 >> 1) * -8);
            if (sVar6 != 0) {
              memmove(pvVar24,pvVar25,sVar6);
              pvVar25 = *(void **)(lVar16 + 0x148);
            }
            *(void **)(lVar16 + 0x148) = (void *)((long)pvVar25 + (lVar18 >> 1) * -8);
            *(size_t *)(lVar16 + 0x150) = (long)pvVar24 + sVar6;
          }
        }
        plVar29 = *(long **)(lVar16 + 0x150);
        uVar22 = *(undefined8 *)(lVar16 + 0x160);
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar18 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar18 == 0) {
          *plVar29 = lVar8;
        }
        else {
          if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_010c2d48;
          *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar22;
          *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
          *plVar29 = lVar8;
          *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
        }
        *(long *)(lVar16 + 0x150) = *(long *)(lVar16 + 0x150) + 8;
      }
      else {
        uVar14 = lVar8 >> 2;
        if (lVar8 == 0) {
          uVar14 = 1;
        }
        plVar29 = (long *)(**(code **)(**(long **)(lVar16 + 0x160) + 0x10))
                                    (*(long **)(lVar16 + 0x160),uVar14 << 3,8);
        if (plVar29 == (long *)0x0) {
          (**(code **)(**(long **)(lVar16 + 0x160) + 0xe8))();
        }
        local_70 = plVar29 + uVar14;
        lVar8 = (**(code **)(**(long **)(lVar16 + 400) + 0x10))(*(long **)(lVar16 + 400),0x1000,8);
        if (lVar8 == 0) {
          (**(code **)(**(long **)(lVar16 + 400) + 0xe8))();
        }
        plVar23 = plVar29 + uVar19;
        if (uVar19 == uVar14) {
          if (plVar29 <= plVar23 && (long)plVar23 - (long)plVar29 != 0) {
            lVar18 = (long)plVar23 - (long)plVar29 >> 3;
            uVar19 = lVar18 + 2;
            if (-1 < lVar18 + 1) {
              uVar19 = lVar18 + 1;
            }
            plVar23 = (long *)((long)plVar23 + (uVar19 & 0x3ffffffffffffffe) * -4);
            goto LAB_010c22d4;
          }
          lVar18 = (long)local_70 - (long)plVar29;
          uVar19 = lVar18 >> 2;
          if (lVar18 == 0) {
            uVar19 = 1;
          }
          plVar10 = (long *)(**(code **)(**(long **)(lVar16 + 0x160) + 0x10))
                                      (*(long **)(lVar16 + 0x160),uVar19 << 3,8);
          if (plVar10 == (long *)0x0) {
            (**(code **)(**(long **)(lVar16 + 0x160) + 0xe8))();
          }
          plVar23 = plVar10 + (uVar19 >> 2);
          local_70 = plVar10 + uVar19;
          if (plVar29 != (long *)0x0) {
            plVar28 = *(long **)(lVar16 + 0x160);
            uVar19 = (**(code **)(*plVar28 + 0xf8))(plVar28);
            if (((uVar19 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
              (**(code **)(*plVar28 + 0x18))(plVar28,plVar29,lVar18,8);
            }
            else {
              FUN_00c48fe8(plVar28,plVar29,lVar18,8);
            }
          }
        }
        else {
LAB_010c22d4:
          plVar10 = plVar29;
        }
        uVar22 = *(undefined8 *)(lVar16 + 0x160);
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar18 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar18 == 0) {
          *plVar23 = lVar8;
        }
        else {
          if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_010c2d48;
          *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar22;
          *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
          *plVar23 = lVar8;
          *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
        }
        plVar28 = *(long **)(lVar16 + 0x150);
        plVar15 = plVar23 + 1;
        plVar29 = local_70;
        plVar27 = plVar10;
        if (plVar28 != *(long **)(lVar16 + 0x148)) {
          do {
            plVar10 = plVar27;
            if (plVar23 == plVar27) {
              if (plVar15 < plVar29) {
                lVar8 = (long)plVar29 - (long)plVar15 >> 3;
                uVar19 = lVar8 + 2;
                if (-1 < lVar8 + 1) {
                  uVar19 = lVar8 + 1;
                }
                sVar6 = (long)plVar15 - (long)plVar23;
                local_70 = (long *)((long)plVar15 + (uVar19 & 0x3ffffffffffffffe) * 4);
                __dest = local_70;
                if (sVar6 != 0) {
                  __dest = (long *)((long)local_70 - sVar6);
                  memmove(__dest,plVar23,sVar6);
                }
              }
              else {
                lVar18 = (long)plVar29 - (long)plVar27;
                lVar8 = lVar18 >> 2;
                if (lVar18 == 0) {
                  lVar8 = 1;
                }
                plVar10 = (long *)(**(code **)(**(long **)(lVar16 + 0x160) + 0x10))
                                            (*(long **)(lVar16 + 0x160),lVar8 << 3,8);
                if (plVar10 == (long *)0x0) {
                  (**(code **)(**(long **)(lVar16 + 0x160) + 0xe8))();
                }
                __dest = plVar10 + (lVar8 + 3U >> 2);
                lVar9 = (long)plVar15 - (long)plVar23;
                if (lVar9 == 0) {
                  local_70 = __dest;
                }
                else {
                  lVar13 = (lVar9 >> 3) << 3;
                  plVar29 = __dest;
                  do {
                    uVar22 = *(undefined8 *)(lVar16 + 0x160);
                    if (((DAT_04865a38 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
                      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                      __cxa_guard_release(&DAT_04865a38);
                    }
                    lVar20 = nn::os::GetTlsValue(DAT_04865a30);
                    if (lVar20 == 0) {
                      *plVar29 = *plVar23;
                    }
                    else {
                      if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_010c2d48;
                      *(undefined8 *)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = uVar22;
                      *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
                      *plVar29 = *plVar23;
                      *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
                    }
                    plVar23 = plVar23 + 1;
                    lVar13 = lVar13 + -8;
                    plVar29 = plVar29 + 1;
                  } while (lVar13 != 0);
                  local_70 = (long *)((long)__dest + lVar9);
                }
                plVar29 = plVar10 + lVar8;
                if (plVar27 != (long *)0x0) {
                  plVar23 = *(long **)(lVar16 + 0x160);
                  uVar19 = (**(code **)(*plVar23 + 0xf8))(plVar23);
                  if (((uVar19 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1))
                  {
                    (**(code **)(*plVar23 + 0x18))(plVar23,plVar27,lVar18,8);
                  }
                  else {
                    FUN_00c48fe8(plVar23,plVar27,lVar18,8);
                  }
                }
              }
            }
            else {
              __dest = plVar23;
              local_70 = plVar15;
            }
            uVar22 = *(undefined8 *)(lVar16 + 0x160);
            plVar28 = plVar28 + -1;
            plVar23 = __dest + -1;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar8 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar8 == 0) {
              *plVar23 = *plVar28;
            }
            else {
              if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_010c2d48;
              *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar22;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
              *plVar23 = *plVar28;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
            }
            plVar15 = local_70;
            plVar27 = plVar10;
          } while (plVar28 != *(long **)(lVar16 + 0x148));
        }
        lVar18 = *(long *)(lVar16 + 0x140);
        *(long **)(lVar16 + 0x140) = plVar10;
        *(long **)(lVar16 + 0x148) = plVar23;
        lVar8 = *(long *)(lVar16 + 0x158);
        *(long **)(lVar16 + 0x150) = plVar15;
        *(long **)(lVar16 + 0x158) = plVar29;
        if (lVar18 != 0) {
          plVar29 = *(long **)(lVar16 + 0x160);
          lVar8 = lVar8 - lVar18;
          uVar19 = (**(code **)(*plVar29 + 0xf8))(plVar29);
          if (((uVar19 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
            (**(code **)(*plVar29 + 0x18))(plVar29,lVar18,lVar8,8);
          }
          else {
            FUN_00c48fe8(plVar29,lVar18,lVar8,8);
          }
        }
      }
    }
    else {
      *(ulong *)(lVar16 + 0x180) = uVar1 - 0x100;
      puVar12 = puVar21 + 1;
      local_68 = *puVar21;
LAB_010c2040:
      *(undefined8 **)(lVar16 + 0x148) = puVar12;
      FUN_010c3210(lVar16 + 0x140,&local_68);
    }
    uVar14 = *(long *)(lVar16 + 0x180) + *(long *)(lVar16 + 0x188);
    puVar21 = *(undefined8 **)(lVar16 + 0x148);
    puVar12 = *(undefined8 **)(lVar16 + 0x150);
  }
  if (puVar12 == puVar21) {
    puVar21 = (undefined8 *)0x0;
  }
  else {
    puVar21 = (undefined8 *)
              (*(long *)((long)puVar21 + (uVar14 >> 5 & 0x7fffffffffffff8)) + (uVar14 & 0xff) * 0x10
              );
  }
  uVar22 = *(undefined8 *)(lVar16 + 400);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar8 == 0) {
    *puVar21 = uVar17;
    *(undefined4 *)(puVar21 + 1) = uVar2;
    *(char *)((long)puVar21 + 0xc) = cVar3;
    *(undefined1 *)((long)puVar21 + 0xf) = local_68._2_1_;
    *(undefined2 *)((long)puVar21 + 0xd) = (undefined2)local_68;
  }
  else {
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_010c2d48:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar22;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    *puVar21 = uVar17;
    *(undefined4 *)(puVar21 + 1) = uVar2;
    *(char *)((long)puVar21 + 0xc) = cVar3;
    *(undefined1 *)((long)puVar21 + 0xf) = local_68._2_1_;
    *(undefined2 *)((long)puVar21 + 0xd) = (undefined2)local_68;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  *(long *)(lVar16 + 0x188) = *(long *)(lVar16 + 0x188) + 1;
  *(undefined8 *)(lVar16 + 0x128) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar16 + 0x130));
  return;
}


