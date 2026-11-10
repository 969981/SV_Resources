/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0333242c; name: FUN_0333242c
 */


void FUN_0333242c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 undefined8 param_6,int param_7,float *param_8,undefined4 param_9)

{
  int *piVar1;
  void *__dest;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long *plVar7;
  size_t __n;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  ulong local_98;
  ulong *puStack_90;
  ulong local_88;
  long local_80;
  undefined8 local_78;
  long *local_70;
  undefined1 auStack_68 [8];
  
  lVar17 = tpidr_el0;
  lVar10 = *(long *)(lVar17 + 0x1000b8);
  if (lVar10 == 0) {
    lVar10 = FUN_00e5d3b4();
    *(long *)(lVar17 + 0x1000b8) = lVar10;
  }
  plVar19 = *(long **)(lVar10 + 0x3e0);
  if (plVar19 != (long *)0x0) {
    lVar17 = *plVar19;
    if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
      (**(code **)(lVar17 + 0x18))("PATCH_MEMBER_ADDED",0x12,*(undefined8 *)(lVar17 + 0x28));
    }
    puVar2 = (undefined8 *)plVar19[2];
    uVar11 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= (ulong)plVar19[3]) && (plVar19[2] = uVar11, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "TtPATCH_MEMBER_ADDED";
      uVar5 = nn::os::GetSystemTick();
      puVar2[1] = uVar5;
    }
    if (((*(byte *)(lVar17 + 0x38) & 1) != 0) && (plVar19[6] != 0)) {
      puVar2 = (undefined8 *)plVar19[2];
      uVar11 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)plVar19[3]) && (plVar19[2] = uVar11, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar19[6] + 8);
      }
    }
  }
  local_70 = plVar19;
  puVar6 = (ulong *)FUN_03325d70(param_3,param_4);
  if (param_8 != (float *)0x0) {
    local_80 = 0;
    local_78 = -0x8000000000000000;
    FUN_033331c8(param_1,param_2,&local_80);
    if (0 < (int)local_78) {
      lVar17 = 0;
      do {
        uVar11 = *puVar6;
        uVar8 = (uint)uVar11;
        if ((uVar8 >> 0x11 & 1) == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = CONCAT44(uVar8,uVar8) & 0x1ffff0001ffff;
          uVar15 = (ulong)(ushort)puVar6[(ulong)(byte)(POPCOUNT((char)uVar15) +
                                                       POPCOUNT((char)(uVar15 >> 8)) +
                                                      POPCOUNT((char)(uVar15 >> 0x10))) + 2];
        }
        __dest = (void *)(uVar15 + *(long *)(local_80 + lVar17 * 0x18));
        puVar13 = puVar6;
        if ((uVar11 & 1) == 0) {
          puVar12 = puVar6;
          do {
            puVar12 = (ulong *)puVar12[1];
          } while ((*puVar12 & 1) == 0);
          if ((puVar6 != (ulong *)0x0) && ((puVar12[2] & 0x1f) == 2)) goto LAB_0333262c;
          if ((uVar11 & 1) != 0) goto LAB_03332644;
          puVar12 = puVar6;
          do {
            puVar12 = (ulong *)puVar12[1];
          } while ((*puVar12 & 1) == 0);
          if ((puVar6 != (ulong *)0x0) && ((puVar12[2] & 0x1f) == 4)) goto LAB_0333265c;
          do {
            puVar13 = (ulong *)puVar13[1];
          } while ((*puVar13 & 1) == 0);
LAB_0333277c:
          puVar12 = puVar6;
          if ((puVar6 != (ulong *)0x0) && ((puVar13[2] & 0x1f) == 5)) {
            puVar13 = puVar6;
            do {
              uVar11 = *puVar13;
              if (((uint)uVar11 >> 2 & 1) != 0) {
                uVar11 = puVar13[(uVar11 >> 1 & 1) + (uVar11 & 1) + 2];
                goto LAB_03332814;
              }
              puVar13 = (ulong *)puVar13[1];
            } while (puVar13 != (ulong *)0x0);
            uVar11 = 0;
LAB_03332814:
            plVar18 = (long *)(uVar11 & 0xfffffffffffffffe);
            if ((uVar11 & 1) == 0) {
              (**(code **)(*plVar18 + 0x30))((double)*param_8,plVar18,__dest,puVar6);
              goto LAB_03332898;
            }
            plVar7 = plVar18 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar4) {
                *(int *)plVar7 = (int)*plVar7 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            (**(code **)(*plVar18 + 0x30))((double)*param_8,plVar18,__dest,puVar6);
            do {
              iVar9 = (int)*plVar7;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar4) {
                *(int *)plVar7 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            goto LAB_0333287c;
          }
          while ((uVar8 >> 0x14 & 1) == 0) {
            if (((uVar11 & 1) != 0) || (puVar12 = (ulong *)puVar12[1], puVar12 == (ulong *)0x0))
            goto LAB_033327ec;
            uVar11 = *puVar12;
            uVar8 = (uint)uVar11;
          }
          if (puVar12 == (ulong *)0x0) {
LAB_033327ec:
            __n = 0;
          }
          else {
            uVar8 = uVar8 & 0xfffff;
            __n = (size_t)(ushort)puVar12[(ulong)(byte)(POPCOUNT((char)uVar8) +
                                                        POPCOUNT((char)(uVar8 >> 8)) +
                                                       POPCOUNT((char)(uVar8 >> 0x10))) + 2];
          }
          memcpy(__dest,param_8,__n);
        }
        else {
          if ((puVar6 == (ulong *)0x0) || ((puVar6[2] & 0x1f) != 2)) {
LAB_03332644:
            if ((puVar6 == (ulong *)0x0) || ((puVar6[2] & 0x1f) != 4)) goto LAB_0333277c;
LAB_0333265c:
            do {
              uVar11 = *puVar13;
              if (((uint)uVar11 >> 2 & 1) != 0) {
                uVar11 = puVar13[(uVar11 >> 1 & 1) + (uVar11 & 1) + 2];
                goto LAB_03332714;
              }
              puVar13 = (ulong *)puVar13[1];
            } while (puVar13 != (ulong *)0x0);
            uVar11 = 0;
LAB_03332714:
            plVar18 = (long *)(uVar11 & 0xfffffffffffffffe);
            if ((uVar11 & 1) != 0) {
              plVar7 = plVar18 + 1;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar4) {
                  *(int *)plVar7 = (int)*plVar7 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            uVar15 = *(ulong *)param_8;
            local_98 = -uVar15;
            if (-1 < (long)uVar15) {
              local_98 = uVar15;
            }
            puStack_90 = (ulong *)(uVar15 >> 0x3f);
            (**(code **)(*plVar18 + 0x30))(plVar18,__dest,puVar6,&local_98);
            if ((uVar11 & 1) != 0) {
              plVar7 = plVar18 + 1;
              do {
                iVar9 = (int)*plVar7;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar4) {
                  *(int *)plVar7 = iVar9 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              goto LAB_0333287c;
            }
            goto LAB_03332898;
          }
LAB_0333262c:
          do {
            uVar11 = *puVar13;
            if (((uint)uVar11 >> 2 & 1) != 0) {
              uVar11 = puVar13[(uVar11 >> 1 & 1) + (uVar11 & 1) + 2];
              goto LAB_0333268c;
            }
            puVar13 = (ulong *)puVar13[1];
          } while (puVar13 != (ulong *)0x0);
          uVar11 = 0;
LAB_0333268c:
          plVar18 = (long *)(uVar11 & 0xfffffffffffffffe);
          if ((uVar11 & 1) == 0) {
            (**(code **)(*plVar18 + 0x30))(plVar18,__dest,puVar6,*(ulong *)param_8 != 0);
          }
          else {
            plVar7 = plVar18 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar4) {
                *(int *)plVar7 = (int)*plVar7 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            (**(code **)(*plVar18 + 0x30))(plVar18,__dest,puVar6,*(ulong *)param_8 != 0);
            do {
              iVar9 = (int)*plVar7;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar4) {
                *(int *)plVar7 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
LAB_0333287c:
            if ((plVar18 != (long *)0x0) && (iVar9 == 1)) {
              (**(code **)(*plVar18 + 8))(plVar18);
            }
          }
        }
LAB_03332898:
        lVar17 = lVar17 + 1;
      } while (lVar17 < (int)local_78);
    }
    lVar17 = local_78;
    uVar11 = (ulong)local_78._4_4_;
    local_78 = (ulong)local_78._4_4_ << 0x20;
    if ((-1 < lVar17) && (local_80 != 0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                (PTR_PTR_047d1a50 + 0x20,local_80,uVar11 * 0x18);
    }
  }
  if (param_5 == 0x29) {
    local_80 = 0;
    local_78 = -0x8000000000000000;
    FUN_033331c8(param_1,param_2,&local_80);
    lVar17 = FUN_03342334(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x168) + 0x68) + 0x90),
                          param_6,param_9);
    uVar8 = (int)lVar17 * -0x61c8864f;
    uVar16 = (int)((ulong)lVar17 >> 0x20) * -0x61c8864f;
    uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
    uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
    uVar11 = (ulong)((uVar8 + (uVar8 >> 2) + uVar16 * 0x40 + 0x9e3779b9 ^ uVar16) &
                    *(uint *)(param_1 + 0xcc));
    lVar10 = *(long *)(param_1 + 0xc0);
    if (*(long *)(lVar10 + uVar11 * 0x10) != lVar17) {
      do {
        uVar11 = (ulong)((int)uVar11 + 1U & *(uint *)(param_1 + 0xcc));
      } while (*(long *)(lVar10 + uVar11 * 0x10) != lVar17);
    }
    puVar13 = (ulong *)**(long **)(*(long *)(param_1 + 0xb0) +
                                  (ulong)*(uint *)(lVar10 + uVar11 * 0x10 + 8) * 8);
    puVar12 = puVar13;
    if ((*puVar13 & 1) == 0) {
      do {
        puVar12 = (ulong *)puVar12[1];
      } while ((*puVar12 & 1) == 0);
    }
    if ((puVar12[2] & 0x1f) != 7) {
      puVar13 = (ulong *)0x0;
    }
    if ((0 < (int)local_78) && (0 < param_7)) {
      lVar17 = 0;
      do {
        iVar9 = 0;
        if (puVar13 == (ulong *)0x0) {
          do {
            uVar8 = (uint)*puVar6;
            if ((uVar8 >> 0x11 & 1) == 0) {
              uVar8 = 0;
            }
            else {
              uVar11 = CONCAT44(uVar8,uVar8) & 0x1ffff0001ffff;
              uVar8 = (uint)puVar6[(ulong)(byte)(POPCOUNT((char)uVar11) +
                                                 POPCOUNT((char)(uVar11 >> 8)) +
                                                POPCOUNT((char)(uVar11 >> 0x10))) + 2] & 0xffff;
            }
            puVar12 = (ulong *)0x0;
            do {
              uVar16 = (uint)*puVar12;
              if ((uVar16 >> 0x14 & 1) != 0) {
                uVar14 = 0;
                if (puVar12 != (ulong *)0x0) {
                  uVar11 = CONCAT44(uVar16,uVar16) & 0xfffff000fffff;
                  uVar14 = (uint)(ushort)puVar12[(ulong)(byte)(POPCOUNT((char)uVar11) +
                                                               POPCOUNT((char)(uVar11 >> 8)) +
                                                              POPCOUNT((char)(uVar11 >> 0x10))) + 2]
                  ;
                }
                goto LAB_03332ce4;
              }
              if ((*puVar12 & 1) != 0) {
                uVar14 = 0;
                goto LAB_03332ce4;
              }
              puVar12 = (ulong *)puVar12[1];
            } while (puVar12 != (ulong *)0x0);
            uVar14 = 0;
LAB_03332ce4:
            local_98 = *(long *)(local_80 + lVar17 * 0x18) + (ulong)(uVar8 + uVar14 * iVar9);
            local_88 = 0;
            puStack_90 = puVar13;
            FUN_031e66c8(auStack_68,&local_98,1);
            if ((local_88 & 1) != 0) {
              plVar7 = (long *)(local_88 & 0xfffffffffffffffe);
              plVar18 = plVar7 + 1;
              do {
                lVar10 = *plVar18;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = (int)lVar10 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if ((plVar7 != (long *)0x0) && ((int)lVar10 == 1)) {
                (**(code **)(*plVar7 + 8))();
              }
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 != param_7);
        }
        else {
          do {
            uVar8 = (uint)*puVar6;
            if ((uVar8 >> 0x11 & 1) == 0) {
              uVar8 = 0;
            }
            else {
              uVar11 = CONCAT44(uVar8,uVar8) & 0x1ffff0001ffff;
              uVar8 = (uint)puVar6[(ulong)(byte)(POPCOUNT((char)uVar11) +
                                                 POPCOUNT((char)(uVar11 >> 8)) +
                                                POPCOUNT((char)(uVar11 >> 0x10))) + 2] & 0xffff;
            }
            puVar12 = puVar13;
            do {
              uVar16 = (uint)*puVar12;
              if ((uVar16 >> 0x14 & 1) != 0) {
                uVar14 = 0;
                if (puVar12 != (ulong *)0x0) {
                  uVar11 = CONCAT44(uVar16,uVar16) & 0xfffff000fffff;
                  uVar14 = (uint)(ushort)puVar12[(ulong)(byte)(POPCOUNT((char)uVar11) +
                                                               POPCOUNT((char)(uVar11 >> 8)) +
                                                              POPCOUNT((char)(uVar11 >> 0x10))) + 2]
                  ;
                }
                goto LAB_03332bac;
              }
              if ((*puVar12 & 1) != 0) {
                uVar14 = 0;
                goto LAB_03332bac;
              }
              puVar12 = (ulong *)puVar12[1];
            } while (puVar12 != (ulong *)0x0);
            uVar14 = 0;
LAB_03332bac:
            local_98 = *(long *)(local_80 + lVar17 * 0x18) + (ulong)(uVar8 + uVar14 * iVar9);
            puVar12 = puVar13;
            do {
              uVar11 = *puVar12;
              if (((uint)uVar11 >> 2 & 1) != 0) {
                local_88 = puVar12[(uVar11 >> 1 & 1) + (uVar11 & 1) + 2];
                goto LAB_03332be4;
              }
              puVar12 = (ulong *)puVar12[1];
            } while (puVar12 != (ulong *)0x0);
            local_88 = 0;
LAB_03332be4:
            if ((local_88 & 1) != 0) {
              piVar1 = (int *)((local_88 & 0xfffffffffffffffe) + 8);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            puStack_90 = puVar13;
            FUN_031e66c8(auStack_68,&local_98,1);
            if ((local_88 & 1) != 0) {
              plVar7 = (long *)(local_88 & 0xfffffffffffffffe);
              plVar18 = plVar7 + 1;
              do {
                lVar10 = *plVar18;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = (int)lVar10 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if ((plVar7 != (long *)0x0) && ((int)lVar10 == 1)) {
                (**(code **)(*plVar7 + 8))();
              }
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 != param_7);
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 < (int)local_78);
    }
  }
  else {
    if (param_5 != 9) goto LAB_03332d88;
    local_80 = 0;
    local_78 = -0x8000000000000000;
    FUN_033331c8(param_1,param_2,&local_80);
    if (0 < (int)local_78) {
      lVar17 = 0;
      do {
        uVar8 = (uint)*puVar6;
        if ((uVar8 >> 0x11 & 1) == 0) {
          local_98 = 0;
        }
        else {
          uVar11 = CONCAT44(uVar8,uVar8) & 0x1ffff0001ffff;
          local_98 = (ulong)(ushort)puVar6[(ulong)(byte)(POPCOUNT((char)uVar11) +
                                                         POPCOUNT((char)(uVar11 >> 8)) +
                                                        POPCOUNT((char)(uVar11 >> 0x10))) + 2];
        }
        local_98 = local_98 + *(long *)(local_80 + lVar17 * 0x18);
        if (puVar6 == (ulong *)0x0) {
          local_88 = 0;
        }
        else {
          puVar13 = puVar6;
          do {
            uVar11 = *puVar13;
            if (((uint)uVar11 >> 2 & 1) != 0) {
              local_88 = puVar13[(uVar11 >> 1 & 1) + (uVar11 & 1) + 2];
              goto LAB_033329a0;
            }
            puVar13 = (ulong *)puVar13[1];
          } while (puVar13 != (ulong *)0x0);
          local_88 = 0;
        }
LAB_033329a0:
        if ((local_88 & 1) != 0) {
          piVar1 = (int *)((local_88 & 0xfffffffffffffffe) + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puStack_90 = puVar6;
        FUN_031e66c8(auStack_68,&local_98,1);
        if ((local_88 & 1) != 0) {
          plVar7 = (long *)(local_88 & 0xfffffffffffffffe);
          plVar18 = plVar7 + 1;
          do {
            lVar10 = *plVar18;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar4) {
              *(int *)plVar18 = (int)lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((plVar7 != (long *)0x0) && ((int)lVar10 == 1)) {
            (**(code **)(*plVar7 + 8))();
          }
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 < (int)local_78);
    }
  }
  lVar17 = local_78;
  uVar11 = (ulong)local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < lVar17) && (local_80 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_80,uVar11 * 0x18);
  }
LAB_03332d88:
  if (plVar19 != (long *)0x0) {
    lVar17 = *plVar19;
    if (((*(byte *)(lVar17 + 0x38) & 1) != 0) && (plVar19[6] != 0)) {
      puVar2 = (undefined8 *)plVar19[2];
      uVar11 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)plVar19[3]) && (plVar19[2] = uVar11, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar19[6] + 8);
      }
    }
    puVar2 = (undefined8 *)plVar19[2];
    uVar11 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= (ulong)plVar19[3]) && (plVar19[2] = uVar11, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c2d363;
      uVar5 = nn::os::GetSystemTick();
      puVar2[1] = uVar5;
    }
    if (*(code **)(lVar17 + 0x20) != (code *)0x0) {
      (**(code **)(lVar17 + 0x20))(*(undefined8 *)(lVar17 + 0x28));
    }
  }
  return;
}


