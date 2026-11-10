/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f3a358; name: FUN_02f3a358
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f3a358(long *param_1,ulong *param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  MutexType *pMVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  byte *pbVar20;
  long lVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  long *plVar25;
  long *plVar26;
  uint *puVar27;
  ulong uVar28;
  long lVar29;
  ulong *puVar30;
  ulong *puVar31;
  int iVar32;
  ulong uVar33;
  int iVar34;
  long lVar35;
  ulong uVar36;
  ulong uVar37;
  ulong *puVar38;
  int iVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  long local_9a8;
  ulong local_9a0;
  long local_958;
  long local_900;
  ulong local_8f0;
  undefined8 uStack_8e8;
  undefined2 local_8e0;
  undefined4 local_8dc;
  undefined8 local_8d8;
  undefined4 local_8d0;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 *local_890;
  undefined8 uStack_888;
  undefined8 local_880;
  
  uVar36 = (ulong)param_3;
  lVar5 = tpidr_el0;
  lVar11 = *(long *)(lVar5 + 0x1000b8);
  if (lVar11 == 0) {
    lVar11 = FUN_00e5d3b4();
    *(long *)(lVar5 + 0x1000b8) = lVar11;
  }
  plVar25 = *(long **)(lVar11 + 0x3e0);
  if (plVar25 != (long *)0x0) {
    lVar11 = *plVar25;
    if (*(code **)(lVar11 + 0x18) != (code *)0x0) {
      (**(code **)(lVar11 + 0x18))("RemoveBodies",0xc,*(undefined8 *)(lVar11 + 0x28));
      if (*(code **)(lVar11 + 0x18) != (code *)0x0) {
        (**(code **)(lVar11 + 0x18))("Setup",5,*(undefined8 *)(lVar11 + 0x28));
      }
    }
    puVar3 = (undefined8 *)plVar25[2];
    uVar12 = (long)puVar3 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar12 <= (ulong)plVar25[3]) && (plVar25[2] = uVar12, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = "LtRemoveBodies";
      puVar3[2] = "StSetup";
      uVar8 = nn::os::GetSystemTick();
      puVar3[1] = uVar8;
    }
    if (((*(byte *)(lVar11 + 0x38) & 1) != 0) && (plVar25[6] != 0)) {
      puVar3 = (undefined8 *)plVar25[2];
      uVar12 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar12 <= (ulong)plVar25[3]) && (plVar25[2] = uVar12, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = &DAT_03c4e575;
        puVar3[1] = *(undefined8 *)(plVar25[6] + 8);
      }
    }
  }
  lVar11 = param_1[0x100];
  if (lVar11 == 0) {
    iVar39 = -1;
    if ((0 < (int)param_3) && (*(char *)((long)param_1 + 0x999) != '\0')) goto LAB_02f3a4a8;
  }
  else {
    if (0 < (int)param_3) {
LAB_02f3a4a8:
      uVar12 = (ulong)(param_3 - 1);
      uVar22 = param_3;
      if (param_3 - 1 == 0 || (int)param_3 < 1) {
        uVar22 = 1;
      }
      uVar33 = (ulong)uVar22;
      puVar38 = param_2;
      do {
        if (lVar11 == 0) {
          plVar25 = (long *)0x0;
          iVar39 = -1;
          bVar6 = false;
        }
        else {
          lVar29 = (long)DAT_0486b380;
          lVar11 = *(long *)(lVar5 + 0x1000b8);
          if (lVar11 == 0) {
            lVar11 = FUN_00e5d3b4();
            *(long *)(lVar5 + 0x1000b8) = lVar11;
            iVar34 = DAT_0486b380;
            iVar39 = (int)*(undefined8 *)(lVar11 + lVar29 * 8 + 1000);
            if (lVar11 == 0) {
              lVar11 = FUN_00e5d3b4();
              *(long *)(lVar5 + 0x1000b8) = lVar11;
            }
          }
          else {
            iVar39 = (int)*(undefined8 *)(lVar11 + lVar29 * 8 + 1000);
            iVar34 = DAT_0486b380;
          }
          *(long *)(lVar11 + (long)iVar34 * 8 + 1000) = (long)(iVar39 + 1);
          plVar25 = (long *)param_1[0x100];
          bVar6 = iVar39 == 0;
        }
        bVar6 = (bool)(bVar6 & plVar25 != (long *)0x0);
        if ((*(char *)((long)param_1 + 0x999) != '\0') || (bVar6)) {
          uStack_888 = *puVar38;
          local_890 = (undefined8 *)0x302000020;
          local_880._0_2_ = CONCAT11(uVar12 == 0,(char)param_4);
          if (bVar6) {
            (**(code **)(*plVar25 + 0x20))(plVar25,&local_890);
          }
        }
        if (iVar39 != -1) {
          lVar29 = (long)DAT_0486b380;
          lVar11 = *(long *)(lVar5 + 0x1000b8);
          if (lVar11 == 0) {
            lVar11 = FUN_00e5d3b4();
            *(long *)(lVar5 + 0x1000b8) = lVar11;
          }
          *(long *)(lVar11 + lVar29 * 8 + 1000) = (long)iVar39;
        }
        lVar11 = param_1[0x100];
        uVar33 = uVar33 - 1;
        puVar38 = puVar38 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar33 != 0);
      if (lVar11 == 0) {
        iVar39 = -1;
        goto LAB_02f3a680;
      }
    }
    lVar29 = (long)DAT_0486b380;
    lVar11 = *(long *)(lVar5 + 0x1000b8);
    if (lVar11 == 0) {
      lVar11 = FUN_00e5d3b4();
      *(long *)(lVar5 + 0x1000b8) = lVar11;
      iVar34 = DAT_0486b380;
      iVar39 = (int)*(undefined8 *)(lVar11 + lVar29 * 8 + 1000);
      if (lVar11 == 0) {
        lVar11 = FUN_00e5d3b4();
        *(long *)(lVar5 + 0x1000b8) = lVar11;
      }
    }
    else {
      iVar39 = (int)*(undefined8 *)(lVar11 + lVar29 * 8 + 1000);
      iVar34 = DAT_0486b380;
    }
    *(long *)(lVar11 + (long)iVar34 * 8 + 1000) = (long)(iVar39 + 1);
  }
