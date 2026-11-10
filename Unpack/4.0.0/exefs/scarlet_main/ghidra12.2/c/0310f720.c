/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0310f720; name: FUN_0310f720
 */


ulong FUN_0310f720(long param_1,long param_2,undefined2 param_3)

{
  short *psVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  short sVar9;
  undefined2 uVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  undefined8 *puVar31;
  long lVar32;
  uint uVar33;
  uint uVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  uint uVar38;
  long *plVar39;
  long *plVar40;
  long *plVar41;
  long lVar42;
  long *plVar43;
  long *plVar44;
  long *plVar45;
  uint3 uVar46;
  long local_e0;
  uint local_90 [2];
  long local_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70 [2];
  
  lVar32 = tpidr_el0;
  lVar28 = *(long *)(lVar32 + 0x1000b8);
  if (lVar28 == 0) {
    lVar28 = FUN_00e5d3b4();
    *(long *)(lVar32 + 0x1000b8) = lVar28;
  }
  plVar39 = *(long **)(lVar28 + 0x3e0);
  if (plVar39 != (long *)0x0) {
    lVar28 = *plVar39;
    if (*(code **)(lVar28 + 0x18) != (code *)0x0) {
      (**(code **)(lVar28 + 0x18))
                ("hkaiUpdateNavDataTasks::addPhase2Tasks",0x26,*(undefined8 *)(lVar28 + 0x28));
    }
    puVar31 = (undefined8 *)plVar39[2];
    uVar29 = (long)puVar31 + 0x17U & 0xfffffffffffffff8;
    if ((uVar29 <= (ulong)plVar39[3]) && (plVar39[2] = uVar29, puVar31 != (undefined8 *)0x0)) {
      *puVar31 = "TthkaiUpdateNavDataTasks::addPhase2Tasks";
      uVar14 = nn::os::GetSystemTick();
      puVar31[1] = uVar14;
    }
    if (((*(byte *)(lVar28 + 0x38) & 1) != 0) && (plVar39[6] != 0)) {
      puVar31 = (undefined8 *)plVar39[2];
      uVar29 = (long)puVar31 + 0x17U & 0xfffffffffffffff8;
      if ((uVar29 <= (ulong)plVar39[3]) && (plVar39[2] = uVar29, puVar31 != (undefined8 *)0x0)) {
        *puVar31 = &DAT_03c4e575;
        puVar31[1] = *(undefined8 *)(plVar39[6] + 8);
      }
    }
  }
  iVar23 = *(int *)(*(long *)(param_2 + 0x90) + 0x28);
  lVar28 = (long)iVar23;
  local_78 = plVar39;
  if ((int)(*(uint *)(param_2 + 0x74) & 0x7fffffff) < iVar23) {
    FUN_03115444(param_2 + 0x68,lVar28);
  }
  iVar24 = *(int *)(param_2 + 0x70);
  lVar30 = (long)iVar24;
  if (iVar24 < iVar23) {
    lVar35 = *(long *)(param_2 + 0x68);
    lVar28 = lVar28 << 7;
    *(int *)(param_2 + 0x70) = iVar23;
    do {
      lVar28 = lVar28 + -0x80;
      puVar31 = (undefined8 *)(lVar35 + lVar30 * 0x80);
      *puVar31 = &PTR_LAB_0464ea88;
      lVar35 = lVar35 + 0x80;
      puVar31[1] = 0xffffffff;
      puVar31[2] = 1;
      puVar31[4] = 0;
      puVar31[5] = 0x8000000000000000;
      puVar31[6] = 0;
      puVar31[7] = 0x8000000000000000;
      puVar31[8] = 0;
      puVar31[9] = 0x8000000000000000;
    } while (lVar30 * 0x80 != lVar28);
  }
  else if (iVar23 < iVar24) {
    *(int *)(param_2 + 0x70) = iVar23;
    lVar28 = lVar28 * 0x80 + lVar30 * -0x80;
    plVar39 = (long *)(*(long *)(param_2 + 0x68) + lVar30 * 0x80);
    do {
      plVar39 = plVar39 + -0x10;
      (**(code **)(*plVar39 + 8))(plVar39);
      lVar28 = lVar28 + 0x80;
    } while (lVar28 != 0);
  }
  local_88 = 0;
  local_80 = -0x8000000000000000;
  iVar23 = *(int *)(*(long *)(param_2 + 0x90) + 0x28);
  if (iVar23 < 1) {
    local_80._0_4_ = 0;
  }
  else {
    FUN_02e80588(&local_88,PTR_PTR_047d1a50 + 0x20,iVar23);
    if ((int)(uint)local_80 < iVar23) {
      lVar28 = (long)(int)(uint)local_80;
      uVar38 = ~(uint)local_80;
      local_80 = CONCAT44(local_80._4_4_,iVar23);
      memset((void *)(local_88 + lVar28 * 2),0xff,(ulong)(iVar23 + uVar38) * 2 + 2);
      goto LAB_0310f94c;
    }
  }
  if (iVar23 < (int)(uint)local_80) {
    local_80 = CONCAT44(local_80._4_4_,iVar23);
  }
LAB_0310f94c:
  plVar39 = (long *)(param_2 + 0x98);
  FUN_02eb1718(plVar39,0,*(undefined4 *)(*(long *)(param_2 + 0x90) + 0x28),0);
  lVar28 = param_1 + 0x18;
  uVar38 = *(uint *)(param_1 + 0x20);
  uVar21 = uVar38;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) <= (int)uVar38) {
    FUN_0323ff70(lVar28,PTR_PTR_047d1a50,(long)(int)uVar38 + 1);
    uVar21 = *(uint *)(param_1 + 0x20);
  }
  puVar31 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)(int)uVar21 * 0x18);
  *(int *)(param_1 + 0x20) = (int)((long)(int)uVar38 + 1);
  *puVar31 = 0;
  *(undefined2 *)(puVar31 + 1) = 1;
  *(undefined1 *)((long)puVar31 + 10) = 0x40;
  puVar31[2] = 0;
  uVar21 = *(uint *)(param_1 + 0x20);
  uVar22 = uVar21;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) <= (int)uVar21) {
    FUN_0323ff70(lVar28,PTR_PTR_047d1a50,(long)(int)uVar21 + 1);
    uVar22 = *(uint *)(param_1 + 0x20);
  }
  puVar31 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)(int)uVar22 * 0x18);
  *(int *)(param_1 + 0x20) = (int)((long)(int)uVar21 + 1);
  *puVar31 = 0;
  *(undefined2 *)(puVar31 + 1) = 1;
  *(undefined1 *)((long)puVar31 + 10) = 0x40;
  puVar31[2] = 0;
  iVar23 = *(int *)PTR_DAT_047e4f38;
  lVar30 = *(long *)(lVar32 + 0x1000b8);
  if (lVar30 == 0) {
    lVar30 = FUN_00e5d3b4();
    *(long *)(lVar32 + 0x1000b8) = lVar30;
  }
  if (*(long *)(lVar30 + (long)iVar23 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  puVar8 = PTR_PTR_047d1a50;
  sVar11 = (short)uVar21;
  if (0 < *(int *)(*(long *)(param_2 + 0x90) + 0x28)) {
    if ((~uVar21 & 0xffff) == 0) {
      uVar29 = 0;
      do {
        local_90[0] = (uint)uVar29;
        uVar10 = FUN_0310e880(param_1,param_2,local_90,param_3,uVar38 & 0xffff,local_70);
        if ((char)local_70[0] != '\0') {
          uVar37 = uVar29 >> 5 & 0x7ffffff;
          *(uint *)(*plVar39 + uVar37 * 4) =
               *(uint *)(*plVar39 + uVar37 * 4) | 1 << (ulong)((uint)uVar29 & 0x1f);
        }
        *(undefined2 *)(local_88 + uVar29 * 2) = uVar10;
        iVar23 = *(int *)PTR_DAT_047e4f38;
        lVar30 = *(long *)(lVar32 + 0x1000b8);
        if (lVar30 == 0) {
          lVar30 = FUN_00e5d3b4();
          *(long *)(lVar32 + 0x1000b8) = lVar30;
        }
        if (*(long *)(lVar30 + (long)iVar23 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
        uVar29 = uVar29 + 1;
      } while ((long)uVar29 < (long)*(int *)(*(long *)(param_2 + 0x90) + 0x28));
    }
    else {
      uVar29 = 0;
      do {
        local_90[0] = (uint)uVar29;
        sVar9 = FUN_0310e880(param_1,param_2,local_90,param_3,uVar38 & 0xffff,local_70);
        if ((char)local_70[0] != '\0') {
          uVar37 = uVar29 >> 5 & 0x7ffffff;
          *(uint *)(*plVar39 + uVar37 * 4) =
               *(uint *)(*plVar39 + uVar37 * 4) | 1 << (ulong)((uint)uVar29 & 0x1f);
        }
        *(short *)(local_88 + uVar29 * 2) = sVar9;
        if (sVar9 != -1) {
          iVar23 = *(int *)(param_1 + 0x330);
          lVar30 = (long)iVar23;
          if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar23) {
            FUN_02e7f7cc(param_1 + 0x328,puVar8,lVar30 + 1);
            iVar23 = *(int *)(param_1 + 0x330);
          }
          *(int *)(param_1 + 0x330) = (int)(lVar30 + 1);
          psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar23 * 4);
          *psVar1 = sVar9;
          psVar1[1] = sVar11;
        }
        iVar23 = *(int *)PTR_DAT_047e4f38;
        lVar30 = *(long *)(lVar32 + 0x1000b8);
        if (lVar30 == 0) {
          lVar30 = FUN_00e5d3b4();
          *(long *)(lVar32 + 0x1000b8) = lVar30;
        }
        if (*(long *)(lVar30 + (long)iVar23 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
        uVar29 = uVar29 + 1;
      } while ((long)uVar29 < (long)*(int *)(*(long *)(param_2 + 0x90) + 0x28));
    }
  }
  if (*(int *)(param_2 + 0xa0) != 0) {
    local_e0 = *(long *)(param_2 + 0x98);
    lVar30 = param_1 + 0x328;
    uVar22 = *(int *)(param_2 + 0xa8) - 1;
    uVar21 = (int)uVar22 >> 5;
    iVar23 = 0;
    plVar39 = (long *)(param_2 + 0x10);
    uVar38 = 0xffffffff;
    uVar33 = (uVar21 ^ 0xffffffff) >> 0x1f;
    iVar24 = 0;
    do {
      if (iVar24 < (int)uVar21) {
        lVar35 = (long)iVar24;
        do {
          uVar25 = *(uint *)(local_e0 + lVar35 * 4);
          uVar34 = uVar25 & uVar38;
          if (uVar34 != 0) {
            do {
              iVar24 = (uVar34 & -uVar34) - 1;
              uVar46 = (uint3)(byte)(POPCOUNT((char)iVar24) + POPCOUNT((char)((uint)iVar24 >> 8)) +
                                    POPCOUNT((char)((uint)iVar24 >> 0x10)) +
                                    POPCOUNT((char)((uint)iVar24 >> 0x18)));
              uVar38 = -2 << (ulong)(uVar46 & 0x1f) & uVar38;
              iVar24 = ((int)lVar35 + iVar23) * 0x20 + (uint)uVar46;
              lVar36 = *(long *)(param_2 + 0x78);
              lVar42 = *(long *)(lVar36 + 0x38) + (long)iVar24 * 0x100;
              iVar27 = *(int *)(lVar42 + 0xb8);
              if (iVar27 != 0) {
                lVar42 = *(long *)(lVar42 + 0xb0);
                lVar3 = lVar42 + (long)iVar27 * 8;
                while( true ) {
                  puVar8 = PTR_DAT_047d1a08;
                  iVar26 = *(int *)(lVar42 + 4);
                  lVar36 = *(long *)(*(long *)(lVar36 + 0x48) + (long)iVar26 * 0x18);
                  uVar34 = *(uint *)(lVar36 + 0x18);
                  iVar27 = *(int *)(lVar36 + 0x1c);
                  if ((iVar27 != iVar24) ||
                     ((*(uint *)(*(long *)(param_2 + 0x98) + (long)((int)uVar34 >> 5) * 4) >>
                       (ulong)(uVar34 & 0x1f) & 1) == 0)) {
                    local_70[0] = 0x40;
                    plVar15 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
                    if (*(code **)(puVar8 + 0x10) != (code *)0x0) {
                      (**(code **)(puVar8 + 0x10))(plVar15,"MatchStreamingFacesTask");
                    }
                    plVar16 = plVar15 + 2;
                    *plVar16 = 1;
                    *plVar15 = (long)&PTR_LAB_0464e4f8;
                    plVar15[1] = 0xffffffff;
                    plVar15[4] = (long)&PTR_LAB_0464e548;
                    plVar15[5] = param_2;
                    if (*(long *)(param_2 + 8) != 0) {
                      do {
                        cVar6 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(plVar39,0x10);
                        if (bVar7) {
                          *plVar39 = *plVar39 + 1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                    }
                    *(uint *)(plVar15 + 6) = uVar34;
                    *(int *)((long)plVar15 + 0x34) = iVar27;
                    *(int *)(plVar15 + 7) = iVar26;
                    sVar9 = FUN_0323f360(param_1,plVar15,0x40);
                    if ((sVar9 != -1) &&
                       (sVar12 = *(short *)(local_88 + (long)(int)uVar34 * 2), sVar12 != -1)) {
                      iVar26 = *(int *)(param_1 + 0x330);
                      lVar36 = (long)iVar26;
                      if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar26) {
                        FUN_02e7f7cc(lVar30,PTR_PTR_047d1a50,lVar36 + 1);
                        iVar26 = *(int *)(param_1 + 0x330);
                      }
                      psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar26 * 4);
                      *(int *)(param_1 + 0x330) = (int)(lVar36 + 1);
                      *psVar1 = sVar12;
                      psVar1[1] = sVar9;
                    }
                    if ((sVar9 != -1) &&
                       (sVar12 = *(short *)(local_88 + (long)iVar27 * 2), sVar12 != -1)) {
                      iVar26 = *(int *)(param_1 + 0x330);
                      lVar36 = (long)iVar26;
                      if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar26) {
                        FUN_02e7f7cc(lVar30,PTR_PTR_047d1a50,lVar36 + 1);
                        iVar26 = *(int *)(param_1 + 0x330);
                      }
                      psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar26 * 4);
                      *(int *)(param_1 + 0x330) = (int)(lVar36 + 1);
                      *psVar1 = sVar12;
                      psVar1[1] = sVar9;
                    }
                    *(short *)(local_88 + (long)(int)uVar34 * 2) = sVar9;
                    *(short *)(local_88 + (long)iVar27 * 2) = sVar9;
                    iVar27 = *(int *)(param_1 + 0x330);
                    lVar36 = (long)iVar27;
                    if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar27) {
                      FUN_02e7f7cc(lVar30,PTR_PTR_047d1a50,lVar36 + 1);
                      iVar27 = *(int *)(param_1 + 0x330);
                    }
                    psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar27 * 4);
                    *(int *)(param_1 + 0x330) = (int)(lVar36 + 1);
                    *psVar1 = sVar9;
                    psVar1[1] = sVar11;
                    if (plVar15[1] != 0) {
                      do {
                        lVar36 = *plVar16;
                        cVar6 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                        if (bVar7) {
                          *plVar16 = lVar36 + -1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if (lVar36 + -1 == 0) {
                        (**(code **)(*plVar15 + 0x18))(plVar15);
                      }
                    }
                  }
                  lVar42 = lVar42 + 8;
                  if (lVar42 == lVar3) break;
                  lVar36 = *(long *)(param_2 + 0x78);
                }
                uVar25 = *(uint *)(local_e0 + lVar35 * 4);
              }
              uVar34 = uVar25 & uVar38;
            } while (uVar34 != 0);
          }
          lVar35 = lVar35 + 1;
          uVar34 = 0xffffffff;
          uVar38 = 0xffffffff;
        } while (lVar35 != (long)((ulong)uVar22 << 0x20) >> 0x25);
      }
      else {
        uVar34 = uVar38;
      }
      uVar38 = uVar34 & ((-2 << (ulong)(uVar22 & 0x1f) | 1U) ^ 0xfffffffe);
      iVar23 = iVar23 + 1;
      local_e0 = local_e0 + 4;
      bVar7 = uVar33 != 0;
      uVar33 = uVar33 - 1;
      iVar24 = uVar21 - 1;
    } while (bVar7);
  }
  iVar23 = *(int *)PTR_DAT_047e4f38;
  lVar30 = *(long *)(lVar32 + 0x1000b8);
  if (lVar30 == 0) {
    lVar30 = FUN_00e5d3b4();
    *(long *)(lVar32 + 0x1000b8) = lVar30;
  }
  if (*(long *)(lVar30 + (long)iVar23 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  puVar8 = PTR_DAT_047d1a08;
  local_70[0] = 0x30;
  plVar39 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
  if (*(code **)(puVar8 + 0x10) != (code *)0x0) {
    (**(code **)(puVar8 + 0x10))(plVar39,"CompactTask");
  }
  plVar15 = plVar39 + 2;
  *plVar15 = 1;
  *plVar39 = (long)&PTR_LAB_0464e5a8;
  plVar39[1] = 0xffffffff;
  plVar39[4] = (long)&PTR_LAB_0464e5f0;
  plVar39[5] = param_2;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar16 = (long *)(param_2 + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = *plVar16 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  sVar9 = FUN_0323f360(param_1,plVar39,0x40);
  iVar23 = *(int *)(param_1 + 0x330);
  lVar30 = (long)iVar23;
  lVar32 = param_1 + 0x328;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar23) {
    FUN_02e7f7cc(lVar32,PTR_PTR_047d1a50,lVar30 + 1);
    iVar23 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar23 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar30 + 1);
  psVar1[1] = sVar9;
  *psVar1 = sVar11;
  puVar8 = PTR_DAT_047d1a08;
  local_70[0] = 0x30;
  plVar16 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
  if (*(code **)(puVar8 + 0x10) != (code *)0x0) {
    (**(code **)(puVar8 + 0x10))(plVar16,"GetAndClearModifiedFacesTask");
  }
  plVar41 = plVar16 + 2;
  *plVar41 = 1;
  *plVar16 = (long)&PTR_LAB_0464e650;
  plVar16[1] = 0xffffffff;
  plVar16[4] = (long)&PTR_LAB_0464e698;
  plVar16[5] = param_2;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar17 = (long *)(param_2 + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *plVar17 = *plVar17 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  sVar11 = FUN_0323f360(param_1,plVar16,0x40);
  iVar23 = *(int *)(param_1 + 0x330);
  lVar30 = (long)iVar23;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar23) {
    FUN_02e7f7cc(lVar32,PTR_PTR_047d1a50,lVar30 + 1);
    iVar23 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar23 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar30 + 1);
  *psVar1 = sVar9;
  psVar1[1] = sVar11;
  puVar8 = PTR_DAT_047d1a08;
  local_70[0] = 0x30;
  plVar17 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
  if (*(code **)(puVar8 + 0x10) != (code *)0x0) {
    (**(code **)(puVar8 + 0x10))(plVar17,"GetAndClearModifiedAabbsTask");
  }
  plVar44 = plVar17 + 2;
  *plVar44 = 1;
  *plVar17 = (long)&PTR_LAB_0464e6f8;
  plVar17[1] = 0xffffffff;
  plVar17[4] = (long)&PTR_LAB_0464e740;
  plVar17[5] = param_2;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar18 = (long *)(param_2 + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *plVar18 = *plVar18 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  sVar12 = FUN_0323f360(param_1,plVar17,0x40);
  iVar23 = *(int *)(param_1 + 0x330);
  lVar30 = (long)iVar23;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar23) {
    FUN_02e7f7cc(lVar32,PTR_PTR_047d1a50,lVar30 + 1);
    iVar23 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar23 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar30 + 1);
  *psVar1 = sVar9;
  psVar1[1] = sVar12;
  iVar23 = *(int *)(param_1 + 0x20);
  lVar30 = (long)iVar23 + 1;
  iVar24 = iVar23;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) <= iVar23) {
    FUN_0323ff70(lVar28,PTR_PTR_047d1a50,lVar30);
    iVar24 = *(int *)(param_1 + 0x20);
  }
  puVar31 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar24 * 0x18);
  *(int *)(param_1 + 0x20) = (int)lVar30;
  *(undefined2 *)(puVar31 + 1) = 1;
  *puVar31 = 0;
  *(undefined1 *)((long)puVar31 + 10) = 0x40;
  puVar31[2] = 0;
  iVar24 = *(int *)(param_1 + 0x330);
  lVar28 = (long)iVar24;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar24) {
    FUN_02e7f7cc(lVar32,PTR_PTR_047d1a50,lVar28 + 1);
    iVar24 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar24 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar28 + 1);
  *psVar1 = sVar11;
  sVar9 = (short)iVar23;
  psVar1[1] = sVar9;
  iVar24 = *(int *)(param_1 + 0x330);
  lVar28 = (long)iVar24;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar24) {
    FUN_02e7f7cc(lVar32,PTR_PTR_047d1a50,lVar28 + 1);
    iVar24 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar24 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar28 + 1);
  *psVar1 = sVar12;
  psVar1[1] = sVar9;
  puVar8 = PTR_DAT_047d1a08;
  local_70[0] = 0x920;
  plVar18 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
  if (*(code **)(puVar8 + 0x10) != (code *)0x0) {
    (**(code **)(puVar8 + 0x10))(plVar18,"UpdateStalenessTask");
  }
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  uVar5 = *(undefined4 *)(param_2 + 0xd0);
  plVar43 = plVar18 + 2;
  *plVar43 = 1;
  *plVar18 = (long)&PTR_LAB_0464eba8;
  plVar18[1] = 0xffffffff;
  plVar18[4] = (long)&PTR_LAB_0464ebe8;
  plVar18[0xe] = (long)(plVar18 + 0x10);
  plVar18[0xf] = -0x7fffffef00000000;
  plVar18[0x98] = (long)(plVar18 + 0x9a);
  plVar18[0x99] = -0x7fffffef00000000;
  *(undefined4 *)(plVar18 + 0x122) = uVar4;
  FUN_03232938(plVar18 + 6,uVar4,uVar5,1);
  *plVar18 = (long)&PTR_LAB_0464ead0;
  plVar18[4] = (long)&PTR_LAB_0464eb18;
  plVar18[0x123] = param_2;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar19 = (long *)(param_2 + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar7) {
        *plVar19 = *plVar19 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  sVar12 = FUN_0323f458(param_1,plVar18,*(undefined4 *)(param_2 + 0x18),1,0x40);
  iVar24 = *(int *)(param_1 + 0x330);
  lVar28 = (long)iVar24;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar24) {
    FUN_02e7f7cc(lVar32,PTR_PTR_047d1a50,lVar28 + 1);
    iVar24 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar24 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar28 + 1);
  *psVar1 = sVar11;
  psVar1[1] = sVar12;
  puVar8 = PTR_DAT_047d1a08;
  local_70[0] = 0x940;
  plVar19 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
  if (*(code **)(puVar8 + 0x10) != (code *)0x0) {
    (**(code **)(puVar8 + 0x10))(plVar19,"UpdateVolumeStalenessTask");
  }
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  uVar5 = *(undefined4 *)(param_2 + 0x118);
  plVar40 = plVar19 + 2;
  *plVar40 = 1;
  *(undefined4 *)(plVar19 + 0xf) = 0;
  *(undefined4 *)((long)plVar19 + 0x7c) = 0x80000011;
  *plVar19 = (long)&PTR_LAB_0464ed08;
  plVar19[1] = 0xffffffff;
  plVar19[4] = (long)&PTR_LAB_0464ed48;
  plVar19[0xe] = (long)(plVar19 + 0x10);
  plVar19[0x98] = (long)(plVar19 + 0x9a);
  *(undefined4 *)(plVar19 + 0x99) = 0;
  *(undefined4 *)((long)plVar19 + 0x4cc) = 0x80000011;
  *(undefined4 *)(plVar19 + 0x122) = uVar4;
  FUN_03232938(plVar19 + 6,uVar4,uVar5,1);
  *plVar19 = (long)&PTR_LAB_0464ec30;
  plVar19[4] = (long)&PTR_LAB_0464ec78;
  plVar19[0x123] = param_2;
  if (*(long *)(param_2 + 8) != 0) {
    plVar20 = (long *)(param_2 + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar7) {
        *plVar20 = *plVar20 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  nn::os::InitializeMutex((MutexType *)(plVar19 + 0x124),true,0);
  sVar13 = FUN_0323f458(param_1,plVar19,*(undefined4 *)(param_2 + 0x18),1,0x40);
  iVar24 = *(int *)(param_1 + 0x330);
  lVar28 = (long)iVar24;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar24) {
    FUN_02e7f7cc(lVar32,PTR_PTR_047d1a50,lVar28 + 1);
    iVar24 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar24 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar28 + 1);
  psVar1[1] = sVar13;
  *psVar1 = sVar11;
  puVar8 = PTR_DAT_047d1a08;
  local_70[0] = 0x30;
  plVar20 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
  if (*(code **)(puVar8 + 0x10) != (code *)0x0) {
    (**(code **)(puVar8 + 0x10))(plVar20,"AddStalenessPathRequestsToManagerTask");
  }
  plVar45 = plVar20 + 2;
  *plVar45 = 1;
  *plVar20 = (long)&PTR_LAB_0464e7a0;
  plVar20[1] = 0xffffffff;
  plVar20[4] = (long)&PTR_LAB_0464e7e0;
  plVar20[5] = param_2;
  if (*(long *)(param_2 + 8) != 0) {
    plVar2 = (long *)(param_2 + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = *plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  sVar11 = FUN_0323f360(param_1,plVar20,0x40);
  iVar24 = *(int *)(param_1 + 0x330);
  lVar28 = (long)iVar24;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar24) {
    FUN_02e7f7cc(lVar32,PTR_PTR_047d1a50,lVar28 + 1);
    iVar24 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar24 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar28 + 1);
  *psVar1 = sVar12;
  psVar1[1] = sVar11;
  iVar24 = *(int *)(param_1 + 0x330);
  lVar28 = (long)iVar24;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar24) {
    FUN_02e7f7cc(lVar32,PTR_PTR_047d1a50,lVar28 + 1);
    iVar24 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar24 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar28 + 1);
  psVar1[1] = sVar11;
  *psVar1 = sVar13;
  iVar24 = *(int *)(param_1 + 0x330);
  lVar28 = (long)iVar24;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar24) {
    FUN_02e7f7cc(lVar32,PTR_PTR_047d1a50,lVar28 + 1);
    iVar24 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar24 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar28 + 1);
  *psVar1 = sVar11;
  psVar1[1] = sVar9;
  if (plVar20[1] != 0) {
    do {
      lVar32 = *plVar45;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar45,0x10);
      if (bVar7) {
        *plVar45 = lVar32 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar32 + -1 == 0) {
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
  }
  if (plVar19[1] != 0) {
    do {
      lVar32 = *plVar40;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar7) {
        *plVar40 = lVar32 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar32 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  if (plVar18[1] != 0) {
    do {
      lVar32 = *plVar43;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar43,0x10);
      if (bVar7) {
        *plVar43 = lVar32 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar32 + -1 == 0) {
      (**(code **)(*plVar18 + 0x18))();
    }
  }
  if (plVar17[1] != 0) {
    do {
      lVar32 = *plVar44;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar44,0x10);
      if (bVar7) {
        *plVar44 = lVar32 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar32 + -1 == 0) {
      (**(code **)(*plVar17 + 0x18))();
    }
  }
  if (plVar16[1] != 0) {
    do {
      lVar32 = *plVar41;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar7) {
        *plVar41 = lVar32 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar32 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  if (plVar39[1] != 0) {
    do {
      lVar32 = *plVar15;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *plVar15 = lVar32 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar32 + -1 == 0) {
      (**(code **)(*plVar39 + 0x18))(plVar39);
    }
  }
  lVar32 = local_80;
  uVar29 = (ulong)local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar32) && (local_88 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_88,uVar29 << 1);
  }
  if (local_78 != (long *)0x0) {
    lVar32 = *local_78;
    if (((*(byte *)(lVar32 + 0x38) & 1) != 0) && (local_78[6] != 0)) {
      puVar31 = (undefined8 *)local_78[2];
      uVar29 = (long)puVar31 + 0x17U & 0xfffffffffffffff8;
      if ((uVar29 <= (ulong)local_78[3]) && (local_78[2] = uVar29, puVar31 != (undefined8 *)0x0)) {
        *puVar31 = &DAT_03c4e575;
        puVar31[1] = *(undefined8 *)(local_78[6] + 8);
      }
    }
    puVar31 = (undefined8 *)local_78[2];
    uVar29 = (long)puVar31 + 0x17U & 0xfffffffffffffff8;
    if ((uVar29 <= (ulong)local_78[3]) && (local_78[2] = uVar29, puVar31 != (undefined8 *)0x0)) {
      *puVar31 = &DAT_03c2d363;
      uVar14 = nn::os::GetSystemTick();
      puVar31[1] = uVar14;
    }
    if (*(code **)(lVar32 + 0x20) != (code *)0x0) {
      (**(code **)(lVar32 + 0x20))(*(undefined8 *)(lVar32 + 0x28));
    }
  }
  return (long)iVar23 & 0xffff;
}


