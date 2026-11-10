/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033ae288; name: FUN_033ae288
 */


/* WARNING: Removing unreachable block (ram,0x033ae410) */
/* WARNING: Removing unreachable block (ram,0x033ae418) */
/* WARNING: Removing unreachable block (ram,0x033ae420) */
/* WARNING: Removing unreachable block (ram,0x033ae428) */
/* WARNING: Removing unreachable block (ram,0x033ae42c) */
/* WARNING: Removing unreachable block (ram,0x033ae434) */

void FUN_033ae288(long param_1,long *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ushort uVar13;
  undefined4 uVar14;
  ulong *puVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  short *psVar22;
  undefined8 *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  short *psVar26;
  undefined8 *puVar27;
  long *plVar28;
  int iVar29;
  long local_a0;
  undefined8 local_98;
  ulong local_90;
  long local_88;
  undefined8 *local_80;
  ulong local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulong local_58;
  
  puVar15 = (ulong *)param_2[1];
  uVar21 = *puVar15;
  uVar19 = (uint)uVar21;
  puVar25 = puVar15;
  if ((uVar21 & 1) == 0) {
    puVar24 = puVar15;
    do {
      puVar24 = (ulong *)puVar24[1];
    } while ((*puVar24 & 1) == 0);
    if ((puVar15 != (ulong *)0x0) && ((puVar24[2] & 0x1f) == 7)) goto LAB_033ae338;
    if ((uVar21 & 1) == 0) {
      do {
        puVar25 = (ulong *)puVar25[1];
      } while ((*puVar25 & 1) == 0);
    }
  }
  else if ((puVar15 != (ulong *)0x0) && ((puVar15[2] & 0x1f) == 7)) goto LAB_033ae338;
  if (puVar15 == (ulong *)0x0) {
    return;
  }
  if ((puVar25[2] & 0x1f) != 8) {
    return;
  }
LAB_033ae338:
  while ((uVar19 >> 0xd & 1) == 0) {
    if ((uVar21 & 1) != 0) {
      uVar14 = 0;
      goto LAB_033ae37c;
    }
    puVar15 = (ulong *)puVar15[1];
    uVar14 = 0;
    if (puVar15 == (ulong *)0x0) goto LAB_033ae37c;
    uVar21 = *puVar15;
    uVar19 = (uint)uVar21;
  }
  uVar21 = CONCAT44(uVar19,uVar19) & 0x1fff00001fff;
  uVar14 = (undefined4)
           puVar15[(ulong)(byte)(POPCOUNT((char)uVar21) + POPCOUNT((char)(uVar21 >> 8))) + 2];
LAB_033ae37c:
  local_70 = CONCAT44(local_70._4_4_,uVar14);
  lVar9 = FUN_030013e8(param_1 + 0x28,&local_70);
  if (lVar9 == 0) {
    uVar20 = 0;
    uVar19 = 0xffffffff;
  }
  else {
    uVar19 = *(uint *)(lVar9 + 4);
    uVar20 = ((int)lVar9 - (int)*(undefined8 *)(param_1 + 0x38)) * 0x20000000;
  }
  if (-1 < (int)(uVar19 | uVar20)) {
    local_80 = (undefined8 *)0x0;
    local_78 = 0;
    local_88 = 0;
    pbVar16 = (byte *)param_2[1];
    if (pbVar16 != (byte *)0x0) {
      for (; (*pbVar16 & 1) == 0; pbVar16 = *(byte **)(pbVar16 + 8)) {
      }
      if ((*(ulong *)(pbVar16 + 0x10) & 0x1f) == 7) {
        local_88 = *param_2;
        puVar2 = (undefined8 *)param_2[1];
        if ((param_2[2] & 1U) != 0) {
          piVar1 = (int *)((param_2[2] & 0xfffffffffffffffeU) + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        local_78 = param_2[2];
        local_80 = puVar2;
        if (local_88 != 0) {
          plVar12 = (long *)0x0;
          plVar28 = (long *)0x0;
          puVar27 = (undefined8 *)0x0;
LAB_033ae460:
          plVar28 = plVar28 + 1;
          puVar17 = puVar27;
          if (plVar12 <= plVar28) {
            if (puVar2 == puVar27) goto LAB_033ae818;
            psVar22 = (short *)0x0;
            puVar17 = (undefined8 *)0x0;
            puVar23 = puVar2;
            do {
              uVar19 = (uint)*puVar23;
              if ((uVar19 >> 0x17 & 1) != 0) {
                uVar21 = CONCAT44(uVar19,uVar19) & 0x7fffff007fffff;
                psVar26 = (short *)puVar23[(ulong)(byte)(POPCOUNT((char)uVar21) +
                                                         POPCOUNT((char)(uVar21 >> 8)) +
                                                        POPCOUNT((char)(uVar21 >> 0x10))) + 2];
                if (psVar26 != (short *)0x0) {
                  if ((int)psVar26[1] + (int)*psVar26 != 0) {
                    psVar22 = psVar26;
                    puVar17 = puVar23;
                  }
                }
              }
              puVar23 = (undefined8 *)puVar23[1];
            } while (puVar23 != puVar27);
            if (puVar17 == (undefined8 *)0x0) goto LAB_033ae818;
            plVar28 = (long *)(psVar22 + 4);
            plVar12 = plVar28 + (long)psVar22[1] + (long)*psVar22;
          }
          uVar19 = (uint)*(undefined8 *)*plVar28;
          if ((uVar19 >> 0x11 & 1) == 0) {
            uVar13 = 0;
          }
          else {
            uVar21 = CONCAT44(uVar19,uVar19) & 0x1ffff0001ffff;
            uVar13 = *(ushort *)
                      (*plVar28 +
                      (ulong)(byte)(POPCOUNT((char)uVar21) + POPCOUNT((char)(uVar21 >> 8)) +
                                   POPCOUNT((char)(uVar21 >> 0x10))) * 8 + 0x12);
          }
          puVar27 = puVar17;
          if ((uVar13 & 0x30) != 0) {
            FUN_031e32f0(&local_70,&local_88,*plVar28);
            FUN_033ae288(param_1,&local_70);
            if ((local_60 & 1) != 0) {
              plVar10 = (long *)(local_60 & 0xfffffffffffffffe);
              plVar11 = plVar10 + 1;
              do {
                lVar9 = *plVar11;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar4) {
                  *(int *)plVar11 = (int)lVar9 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if ((plVar10 != (long *)0x0) && ((int)lVar9 == 1)) {
                (**(code **)(*plVar10 + 8))();
              }
            }
          }
          goto LAB_033ae460;
        }
      }
      pbVar16 = (byte *)param_2[1];
      if (pbVar16 != (byte *)0x0) {
        pbVar18 = pbVar16;
        if ((*pbVar16 & 1) == 0) {
          do {
            pbVar18 = *(byte **)(pbVar18 + 8);
          } while ((*pbVar18 & 1) == 0);
        }
        if ((*(ulong *)(pbVar18 + 0x10) & 0x1f) == 8) {
          lVar9 = *param_2;
          uVar21 = param_2[2];
          if ((uVar21 & 1) != 0) {
            piVar1 = (int *)((uVar21 & 0xfffffffffffffffe) + 8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            uVar21 = param_2[2];
          }
          if (lVar9 != 0) {
            pbVar18 = pbVar16;
            do {
              if ((*pbVar18 >> 1 & 1) != 0) {
                if (*(long *)(pbVar18 + 0x18) != 0) goto LAB_033ae680;
                break;
              }
              pbVar18 = *(byte **)(pbVar18 + 8);
            } while (pbVar18 != (byte *)0x0);
            plVar28 = *(long **)(param_1 + 0x20);
            local_60 = 0;
            local_58 = 0;
            local_70 = 0;
            local_68 = 0;
            (**(code **)(*(long *)(uVar21 & 0xfffffffffffffffe) + 0x50))
                      ((long *)(uVar21 & 0xfffffffffffffffe),lVar9,pbVar16,&local_70);
            uVar7 = local_68;
            if ((local_58 & 1) != 0) {
              plVar11 = (long *)(local_58 & 0xfffffffffffffffe);
              plVar12 = plVar11 + 1;
              do {
                lVar5 = *plVar12;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar4) {
                  *(int *)plVar12 = (int)lVar5 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if ((plVar11 != (long *)0x0) && ((int)lVar5 == 1)) {
                (**(code **)(*plVar11 + 8))();
              }
            }
            (**(code **)(*plVar28 + 0x20))(plVar28,uVar7);
LAB_033ae680:
            plVar28 = (long *)(uVar21 & 0xfffffffffffffffe);
            iVar29 = 0;
            while( true ) {
              local_60 = 0;
              local_58 = 0;
              local_70 = 0;
              local_68 = 0;
              (**(code **)(*plVar28 + 0x50))(plVar28,lVar9,pbVar16,&local_70);
              iVar8 = (int)local_60;
              if ((local_58 & 1) != 0) {
                plVar11 = (long *)(local_58 & 0xfffffffffffffffe);
                plVar12 = plVar11 + 1;
                do {
                  lVar5 = *plVar12;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                  if (bVar4) {
                    *(int *)plVar12 = (int)lVar5 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if ((plVar11 != (long *)0x0) && ((int)lVar5 == 1)) {
                  (**(code **)(*plVar11 + 8))();
                }
              }
              if (iVar8 <= iVar29) break;
              local_60 = 0;
              local_58 = 0;
              local_70 = 0;
              local_68 = 0;
              (**(code **)(*plVar28 + 0x50))(plVar28,lVar9,pbVar16,&local_70);
              if (iVar29 < (int)local_60) {
                local_90 = local_58;
                local_a0 = local_70 + (long)local_60._4_4_ * (long)iVar29;
                local_98 = local_68;
                if ((local_58 & 1) != 0) {
                  piVar1 = (int *)((local_58 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = *piVar1 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
              }
              else {
                local_98 = 0;
                local_90 = 0;
                local_a0 = 0;
              }
              uVar6 = local_90;
              if ((local_58 & 1) != 0) {
                plVar11 = (long *)(local_58 & 0xfffffffffffffffe);
                plVar12 = plVar11 + 1;
                do {
                  lVar5 = *plVar12;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                  if (bVar4) {
                    *(int *)plVar12 = (int)lVar5 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if ((plVar11 != (long *)0x0) && ((int)lVar5 == 1)) {
                  (**(code **)(*plVar11 + 8))();
                }
              }
              FUN_033ae288(param_1,&local_a0);
              if ((uVar6 & 1) != 0) {
                plVar11 = (long *)(uVar6 & 0xfffffffffffffffe);
                plVar12 = plVar11 + 1;
                do {
                  lVar5 = *plVar12;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                  if (bVar4) {
                    *(int *)plVar12 = (int)lVar5 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if ((plVar11 != (long *)0x0) && ((int)lVar5 == 1)) {
                  (**(code **)(*plVar11 + 8))();
                }
              }
              iVar29 = iVar29 + 1;
            }
          }
          if ((uVar21 & 1) != 0) {
            plVar12 = (long *)(uVar21 & 0xfffffffffffffffe);
            plVar28 = plVar12 + 1;
            do {
              lVar9 = *plVar28;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar4) {
                *(int *)plVar28 = (int)lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((plVar12 != (long *)0x0) && ((int)lVar9 == 1)) {
              (**(code **)(*plVar12 + 8))();
            }
          }
        }
      }
    }
LAB_033ae818:
    if ((local_78 & 1) != 0) {
      plVar12 = (long *)(local_78 & 0xfffffffffffffffe);
      plVar28 = plVar12 + 1;
      do {
        lVar9 = *plVar28;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar4) {
          *(int *)plVar28 = (int)lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar12 != (long *)0x0) && ((int)lVar9 == 1)) {
        (**(code **)(*plVar12 + 8))();
      }
    }
  }
  return;
}