LAB_02f3a680:
  lVar11 = *(long *)(lVar5 + 0x1000b8);
  if (lVar11 == 0) {
    lVar11 = FUN_00e5d3b4();
    *(long *)(lVar5 + 0x1000b8) = lVar11;
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0x3d0) + 0x10);
  if (*(long *)(lVar11 + 8) == 0) {
    local_9a0 = -(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | uVar36 << 3;
    local_8f0 = local_9a0;
    if (lVar11 == 0) goto LAB_02f3a75c;
    local_890 = (undefined8 *)(local_9a0 + 0x3f & 0xffffffffffffffc0);
    if (*(undefined8 **)(lVar11 + 0x28) < local_890) {
LAB_02f3a6e4:
      lVar29 = FUN_031cf3b4(lVar11,&local_890);
    }
    else {
      lVar29 = *(long *)(lVar11 + 0x38);
      if (*(ulong *)(lVar11 + 0x40) < (ulong)((long)local_890 + lVar29)) goto LAB_02f3a6e4;
      *(long *)(lVar11 + 0x38) = (long)local_890 + lVar29;
    }
  }
  else {
    local_8f0 = -(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | uVar36 << 3;
LAB_02f3a75c:
    local_9a0 = local_8f0;
    lVar29 = (**(code **)PTR_DAT_047d1a08)(1,&local_8f0,0x40);
    lVar11 = 0;
  }
  lVar13 = *(long *)(lVar5 + 0x1000b8);
  if (lVar13 == 0) {
    lVar13 = FUN_00e5d3b4();
    *(long *)(lVar5 + 0x1000b8) = lVar13;
  }
  uVar12 = (long)(int)param_3 * 4;
  local_958 = *(long *)(*(long *)(lVar13 + 0x3d0) + 0x10);
  local_8f0 = uVar12;
  if ((*(long *)(local_958 + 8) == 0) && (local_958 != 0)) {
    local_890 = (undefined8 *)(uVar12 + 0x3f & 0xffffffffffffffc0);
    if (local_890 <= *(undefined8 **)(local_958 + 0x28)) {
      lVar13 = *(long *)(local_958 + 0x38);
      if ((ulong)((long)local_890 + lVar13) <= *(ulong *)(local_958 + 0x40)) {
        *(long *)(local_958 + 0x38) = (long)local_890 + lVar13;
        goto LAB_02f3a854;
      }
    }
    lVar13 = FUN_031cf3b4(local_958,&local_890);
  }
  else {
    lVar13 = (**(code **)PTR_DAT_047d1a08)(1,&local_8f0,0x40);
    local_958 = 0;
  }
LAB_02f3a854:
  lVar14 = *(long *)(lVar5 + 0x1000b8);
  if (lVar14 == 0) {
    lVar14 = FUN_00e5d3b4();
    *(long *)(lVar5 + 0x1000b8) = lVar14;
  }
  local_9a8 = *(long *)(*(long *)(lVar14 + 0x3d0) + 0x10);
  if ((*(long *)(local_9a8 + 8) == 0) && (local_9a8 != 0)) {
    local_890 = (undefined8 *)(uVar12 + 0x3f & 0xffffffffffffffc0);
    if (local_890 <= *(undefined8 **)(local_9a8 + 0x28)) {
      local_900 = *(long *)(local_9a8 + 0x38);
      if ((ulong)((long)local_890 + local_900) <= *(ulong *)(local_9a8 + 0x40)) {
        *(long *)(local_9a8 + 0x38) = (long)local_890 + local_900;
        local_8f0 = uVar12;
        goto LAB_02f3a920;
      }
    }
    local_8f0 = uVar12;
    local_900 = FUN_031cf3b4(local_9a8,&local_890);
  }
  else {
    local_8f0 = uVar12;
    local_900 = (**(code **)PTR_DAT_047d1a08)(1,&local_8f0,0x40);
    local_9a8 = 0;
  }
LAB_02f3a920:
  if (0 < (int)param_3) {
    iVar24 = 0;
    iVar34 = 0;
    uVar33 = 0;
    iVar23 = 0;
    do {
      uVar10 = *param_2;
      if ((long)uVar10 < 0) {
        uVar10 = uVar10 & 0xffffffff;
      }
      else {
        uVar37 = FUN_00dbb6c8(param_1 + 300,uVar10,&local_890);
        uVar10 = (ulong)local_890 & 0xffffffff;
        if ((uVar37 & 1) == 0) {
          uVar10 = 0xffffff;
        }
      }
      lVar14 = param_1[7];
      pbVar20 = (byte *)(lVar14 + (uVar10 & 0xffffff) * 0xc0 + 0x88);
      if ((*pbVar20 & 1) != 0) {
        iVar32 = (int)uVar33;
        *(int *)(lVar13 + (long)iVar32 * 4) = (int)uVar10;
        *(ulong *)(lVar29 + (long)iVar34 * 8) = *param_2;
        iVar34 = iVar34 + 1;
        if ((*(byte *)(lVar14 + (uVar10 & 0xffffff) * 0xc0 + 0x54) & 1) != 0) {
          uVar4 = *(undefined4 *)(lVar13 + (long)iVar24 * 4);
          *(undefined4 *)(lVar13 + (long)iVar24 * 4) = *(undefined4 *)(lVar13 + (long)iVar32 * 4);
          iVar24 = iVar24 + 1;
          *(undefined4 *)(lVar13 + (long)iVar32 * 4) = uVar4;
        }
        if ((*pbVar20 >> 2 & 1) != 0) {
          *(int *)(local_900 + (long)iVar23 * 4) = (int)uVar10;
          iVar23 = iVar23 + 1;
        }
        uVar33 = (ulong)(iVar32 + 1);
      }
      uVar36 = uVar36 - 1;
      param_2 = param_2 + 1;
    } while (uVar36 != 0);
    if ((int)uVar33 != 0) {
      if (3 < (ulong)param_1[0xdb]) {
        lVar14 = *(long *)(lVar5 + 0x1000b8);
        if (lVar14 == 0) {
          lVar14 = FUN_00e5d3b4();
          *(long *)(lVar5 + 0x1000b8) = lVar14;
        }
        plVar25 = *(long **)(lVar14 + 0x3e0);
        puVar38 = (ulong *)(param_1 + 0xdb);
        if (plVar25 != (long *)0x0) {
          lVar14 = *plVar25;
          if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar25[6] != 0)) {
            puVar3 = (undefined8 *)plVar25[2];
            uVar36 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
            if ((uVar36 <= (ulong)plVar25[3]) && (plVar25[2] = uVar36, puVar3 != (undefined8 *)0x0))
            {
              *puVar3 = &DAT_03c4e575;
              puVar3[1] = *(undefined8 *)(plVar25[6] + 8);
            }
          }
          puVar3 = (undefined8 *)plVar25[2];
          uVar36 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
          if ((uVar36 <= (ulong)plVar25[3]) && (plVar25[2] = uVar36, puVar3 != (undefined8 *)0x0)) {
            *puVar3 = "StFireCallbacks";
            uVar8 = nn::os::GetSystemTick();
            puVar3[1] = uVar8;
          }
          if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
            (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
          }
          if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
            (**(code **)(lVar14 + 0x18))("FireCallbacks",0xd,*(undefined8 *)(lVar14 + 0x28));
          }
        }
        plVar25 = (long *)(*puVar38 & 0xfffffffffffffffc);
        if (plVar25 != (long *)0x0) {
          *puVar38 = (ulong)plVar25 | 1;
          puVar30 = puVar38;
          do {
            puVar31 = (ulong *)(plVar25 + 1);
            plVar26 = (long *)(*puVar31 & 0xfffffffffffffffc);
            if ((*puVar31 & 3) == 0) {
              (**(code **)(*plVar25 + 0x20))(plVar25,param_1,lVar29,uVar33);
            }
            else {
              (**(code **)(*plVar25 + 8))();
              *puVar30 = *puVar30 & 3 | (ulong)plVar26;
              puVar31 = puVar30;
            }
            plVar25 = plVar26;
            puVar30 = puVar31;
          } while (plVar26 != (long *)0x0);
          *puVar38 = *puVar38 & 0xfffffffffffffffc;
        }
      }
      if ((int)uVar33 < 1) {
        bVar6 = false;
      }
      else {
        uVar36 = 0;
        auVar40._8_8_ = _UNK_03cabeb8;
        auVar40._0_8_ = _DAT_03cabeb0;
        auVar41._8_4_ = (int)_UNK_03cac088;
        auVar41._0_8_ = _DAT_03cac080;
        auVar41._12_4_ = (int)((ulong)_UNK_03cac088 >> 0x20);
        auVar41 = a64_TBL(ZEXT816(0),auVar41,auVar40);
        do {
          uVar22 = *(uint *)(lVar13 + uVar36 * 4);
          uVar10 = (ulong)uVar22;
          uVar37 = uVar10 & 0xffffff;
          lVar14 = param_1[7];
          lVar35 = lVar14 + uVar37 * 0xc0;
          if ((*(byte *)(lVar35 + 0x88) & 1) != 0) {
            puVar27 = (uint *)(lVar14 + uVar37 * 0xc0 + 0x54);
            uVar7 = *puVar27;
            if ((uVar7 & 1) == 0) {
              if ((uVar7 & 9) == 0) {
                FUN_02f5cd98(param_1[0xd3],uVar10,param_4);
                uVar7 = *puVar27;
              }
              if ((uVar7 >> 3 & 1) != 0) {
                lVar17 = lVar14 + uVar37 * 0xc0;
                if (*(int *)(lVar17 + 0x84) == *(int *)(lVar17 + 0x50)) {
                  FUN_02f09c28(param_1 + 5,uVar10);
                }
                else {
                  pMVar9 = (MutexType *)param_1[0x25];
                  lVar17 = param_1[7];
                  nn::os::LockMutex(pMVar9);
                  uVar10 = (long)(int)param_1[0x1e] - 1;
                  iVar34 = *(int *)(param_1[0x21] + uVar37 * 4);
                  if (iVar34 < (int)uVar10) {
                    puVar3 = (undefined8 *)(param_1[0x1d] + uVar10 * 0x10);
                    uVar8 = *puVar3;
                    uVar22 = *(uint *)(puVar3 + 1);
                    *(int *)(param_1[0x21] + ((ulong)uVar22 & 0xffffff) * 4) = iVar34;
                    puVar3 = (undefined8 *)(param_1[0x1d] + (long)iVar34 * 0x10);
                    *puVar3 = uVar8;
                    *(uint *)(puVar3 + 1) = uVar22;
                    uVar10 = (ulong)((int)param_1[0x1e] - 1);
                  }
                  *(int *)(param_1 + 0x1e) = (int)uVar10;
                  nn::os::UnlockMutex(pMVar9);
                  *(undefined1 *)(param_1[0x1f] + uVar37) = 0xff;
                  lVar17 = lVar17 + uVar37 * 0xc0;
                  *(uint *)(lVar17 + 0x54) = *(uint *)(lVar17 + 0x54) & 0xfffffff7;
                  *(ushort *)(lVar17 + 0x58) = *(ushort *)(lVar17 + 0x58) | 0x228;
                  *(undefined4 *)(param_1[0x21] + uVar37 * 4) = 0xffffffff;
                }
                lVar17 = lVar14 + uVar37 * 0xc0;
                *(ushort *)(lVar17 + 0x58) = *(ushort *)(lVar17 + 0x58) | 0x800;
              }
            }
            else {
              local_8dc = 0;
              local_8d8 = 0;
              uStack_888 = 0x8000020000000000;
              lVar21 = lVar14 + uVar37 * 0xc0;
              local_8e0 = 0xffff;
              local_8f0 = 0;
              uStack_8e8 = 0;
              auVar40 = *(undefined1 (*) [16])(lVar21 + 0x60);
              local_8b0 = *(undefined8 *)(lVar21 + 0x70);
              uStack_8a8 = CONCAT44(auVar40._12_4_,auVar40._12_4_);
              uStack_898 = auVar40._8_8_;
              uStack_8a0 = auVar40._0_8_;
              local_8d0 = 0x20801;
              local_890 = &local_880;
              lVar17 = (**(code **)(*param_1 + 0x468))(param_1,*(long *)(lVar21 + 0xb0));
              if (((lVar17 != 0) && (*(long *)(lVar17 + 0x1670) != 0)) &&
                 (*(char *)(lVar17 + 0x15dd) == '\0')) {
                local_8d0 = CONCAT13(1,(undefined3)local_8d0);
              }
              (**(code **)(*(long *)param_1[0x98] + 0x78))
                        ((long *)param_1[0x98],&local_8f0,&local_890);
              uVar7 = FUN_02f3b84c(param_1,uVar10,local_890,uStack_888 & 0xffffffff);
              if (0 < (int)uVar7) {
                uVar28 = 0;
                do {
                  uVar15 = 0;
                  uVar19 = *(uint *)((long)local_890 + uVar28 * 4);
                  do {
                    if (*(uint *)(lVar13 + uVar15 * 4) == uVar19) {
                      if ((int)uVar15 != -1) goto LAB_02f3adf8;
                      break;
                    }
                    uVar15 = uVar15 + 1;
                  } while (uVar33 != uVar15);
                  uVar15 = (ulong)uVar19 & 0xffffff;
                  uVar19 = *(uint *)(param_1[7] + uVar15 * 0xc0 + 0x54) & 9;
                  if (param_4 == 0) {
                    if (uVar19 == 0) {
                      FUN_02f579fc(param_1[0xd3],uVar10);
                    }
                  }
                  else if (uVar19 == 0) {
                    plVar25 = (long *)param_1[0xd3];
                    iVar34 = *(int *)(plVar25[0x71] +
                                      (long)*(int *)(*(long *)(*plVar25 + 0x38) + uVar15 * 0xc0 +
                                                    0x80) * 0x20 + 0x10);
                    if ((iVar34 != -1) &&
                       (lVar17 = *(long *)(plVar25[0x73] + (long)iVar34 * 8),
                       *(char *)(lVar17 + 0x25) == '\0')) {
                      iVar24 = (int)plVar25[0x67];
                      lVar16 = (long)iVar24;
                      if ((int)(*(uint *)((long)plVar25 + 0x33c) & 0x7fffffff) <= iVar24) {
                        FUN_0133bb88(plVar25 + 0x66,PTR_PTR_047d1a50,lVar16 + 1);
                        iVar24 = (int)plVar25[0x67];
                      }
                      *(int *)(plVar25[0x66] + (long)iVar24 * 4) = iVar34;
                      *(int *)(plVar25 + 0x67) = (int)(lVar16 + 1);
                      *(undefined1 *)(lVar17 + 0x25) = 1;
                    }
                  }
LAB_02f3adf8:
                  uVar28 = uVar28 + 1;
                } while (uVar28 != uVar7);
              }
              if (param_4 == 0) {
                lVar17 = param_1[0x91];
                lVar16 = *(long *)(lVar21 + 0xb0);
                lVar21 = *(long *)(lVar17 + 8);
                uVar28 = FUN_00dbb6c8(lVar17 + 0x90,lVar16,&local_8f0);
                if ((uVar28 & 1) != 0) {
                  uVar7 = (uint)local_8f0 & 0xffffff;
                  do {
                    if ((*(long *)(lVar21 + (ulong)uVar7 * 0x68) == lVar16) ||
                       (*(long *)(lVar21 + (ulong)uVar7 * 0x68 + 0x10) == lVar16)) {
                      do {
                        uVar19 = *(uint *)(lVar21 + (ulong)uVar7 * 0x68 + 8);
                        if (uVar19 == uVar22) {
                          uVar19 = *(uint *)(lVar21 + (ulong)uVar7 * 0x68 + 0x18);
                        }
                        uVar2 = uVar19 & 0xffffff;
                        if (((((uVar2 != 0xffffff) && (uVar2 < *(uint *)(param_1 + 8))) &&
                             (lVar18 = param_1[7],
                             (*(byte *)(lVar18 + (ulong)uVar2 * 0xc0 + 0x54) & 3) != 0)) &&
                            ((*(uint *)(lVar18 + (ulong)uVar2 * 0xc0 + 0x50) == uVar19 &&
                             ((*(byte *)(lVar18 + ((ulong)uVar19 & 0xffffff) * 0xc0 + 0x54) & 9) ==
                              0)))) &&
                           ((*(byte *)(lVar18 + ((ulong)uVar19 & 0xffffff) * 0xc0 + 0x88) & 1) != 0)
                           ) {
                          FUN_02f579fc(param_1[0xd3],uVar10);
                        }
                        puVar1 = (uint *)(*(long *)(lVar17 + 0xa8) + (long)(int)uVar7 * 8);
                        if (*(long *)(lVar21 + (long)(int)uVar7 * 0x68) != lVar16) {
                          puVar1 = puVar1 + 1;
                        }
                        uVar7 = *puVar1;
                        while( true ) {
                          if (uVar7 == 0x7fffffff) goto LAB_02f3b0c0;
                          if ((*(long *)(lVar21 + (ulong)uVar7 * 0x68) == lVar16) ||
                             (*(long *)(lVar21 + (ulong)uVar7 * 0x68 + 0x10) == lVar16)) break;
                          puVar1 = (uint *)(*(long *)(lVar17 + 0xa8) + (long)(int)uVar7 * 8);
                          if (*(long *)(lVar21 + (long)(int)uVar7 * 0x68) != lVar16) {
                            puVar1 = puVar1 + 1;
                          }
                          uVar7 = *puVar1;
                        }
                      } while( true );
                    }
                    puVar1 = (uint *)(*(long *)(lVar17 + 0xa8) + (long)(int)uVar7 * 8);
                    if (*(long *)(lVar21 + (long)(int)uVar7 * 0x68) != lVar16) {
                      puVar1 = puVar1 + 1;
                    }
                    uVar7 = *puVar1;
                  } while (uVar7 != 0x7fffffff);
                }
              }
LAB_02f3b0c0:
              uVar10 = uStack_888;
              uVar28 = (ulong)uStack_888._4_4_;
              uStack_888 = (ulong)uStack_888._4_4_ << 0x20;
              if ((-1 < (long)uVar10) && (local_890 != (undefined8 *)0x0)) {
                (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                          (PTR_PTR_047d1a50,local_890,uVar28 << 2);
              }
            }
            local_880 = 0x7f7fffee7f7fffee;
            local_890 = (undefined8 *)0xff7fffeeff7fffee;
            uStack_888 = CONCAT44(auVar41._12_4_,0xff7fffee);
            FUN_0300ebf8(param_1[0x93],lVar35,lVar14 + uVar37 * 0xc0 + 0x60,&local_890);
            if ((*(byte *)puVar27 >> 4 & 1) != 0) {
              FUN_02f3bb18(param_1 + 0xf6,param_1,
                           *(undefined4 *)
                            (*(long *)(*(long *)(lVar14 + uVar37 * 0xc0 + 0x78) + 0x50) + 0x150));
            }
          }
          if (param_4 == 0) {
            lVar14 = lVar14 + uVar37 * 0xc0;
            *(ushort *)(lVar14 + 0x58) = *(ushort *)(lVar14 + 0x58) | 0x800;
          }
          uVar36 = uVar36 + 1;
        } while (uVar36 != uVar33);
        bVar6 = true;
      }
      lVar14 = *(long *)(lVar5 + 0x1000b8);
      if (lVar14 == 0) {
        lVar14 = FUN_00e5d3b4();
        *(long *)(lVar5 + 0x1000b8) = lVar14;
      }
      plVar25 = *(long **)(lVar14 + 0x3e0);
      if (plVar25 != (long *)0x0) {
        lVar14 = *plVar25;
        if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar25[6] != 0)) {
          puVar3 = (undefined8 *)plVar25[2];
          uVar36 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
          if ((uVar36 <= (ulong)plVar25[3]) && (plVar25[2] = uVar36, puVar3 != (undefined8 *)0x0)) {
            *puVar3 = &DAT_03c4e575;
            puVar3[1] = *(undefined8 *)(plVar25[6] + 8);
          }
        }
        puVar3 = (undefined8 *)plVar25[2];
        uVar36 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
        if ((uVar36 <= (ulong)plVar25[3]) && (plVar25[2] = uVar36, puVar3 != (undefined8 *)0x0)) {
          *puVar3 = "StRemoveFromBroadPhase";
          uVar8 = nn::os::GetSystemTick();
          puVar3[1] = uVar8;
        }
        if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
          (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
        }
        if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
          (**(code **)(lVar14 + 0x18))("RemoveFromBroadPhase",0x14,*(undefined8 *)(lVar14 + 0x28));
        }
      }
      (**(code **)(*(long *)param_1[0x98] + 0x38))((long *)param_1[0x98],local_900,iVar23);
      if (bVar6) {
        uVar36 = 0;
        do {
          uVar10 = (ulong)*(uint *)(lVar13 + uVar36 * 4) & 0xffffff;
          lVar35 = param_1[7];
          lVar14 = lVar35 + uVar10 * 0xc0;
          *(byte *)(lVar14 + 0x88) = *(byte *)(lVar14 + 0x88) & 0xfa;
          *(ushort *)(lVar14 + 0x58) = *(ushort *)(lVar14 + 0x58) | 1;
          iVar34 = *(int *)(lVar14 + 0x80);
          if ((iVar34 != 0) && (param_1[0xd3] != 0)) {
            lVar17 = param_1[0x2a] + (long)iVar34 * 0x80;
            uVar22 = *(uint *)(lVar17 + 0x48);
            do {
              if ((*(byte *)(param_1[7] + (ulong)(uVar22 & 0xffffff) * 0xc0 + 0x88) & 1) != 0)
              goto LAB_02f3b38c;
              uVar22 = *(uint *)(param_1[7] + (ulong)(uVar22 & 0xffffff) * 0xc0 + 0x84);
            } while (uVar22 != *(uint *)(lVar17 + 0x48));
            puVar27 = (uint *)(lVar17 + 0x4c);
            if (*puVar27 == 0x7fffffff) {
              *(undefined4 *)(*(long *)(param_1[0xd3] + 0x388) + (long)iVar34 * 0x20 + 0x10) =
                   0xffffffff;
            }
            else {
              uVar37 = (ulong)*(byte *)(lVar17 + 0x5e);
              pMVar9 = (MutexType *)param_1[0x90];
              nn::os::LockMutex(pMVar9);
              uVar22 = *puVar27;
              lVar21 = (long)(int)param_1[uVar37 * 3 + 0x31] + -1;
              if (uVar22 < (uint)lVar21) {
                iVar34 = *(int *)(param_1[uVar37 * 3 + 0x30] + lVar21 * 4);
                *(uint *)(param_1[0x2a] + (long)iVar34 * 0x80 + 0x4c) = uVar22;
                *(int *)(param_1[uVar37 * 3 + 0x30] + (long)(int)uVar22 * 4) = iVar34;
              }
              *(byte *)(lVar17 + 0x5e) = 0xff;
              *puVar27 = 0x7fffffff;
              *(int *)(param_1 + uVar37 * 3 + 0x31) = (int)param_1[uVar37 * 3 + 0x31] + -1;
              nn::os::UnlockMutex(pMVar9);
            }
          }
LAB_02f3b38c:
          lVar35 = (**(code **)(*(long *)PTR_DAT_047d19f0 +
                                (ulong)*(byte *)(*(long *)(lVar35 + uVar10 * 0xc0 + 0x78) + 0x18) *
                                0x200 + 0x48))();
          if (lVar35 != 0) {
            FUN_02f491ac(param_1[0x118],lVar14);
          }
          uVar36 = uVar36 + 1;
        } while (uVar36 != uVar33);
      }
    }
  }
  lVar14 = *(long *)(lVar5 + 0x1000b8);
  if (lVar14 == 0) {
    lVar14 = FUN_00e5d3b4();
    *(long *)(lVar5 + 0x1000b8) = lVar14;
  }
  plVar25 = *(long **)(lVar14 + 0x3e0);
  if (plVar25 != (long *)0x0) {
    lVar14 = *plVar25;
    if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar25[6] != 0)) {
      puVar3 = (undefined8 *)plVar25[2];
      uVar36 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar36 <= (ulong)plVar25[3]) && (plVar25[2] = uVar36, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = &DAT_03c4e575;
        puVar3[1] = *(undefined8 *)(plVar25[6] + 8);
      }
    }
    puVar3 = (undefined8 *)plVar25[2];
    uVar36 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar36 <= (ulong)plVar25[3]) && (plVar25[2] = uVar36, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = &DAT_03c3697b;
      uVar8 = nn::os::GetSystemTick();
      puVar3[1] = uVar8;
    }
    if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
      (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
      if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
        (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
      }
    }
  }
  if (local_9a8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,local_900,uVar12);
  }
  else {
    uVar36 = uVar12 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(local_9a8 + 0x28) < uVar36) ||
       (*(long *)(local_9a8 + 0x38) != uVar36 + local_900)) {
      if (local_900 != 0) {
        if (*(ulong *)(local_9a8 + 0x28) < uVar36 + 0x40) {
          *(int *)(*(long *)(local_9a8 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_9a8 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_9a8 + 0x10) + 0x18))
                    (*(long **)(local_9a8 + 0x10),local_900 - *(int *)(local_900 + -4),uVar36 + 0x44
                    );
        }
        else {
          if (*(long *)(local_9a8 + 0x38) == uVar36 + local_900) {
            *(long *)(local_9a8 + 0x38) = local_900;
            goto LAB_02f3b560;
          }
          FUN_031cf778(local_9a8,local_900);
        }
      }
    }
    else {
      *(long *)(local_9a8 + 0x38) = local_900;
      if (*(long *)(local_9a8 + 0x48) == local_900) {
LAB_02f3b560:
        FUN_031cf578(local_9a8);
      }
    }
  }
  if (local_958 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar13,uVar12);
  }
  else {
    uVar36 = uVar12 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(local_958 + 0x28) < uVar36) || (*(long *)(local_958 + 0x38) != uVar36 + lVar13))
    {
      if (lVar13 != 0) {
        if (*(ulong *)(local_958 + 0x28) < uVar36 + 0x40) {
          *(int *)(*(long *)(local_958 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_958 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_958 + 0x10) + 0x18))
                    (*(long **)(local_958 + 0x10),lVar13 - *(int *)(lVar13 + -4),uVar36 + 0x44);
        }
        else {
          if (*(long *)(local_958 + 0x38) == uVar36 + lVar13) {
            *(long *)(local_958 + 0x38) = lVar13;
            goto LAB_02f3b6f0;
          }
          FUN_031cf778(local_958,lVar13);
        }
      }
    }
    else {
      *(long *)(local_958 + 0x38) = lVar13;
      if (*(long *)(local_958 + 0x48) == lVar13) {
LAB_02f3b6f0:
        FUN_031cf578();
      }
    }
  }
  if (lVar11 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar29,local_9a0);
    goto LAB_02f3b708;
  }
  uVar36 = local_9a0 + 0x3f & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar11 + 0x28) < uVar36) || (*(long *)(lVar11 + 0x38) != uVar36 + lVar29)) {
    if (lVar29 == 0) goto LAB_02f3b708;
    if (*(ulong *)(lVar11 + 0x28) < uVar36 + 0x40) {
      *(int *)(*(long *)(lVar11 + 0x30) + 0x20) = *(int *)(*(long *)(lVar11 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar11 + 0x10) + 0x18))
                (*(long **)(lVar11 + 0x10),lVar29 - *(int *)(lVar29 + -4),uVar36 + 0x44);
      goto LAB_02f3b708;
    }
    if (*(long *)(lVar11 + 0x38) != uVar36 + lVar29) {
      FUN_031cf778(lVar11,lVar29);
      goto LAB_02f3b708;
    }
    *(long *)(lVar11 + 0x38) = lVar29;
  }
  else {
    *(long *)(lVar11 + 0x38) = lVar29;
    if (*(long *)(lVar11 + 0x48) != lVar29) goto LAB_02f3b708;
  }
  FUN_031cf578(lVar11);
LAB_02f3b708:
  if (iVar39 != -1) {
    lVar29 = (long)DAT_0486b380;
    lVar11 = *(long *)(lVar5 + 0x1000b8);
    if (lVar11 == 0) {
      lVar11 = FUN_00e5d3b4();
      *(long *)(lVar5 + 0x1000b8) = lVar11;
    }
    *(long *)(lVar11 + lVar29 * 8 + 1000) = (long)iVar39;
  }
  return;
}


