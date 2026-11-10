/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d462c; name: FUN_031d462c
 */


void FUN_031d462c(long *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  size_t __n;
  byte *pbVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  long lVar6;
  int iVar7;
  char *pcVar8;
  size_t sVar9;
  long *plVar10;
  long *plVar11;
  undefined *puVar12;
  ulong *puVar13;
  byte *pbVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  byte bVar17;
  uint uVar18;
  ulong uVar19;
  ulong *puVar20;
  byte bVar21;
  ulong uVar22;
  long lVar23;
  char *pcVar24;
  byte *pbVar25;
  byte *pbVar26;
  size_t __n_00;
  long lVar27;
  undefined1 auVar28 [8];
  undefined1 auVar29 [16];
  void *local_b8;
  undefined1 local_98 [8];
  undefined8 local_90;
  ulong local_88;
  long local_80;
  long local_78;
  ulong local_70;
  ulong local_68;
  
  local_80 = 0;
  puVar13 = *(ulong **)(param_2 + 8);
  uVar19 = *puVar13;
  uVar18 = (uint)uVar19;
  bVar17 = (byte)uVar19;
  puVar20 = puVar13;
  if ((uVar19 & 1) == 0) {
    do {
      puVar20 = (ulong *)puVar20[1];
    } while ((*puVar20 & 1) == 0);
  }
  if ((puVar13 != (ulong *)0x0) && ((puVar20[2] & 0x1f) == 4)) {
    puVar20 = puVar13;
    bVar21 = bVar17;
    if ((uVar18 >> 3 & 1) == 0) {
      uVar22 = uVar19;
      do {
        if (((uVar22 & 1) != 0) || (puVar20 = (ulong *)puVar20[1], puVar20 == (ulong *)0x0)) {
          local_b8 = (void *)0x0;
          goto joined_r0x031d46e8;
        }
        uVar22 = *puVar20;
        bVar21 = (byte)uVar22;
      } while (((uint)uVar22 >> 3 & 1) == 0);
    }
    local_b8 = (void *)puVar20[(ulong)(byte)POPCOUNT(bVar21 & 7) + 2];
joined_r0x031d46e8:
    do {
      if ((uVar18 >> 3 & 1) != 0) goto LAB_031d4700;
      if (((uVar19 & 1) != 0) || (puVar13 = (ulong *)puVar13[1], puVar13 == (ulong *)0x0))
      goto LAB_031d4728;
      uVar19 = *puVar13;
      uVar18 = (uint)uVar19;
      bVar17 = (byte)uVar19;
    } while( true );
  }
  goto LAB_031d4a54;
LAB_031d4700:
  if (puVar13 == (ulong *)0x0) {
LAB_031d4728:
    pcVar24 = (char *)0x0;
  }
  else {
    pcVar24 = (char *)puVar13[(ulong)(byte)POPCOUNT(bVar17 & 7) + 2];
  }
  pcVar8 = strrchr(pcVar24,0x3a);
  __n = 0;
  if (pcVar8 != (char *)0x0) {
    __n = (long)(((int)pcVar8 - (int)pcVar24) + 1);
  }
  local_98 = (undefined1  [8])0x0;
  local_90 = (ulong *)0x8000000000000000;
  FUN_031c6590(param_3,local_98,0x7c);
  if ((int)local_90 != 0) {
    puVar13 = (ulong *)((long)local_98 + (long)(int)local_90 * 2 * 8);
    auVar28 = local_98;
    do {
      pbVar25 = *(byte **)auVar28;
      pbVar2 = *(byte **)((long)auVar28 + 8);
      pbVar26 = pbVar25;
      if (pbVar25 != pbVar2) {
        if (pbVar25 < pbVar2) {
          do {
            pbVar26 = pbVar25;
            if (0x20 < *pbVar25 || (1L << ((ulong)*pbVar25 & 0x3f) & 0x100002600U) == 0)
            goto LAB_031d47cc;
            pbVar25 = pbVar25 + 1;
          } while (pbVar2 != pbVar25);
          pbVar25 = pbVar2;
          pbVar26 = pbVar2;
        }
        else {
LAB_031d47cc:
          pbVar14 = pbVar2 + -1;
          pbVar25 = pbVar2;
          if (pbVar26 < pbVar14) {
            do {
              if (0x20 < *pbVar14 || (1L << ((ulong)*pbVar14 & 0x3f) & 0x100002600U) == 0) break;
              pbVar14 = pbVar14 + -1;
            } while (pbVar26 < pbVar14);
            pbVar25 = pbVar14 + 1;
          }
        }
      }
      if (__n - 1 < (ulong)((long)pbVar25 - (long)pbVar26)) {
        iVar7 = memcmp(pbVar26,local_b8,__n);
        if (iVar7 == 0) {
          pbVar26 = pbVar26 + __n;
        }
      }
      if (0 < *(int *)(param_2 + 0x10)) {
        lVar23 = 0;
        __n_00 = (long)pbVar25 - (long)pbVar26;
        do {
          pcVar24 = *(char **)(*(long *)(param_2 + 0x18) + lVar23 * 8);
          if (pcVar24 == (char *)0x0) {
            if (__n_00 == 0) goto LAB_031d4880;
          }
          else {
            sVar9 = strlen(pcVar24);
            if ((sVar9 == __n_00) && (iVar7 = memcmp(pbVar26,pcVar24,__n_00), iVar7 == 0)) {
LAB_031d4880:
              lVar27 = *(long *)(*(long *)(param_2 + 0x20) + lVar23 * 8);
              puVar20 = *(ulong **)(param_2 + 8);
              if (puVar20 != (ulong *)0x0) {
                puVar15 = puVar20;
                do {
                  uVar19 = *puVar15;
                  if (((uint)uVar19 >> 2 & 1) != 0) {
                    uVar19 = puVar15[(uVar19 >> 1 & 1) + (uVar19 & 1) + 2];
                    if ((uVar19 & 1) != 0) {
                      piVar1 = (int *)((uVar19 & 0xfffffffffffffffe) + 8);
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                          *piVar1 = *piVar1 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    goto LAB_031d48e0;
                  }
                  puVar15 = (ulong *)puVar15[1];
                } while (puVar15 != (ulong *)0x0);
              }
              uVar19 = 0;
LAB_031d48e0:
              if (puVar20 == (ulong *)0x0) {
LAB_031d4930:
                if ((uVar19 & 1) == 0) goto LAB_031d49d8;
                lVar27 = 0;
                puVar20 = (ulong *)0x0;
                uVar22 = 0;
LAB_031d4944:
                plVar10 = (long *)(uVar19 & 0xfffffffffffffffe);
                plVar11 = plVar10 + 1;
                do {
                  lVar6 = *plVar11;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar4) {
                    *(int *)plVar11 = (int)lVar6 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if ((plVar10 != (long *)0x0) && ((int)lVar6 == 1)) {
                  (**(code **)(*plVar10 + 8))();
                }
              }
              else {
                puVar15 = puVar20;
                if ((*puVar20 & 1) == 0) {
                  do {
                    puVar15 = (ulong *)puVar15[1];
                  } while ((*puVar15 & 1) == 0);
                }
                if ((puVar15[2] & 0x1f) != 4) goto LAB_031d4930;
                uVar22 = uVar19;
                if ((uVar19 & 1) != 0) {
                  piVar1 = (int *)((uVar19 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = *piVar1 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  goto LAB_031d4944;
                }
              }
              if (lVar27 != 0) {
                local_78 = 0;
                local_70 = local_70 & 0xffffffffffffff00;
                (**(code **)(*(long *)(uVar22 & 0xfffffffffffffffe) + 0x38))
                          ((long *)(uVar22 & 0xfffffffffffffffe),lVar27,puVar20,&local_78);
                local_80 = local_80 + local_78;
              }
              if ((uVar22 & 1) != 0) {
                plVar10 = (long *)(uVar22 & 0xfffffffffffffffe);
                plVar11 = plVar10 + 1;
                do {
                  lVar27 = *plVar11;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar4) {
                    *(int *)plVar11 = (int)lVar27 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if ((plVar10 != (long *)0x0) && ((int)lVar27 == 1)) {
                  (**(code **)(*plVar10 + 8))();
                }
              }
            }
          }
LAB_031d49d8:
          lVar23 = lVar23 + 1;
        } while (lVar23 < *(int *)(param_2 + 0x10));
      }
      auVar28 = (undefined1  [8])((long)auVar28 + 0x10);
    } while (auVar28 != (undefined1  [8])puVar13);
  }
  lVar23 = (long)local_90;
  uVar19 = (ulong)local_90._4_4_;
  local_90 = (ulong *)((ulong)local_90._4_4_ << 0x20);
  if ((-1 < lVar23) && (local_98 != (undefined1  [8])0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_98,uVar19 << 4);
  }
  if (local_80 != 0) {
    local_88 = 0;
    puVar16 = (undefined8 *)PTR_DAT_047e5b30;
    do {
      uVar18 = (uint)*puVar16;
      if ((uVar18 >> 0xb & 1) != 0) {
        uVar19 = CONCAT44(uVar18,uVar18) & 0x7ff000007ff;
        if ((code *)puVar16[(ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8))) +
                            2] != (code *)0x0) {
          auVar29 = (*(code *)puVar16[(ulong)(byte)(POPCOUNT((char)uVar19) +
                                                   POPCOUNT((char)(uVar19 >> 8))) + 2])(&local_80);
          local_90 = auVar29._8_8_;
          auVar5 = auVar29;
          puVar12 = (undefined *)local_90;
          goto joined_r0x031d4aac;
        }
        break;
      }
      puVar16 = (undefined8 *)puVar16[1];
    } while (puVar16 != (undefined8 *)0x0);
    auVar29._8_8_ = PTR_DAT_047e5b30;
    auVar29._0_8_ = &local_80;
    local_90 = (ulong *)PTR_DAT_047e5b30;
    do {
      puVar13 = auVar29._8_8_;
      local_98 = auVar29._0_8_;
      auVar5._8_8_ = local_90;
      auVar5._0_8_ = local_98;
      uVar19 = *puVar13;
      if (((uint)uVar19 >> 2 & 1) != 0) {
        uVar19 = puVar13[(uVar19 >> 1 & 1) + (uVar19 & 1) + 2];
        if ((uVar19 & 1) != 0) {
          piVar1 = (int *)((uVar19 & 0xfffffffffffffffe) + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        goto LAB_031d4b04;
      }
      puVar12 = (undefined *)puVar13[1];
      auVar29._8_8_ = puVar12;
      auVar29._0_8_ = local_98;
joined_r0x031d4aac:
    } while (puVar12 != (undefined *)0x0);
    uVar19 = 0;
LAB_031d4b04:
    if ((local_88 & 1) != 0) {
      plVar10 = (long *)(local_88 & 0xfffffffffffffffe);
      plVar11 = plVar10 + 1;
      do {
        lVar23 = *plVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(int *)plVar11 = (int)lVar23 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (plVar10 != (long *)0x0) {
        if ((int)lVar23 == 1) {
          local_88 = uVar19;
          _local_98 = auVar5;
          (**(code **)(*plVar10 + 8))();
          uVar19 = local_88;
          auVar5 = _local_98;
        }
      }
    }
    local_88 = uVar19;
    local_90 = auVar5._8_8_;
    local_98 = auVar5._0_8_;
    if (local_98 == (undefined1  [8])0x0) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
    }
    else {
      uVar19 = 0;
      puVar13 = local_90;
      do {
        uVar18 = (uint)*puVar13;
        if ((uVar18 >> 0x15 & 1) == 0) {
          uVar22 = 0;
        }
        else {
          uVar18 = uVar18 & 0x1fffff;
          uVar22 = puVar13[(ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                        POPCOUNT((char)(uVar18 >> 0x10))) + 2];
        }
        uVar19 = uVar22 | uVar19;
      } while (((*puVar13 & 1) == 0) && (puVar13 = (ulong *)puVar13[1], puVar13 != (ulong *)0x0));
      if (((uint)uVar19 >> 3 & 1) != 0) {
        local_90 = (ulong *)local_90[1];
      }
      do {
        uVar18 = (uint)*local_90;
        _local_98 = auVar5;
        if ((uVar18 >> 0x13 & 1) != 0) {
          uVar19 = CONCAT44(uVar18,uVar18) & 0x7ffff0007ffff;
          plVar11 = (long *)local_90[(ulong)(byte)(POPCOUNT((char)uVar19) +
                                                   POPCOUNT((char)(uVar19 >> 8)) +
                                                  POPCOUNT((char)(uVar19 >> 0x10))) + 2];
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x18))(&local_78,plVar11,local_98);
            goto LAB_031d4c04;
          }
          break;
        }
        local_90 = (ulong *)local_90[1];
      } while (local_90 != (ulong *)0x0);
      local_70 = 0;
      local_68 = 0;
      local_78 = 0;
LAB_031d4c04:
      iVar7 = FUN_031dbfb0(&local_78,local_98);
      uVar19 = local_68;
      lVar23 = local_78;
      auVar5 = _local_98;
      if (iVar7 < 0) {
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        if ((local_68 & 1) != 0) {
          plVar10 = (long *)(local_68 & 0xfffffffffffffffe);
          plVar11 = plVar10 + 1;
          do {
            lVar23 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = (int)lVar23 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((plVar10 != (long *)0x0) && ((int)lVar23 == 1)) {
            (**(code **)(*plVar10 + 8))();
            auVar5 = _local_98;
          }
        }
      }
      else {
        local_78 = 0;
        *param_1 = lVar23;
        param_1[1] = local_70;
        local_70 = 0;
        local_68 = 0;
        param_1[2] = uVar19;
      }
    }
    if ((local_88 & 1) == 0) {
      return;
    }
    plVar10 = (long *)(local_88 & 0xfffffffffffffffe);
    plVar11 = plVar10 + 1;
    do {
      lVar23 = *plVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = (int)lVar23 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (plVar10 == (long *)0x0) {
      return;
    }
    if ((int)lVar23 == 1) {
      _local_98 = auVar5;
      (**(code **)(*plVar10 + 8))();
      return;
    }
    return;
  }
LAB_031d4a54:
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


