/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031fb974; name: FUN_031fb974
 */


/* WARNING: Removing unreachable block (ram,0x031fca24) */
/* WARNING: Removing unreachable block (ram,0x031fcd78) */

undefined4 FUN_031fb974(long *param_1,ulong *param_2,int param_3,ulong *param_4,int param_5)

{
  char cVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  ThreadType *pTVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  ushort uVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong *puVar19;
  undefined8 *puVar20;
  ushort uVar21;
  ulong *puVar22;
  short *psVar23;
  undefined1 uVar24;
  short *psVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  ulong *puVar29;
  ulong *puVar30;
  long *local_c0;
  undefined *local_b8;
  ulong *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong local_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined4 local_68 [2];
  
  puVar5 = PTR_DAT_047e5e00;
  uVar18 = *param_2;
  uVar4 = (undefined2)param_5;
  puVar22 = param_2;
  if ((uVar18 & 1) == 0) {
    do {
      puVar22 = (ulong *)puVar22[1];
    } while ((*puVar22 & 1) == 0);
  }
  uVar3 = (undefined2)param_3;
  switch((uint)puVar22[2] & 0x1f) {
  case 1:
    if ((ulong *)param_1[2] != param_4) {
      if (param_4 == param_2) {
        lVar11 = FUN_031fa694(*param_1,param_4);
      }
      else {
        lVar11 = FUN_031fa91c(*param_1,param_4,param_2);
      }
      if (lVar11 == 0) {
        return 0x80040200;
      }
      plVar28 = (long *)param_1[1];
      iVar7 = (int)plVar28[1];
      lVar27 = (long)iVar7;
      lVar26 = lVar27 + 1;
      if ((int)(*(uint *)((long)plVar28 + 0xc) & 0x7fffffff) <= iVar7) {
        FUN_031cb264(plVar28,PTR_PTR_047d1a50,lVar26);
        iVar7 = (int)plVar28[1];
      }
      puVar20 = (undefined8 *)(*plVar28 + (long)iVar7 * 0x38);
      *(undefined1 *)(puVar20 + 1) = 0;
      *(undefined4 *)((long)puVar20 + 10) = 0;
      puVar20[2] = 0;
      *puVar20 = &PTR_LAB_046a8050;
      *(int *)(plVar28 + 1) = (int)lVar26;
      plVar28 = (long *)(*plVar28 + lVar27 * 0x38);
      (**(code **)(*plVar28 + 8))(plVar28);
      *(undefined1 *)(plVar28 + 1) = 0xc;
      *(undefined2 *)((long)plVar28 + 10) = uVar4;
      *(undefined2 *)((long)plVar28 + 0xc) = uVar3;
      *plVar28 = (long)&PTR_LAB_046a80f8;
      plVar28[2] = 0;
      plVar28[3] = (long)param_4;
      plVar28[4] = (long)param_2;
      plVar28[5] = lVar11;
      return 0;
    }
    lVar11 = *param_1;
    if (*(char *)(lVar11 + 4) == '\0') {
      puVar22 = (ulong *)param_2[1];
    }
    else {
      puVar22 = (ulong *)0x0;
    }
    if (*(char *)(lVar11 + 1) == '\0') {
      if (*(char *)(lVar11 + 2) != '\0') {
        uVar21 = 0;
        uVar14 = 0x10;
        goto LAB_031fc0d0;
      }
      puVar30 = (ulong *)0x0;
      puVar29 = (ulong *)0x0;
      do {
        do {
          do {
            puVar29 = puVar29 + 1;
            puVar19 = puVar22;
            if (puVar30 <= puVar29) {
              if (puVar22 == param_2) {
                return 0;
              }
              psVar23 = (short *)0x0;
              puVar19 = (ulong *)0x0;
              puVar29 = param_2;
              do {
                uVar17 = (uint)*puVar29;
                if ((uVar17 >> 0x17 & 1) != 0) {
                  uVar18 = CONCAT44(uVar17,uVar17) & 0x7fffff007fffff;
                  psVar25 = (short *)puVar29[(ulong)(byte)(POPCOUNT((char)uVar18) +
                                                           POPCOUNT((char)(uVar18 >> 8)) +
                                                          POPCOUNT((char)(uVar18 >> 0x10))) + 2];
                  if (psVar25 != (short *)0x0) {
                    if ((int)psVar25[1] + (int)*psVar25 != 0) {
                      psVar23 = psVar25;
                      puVar19 = puVar29;
                    }
                  }
                }
                puVar29 = (ulong *)puVar29[1];
              } while (puVar29 != puVar22);
              if (puVar19 == (ulong *)0x0) {
                return 0;
              }
              puVar29 = (ulong *)(psVar23 + 4);
              puVar30 = puVar29 + (long)psVar23[1] + (long)*psVar23;
            }
            uVar17 = (uint)*(undefined8 *)*puVar29;
            if ((uVar17 >> 0x11 & 1) == 0) {
              uVar14 = 0;
            }
            else {
              uVar18 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
              uVar14 = *(ushort *)
                        ((long)*puVar29 +
                        (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                     POPCOUNT((char)(uVar18 >> 0x10))) * 8 + 0x12);
            }
            puVar22 = puVar19;
          } while ((uVar14 & 0x30) == 0);
          puVar20 = (undefined8 *)*puVar29;
          uVar17 = (uint)*puVar20;
          if ((uVar17 >> 0x11 & 1) == 0) {
            uVar16 = 0;
            uVar17 = 0;
          }
          else {
            uVar18 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
            uVar16 = (uint)*(ushort *)
                            (puVar20 +
                            (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                         POPCOUNT((char)(uVar18 >> 0x10))) + 2);
            uVar17 = (uint)*(ushort *)
                            (puVar20 +
                            (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                         POPCOUNT((char)(uVar18 >> 0x10))) + 2);
          }
        } while ((puVar20 == (undefined8 *)0x0) && (uVar17 = uVar16, *(char *)*param_1 == '\0'));
        FUN_031e1bb4(&local_c0,puVar20,PTR_DAT_047e5e00);
        plVar28 = local_c0;
        if (((ulong)local_b0 & 1) != 0) {
          plVar9 = (long *)((ulong)local_b0 & 0xfffffffffffffffe);
          plVar8 = plVar9 + 1;
          do {
            lVar11 = *plVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *(int *)plVar8 = (int)lVar11 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if ((plVar9 != (long *)0x0) && ((int)lVar11 == 1)) {
            (**(code **)(*plVar9 + 8))();
          }
        }
        if (plVar28 == (long *)0x0) {
          iVar7 = FUN_031fb974(param_1,puVar20,uVar17 + param_3,puVar20,uVar17 + param_5);
        }
        else {
          iVar7 = (*(code *)*plVar28)(param_1[1],puVar20,uVar17 + param_3,puVar20,uVar17 + param_5);
        }
      } while (-1 < iVar7);
    }
    else {
      uVar14 = (ushort)(*(char *)(lVar11 + 2) != '\0') << 4;
      uVar21 = 1;
LAB_031fc0d0:
      puVar30 = (ulong *)0x0;
      puVar29 = (ulong *)0x0;
      do {
        do {
          do {
            do {
              puVar29 = puVar29 + 1;
              puVar19 = puVar22;
              if (puVar30 <= puVar29) {
                if (puVar22 == param_2) {
                  return 0;
                }
                psVar23 = (short *)0x0;
                puVar19 = (ulong *)0x0;
                puVar29 = param_2;
                do {
                  uVar17 = (uint)*puVar29;
                  if ((uVar17 >> 0x17 & 1) != 0) {
                    uVar18 = CONCAT44(uVar17,uVar17) & 0x7fffff007fffff;
                    psVar25 = (short *)puVar29[(ulong)(byte)(POPCOUNT((char)uVar18) +
                                                             POPCOUNT((char)(uVar18 >> 8)) +
                                                            POPCOUNT((char)(uVar18 >> 0x10))) + 2];
                    if (psVar25 != (short *)0x0) {
                      if ((int)psVar25[1] + (int)*psVar25 != 0) {
                        psVar23 = psVar25;
                        puVar19 = puVar29;
                      }
                    }
                  }
                  puVar29 = (ulong *)puVar29[1];
                } while (puVar29 != puVar22);
                if (puVar19 == (ulong *)0x0) {
                  return 0;
                }
                puVar29 = (ulong *)(psVar23 + 4);
                puVar30 = puVar29 + (long)psVar23[1] + (long)*psVar23;
              }
              uVar17 = (uint)*(undefined8 *)*puVar29;
              if ((uVar17 >> 0x11 & 1) == 0) {
                uVar15 = 0;
              }
              else {
                uVar18 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
                uVar15 = *(ushort *)
                          ((long)*puVar29 +
                          (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                       POPCOUNT((char)(uVar18 >> 0x10))) * 8 + 0x12);
              }
              puVar22 = puVar19;
            } while ((uVar15 & 0x30) == 0);
            uVar17 = (uint)*(undefined8 *)*puVar29;
            if ((uVar17 >> 0x11 & 1) == 0) {
              uVar15 = 0;
            }
            else {
              uVar18 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
              uVar15 = *(ushort *)
                        ((long)*puVar29 +
                        (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                     POPCOUNT((char)(uVar18 >> 0x10))) * 8 + 0x12);
            }
          } while (((uVar14 | uVar21) & uVar15) != 0);
          puVar20 = (undefined8 *)*puVar29;
          uVar17 = (uint)*puVar20;
          if ((uVar17 >> 0x11 & 1) == 0) {
            uVar16 = 0;
            uVar17 = 0;
          }
          else {
            uVar18 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
            uVar16 = (uint)*(ushort *)
                            (puVar20 +
                            (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                         POPCOUNT((char)(uVar18 >> 0x10))) + 2);
            uVar17 = (uint)*(ushort *)
                            (puVar20 +
                            (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                         POPCOUNT((char)(uVar18 >> 0x10))) + 2);
          }
        } while ((puVar20 == (undefined8 *)0x0) && (uVar17 = uVar16, *(char *)*param_1 == '\0'));
        FUN_031e1bb4(&local_c0,puVar20,PTR_DAT_047e5e00);
        plVar28 = local_c0;
        if (((ulong)local_b0 & 1) != 0) {
          plVar9 = (long *)((ulong)local_b0 & 0xfffffffffffffffe);
          plVar8 = plVar9 + 1;
          do {
            lVar11 = *plVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *(int *)plVar8 = (int)lVar11 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if ((plVar9 != (long *)0x0) && ((int)lVar11 == 1)) {
            (**(code **)(*plVar9 + 8))();
          }
        }
        if (plVar28 == (long *)0x0) {
          iVar7 = FUN_031fb974(param_1,puVar20,uVar17 + param_3,puVar20,uVar17 + param_5);
        }
        else {
          iVar7 = (*(code *)*plVar28)(param_1[1],puVar20,uVar17 + param_3,puVar20,uVar17 + param_5);
        }
      } while (-1 < iVar7);
    }
    local_70 = *puVar29;
    local_68[0] = 0x80040200;
    if (local_70 < 2) {
      return 0;
    }
    if (PTR_DAT_047e5e08[0x50] == '\0') {
      return 0x80040200;
    }
    local_c0 = (long *)0x0;
    local_b0 = (ulong *)PTR_DAT_047e5e08;
    local_a8 = 1;
    pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
    local_a0 = nn::os::GetThreadId(pTVar10);
    local_90 = 0;
    pcStack_88 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeVm/hkTypeVmCompiler.cpp"
    ;
    local_98 = 0;
    local_80 = 0x9a;
    uStack_78 = 0;
    FUN_0322c554(&local_c0,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_047e5968,"failedField",
                 local_68);
    pcVar13 = "Failed to clone opaque field \'{}\'.";
LAB_031fd24c:
    FUN_0322c554(&local_c0,pcVar13,PTR_DAT_047e5e10,&local_70);
    FUN_0322c8e0(&local_c0);
    if ((local_98 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_98 - 1,0);
    }
    return local_68[0];
  case 2:
    plVar28 = (long *)param_1[1];
    iVar7 = (int)plVar28[1];
    lVar26 = (long)iVar7;
    lVar11 = lVar26 + 1;
    if ((int)(*(uint *)((long)plVar28 + 0xc) & 0x7fffffff) <= iVar7) {
      FUN_031cb264(plVar28,PTR_PTR_047d1a50,lVar11);
      iVar7 = (int)plVar28[1];
    }
    puVar20 = (undefined8 *)(*plVar28 + (long)iVar7 * 0x38);
    *(undefined1 *)(puVar20 + 1) = 0;
    *(undefined4 *)((long)puVar20 + 10) = 0;
    puVar20[2] = 0;
    *puVar20 = &PTR_LAB_046a8050;
    *(int *)(plVar28 + 1) = (int)lVar11;
    plVar28 = (long *)(*plVar28 + lVar26 * 0x38);
    (**(code **)(*plVar28 + 8))(plVar28);
    uVar24 = 1;
    *(undefined2 *)((long)plVar28 + 10) = uVar4;
    *(undefined2 *)((long)plVar28 + 0xc) = uVar3;
    break;
  case 3:
    plVar28 = (long *)param_1[1];
    iVar7 = (int)plVar28[1];
    lVar26 = (long)iVar7;
    lVar11 = lVar26 + 1;
    if ((int)(*(uint *)((long)plVar28 + 0xc) & 0x7fffffff) <= iVar7) {
      FUN_031cb264(plVar28,PTR_PTR_047d1a50,lVar11);
      iVar7 = (int)plVar28[1];
    }
    puVar20 = (undefined8 *)(*plVar28 + (long)iVar7 * 0x38);
    *(undefined1 *)(puVar20 + 1) = 0;
    *(undefined4 *)((long)puVar20 + 10) = 0;
    puVar20[2] = 0;
    *puVar20 = &PTR_LAB_046a8050;
    *(int *)(plVar28 + 1) = (int)lVar11;
    plVar28 = (long *)(*plVar28 + lVar26 * 0x38);
    (**(code **)(*plVar28 + 8))(plVar28);
    *(undefined2 *)((long)plVar28 + 10) = uVar4;
    *(undefined2 *)((long)plVar28 + 0xc) = uVar3;
    uVar24 = 5;
    break;
  case 4:
    plVar28 = (long *)param_1[1];
    iVar7 = (int)plVar28[1];
    lVar26 = (long)iVar7;
    lVar11 = lVar26 + 1;
    if ((int)(*(uint *)((long)plVar28 + 0xc) & 0x7fffffff) <= iVar7) {
      FUN_031cb264(plVar28,PTR_PTR_047d1a50,lVar11);
      iVar7 = (int)plVar28[1];
    }
    puVar20 = (undefined8 *)(*plVar28 + (long)iVar7 * 0x38);
    *(undefined1 *)(puVar20 + 1) = 0;
    *(undefined4 *)((long)puVar20 + 10) = 0;
    puVar20[2] = 0;
    *puVar20 = &PTR_LAB_046a8050;
    *(int *)(plVar28 + 1) = (int)lVar11;
    plVar28 = (long *)(*plVar28 + lVar26 * 0x38);
    (**(code **)(*plVar28 + 8))(plVar28);
    *(undefined2 *)((long)plVar28 + 10) = uVar4;
    *(undefined2 *)((long)plVar28 + 0xc) = uVar3;
    uVar24 = 2;
    break;
  case 5:
    plVar28 = (long *)param_1[1];
    iVar7 = (int)plVar28[1];
    lVar26 = (long)iVar7;
    lVar11 = lVar26 + 1;
    if ((int)(*(uint *)((long)plVar28 + 0xc) & 0x7fffffff) <= iVar7) {
      FUN_031cb264(plVar28,PTR_PTR_047d1a50,lVar11);
      iVar7 = (int)plVar28[1];
    }
    puVar20 = (undefined8 *)(*plVar28 + (long)iVar7 * 0x38);
    *(undefined1 *)(puVar20 + 1) = 0;
    *(undefined4 *)((long)puVar20 + 10) = 0;
    puVar20[2] = 0;
    *puVar20 = &PTR_LAB_046a8050;
    *(int *)(plVar28 + 1) = (int)lVar11;
    plVar28 = (long *)(*plVar28 + lVar26 * 0x38);
    (**(code **)(*plVar28 + 8))(plVar28);
    *(undefined2 *)((long)plVar28 + 10) = uVar4;
    *(undefined2 *)((long)plVar28 + 0xc) = uVar3;
    uVar24 = 3;
    break;
  case 6:
    plVar28 = (long *)param_1[1];
    iVar7 = (int)plVar28[1];
    lVar26 = (long)iVar7;
    lVar11 = lVar26 + 1;
    if ((int)(*(uint *)((long)plVar28 + 0xc) & 0x7fffffff) <= iVar7) {
      FUN_031cb264(plVar28,PTR_PTR_047d1a50,lVar11);
      iVar7 = (int)plVar28[1];
    }
    puVar20 = (undefined8 *)(*plVar28 + (long)iVar7 * 0x38);
    *(undefined1 *)(puVar20 + 1) = 0;
    *(undefined4 *)((long)puVar20 + 10) = 0;
    puVar20[2] = 0;
    *puVar20 = &PTR_LAB_046a8050;
    *(int *)(plVar28 + 1) = (int)lVar11;
    plVar28 = (long *)(*plVar28 + lVar26 * 0x38);
    (**(code **)(*plVar28 + 8))(plVar28);
    *(undefined2 *)((long)plVar28 + 10) = uVar4;
    *(undefined2 *)((long)plVar28 + 0xc) = uVar3;
    uVar24 = 4;
    break;
  case 7:
    if (((ulong *)param_1[3] != param_2) && ((ulong *)param_1[2] != param_4)) {
      if (param_4 == param_2) {
        lVar11 = FUN_031fa694(*param_1,param_4);
      }
      else {
        lVar11 = FUN_031fa91c(*param_1,param_4,param_2);
      }
      if (lVar11 == 0) {
        return 0x80040200;
      }
      plVar28 = (long *)param_1[1];
      iVar7 = (int)plVar28[1];
      lVar27 = (long)iVar7;
      lVar26 = lVar27 + 1;
      if ((int)(*(uint *)((long)plVar28 + 0xc) & 0x7fffffff) <= iVar7) {
        FUN_031cb264(plVar28,PTR_PTR_047d1a50,lVar26);
        iVar7 = (int)plVar28[1];
      }
      puVar20 = (undefined8 *)(*plVar28 + (long)iVar7 * 0x38);
      *(undefined1 *)(puVar20 + 1) = 0;
      *(undefined4 *)((long)puVar20 + 10) = 0;
      puVar20[2] = 0;
      *puVar20 = &PTR_LAB_046a8050;
      *(int *)(plVar28 + 1) = (int)lVar26;
      plVar28 = (long *)(*plVar28 + lVar27 * 0x38);
      (**(code **)(*plVar28 + 8))(plVar28);
      *(undefined1 *)(plVar28 + 1) = 0xc;
      *(undefined2 *)((long)plVar28 + 10) = uVar4;
      *(undefined2 *)((long)plVar28 + 0xc) = uVar3;
      *plVar28 = (long)&PTR_LAB_046a80f8;
      plVar28[2] = 0;
      plVar28[3] = (long)param_4;
      plVar28[4] = (long)param_2;
      plVar28[5] = lVar11;
      return 0;
    }
    if (param_4 != param_2) {
      if (param_4 != (ulong *)0x0) {
        puVar22 = param_4;
        if ((*param_4 & 1) == 0) {
          do {
            puVar22 = (ulong *)puVar22[1];
          } while ((*puVar22 & 1) == 0);
        }
        puVar29 = param_4;
        if ((puVar22[2] & 0x1f) != 7) {
          puVar29 = (ulong *)0x0;
        }
        if (puVar29 != param_4) {
          if (*(char *)*param_1 == '\0') {
            uVar6 = 0;
          }
          else {
            FUN_031e1bb4(&local_c0,param_2,PTR_DAT_047e5e00);
            if (((ulong)local_b0 & 1) != 0) {
              plVar8 = (long *)((ulong)local_b0 & 0xfffffffffffffffe);
              plVar28 = plVar8 + 1;
              do {
                lVar11 = *plVar28;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar2) {
                  *(int *)plVar28 = (int)lVar11 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if ((plVar8 != (long *)0x0) && ((int)lVar11 == 1)) {
                (**(code **)(*plVar8 + 8))();
              }
            }
            if (local_c0 == (long *)0x0) {
              uVar6 = FUN_031fb974(param_1,param_2,param_3,0,0);
            }
            else {
              uVar6 = (*(code *)*local_c0)(param_1[1],param_2,param_3,0,0);
            }
          }
          return uVar6;
        }
        local_b8 = (undefined *)CONCAT44(local_b8._4_4_,param_3);
        local_a8 = CONCAT44(local_a8._4_4_,param_5);
        lVar11 = *param_1;
        if (*(char *)(lVar11 + 4) == '\0') {
          puVar22 = (ulong *)param_2[1];
        }
        else {
          puVar22 = (ulong *)0x0;
        }
        local_c0 = param_1;
        local_b0 = puVar29;
        if (*(char *)(lVar11 + 1) == '\0') {
          if (*(char *)(lVar11 + 2) == '\0') {
            puVar30 = (ulong *)0x0;
            puVar29 = (ulong *)0x0;
            do {
              puVar29 = puVar29 + 1;
              puVar19 = puVar22;
              if (puVar30 <= puVar29) {
                if (puVar22 == param_2) goto LAB_031fd1c4;
                psVar23 = (short *)0x0;
                puVar19 = (ulong *)0x0;
                puVar29 = param_2;
                do {
                  uVar17 = (uint)*puVar29;
                  if ((uVar17 >> 0x17 & 1) != 0) {
                    uVar18 = CONCAT44(uVar17,uVar17) & 0x7fffff007fffff;
                    psVar25 = (short *)puVar29[(ulong)(byte)(POPCOUNT((char)uVar18) +
                                                             POPCOUNT((char)(uVar18 >> 8)) +
                                                            POPCOUNT((char)(uVar18 >> 0x10))) + 2];
                    if (psVar25 != (short *)0x0) {
                      if ((int)psVar25[1] + (int)*psVar25 != 0) {
                        psVar23 = psVar25;
                        puVar19 = puVar29;
                      }
                    }
                  }
                  puVar29 = (ulong *)puVar29[1];
                } while (puVar29 != puVar22);
                local_70 = 0;
                if (puVar19 == (ulong *)0x0) goto LAB_031fd1c8;
                puVar29 = (ulong *)(psVar23 + 4);
                puVar30 = puVar29 + (long)psVar23[1] + (long)*psVar23;
              }
              uVar17 = (uint)*(undefined8 *)*puVar29;
              if ((uVar17 >> 0x11 & 1) == 0) {
                uVar14 = 0;
              }
              else {
                uVar18 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
                uVar14 = *(ushort *)
                          ((long)*puVar29 +
                          (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                       POPCOUNT((char)(uVar18 >> 0x10))) * 8 + 0x12);
              }
              puVar22 = puVar19;
            } while (((uVar14 & 0x30) == 0) ||
                    (iVar7 = FUN_031fd2bc(&local_c0,*puVar29), -1 < iVar7));
            local_70 = *puVar29;
            goto LAB_031fd1c8;
          }
          uVar21 = 0;
          uVar14 = 0x10;
        }
        else {
          uVar14 = (ushort)(*(char *)(lVar11 + 2) != '\0') << 4;
          uVar21 = 1;
        }
        puVar30 = (ulong *)0x0;
        puVar29 = (ulong *)0x0;
        do {
          do {
            puVar29 = puVar29 + 1;
            puVar19 = puVar22;
            if (puVar30 <= puVar29) {
              if (puVar22 == param_2) goto LAB_031fd1c4;
              psVar23 = (short *)0x0;
              puVar19 = (ulong *)0x0;
              puVar29 = param_2;
              do {
                uVar17 = (uint)*puVar29;
                if ((uVar17 >> 0x17 & 1) != 0) {
                  uVar18 = CONCAT44(uVar17,uVar17) & 0x7fffff007fffff;
                  psVar25 = (short *)puVar29[(ulong)(byte)(POPCOUNT((char)uVar18) +
                                                           POPCOUNT((char)(uVar18 >> 8)) +
                                                          POPCOUNT((char)(uVar18 >> 0x10))) + 2];
                  if (psVar25 != (short *)0x0) {
                    if ((int)psVar25[1] + (int)*psVar25 != 0) {
                      psVar23 = psVar25;
                      puVar19 = puVar29;
                    }
                  }
                }
                puVar29 = (ulong *)puVar29[1];
              } while (puVar29 != puVar22);
              local_70 = 0;
              if (puVar19 == (ulong *)0x0) goto LAB_031fd1c8;
              puVar29 = (ulong *)(psVar23 + 4);
              puVar30 = puVar29 + (long)psVar23[1] + (long)*psVar23;
            }
            uVar17 = (uint)*(undefined8 *)*puVar29;
            if ((uVar17 >> 0x11 & 1) == 0) {
              uVar15 = 0;
            }
            else {
              uVar18 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
              uVar15 = *(ushort *)
                        ((long)*puVar29 +
                        (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                     POPCOUNT((char)(uVar18 >> 0x10))) * 8 + 0x12);
            }
            puVar22 = puVar19;
          } while ((uVar15 & 0x30) == 0);
          uVar17 = (uint)*(undefined8 *)*puVar29;
          if ((uVar17 >> 0x11 & 1) == 0) {
            uVar15 = 0;
          }
          else {
            uVar18 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
            uVar15 = *(ushort *)
                      ((long)*puVar29 +
                      (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                   POPCOUNT((char)(uVar18 >> 0x10))) * 8 + 0x12);
          }
        } while ((((uVar14 | uVar21) & uVar15) != 0) ||
                (iVar7 = FUN_031fd2bc(&local_c0,*puVar29), -1 < iVar7));
        local_70 = *puVar29;
        goto LAB_031fd1c8;
      }
      lVar11 = *param_1;
      if (*(char *)(lVar11 + 4) == '\0') {
        puVar22 = (ulong *)param_2[1];
      }
      else {
        puVar22 = (ulong *)0x0;
      }
      if (*(char *)(lVar11 + 1) == '\0') {
        if (*(char *)(lVar11 + 2) != '\0') {
          uVar21 = 0;
          uVar14 = 0x10;
          goto LAB_031fc67c;
        }
        puVar30 = (ulong *)0x0;
        puVar29 = (ulong *)0x0;
        do {
          do {
            puVar29 = puVar29 + 1;
            puVar19 = puVar22;
            if (puVar30 <= puVar29) {
              if (puVar22 == param_2) {
                return 0;
              }
              psVar23 = (short *)0x0;
              puVar19 = (ulong *)0x0;
              puVar29 = param_2;
              do {
                uVar17 = (uint)*puVar29;
                if ((uVar17 >> 0x17 & 1) != 0) {
                  uVar18 = CONCAT44(uVar17,uVar17) & 0x7fffff007fffff;
                  psVar25 = (short *)puVar29[(ulong)(byte)(POPCOUNT((char)uVar18) +
                                                           POPCOUNT((char)(uVar18 >> 8)) +
                                                          POPCOUNT((char)(uVar18 >> 0x10))) + 2];
                  if (psVar25 != (short *)0x0) {
                    if ((int)psVar25[1] + (int)*psVar25 != 0) {
                      psVar23 = psVar25;
                      puVar19 = puVar29;
                    }
                  }
                }
                puVar29 = (ulong *)puVar29[1];
              } while (puVar29 != puVar22);
              if (puVar19 == (ulong *)0x0) {
                return 0;
              }
              puVar29 = (ulong *)(psVar23 + 4);
              puVar30 = puVar29 + (long)psVar23[1] + (long)*psVar23;
            }
            uVar17 = (uint)*(undefined8 *)*puVar29;
            if ((uVar17 >> 0x11 & 1) == 0) {
              uVar14 = 0;
            }
            else {
              uVar18 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
              uVar14 = *(ushort *)
                        ((long)*puVar29 +
                        (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                     POPCOUNT((char)(uVar18 >> 0x10))) * 8 + 0x12);
            }
            puVar22 = puVar19;
          } while ((uVar14 & 0x30) == 0);
          puVar20 = (undefined8 *)*puVar29;
          uVar17 = (uint)*puVar20;
          if ((uVar17 >> 0x11 & 1) == 0) {
            uVar17 = 0;
          }
          else {
            uVar18 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
            uVar17 = (uint)*(ushort *)
                            (puVar20 +
                            (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                         POPCOUNT((char)(uVar18 >> 0x10))) + 2);
          }
          if (*(char *)*param_1 == '\0') {
            iVar7 = 0;
          }
          else {
            FUN_031e1bb4(&local_c0,puVar20,puVar5);
            plVar28 = local_c0;
            if (((ulong)local_b0 & 1) != 0) {
              plVar9 = (long *)((ulong)local_b0 & 0xfffffffffffffffe);
              plVar8 = plVar9 + 1;
              do {
                lVar11 = *plVar8;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar2) {
                  *(int *)plVar8 = (int)lVar11 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if ((plVar9 != (long *)0x0) && ((int)lVar11 == 1)) {
                (**(code **)(*plVar9 + 8))();
              }
            }
            if (plVar28 == (long *)0x0) {
              iVar7 = FUN_031fb974(param_1,puVar20,uVar17 + param_3,0,0);
            }
            else {
              iVar7 = (*(code *)*plVar28)(param_1[1],puVar20,uVar17 + param_3,0,0);
            }
          }
        } while (-1 < iVar7);
      }
      else {
        uVar14 = (ushort)(*(char *)(lVar11 + 2) != '\0') << 4;
        uVar21 = 1;
LAB_031fc67c:
        puVar30 = (ulong *)0x0;
        puVar29 = (ulong *)0x0;
        do {
          do {
            do {
              do {
                puVar29 = puVar29 + 1;
                puVar19 = puVar22;
                if (puVar30 <= puVar29) {
                  if (puVar22 == param_2) {
                    return 0;
                  }
                  psVar23 = (short *)0x0;
                  puVar19 = (ulong *)0x0;
                  puVar29 = param_2;
                  do {
                    uVar17 = (uint)*puVar29;
                    if ((uVar17 >> 0x17 & 1) != 0) {
                      uVar18 = CONCAT44(uVar17,uVar17) & 0x7fffff007fffff;
                      psVar25 = (short *)puVar29[(ulong)(byte)(POPCOUNT((char)uVar18) +
                                                               POPCOUNT((char)(uVar18 >> 8)) +
                                                              POPCOUNT((char)(uVar18 >> 0x10))) + 2]
                      ;
                      if (psVar25 != (short *)0x0) {
                        if ((int)psVar25[1] + (int)*psVar25 != 0) {
                          psVar23 = psVar25;
                          puVar19 = puVar29;
                        }
                      }
                    }
                    puVar29 = (ulong *)puVar29[1];
                  } while (puVar29 != puVar22);
                  if (puVar19 == (ulong *)0x0) {
                    return 0;
                  }
                  puVar29 = (ulong *)(psVar23 + 4);
                  puVar30 = puVar29 + (long)psVar23[1] + (long)*psVar23;
                }
                uVar17 = (uint)*(undefined8 *)*puVar29;
                if ((uVar17 >> 0x11 & 1) == 0) {
                  uVar15 = 0;
                }
                else {
                  uVar18 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
                  uVar15 = *(ushort *)
                            ((long)*puVar29 +
                            (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                         POPCOUNT((char)(uVar18 >> 0x10))) * 8 + 0x12);
                }
                puVar22 = puVar19;
              } while ((uVar15 & 0x30) == 0);
              uVar17 = (uint)*(undefined8 *)*puVar29;
              if ((uVar17 >> 0x11 & 1) == 0) {
                uVar15 = 0;
              }
              else {
                uVar18 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
                uVar15 = *(ushort *)
                          ((long)*puVar29 +
                          (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                       POPCOUNT((char)(uVar18 >> 0x10))) * 8 + 0x12);
              }
            } while (((uVar14 | uVar21) & uVar15) != 0);
            puVar20 = (undefined8 *)*puVar29;
            uVar17 = (uint)*puVar20;
            if ((uVar17 >> 0x11 & 1) == 0) {
              uVar17 = 0;
            }
            else {
              uVar18 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
              uVar17 = (uint)*(ushort *)
                              (puVar20 +
                              (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                           POPCOUNT((char)(uVar18 >> 0x10))) + 2);
            }
          } while (*(char *)*param_1 == '\0');
          FUN_031e1bb4(&local_c0,puVar20,PTR_DAT_047e5e00);
          plVar28 = local_c0;
          if (((ulong)local_b0 & 1) != 0) {
            plVar9 = (long *)((ulong)local_b0 & 0xfffffffffffffffe);
            plVar8 = plVar9 + 1;
            do {
              lVar11 = *plVar8;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar2) {
                *(int *)plVar8 = (int)lVar11 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if ((plVar9 != (long *)0x0) && ((int)lVar11 == 1)) {
              (**(code **)(*plVar9 + 8))();
            }
          }
          if (plVar28 == (long *)0x0) {
            iVar7 = FUN_031fb974(param_1,puVar20,uVar17 + param_3,0,0);
          }
          else {
            iVar7 = (*(code *)*plVar28)(param_1[1],puVar20,uVar17 + param_3,0,0);
          }
        } while (-1 < iVar7);
      }
      local_70 = *puVar29;
      local_68[0] = 0x80040200;
      if (local_70 < 2) {
        return 0;
      }
      if (PTR_DAT_047e5e08[0x50] == '\0') {
        return 0x80040200;
      }
      local_b0 = (ulong *)PTR_DAT_047e5e08;
      local_c0 = (long *)0x0;
      local_a8 = 1;
      pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
      local_a0 = nn::os::GetThreadId(pTVar10);
      local_90 = 0;
      pcStack_88 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeVm/hkTypeVmCompiler.cpp"
      ;
      local_98 = 0;
      local_80 = 0xf1;
      uStack_78 = 0;
      FUN_0322c554(&local_c0,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_047e5968,"failedField",
                   local_68);
      pcVar13 = "Failed to clone field \'{}\' with NULL source type.";
      goto LAB_031fd24c;
    }
    lVar11 = *param_1;
    if (*(char *)(lVar11 + 4) == '\0') {
      puVar22 = (ulong *)param_2[1];
    }
    else {
      puVar22 = (ulong *)0x0;
    }
    if (*(char *)(lVar11 + 1) == '\0') {
      if (*(char *)(lVar11 + 2) != '\0') {
        uVar21 = 0;
        uVar14 = 0x10;
        goto LAB_031fc3b8;
      }
      puVar30 = (ulong *)0x0;
      puVar29 = (ulong *)0x0;
      do {
        do {
          do {
            puVar29 = puVar29 + 1;
            puVar19 = puVar22;
            if (puVar30 <= puVar29) {
              if (puVar22 == param_2) {
                return 0;
              }
              psVar23 = (short *)0x0;
              puVar19 = (ulong *)0x0;
              puVar29 = param_2;
              do {
                uVar17 = (uint)*puVar29;
                if ((uVar17 >> 0x17 & 1) != 0) {
                  uVar18 = CONCAT44(uVar17,uVar17) & 0x7fffff007fffff;
                  psVar25 = (short *)puVar29[(ulong)(byte)(POPCOUNT((char)uVar18) +
                                                           POPCOUNT((char)(uVar18 >> 8)) +
                                                          POPCOUNT((char)(uVar18 >> 0x10))) + 2];
                  if (psVar25 != (short *)0x0) {
                    if ((int)psVar25[1] + (int)*psVar25 != 0) {
                      psVar23 = psVar25;
                      puVar19 = puVar29;
                    }
                  }
                }
                puVar29 = (ulong *)puVar29[1];
              } while (puVar29 != puVar22);
              if (puVar19 == (ulong *)0x0) {
                return 0;
              }
              puVar29 = (ulong *)(psVar23 + 4);
              puVar30 = puVar29 + (long)psVar23[1] + (long)*psVar23;
            }
            uVar17 = (uint)*(undefined8 *)*puVar29;
            if ((uVar17 >> 0x11 & 1) == 0) {
              uVar14 = 0;
            }
            else {
              uVar18 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
              uVar14 = *(ushort *)
                        ((long)*puVar29 +
                        (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                     POPCOUNT((char)(uVar18 >> 0x10))) * 8 + 0x12);
            }
            puVar22 = puVar19;
          } while ((uVar14 & 0x30) == 0);
          puVar20 = (undefined8 *)*puVar29;
          uVar17 = (uint)*puVar20;
          if ((uVar17 >> 0x11 & 1) == 0) {
            uVar17 = 0;
          }
          else {
            uVar18 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
            uVar17 = (uint)*(ushort *)
                            (puVar20 +
                            (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                         POPCOUNT((char)(uVar18 >> 0x10))) + 2);
          }
        } while ((puVar20 == (undefined8 *)0x0) && (*(char *)*param_1 == '\0'));
        FUN_031e1bb4(&local_c0,puVar20,PTR_DAT_047e5e00);
        plVar28 = local_c0;
        if (((ulong)local_b0 & 1) != 0) {
          plVar9 = (long *)((ulong)local_b0 & 0xfffffffffffffffe);
          plVar8 = plVar9 + 1;
          do {
            lVar11 = *plVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *(int *)plVar8 = (int)lVar11 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if ((plVar9 != (long *)0x0) && ((int)lVar11 == 1)) {
            (**(code **)(*plVar9 + 8))();
          }
        }
        if (plVar28 == (long *)0x0) {
          iVar7 = FUN_031fb974(param_1,puVar20,uVar17 + param_3,puVar20,uVar17 + param_5);
        }
        else {
          iVar7 = (*(code *)*plVar28)(param_1[1],puVar20,uVar17 + param_3,puVar20,uVar17 + param_5);
        }
      } while (-1 < iVar7);
    }
    else {
      uVar14 = (ushort)(*(char *)(lVar11 + 2) != '\0') << 4;
      uVar21 = 1;
LAB_031fc3b8:
      puVar30 = (ulong *)0x0;
      puVar29 = (ulong *)0x0;
      do {
        do {
          do {
            do {
              puVar29 = puVar29 + 1;
              puVar19 = puVar22;
              if (puVar30 <= puVar29) {
                if (puVar22 == param_2) {
                  return 0;
                }
                psVar23 = (short *)0x0;
                puVar19 = (ulong *)0x0;
                puVar29 = param_2;
                do {
                  uVar17 = (uint)*puVar29;
                  if ((uVar17 >> 0x17 & 1) != 0) {
                    uVar18 = CONCAT44(uVar17,uVar17) & 0x7fffff007fffff;
                    psVar25 = (short *)puVar29[(ulong)(byte)(POPCOUNT((char)uVar18) +
                                                             POPCOUNT((char)(uVar18 >> 8)) +
                                                            POPCOUNT((char)(uVar18 >> 0x10))) + 2];
                    if (psVar25 != (short *)0x0) {
                      if ((int)psVar25[1] + (int)*psVar25 != 0) {
                        psVar23 = psVar25;
                        puVar19 = puVar29;
                      }
                    }
                  }
                  puVar29 = (ulong *)puVar29[1];
                } while (puVar29 != puVar22);
                if (puVar19 == (ulong *)0x0) {
                  return 0;
                }
                puVar29 = (ulong *)(psVar23 + 4);
                puVar30 = puVar29 + (long)psVar23[1] + (long)*psVar23;
              }
              uVar17 = (uint)*(undefined8 *)*puVar29;
              if ((uVar17 >> 0x11 & 1) == 0) {
                uVar15 = 0;
              }
              else {
                uVar18 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
                uVar15 = *(ushort *)
                          ((long)*puVar29 +
                          (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                       POPCOUNT((char)(uVar18 >> 0x10))) * 8 + 0x12);
              }
              puVar22 = puVar19;
            } while ((uVar15 & 0x30) == 0);
            uVar17 = (uint)*(undefined8 *)*puVar29;
            if ((uVar17 >> 0x11 & 1) == 0) {
              uVar15 = 0;
            }
            else {
              uVar18 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
              uVar15 = *(ushort *)
                        ((long)*puVar29 +
                        (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                     POPCOUNT((char)(uVar18 >> 0x10))) * 8 + 0x12);
            }
          } while (((uVar14 | uVar21) & uVar15) != 0);
          puVar20 = (undefined8 *)*puVar29;
          uVar17 = (uint)*puVar20;
          if ((uVar17 >> 0x11 & 1) == 0) {
            uVar16 = 0;
            uVar17 = 0;
          }
          else {
            uVar18 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
            uVar16 = (uint)*(ushort *)
                            (puVar20 +
                            (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                         POPCOUNT((char)(uVar18 >> 0x10))) + 2);
            uVar17 = (uint)*(ushort *)
                            (puVar20 +
                            (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                         POPCOUNT((char)(uVar18 >> 0x10))) + 2);
          }
        } while ((puVar20 == (undefined8 *)0x0) && (uVar17 = uVar16, *(char *)*param_1 == '\0'));
        FUN_031e1bb4(&local_c0,puVar20,PTR_DAT_047e5e00);
        plVar28 = local_c0;
        if (((ulong)local_b0 & 1) != 0) {
          plVar9 = (long *)((ulong)local_b0 & 0xfffffffffffffffe);
          plVar8 = plVar9 + 1;
          do {
            lVar11 = *plVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *(int *)plVar8 = (int)lVar11 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if ((plVar9 != (long *)0x0) && ((int)lVar11 == 1)) {
            (**(code **)(*plVar9 + 8))();
          }
        }
        if (plVar28 == (long *)0x0) {
          iVar7 = FUN_031fb974(param_1,puVar20,uVar17 + param_3,puVar20,uVar17 + param_5);
        }
        else {
          iVar7 = (*(code *)*plVar28)(param_1[1],puVar20,uVar17 + param_3,puVar20,uVar17 + param_5);
        }
      } while (-1 < iVar7);
    }
    local_70 = *puVar29;
    local_68[0] = 0x80040200;
    if (local_70 < 2) {
      return 0;
    }
    if (PTR_DAT_047e5e08[0x50] == '\0') {
      return 0x80040200;
    }
    local_b0 = (ulong *)PTR_DAT_047e5e08;
    local_c0 = (long *)0x0;
    local_a8 = 1;
    pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
    local_a0 = nn::os::GetThreadId(pTVar10);
    local_90 = 0;
    pcStack_88 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeVm/hkTypeVmCompiler.cpp"
    ;
    local_98 = 0;
    local_80 = 0xc0;
    uStack_78 = 0;
    FUN_0322c554(&local_c0,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_047e5968,"failedField",
                 local_68);
    pcVar13 = "Failed to clone field \'{}\' in fast path.";
    goto LAB_031fd24c;
  case 8:
    if (param_4 != (ulong *)0x0) {
      uVar17 = (uint)*param_4;
      puVar22 = param_4;
      if ((*param_4 & 1) == 0) {
        do {
          puVar22 = (ulong *)puVar22[1];
        } while ((*puVar22 & 1) == 0);
      }
      if ((puVar22[2] & 0x1f) == 8) {
        puVar22 = param_2;
        if (((uint)uVar18 >> 1 & 1) == 0) {
          do {
            puVar22 = (ulong *)puVar22[1];
            if (puVar22 == (ulong *)0x0) goto LAB_031fcdbc;
          } while (((byte)*puVar22 >> 1 & 1) == 0);
        }
        if (puVar22[3] != 0) {
          puVar22 = param_4;
          if ((uVar17 >> 1 & 1) == 0) {
            do {
              puVar22 = (ulong *)puVar22[1];
              if (puVar22 == (ulong *)0x0) goto LAB_031fcdbc;
            } while (((byte)*puVar22 >> 1 & 1) == 0);
          }
          if (puVar22[3] != 0) {
            if (*(char *)(*param_1 + 5) == '\0') {
              puVar22 = param_2;
              if ((uVar18 & 1) == 0) {
                do {
                  puVar22 = (ulong *)puVar22[1];
                  if (puVar22 == (ulong *)0x0) goto LAB_031fcdbc;
                } while ((*puVar22 & 1) == 0);
              }
              if ((puVar22 == (ulong *)0x0) || ((int)(puVar22[2] >> 8) == 0)) goto LAB_031fcdbc;
            }
            puVar22 = param_4;
            if ((uVar17 >> 1 & 1) == 0) {
              do {
                puVar22 = (ulong *)puVar22[1];
                if (puVar22 == (ulong *)0x0) {
                  uVar12 = 0;
                  goto LAB_031fd0bc;
                }
              } while (((byte)*puVar22 >> 1 & 1) == 0);
            }
            uVar12 = puVar22[3];
LAB_031fd0bc:
            puVar22 = param_2;
            if (((uint)uVar18 >> 1 & 1) == 0) {
              do {
                puVar22 = (ulong *)puVar22[1];
                if (puVar22 == (ulong *)0x0) {
                  uVar18 = 0;
                  goto LAB_031fd294;
                }
              } while (((byte)*puVar22 >> 1 & 1) == 0);
            }
            uVar18 = puVar22[3];
LAB_031fd294:
            if (uVar12 == uVar18) {
              lVar11 = FUN_031fa694();
            }
            else {
              lVar11 = FUN_031fa91c();
            }
            if (lVar11 == 0) {
              return 0x80040200;
            }
            goto LAB_031fcdc0;
          }
        }
      }
    }
LAB_031fcdbc:
    lVar11 = 0;
LAB_031fcdc0:
    plVar28 = (long *)param_1[1];
    iVar7 = (int)plVar28[1];
    lVar27 = (long)iVar7;
    lVar26 = lVar27 + 1;
    if ((int)(*(uint *)((long)plVar28 + 0xc) & 0x7fffffff) <= iVar7) {
      FUN_031cb264(plVar28,PTR_PTR_047d1a50,lVar26);
      iVar7 = (int)plVar28[1];
    }
    puVar20 = (undefined8 *)(*plVar28 + (long)iVar7 * 0x38);
    *(undefined1 *)(puVar20 + 1) = 0;
    *(undefined4 *)((long)puVar20 + 10) = 0;
    puVar20[2] = 0;
    *puVar20 = &PTR_LAB_046a8050;
    *(int *)(plVar28 + 1) = (int)lVar26;
    plVar28 = (long *)(*plVar28 + lVar27 * 0x38);
    (**(code **)(*plVar28 + 8))(plVar28);
    *(undefined1 *)(plVar28 + 1) = 0xb;
    *(undefined2 *)((long)plVar28 + 10) = uVar4;
    *(undefined2 *)((long)plVar28 + 0xc) = uVar3;
    *plVar28 = (long)&PTR_LAB_046a8130;
    plVar28[2] = 0;
    plVar28[3] = (long)param_4;
    plVar28[4] = (long)param_2;
    plVar28[5] = lVar11;
    return 0;
  default:
    local_b0 = (ulong *)0x0;
    local_c0 = (long *)0x0;
    local_b8 = PTR_DAT_047d1b38;
    FUN_01f9d9b0(0xfdbd9f9,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",0x1b
                 ,"Bad type visitor switch",&local_c0);
    return 0;
  }
  *(undefined1 *)(plVar28 + 1) = uVar24;
  *plVar28 = (long)&PTR_LAB_046a8088;
  plVar28[4] = (long)param_2;
  plVar28[2] = 0;
  plVar28[3] = (long)param_4;
  return 0;
LAB_031fd1c4:
  local_70 = 0;
LAB_031fd1c8:
  local_68[0] = 0x80040200;
  if (local_70 < 2) {
    return 0;
  }
  if (PTR_DAT_047e5e08[0x50] == '\0') {
    return 0x80040200;
  }
  local_b0 = (ulong *)PTR_DAT_047e5e08;
  local_c0 = (long *)0x0;
  local_a8 = 1;
  pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
  local_a0 = nn::os::GetThreadId(pTVar10);
  local_90 = 0;
  pcStack_88 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeVm/hkTypeVmCompiler.cpp"
  ;
  local_98 = 0;
  local_80 = 0xe9;
  uStack_78 = 0;
  FUN_0322c554(&local_c0,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_047e5968,"failedField",
               local_68);
  pcVar13 = "Failed to clone field \'{}\' by name matching.";
  goto LAB_031fd24c;
}


