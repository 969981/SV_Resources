/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031c0430; name: FUN_031c0430
 */


/* WARNING: Removing unreachable block (ram,0x031c063c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_031c0430(uint *param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  ulong *puVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  undefined8 *puVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  int *piVar23;
  undefined8 *puVar24;
  uint *puVar25;
  uint *puVar26;
  uint *puVar27;
  long lVar28;
  int *piVar29;
  uint *puVar30;
  ulong uVar31;
  undefined8 uVar32;
  uint *puVar33;
  uint *puVar34;
  undefined8 uVar35;
  int iVar36;
  int iVar37;
  ulong uVar38;
  void *__s;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined1 *local_ba0;
  undefined4 local_b98;
  undefined8 local_b94;
  undefined4 local_b8c;
  undefined8 local_b88;
  undefined8 uStack_b80;
  undefined4 local_b74;
  undefined1 auStack_b70 [64];
  uint local_b30 [16];
  undefined8 local_af0;
  undefined8 uStack_ae8;
  undefined4 local_ae0;
  undefined8 local_ac8;
  undefined8 local_ac0;
  uint uStack_ab8;
  uint local_ab4;
  long local_ab0;
  undefined8 local_aa8;
  long local_aa0;
  long local_a98;
  long local_a90;
  ushort auStack_a88 [512];
  int local_688;
  undefined8 local_680;
  uint auStack_678 [2];
  undefined8 local_670 [129];
  uint *local_268 [65];
  
  local_ac8 = 0x40000002000;
  local_ac0 = 0x20;
  local_ab4 = 0xffffffff;
  local_ab0 = 0;
  local_aa8 = 0x8000000000000000;
  lVar17 = tpidr_el0;
  lVar16 = *(long *)(lVar17 + 0x1000b8);
  if (lVar16 == 0) {
    lVar16 = FUN_00e5d3b4();
    *(long *)(lVar17 + 0x1000b8) = lVar16;
  }
  uVar38 = (ulong)(param_2 - (long)param_1) >> 3;
  local_aa0 = *(long *)(*(long *)(lVar16 + 0x3d0) + 0x10);
  if (*(long *)(local_aa0 + 8) == 0) {
    local_a90 = 0x820;
    local_268[0] = (uint *)0x820;
    if (local_aa0 == 0) goto LAB_031c0534;
    local_680 = (uint *)0x840;
    if (*(ulong *)(local_aa0 + 0x28) < 0x840) {
LAB_031c04ec:
      local_a98 = FUN_031cf3b4(local_aa0,&local_680);
    }
    else {
      local_a98 = *(long *)(local_aa0 + 0x38);
      if (*(ulong *)(local_aa0 + 0x40) < local_a98 + 0x840U) goto LAB_031c04ec;
      *(ulong *)(local_aa0 + 0x38) = local_a98 + 0x840U;
    }
  }
  else {
    local_aa0 = 0;
LAB_031c0534:
    local_268[0] = (uint *)0x820;
    local_a90 = 0x820;
    local_a98 = (**(code **)PTR_DAT_047d1a08)(1,local_268,0x40);
  }
  local_aa8 = CONCAT44(0x80000002,(int)local_aa8);
  lVar17 = (long)(int)local_aa8;
  local_ab0 = local_a98;
  if ((int)local_aa8 < 2) {
    local_aa8 = 0x8000000200000002;
    memset((void *)(local_a98 + lVar17 * 0x410),0,
           ((lVar17 * -0x410 + 0x410U) / 0x410) * 0x410 + 0x410);
  }
  else if ((int)local_aa8 != 2) {
    local_aa8 = 0x8000000200000002;
  }
  uVar15 = (uint)uVar38;
  local_ba0 = auStack_b70;
  local_ae0 = 2000;
  local_b8c = 0;
  local_af0 = 0;
  uStack_ae8 = 0;
  cVar5 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(local_b30,0x10);
  if (bVar7) {
    cVar5 = ExclusiveMonitorsStatus();
  }
  local_b30[0] = (uint)bVar7;
  if (cVar5 != '\0') {
    uVar14 = 0;
    do {
      while( true ) {
        uVar10 = local_b30[0];
        if ((~uVar14 & 0x7f) == 0) {
          local_b8c = 0xffff8002;
          goto LAB_031c0698;
        }
        if (local_b30[0] == uVar14) break;
        ClearExclusiveLocal();
        uVar14 = uVar10;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(local_b30,0x10);
      if (bVar7) {
        cVar5 = ExclusiveMonitorsStatus();
        local_b30[0] = uVar14 & 0xffffff80 | uVar14 + 1 & 0x7f;
      }
      uVar14 = uVar10;
    } while (cVar5 != '\0');
  }
LAB_031c0698:
  local_b98 = 0;
  local_b74 = 0;
  local_b94 = 1;
  local_b88 = 0;
  uStack_b80 = 0;
  uStack_ab8 = uVar15;
  local_ac0._4_4_ = param_5;
  if (uVar15 <= (uint)local_ac8) {
    plVar11 = (long *)FUN_03232dc4(&local_ba0,1,1);
    if (*plVar11 != 0) {
      plVar11[1] = 0;
      *(undefined4 *)(plVar11 + 2) = 0;
    }
    puVar27 = (uint *)(plVar11 + 1);
    if (1 < (int)uVar15) {
      uVar14 = 0;
      do {
        if (*(uint *)((long)plVar11 + 0xc) <= uVar14) {
          lVar17 = *plVar11;
          if (lVar17 == 0) goto LAB_031c1644;
          uVar10 = *(uint *)(plVar11 + 2);
          uVar14 = *(int *)((long)plVar11 + 0x14) + 1;
          puVar2 = (ulong *)(*(long *)(lVar17 + 0x490) +
                            (long)*(int *)(*(long *)(lVar17 + 0x40) +
                                          (-(ulong)(uVar14 >> 0x1f) & 0xffffffc000000000 |
                                          (ulong)uVar14 << 6)) * 0x40);
          if (uVar10 == 0) {
            uVar8 = (int)(*puVar2 >> 0x20) - (int)*puVar2 >> 3;
            uVar10 = *(uint *)(lVar17 + 8);
            if ((int)*(uint *)(lVar17 + 8) <= (int)uVar8) {
              uVar10 = uVar8;
            }
            if ((int)*(uint *)(lVar17 + 0xc) <= (int)uVar10) {
              uVar10 = *(uint *)(lVar17 + 0xc);
            }
          }
          do {
            uVar18 = *puVar2;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar18 + uVar10;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          uVar13 = (uint)uVar18;
          uVar20 = (uint)(uVar18 >> 0x20);
          uVar8 = uVar20 - uVar13;
          *puVar27 = uVar13;
          if (uVar20 < uVar13 || uVar8 == 0) {
            uVar8 = FUN_03232ac8(lVar17,(ulong)uVar14,(ulong)uVar10,puVar27);
            if (uVar8 == 0) goto LAB_031c1644;
            uVar18 = (ulong)*puVar27;
          }
          uVar13 = uVar8;
          if ((int)uVar10 <= (int)uVar8) {
            uVar13 = uVar10;
          }
          uVar14 = (uint)uVar18;
          *(uint *)((long)plVar11 + 0xc) = uVar13 + uVar14;
          uVar10 = *(uint *)(lVar17 + 8);
          if (*(uint *)(lVar17 + 8) <= (uint)((int)uVar8 >> 3)) {
            uVar10 = (int)uVar8 >> 3;
          }
          if ((int)*(uint *)(lVar17 + 0xc) <= (int)uVar10) {
            uVar10 = *(uint *)(lVar17 + 0xc);
          }
          *(uint *)(plVar11 + 2) = uVar10;
        }
        if (uVar15 <= (uint)local_ac0) {
          uVar10 = 0;
          local_680 = param_1;
          local_268[0] = param_1 + (ulong)(uVar15 - 1) * 2;
          puVar19 = param_1;
          puVar12 = param_1 + (ulong)(uVar15 - 1) * 2;
LAB_031c0b08:
          lVar17 = (long)(int)uVar10;
LAB_031c0b0c:
          do {
            puVar26 = puVar12;
            do {
              puVar12 = puVar26;
              uVar32 = *(undefined8 *)(puVar19 + ((long)puVar12 - (long)puVar19 >> 4) * 2);
              puVar26 = puVar12;
              puVar30 = puVar19;
              do {
                puVar34 = puVar30 + -2;
                do {
                  puVar33 = puVar34;
                  puVar34 = puVar33 + 2;
                } while (*puVar34 < (uint)uVar32);
                puVar30 = puVar33 + 4;
                do {
                  puVar25 = puVar26;
                  puVar26 = puVar25 + -2;
                } while ((uint)uVar32 < *puVar25);
                if (puVar25 < puVar34) {
                  puVar26 = puVar25;
                  puVar30 = puVar34;
                }
                else if (puVar33 != puVar26) {
                  uVar35 = *(undefined8 *)puVar25;
                  *(undefined8 *)puVar25 = *(undefined8 *)puVar34;
                  *(undefined8 *)puVar34 = uVar35;
                }
              } while (puVar30 <= puVar26);
              if (puVar26 <= puVar19) {
                puVar19 = puVar30;
                if (puVar30 < puVar12) goto LAB_031c0b0c;
                uVar10 = (int)lVar17 - 1;
                if ((int)lVar17 < 1) goto LAB_031c0aec;
                puVar19 = *(uint **)(auStack_678 + ((ulong)uVar10 - 1) * 2);
                puVar12 = local_268[uVar10];
                goto LAB_031c0b08;
              }
            } while (puVar12 <= puVar30);
            puVar34 = puVar26;
            puVar33 = puVar19;
            if ((long)puVar12 - (long)puVar30 <= (long)puVar26 - (long)puVar19) {
              puVar34 = puVar12;
              puVar33 = puVar30;
              puVar12 = puVar26;
              puVar30 = puVar19;
            }
            *(uint **)(auStack_678 + (lVar17 + -1) * 2) = puVar30;
            local_268[lVar17] = puVar12;
            lVar17 = lVar17 + 1;
            puVar19 = puVar33;
            puVar12 = puVar34;
          } while( true );
        }
        FUN_031c1770(param_1,uVar38 & 0xffffffff,param_3,0x400000000,0x800000000,0);
LAB_031c0aec:
        uVar14 = uVar14 + 1;
      } while( true );
    }
    uVar14 = 0;
    do {
      if (*(uint *)((long)plVar11 + 0xc) <= uVar14) {
        lVar17 = *plVar11;
        if (lVar17 == 0) goto LAB_031c1644;
        uVar10 = *(uint *)(plVar11 + 2);
        uVar14 = *(int *)((long)plVar11 + 0x14) + 1;
        puVar2 = (ulong *)(*(long *)(lVar17 + 0x490) +
                          (long)*(int *)(*(long *)(lVar17 + 0x40) +
                                        (-(ulong)(uVar14 >> 0x1f) & 0xffffffc000000000 |
                                        (ulong)uVar14 << 6)) * 0x40);
        if (uVar10 == 0) {
          uVar8 = (int)(*puVar2 >> 0x20) - (int)*puVar2 >> 3;
          uVar10 = *(uint *)(lVar17 + 8);
          if ((int)*(uint *)(lVar17 + 8) <= (int)uVar8) {
            uVar10 = uVar8;
          }
          if ((int)*(uint *)(lVar17 + 0xc) <= (int)uVar10) {
            uVar10 = *(uint *)(lVar17 + 0xc);
          }
        }
        do {
          uVar18 = *puVar2;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar18 + uVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar13 = (uint)uVar18;
        uVar20 = (uint)(uVar18 >> 0x20);
        uVar8 = uVar20 - uVar13;
        *puVar27 = uVar13;
        if (uVar20 < uVar13 || uVar8 == 0) {
          uVar8 = FUN_03232ac8(lVar17,(ulong)uVar14,(ulong)uVar10,puVar27);
          if (uVar8 == 0) goto LAB_031c1644;
          uVar18 = (ulong)*puVar27;
        }
        uVar13 = uVar8;
        if ((int)uVar10 <= (int)uVar8) {
          uVar13 = uVar10;
        }
        uVar14 = (uint)uVar18;
        *(uint *)((long)plVar11 + 0xc) = uVar13 + uVar14;
        uVar10 = *(uint *)(lVar17 + 8);
        if (*(uint *)(lVar17 + 8) <= (uint)((int)uVar8 >> 3)) {
          uVar10 = (int)uVar8 >> 3;
        }
        if ((int)*(uint *)(lVar17 + 0xc) <= (int)uVar10) {
          uVar10 = *(uint *)(lVar17 + 0xc);
        }
        *(uint *)(plVar11 + 2) = uVar10;
      }
      if ((uint)local_ac0 < uVar15) {
        FUN_031c1770(param_1,uVar38 & 0xffffffff,param_3,0x400000000,0x800000000,0);
      }
      uVar14 = uVar14 + 1;
    } while( true );
  }
  if ((int)param_5 < 0) {
    plVar11 = (long *)FUN_03232dc4(&local_ba0,(int)local_aa8 + -1,1);
    if (*plVar11 != 0) {
      plVar11[1] = 0;
      *(undefined4 *)(plVar11 + 2) = 0;
    }
    puVar27 = (uint *)(plVar11 + 1);
    uVar14 = 0;
    do {
      if (*(uint *)((long)plVar11 + 0xc) <= uVar14) {
        lVar17 = *plVar11;
        if (lVar17 == 0) goto LAB_031c0bdc;
        uVar10 = *(uint *)(plVar11 + 2);
        uVar14 = *(int *)((long)plVar11 + 0x14) + 1;
        puVar2 = (ulong *)(*(long *)(lVar17 + 0x490) +
                          (long)*(int *)(*(long *)(lVar17 + 0x40) +
                                        (-(ulong)(uVar14 >> 0x1f) & 0xffffffc000000000 |
                                        (ulong)uVar14 << 6)) * 0x40);
        if (uVar10 == 0) {
          uVar8 = (int)(*puVar2 >> 0x20) - (int)*puVar2 >> 3;
          uVar10 = *(uint *)(lVar17 + 8);
          if ((int)*(uint *)(lVar17 + 8) <= (int)uVar8) {
            uVar10 = uVar8;
          }
          if ((int)*(uint *)(lVar17 + 0xc) <= (int)uVar10) {
            uVar10 = *(uint *)(lVar17 + 0xc);
          }
        }
        do {
          uVar38 = *puVar2;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar38 + uVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar20 = (uint)uVar38;
        uVar13 = (uint)(uVar38 >> 0x20);
        uVar8 = uVar13 - uVar20;
        *puVar27 = uVar20;
        if (uVar13 < uVar20 || uVar8 == 0) {
          uVar8 = FUN_03232ac8(lVar17,(ulong)uVar14,(ulong)uVar10,puVar27);
          if (uVar8 == 0) goto LAB_031c0bdc;
          uVar38 = (ulong)*puVar27;
        }
        uVar14 = (uint)uVar38;
        uVar13 = uVar8;
        if ((int)uVar10 <= (int)uVar8) {
          uVar13 = uVar10;
        }
        *(uint *)((long)plVar11 + 0xc) = uVar13 + uVar14;
        uVar10 = *(uint *)(lVar17 + 8);
        if (*(uint *)(lVar17 + 8) <= (uint)((int)uVar8 >> 3)) {
          uVar10 = (int)uVar8 >> 3;
        }
        if ((int)*(uint *)(lVar17 + 0xc) <= (int)uVar10) {
          uVar10 = *(uint *)(lVar17 + 0xc);
        }
        *(uint *)(plVar11 + 2) = uVar10;
      }
      iVar21 = uVar14 * uVar15;
      uVar10 = iVar21 + uVar15;
      if (uVar15 <= iVar21 + uVar15) {
        uVar10 = uVar15;
      }
      if (iVar21 < (int)uVar10) {
        uVar38 = (ulong)iVar21;
        if (~uVar38 + (long)(int)uVar10 < 3) {
          uVar13 = 0;
          uVar8 = 0xffffffff;
        }
        else {
          lVar17 = -((long)(int)uVar10 - uVar38 & 0xfffffffffffffffc);
          puVar12 = param_1 + uVar38 * 2 + 4;
          uVar13 = 0;
          uVar8 = 0xffffffff;
          do {
            puVar26 = puVar12 + -4;
            puVar30 = puVar12 + -2;
            uVar20 = *puVar12;
            puVar19 = puVar12 + 2;
            puVar12 = puVar12 + 8;
            uVar13 = *puVar19 | uVar20 | *puVar30 | *puVar26 | uVar13;
            uVar8 = *puVar19 & uVar20 & *puVar30 & *puVar26 & uVar8;
            uVar38 = uVar38 + 4;
            lVar17 = lVar17 + 4;
          } while (lVar17 != 0);
        }
        if ((uVar10 - iVar21 & 3) != 0) {
          lVar17 = -((ulong)(uVar10 - iVar21) & 3);
          puVar12 = param_1 + uVar38 * 2;
          do {
            uVar13 = *puVar12 | uVar13;
            uVar8 = *puVar12 & uVar8;
            bVar7 = lVar17 != -1;
            lVar17 = lVar17 + 1;
            puVar12 = puVar12 + 2;
          } while (bVar7);
        }
      }
      else {
        uVar13 = 0;
        uVar8 = 0xffffffff;
      }
      *(ulong *)(local_ab0 + (long)(int)uVar14 * 0x410) = CONCAT44(LZCOUNT(~uVar8),LZCOUNT(uVar13));
      uVar14 = uVar14 + 1;
    } while( true );
  }
LAB_031c0c44:
  plVar11 = (long *)FUN_03232dc4(&local_ba0,(int)local_aa8 + -1,1);
  if (*plVar11 != 0) {
    plVar11[1] = 0;
    *(undefined4 *)(plVar11 + 2) = 0;
  }
  puVar27 = (uint *)(plVar11 + 1);
  uVar14 = 0;
LAB_031c0c7c:
  if (*(uint *)((long)plVar11 + 0xc) <= uVar14) {
    lVar17 = *plVar11;
    if (lVar17 == 0) goto LAB_031c0e1c;
    uVar10 = *(uint *)(plVar11 + 2);
    uVar14 = *(int *)((long)plVar11 + 0x14) + 1;
    puVar2 = (ulong *)(*(long *)(lVar17 + 0x490) +
                      (long)*(int *)(*(long *)(lVar17 + 0x40) +
                                    (-(ulong)(uVar14 >> 0x1f) & 0xffffffc000000000 |
                                    (ulong)uVar14 << 6)) * 0x40);
    if (uVar10 == 0) {
      uVar8 = (int)(*puVar2 >> 0x20) - (int)*puVar2 >> 3;
      uVar10 = *(uint *)(lVar17 + 8);
      if ((int)*(uint *)(lVar17 + 8) <= (int)uVar8) {
        uVar10 = uVar8;
      }
      if ((int)*(uint *)(lVar17 + 0xc) <= (int)uVar10) {
        uVar10 = *(uint *)(lVar17 + 0xc);
      }
    }
    do {
      uVar38 = *puVar2;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar7) {
        *puVar2 = uVar38 + uVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar20 = (uint)uVar38;
    uVar13 = (uint)(uVar38 >> 0x20);
    uVar8 = uVar13 - uVar20;
    *puVar27 = uVar20;
    if (uVar13 < uVar20 || uVar8 == 0) {
      uVar8 = FUN_03232ac8(lVar17,(ulong)uVar14,(ulong)uVar10,puVar27);
      if (uVar8 == 0) goto LAB_031c0e1c;
      uVar38 = (ulong)*puVar27;
    }
    uVar14 = (uint)uVar38;
    uVar13 = uVar8;
    if ((int)uVar10 <= (int)uVar8) {
      uVar13 = uVar10;
    }
    *(uint *)((long)plVar11 + 0xc) = uVar13 + uVar14;
    uVar10 = *(uint *)(lVar17 + 8);
    if (*(uint *)(lVar17 + 8) <= (uint)((int)uVar8 >> 3)) {
      uVar10 = (int)uVar8 >> 3;
    }
    if ((int)*(uint *)(lVar17 + 0xc) <= (int)uVar10) {
      uVar10 = *(uint *)(lVar17 + 0xc);
    }
    *(uint *)(plVar11 + 2) = uVar10;
  }
  uVar10 = local_ab4;
  if (-1 < (int)local_ac0._4_4_) {
    uVar10 = local_ac0._4_4_;
  }
  uVar8 = uVar14 + 1;
  __s = (void *)(local_ab0 + (long)(int)uVar8 * 0x410);
  memset(__s,0,0x400);
  iVar21 = uVar14 * uVar15;
  uVar13 = iVar21 + uVar15;
  if (uVar15 <= iVar21 + uVar15) {
    uVar13 = uVar15;
  }
  uVar14 = uVar8;
  if (iVar21 < (int)uVar13) {
    uVar22 = (ulong)iVar21;
    uVar18 = (ulong)(0x18 - uVar10);
    uVar38 = uVar22;
    if ((uVar13 - iVar21 & 1) != 0) {
      uVar38 = uVar22 + 1;
      uVar31 = (ulong)(param_1[uVar22 * 2] >> (uVar18 & 0x3f)) & 0xff;
      *(int *)((long)__s + uVar31 * 4) = *(int *)((long)__s + uVar31 * 4) + 1;
    }
    if (~uVar22 + (long)(int)uVar13 != 0) {
      lVar17 = uVar38 - (long)(int)uVar13;
      puVar12 = param_1 + uVar38 * 2 + 2;
      do {
        uVar38 = (ulong)(puVar12[-2] >> (uVar18 & 0x3f)) & 0xff;
        *(int *)((long)__s + uVar38 * 4) = *(int *)((long)__s + uVar38 * 4) + 1;
        lVar17 = lVar17 + 2;
        uVar38 = (ulong)(*puVar12 >> (uVar18 & 0x3f)) & 0xff;
        *(int *)((long)__s + uVar38 * 4) = *(int *)((long)__s + uVar38 * 4) + 1;
        puVar12 = puVar12 + 4;
      } while (lVar17 != 0);
    }
  }
  goto LAB_031c0c7c;
LAB_031c0bdc:
  uVar38 = FUN_03232c48(&local_ba0);
  if ((uVar38 & 1) != 0) {
    if ((int)local_aa8 < 2) {
      uVar14 = 0x20;
      local_ab4 = 0x20;
    }
    else {
      uVar38 = (ulong)((int)local_aa8 - 1);
      local_ab4 = 0x20;
      puVar27 = (uint *)(local_ab0 + 4);
      uVar14 = 0x20;
      do {
        if ((int)puVar27[-1] <= (int)local_ab4) {
          local_ab4 = puVar27[-1];
        }
        uVar10 = *puVar27;
        puVar27 = puVar27 + 0x104;
        if ((int)uVar10 <= (int)uVar14) {
          uVar14 = uVar10;
        }
        uVar38 = uVar38 - 1;
      } while (uVar38 != 0);
    }
    if ((int)local_ab4 <= (int)uVar14) {
      local_ab4 = uVar14;
    }
  }
  goto LAB_031c0c44;
LAB_031c0e1c:
  uVar38 = FUN_03232c48(&local_ba0);
  if ((uVar38 & 1) != 0) {
    memset(&local_680,0,0x410);
    if ((int)local_aa8 < 2) {
      lVar17 = (long)(int)local_aa8 + -1;
    }
    else {
      lVar16 = 0;
      lVar28 = 0x440;
      do {
        lVar17 = 0;
        do {
          puVar24 = (undefined8 *)(local_ab0 + lVar16 * 0x410 + 0x30 + lVar17);
          lVar1 = lVar17 + 0x40;
          puVar24[-5] = *(undefined8 *)((long)auStack_678 + lVar17);
          puVar24[-6] = *(undefined8 *)((long)auStack_678 + lVar17 + -8);
          puVar24[-3] = *(undefined8 *)((long)auStack_678 + lVar17 + 0x10);
          puVar24[-4] = *(undefined8 *)((long)auStack_678 + lVar17 + 8);
          puVar24[-1] = *(undefined8 *)((long)auStack_678 + lVar17 + 0x20);
          puVar24[-2] = *(undefined8 *)((long)auStack_678 + lVar17 + 0x18);
          puVar24[1] = *(undefined8 *)((long)auStack_678 + lVar17 + 0x30);
          *puVar24 = *(undefined8 *)((long)auStack_678 + lVar17 + 0x28);
          lVar17 = lVar1;
        } while (lVar1 != 0x400);
        lVar16 = lVar16 + 1;
        lVar17 = 0;
        do {
          uVar32 = *(undefined8 *)((long)auStack_678 + lVar17 + -8);
          lVar1 = local_ab0 + lVar28 + lVar17;
          uVar35 = *(undefined8 *)(lVar1 + -0x30);
          puVar24 = (undefined8 *)((long)auStack_678 + lVar17 + 0x28);
          *(ulong *)((long)auStack_678 + lVar17) =
               CONCAT44((int)((ulong)*(undefined8 *)(lVar1 + -0x28) >> 0x20) +
                        (int)((ulong)*(undefined8 *)((long)auStack_678 + lVar17) >> 0x20),
                        (int)*(undefined8 *)(lVar1 + -0x28) +
                        (int)*(undefined8 *)((long)auStack_678 + lVar17));
          *(ulong *)((long)auStack_678 + lVar17 + -8) =
               CONCAT44((int)((ulong)uVar35 >> 0x20) + (int)((ulong)uVar32 >> 0x20),
                        (int)uVar35 + (int)uVar32);
          uVar40 = *(undefined8 *)((long)auStack_678 + lVar17 + 0x10);
          uVar35 = *(undefined8 *)((long)auStack_678 + lVar17 + 8);
          uVar43 = *(undefined8 *)((long)auStack_678 + lVar17 + 0x20);
          uVar42 = *(undefined8 *)((long)auStack_678 + lVar17 + 0x18);
          uVar32 = *(undefined8 *)(lVar1 + -0x20);
          uVar41 = *(undefined8 *)((long)auStack_678 + lVar17 + 0x30);
          uVar39 = *puVar24;
          *(ulong *)((long)auStack_678 + lVar17 + 0x10) =
               CONCAT44((int)((ulong)*(undefined8 *)(lVar1 + -0x18) >> 0x20) +
                        (int)((ulong)uVar40 >> 0x20),
                        (int)*(undefined8 *)(lVar1 + -0x18) + (int)uVar40);
          *(ulong *)((long)auStack_678 + lVar17 + 8) =
               CONCAT44((int)((ulong)uVar32 >> 0x20) + (int)((ulong)uVar35 >> 0x20),
                        (int)uVar32 + (int)uVar35);
          uVar32 = *(undefined8 *)(lVar1 + -0x10);
          *(ulong *)((long)auStack_678 + lVar17 + 0x20) =
               CONCAT44((int)((ulong)*(undefined8 *)(lVar1 + -8) >> 0x20) +
                        (int)((ulong)uVar43 >> 0x20),(int)*(undefined8 *)(lVar1 + -8) + (int)uVar43)
          ;
          *(ulong *)((long)auStack_678 + lVar17 + 0x18) =
               CONCAT44((int)((ulong)uVar32 >> 0x20) + (int)((ulong)uVar42 >> 0x20),
                        (int)uVar32 + (int)uVar42);
          puVar6 = (undefined8 *)(local_ab0 + lVar28 + lVar17);
          uVar35 = puVar6[1];
          uVar32 = *puVar6;
          lVar1 = lVar17 + 0x40;
          *(ulong *)((long)auStack_678 + lVar17 + 0x30) =
               CONCAT44((int)((ulong)uVar35 >> 0x20) + (int)((ulong)uVar41 >> 0x20),
                        (int)uVar35 + (int)uVar41);
          *puVar24 = CONCAT44((int)((ulong)uVar32 >> 0x20) + (int)((ulong)uVar39 >> 0x20),
                              (int)uVar32 + (int)uVar39);
          lVar17 = lVar1;
        } while (lVar1 != 0x400);
        lVar17 = (long)(int)local_aa8 + -1;
        lVar28 = lVar28 + 0x410;
      } while (lVar16 < lVar17);
    }
    iVar21 = 0;
    piVar23 = (int *)(local_ab0 + lVar17 * 0x410 + 8);
    piVar29 = (int *)((ulong)&local_680 | 8);
    uVar38 = 0xfffffffffffffffc;
    do {
      iVar37 = piVar29[-2];
      piVar23[-2] = iVar21;
      iVar36 = piVar29[-1];
      piVar23[-1] = iVar37 + iVar21;
      iVar36 = iVar36 + iVar37 + iVar21;
      iVar37 = *piVar29;
      *piVar23 = iVar36;
      iVar37 = iVar37 + iVar36;
      iVar21 = piVar29[1];
      uVar38 = uVar38 + 4;
      piVar29 = piVar29 + 4;
      piVar23[1] = iVar37;
      piVar23 = piVar23 + 4;
      iVar21 = iVar21 + iVar37;
    } while (uVar38 < 0xfc);
    *(int *)(local_ab0 + lVar17 * 0x410 + 0x400) = iVar21;
  }
  plVar11 = (long *)FUN_03232dc4(&local_ba0,(int)local_aa8 + -1,1);
  if (*plVar11 != 0) {
    plVar11[1] = 0;
    *(undefined4 *)(plVar11 + 2) = 0;
  }
  uVar14 = 0;
  puVar27 = (uint *)(plVar11 + 1);
  do {
    if (*(uint *)((long)plVar11 + 0xc) <= uVar14) {
      lVar17 = *plVar11;
      if (lVar17 == 0) break;
      uVar10 = *(uint *)(plVar11 + 2);
      uVar14 = *(int *)((long)plVar11 + 0x14) + 1;
      puVar2 = (ulong *)(*(long *)(lVar17 + 0x490) +
                        (long)*(int *)(*(long *)(lVar17 + 0x40) +
                                      (-(ulong)(uVar14 >> 0x1f) & 0xffffffc000000000 |
                                      (ulong)uVar14 << 6)) * 0x40);
      if (uVar10 == 0) {
        uVar8 = (int)(*puVar2 >> 0x20) - (int)*puVar2 >> 3;
        uVar10 = *(uint *)(lVar17 + 8);
        if ((int)*(uint *)(lVar17 + 8) <= (int)uVar8) {
          uVar10 = uVar8;
        }
        if ((int)*(uint *)(lVar17 + 0xc) <= (int)uVar10) {
          uVar10 = *(uint *)(lVar17 + 0xc);
        }
      }
      do {
        uVar38 = *puVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *puVar2 = uVar38 + uVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      uVar13 = (uint)uVar38;
      uVar20 = (uint)(uVar38 >> 0x20);
      uVar8 = uVar20 - uVar13;
      *puVar27 = uVar13;
      if (uVar20 < uVar13 || uVar8 == 0) {
        uVar8 = FUN_03232ac8(lVar17,(ulong)uVar14,(ulong)uVar10,puVar27);
        if (uVar8 == 0) break;
        uVar38 = (ulong)*puVar27;
      }
      uVar13 = uVar8;
      if ((int)uVar10 <= (int)uVar8) {
        uVar13 = uVar10;
      }
      uVar14 = (uint)uVar38;
      *(uint *)((long)plVar11 + 0xc) = uVar13 + uVar14;
      uVar10 = *(uint *)(lVar17 + 8);
      if (*(uint *)(lVar17 + 8) <= (uint)((int)uVar8 >> 3)) {
        uVar10 = (int)uVar8 >> 3;
      }
      if ((int)*(uint *)(lVar17 + 0xc) <= (int)uVar10) {
        uVar10 = *(uint *)(lVar17 + 0xc);
      }
      *(uint *)(plVar11 + 2) = uVar10;
    }
    lVar17 = 0;
    do {
      puVar24 = (undefined8 *)(local_ab0 + 0x30 + (long)(int)uVar14 * 0x410 + lVar17);
      puVar6 = (undefined8 *)(local_ab0 + 0x30 + (long)(int)local_aa8 * 0x410 + -0x410 + lVar17);
      uVar32 = puVar6[-6];
      lVar17 = lVar17 + 0x40;
      puVar24[-5] = CONCAT44((int)((ulong)puVar6[-5] >> 0x20) + (int)((ulong)puVar24[-5] >> 0x20),
                             (int)puVar6[-5] + (int)puVar24[-5]);
      puVar24[-6] = CONCAT44((int)((ulong)uVar32 >> 0x20) + (int)((ulong)puVar24[-6] >> 0x20),
                             (int)uVar32 + (int)puVar24[-6]);
      uVar32 = puVar6[-4];
      puVar24[-3] = CONCAT44((int)((ulong)puVar6[-3] >> 0x20) + (int)((ulong)puVar24[-3] >> 0x20),
                             (int)puVar6[-3] + (int)puVar24[-3]);
      puVar24[-4] = CONCAT44((int)((ulong)uVar32 >> 0x20) + (int)((ulong)puVar24[-4] >> 0x20),
                             (int)uVar32 + (int)puVar24[-4]);
      uVar32 = puVar6[-2];
      puVar24[-1] = CONCAT44((int)((ulong)puVar6[-1] >> 0x20) + (int)((ulong)puVar24[-1] >> 0x20),
                             (int)puVar6[-1] + (int)puVar24[-1]);
      puVar24[-2] = CONCAT44((int)((ulong)uVar32 >> 0x20) + (int)((ulong)puVar24[-2] >> 0x20),
                             (int)uVar32 + (int)puVar24[-2]);
      uVar32 = *puVar6;
      puVar24[1] = CONCAT44((int)((ulong)puVar6[1] >> 0x20) + (int)((ulong)puVar24[1] >> 0x20),
                            (int)puVar6[1] + (int)puVar24[1]);
      *puVar24 = CONCAT44((int)((ulong)uVar32 >> 0x20) + (int)((ulong)*puVar24 >> 0x20),
                          (int)uVar32 + (int)*puVar24);
    } while (lVar17 != 0x400);
    iVar21 = uVar15 * uVar14;
    uVar10 = local_ab4;
    if (-1 < (int)local_ac0._4_4_) {
      uVar10 = local_ac0._4_4_;
    }
    uVar13 = (uint)((ulong)(param_4 - param_3) >> 3);
    uVar8 = iVar21 + uVar15;
    if (uVar13 <= iVar21 + uVar15) {
      uVar8 = uVar13;
    }
    if (iVar21 < (int)uVar8) {
      lVar17 = local_ab0 + (long)(int)uVar14 * 0x410;
      uVar38 = (ulong)iVar21;
      uVar18 = (ulong)(0x18 - uVar10);
      uVar22 = ~uVar38;
      if ((uVar8 - iVar21 & 1) != 0) {
        uVar31 = (ulong)(param_1[uVar38 * 2] >> (uVar18 & 0x3f)) & 0xff;
        iVar21 = *(int *)(lVar17 + uVar31 * 4);
        *(int *)(lVar17 + uVar31 * 4) = iVar21 + 1;
        lVar16 = uVar38 * 2;
        uVar38 = uVar38 + 1;
        *(undefined8 *)(param_3 + (long)iVar21 * 8) = *(undefined8 *)(param_1 + lVar16);
      }
      if (uVar22 + (long)(int)uVar8 != 0) {
        lVar16 = uVar38 - (long)(int)uVar8;
        puVar12 = param_1 + uVar38 * 2 + 2;
        do {
          uVar38 = (ulong)(puVar12[-2] >> (uVar18 & 0x3f)) & 0xff;
          iVar21 = *(int *)(lVar17 + uVar38 * 4);
          *(int *)(lVar17 + uVar38 * 4) = iVar21 + 1;
          *(undefined8 *)(param_3 + (long)iVar21 * 8) = *(undefined8 *)(puVar12 + -2);
          uVar38 = (ulong)(*puVar12 >> (uVar18 & 0x3f)) & 0xff;
          lVar16 = lVar16 + 2;
          iVar21 = *(int *)(lVar17 + uVar38 * 4);
          *(int *)(lVar17 + uVar38 * 4) = iVar21 + 1;
          *(undefined8 *)(param_3 + (long)iVar21 * 8) = *(undefined8 *)puVar12;
          puVar12 = puVar12 + 4;
        } while (lVar16 != 0);
      }
    }
    uVar14 = uVar14 + 1;
  } while( true );
  uVar38 = FUN_03232c48(&local_ba0);
  if ((uVar38 & 1) != 0) {
    local_680 = (uint *)0x10000000000;
    uVar15 = local_ab4;
    if (-1 < (int)local_ac0._4_4_) {
      uVar15 = local_ac0._4_4_;
    }
    iVar21 = 1;
    lVar17 = local_ab0 + (long)(int)local_aa8 * 0x410 + -0x410;
    local_688 = 0;
    do {
      iVar21 = iVar21 + -1;
      uVar38 = (ulong)(int)auStack_678[((long)iVar21 + -1) * 2];
      uVar18 = (ulong)(int)auStack_678[(long)iVar21 * 2 + -1];
      iVar36 = *(int *)(lVar17 + uVar38 * 4);
      iVar37 = *(int *)(lVar17 + uVar18 * 4) - iVar36;
      if (iVar37 != 0) {
        puVar27 = auStack_678 + ((long)iVar21 + -1) * 2;
        do {
          uVar14 = (uint)uVar18;
          uVar10 = (uint)uVar38;
          iVar9 = uVar14 - uVar10;
          if (local_ac8._4_4_ < iVar37) {
            if (iVar9 == 1) goto LAB_031c12f8;
          }
          else if (((iVar9 == 1) || (4 < iVar9)) || (iVar9 <= 1 << (ulong)(uVar15 & 7))) {
LAB_031c12f8:
            lVar16 = (long)local_688;
            local_688 = local_688 + 1;
            auStack_a88[lVar16 * 2] = (ushort)uVar38;
            auStack_a88[lVar16 * 2 + 1] = (ushort)uVar18;
            break;
          }
          uVar8 = (int)(uVar14 + uVar10) >> 1;
          iVar9 = *(int *)(lVar17 + (long)(int)uVar8 * 4);
          if (iVar37 - (iVar9 - iVar36) < iVar9 - iVar36) {
            *puVar27 = uVar10;
            uVar38 = (ulong)uVar8;
            iVar36 = iVar9;
            iVar9 = *(int *)(lVar17 + (long)(int)uVar14 * 4);
            uVar14 = uVar8;
          }
          else {
            *puVar27 = uVar8;
            iVar36 = *(int *)(lVar17 + (long)(int)uVar10 * 4);
            uVar18 = (ulong)uVar8;
          }
          iVar37 = iVar9 - iVar36;
          puVar27[1] = uVar14;
          iVar21 = iVar21 + 1;
          puVar27 = puVar27 + 2;
        } while (iVar37 != 0);
      }
    } while (iVar21 != 0);
  }
  plVar11 = (long *)FUN_03232dc4(&local_ba0,local_688,1);
  if (*plVar11 != 0) {
    plVar11[1] = 0;
    *(undefined4 *)(plVar11 + 2) = 0;
  }
  uVar15 = 0;
  puVar27 = (uint *)(plVar11 + 1);
  do {
    if (*(uint *)((long)plVar11 + 0xc) <= uVar15) {
      lVar17 = *plVar11;
      if (lVar17 == 0) break;
      uVar14 = *(uint *)(plVar11 + 2);
      uVar15 = *(int *)((long)plVar11 + 0x14) + 1;
      puVar2 = (ulong *)(*(long *)(lVar17 + 0x490) +
                        (long)*(int *)(*(long *)(lVar17 + 0x40) +
                                      (-(ulong)(uVar15 >> 0x1f) & 0xffffffc000000000 |
                                      (ulong)uVar15 << 6)) * 0x40);
      if (uVar14 == 0) {
        uVar10 = (int)(*puVar2 >> 0x20) - (int)*puVar2 >> 3;
        uVar14 = *(uint *)(lVar17 + 8);
        if ((int)*(uint *)(lVar17 + 8) <= (int)uVar10) {
          uVar14 = uVar10;
        }
        if ((int)*(uint *)(lVar17 + 0xc) <= (int)uVar14) {
          uVar14 = *(uint *)(lVar17 + 0xc);
        }
      }
      do {
        uVar38 = *puVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *puVar2 = uVar38 + uVar14;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      uVar8 = (uint)uVar38;
      uVar13 = (uint)(uVar38 >> 0x20);
      uVar10 = uVar13 - uVar8;
      *puVar27 = uVar8;
      if (uVar13 < uVar8 || uVar10 == 0) {
        uVar10 = FUN_03232ac8(lVar17,(ulong)uVar15,(ulong)uVar14,puVar27);
        if (uVar10 == 0) break;
        uVar38 = (ulong)*puVar27;
      }
      uVar8 = uVar10;
      if ((int)uVar14 <= (int)uVar10) {
        uVar8 = uVar14;
      }
      uVar15 = (uint)uVar38;
      *(uint *)((long)plVar11 + 0xc) = uVar8 + uVar15;
      uVar14 = *(uint *)(lVar17 + 8);
      if (*(uint *)(lVar17 + 8) <= (uint)((int)uVar10 >> 3)) {
        uVar14 = (int)uVar10 >> 3;
      }
      if ((int)*(uint *)(lVar17 + 0xc) <= (int)uVar14) {
        uVar14 = *(uint *)(lVar17 + 0xc);
      }
      *(uint *)(plVar11 + 2) = uVar14;
    }
    lVar16 = local_ab0 + (long)(int)local_aa8 * 0x410 + -0x410;
    lVar17 = (long)((ulong)uVar15 << 0x20) >> 0x1e;
    uVar3 = *(ushort *)((long)auStack_a88 + lVar17);
    uVar4 = *(ushort *)((long)auStack_a88 + lVar17 + 2);
    iVar21 = *(int *)(lVar16 + (ulong)uVar3 * 4);
    lVar17 = (long)iVar21;
    puVar12 = param_1 + lVar17 * 2;
    uVar14 = *(int *)(lVar16 + (ulong)uVar4 * 4) - iVar21;
    if ((uint)local_ac0 < uVar14) {
      uVar10 = local_ab4;
      if (-1 < (int)local_ac0._4_4_) {
        uVar10 = local_ac0._4_4_;
      }
      FUN_031c1770(param_3 + lVar17 * 8,uVar14,puVar12,
                   (ulong)((-((int)uVar10 >> 3) -
                           (uint)((int)((uint)uVar4 - (uint)uVar3) <= 1 << (ulong)(uVar10 & 7))) + 4
                          ) << 0x20,0x800000000,1);
    }
    else if (uVar14 != 0) {
      uVar18 = (ulong)uVar14;
      uVar38 = uVar18 & 7;
      if (uVar18 - 1 < 7) {
        uVar22 = 0;
      }
      else {
        puVar19 = param_1 + lVar17 * 2 + 8;
        puVar24 = (undefined8 *)(param_3 + 0x20 + lVar17 * 8);
        uVar22 = 0;
        do {
          *(undefined8 *)(puVar19 + -8) = puVar24[-4];
          *(undefined8 *)(puVar19 + -6) = puVar24[-3];
          *(undefined8 *)(puVar19 + -4) = puVar24[-2];
          *(undefined8 *)(puVar19 + -2) = puVar24[-1];
          *(undefined8 *)puVar19 = *puVar24;
          *(undefined8 *)(puVar19 + 2) = puVar24[1];
          *(undefined8 *)(puVar19 + 4) = puVar24[2];
          puVar6 = puVar24 + 3;
          uVar22 = uVar22 + 8;
          puVar24 = puVar24 + 8;
          *(undefined8 *)(puVar19 + 6) = *puVar6;
          puVar19 = puVar19 + 0x10;
        } while ((uVar18 & 0xfffffff8) != uVar22);
      }
      if ((uVar14 & 7) != 0) {
        puVar19 = param_1 + (uVar22 + lVar17) * 2;
        puVar24 = (undefined8 *)(param_3 + (uVar22 + lVar17) * 8);
        do {
          uVar38 = uVar38 - 1;
          *(undefined8 *)puVar19 = *puVar24;
          puVar19 = puVar19 + 2;
          puVar24 = puVar24 + 1;
        } while (uVar38 != 0);
      }
      if (1 < (int)uVar14) {
        puVar19 = puVar12 + (ulong)(uVar14 - 1) * 2;
        uVar14 = 0;
        local_680 = puVar12;
        local_268[0] = puVar19;
LAB_031c1570:
        lVar17 = (long)(int)uVar14;
LAB_031c1574:
        do {
          puVar26 = puVar19;
          do {
            puVar19 = puVar26;
            uVar32 = *(undefined8 *)(puVar12 + ((long)puVar19 - (long)puVar12 >> 4) * 2);
            puVar26 = puVar19;
            puVar30 = puVar12;
            do {
              puVar34 = puVar30 + -2;
              do {
                puVar33 = puVar34;
                puVar34 = puVar33 + 2;
              } while (*puVar34 < (uint)uVar32);
              puVar30 = puVar33 + 4;
              do {
                puVar25 = puVar26;
                puVar26 = puVar25 + -2;
              } while ((uint)uVar32 < *puVar25);
              if (puVar25 < puVar34) {
                puVar26 = puVar25;
                puVar30 = puVar34;
              }
              else if (puVar33 != puVar26) {
                uVar35 = *(undefined8 *)puVar25;
                *(undefined8 *)puVar25 = *(undefined8 *)puVar34;
                *(undefined8 *)puVar34 = uVar35;
              }
            } while (puVar30 <= puVar26);
            if (puVar26 <= puVar12) {
              puVar12 = puVar30;
              if (puVar30 < puVar19) goto LAB_031c1574;
              uVar14 = (int)lVar17 - 1;
              if ((int)lVar17 < 1) goto LAB_031c1554;
              puVar12 = *(uint **)(auStack_678 + ((ulong)uVar14 - 1) * 2);
              puVar19 = local_268[uVar14];
              goto LAB_031c1570;
            }
          } while (puVar19 <= puVar30);
          puVar34 = puVar26;
          puVar33 = puVar12;
          if ((long)puVar19 - (long)puVar30 <= (long)puVar26 - (long)puVar12) {
            puVar34 = puVar19;
            puVar33 = puVar30;
            puVar19 = puVar26;
            puVar30 = puVar12;
          }
          *(uint **)(auStack_678 + (lVar17 + -1) * 2) = puVar30;
          local_268[lVar17] = puVar19;
          lVar17 = lVar17 + 1;
          puVar12 = puVar33;
          puVar19 = puVar34;
        } while( true );
      }
    }
LAB_031c1554:
    uVar15 = uVar15 + 1;
  } while( true );
LAB_031c1644:
  if (local_a98 == local_ab0) {
    local_aa8 = local_aa8 & 0xffffffff00000000;
  }
  if (local_aa0 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_031c1710;
  }
  uVar38 = local_a90 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_aa0 + 0x28) < uVar38) || (*(long *)(local_aa0 + 0x38) != uVar38 + local_a98)
     ) {
    if (local_a98 == 0) goto LAB_031c1710;
    if (*(ulong *)(local_aa0 + 0x28) < uVar38 + 0x40) {
      *(int *)(*(long *)(local_aa0 + 0x30) + 0x20) =
           *(int *)(*(long *)(local_aa0 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(local_aa0 + 0x10) + 0x18))
                (*(long **)(local_aa0 + 0x10),local_a98 - *(int *)(local_a98 + -4),uVar38 + 0x44);
      goto LAB_031c1710;
    }
    if (*(long *)(local_aa0 + 0x38) != uVar38 + local_a98) {
      FUN_031cf778();
      goto LAB_031c1710;
    }
    *(long *)(local_aa0 + 0x38) = local_a98;
  }
  else {
    *(long *)(local_aa0 + 0x38) = local_a98;
    if (*(long *)(local_aa0 + 0x48) != local_a98) goto LAB_031c1710;
  }
  FUN_031cf578();
LAB_031c1710:
  uVar38 = local_aa8;
  uVar18 = (ulong)local_aa8._4_4_;
  local_aa8 = (ulong)local_aa8._4_4_ << 0x20;
  if ((-1 < (long)uVar38) && (local_ab0 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_ab0,uVar18 * 0x410);
  }
  return;
}


