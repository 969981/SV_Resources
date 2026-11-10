/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a82a90; name: FUN_00a82a90
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00a82a90(long param_1)

{
  int *piVar1;
  short *psVar2;
  undefined1 uVar3;
  short sVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  short sVar16;
  uint uVar17;
  int iVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  code *pcVar26;
  long lVar27;
  undefined4 uVar28;
  long *plVar29;
  long *local_5e0 [3];
  undefined1 auStack_5c5 [261];
  undefined8 *local_4c0;
  undefined8 uStack_4b8;
  char local_4b0 [4];
  char local_4ac;
  int local_4a8;
  int local_4a4;
  undefined8 *local_4a0;
  undefined8 uStack_498;
  int local_490;
  uint local_48c;
  int local_488;
  undefined1 local_484;
  undefined1 auStack_483 [256];
  undefined2 local_383;
  undefined1 local_381;
  undefined1 *local_380;
  code *local_378;
  undefined1 *local_370;
  undefined1 *local_368;
  long local_360 [12];
  undefined8 local_300;
  undefined4 local_2f8;
  undefined1 local_2f4;
  undefined1 auStack_2f3 [259];
  undefined1 *local_1f0;
  code *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  long local_1d0 [12];
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  long local_150 [12];
  undefined8 local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long alStack_d0 [14];
  
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 0:
    FUN_01888a50(*(undefined8 *)(param_1 + 0x30),0);
    FUN_014e2ae0(*(undefined8 *)(param_1 + 0x30));
    FUN_0129e8c0(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x150));
    FUN_01967bd8(*(undefined8 *)(param_1 + 0x30),0);
    uVar28 = 1;
    goto LAB_00a836a4;
  case 1:
    uVar17 = FUN_01defefc(param_1);
    FUN_015d82d8(*(undefined8 *)(param_1 + 0x38),4,uVar17 & 1);
    lVar25 = FUN_0119579c(*(undefined8 *)(param_1 + 0x30));
    FUN_015d82d8(*(undefined8 *)(param_1 + 0x38),0xc,lVar25 != 0);
    lVar25 = *(long *)(*(long *)(param_1 + 0x38) + 0x80);
    if ((lVar25 != 0) && (*(short *)(lVar25 + 0x1a) != 0)) {
      lVar25 = *(long *)(*(long *)(param_1 + 0x38) + 0x80);
      cVar5 = DAT_00000381;
      if ((lVar25 != 0) && (*(short *)(lVar25 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar25 + 0x1a);
        sVar16 = *(short *)(lVar25 + 0x1a);
LAB_00a835cc:
        sVar4 = *psVar2;
        if (sVar4 == sVar16) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00a835f0;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00a835f0:
          bVar7 = false;
        }
        cVar5 = DAT_00000381;
        if (!bVar7) goto code_r0x00a835f8;
        lVar25 = *(long *)(lVar25 + 0x10);
        if (lVar25 != 0) {
          cVar5 = *(char *)(lVar25 + 0x359);
          lVar27 = *(long *)(lVar25 + 8);
          psVar2 = (short *)(lVar27 + 0x1a);
          do {
            sVar16 = *psVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar16 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar16 == 1) {
            *(undefined8 *)(lVar27 + 0x10) = 0;
            (**(code **)(*(long *)(lVar25 + -0x28) + 0x50))();
          }
          else if (sVar16 == 0) goto LAB_00a83b9c;
        }
      }
joined_r0x00a83a4c:
      if (cVar5 != '\0') {
        lVar25 = FUN_0119579c(*(undefined8 *)(param_1 + 0x30));
        if (lVar25 == 0) {
          uVar23 = FUN_01df00b8(param_1);
          if ((uVar23 & 1) == 0) {
            uVar23 = FUN_01defbfc(param_1);
            if ((uVar23 & 1) != 0) {
              FUN_01dd0a5c(*(undefined8 *)(param_1 + 0x30));
              return;
            }
            uVar23 = FUN_01defd7c(param_1);
            lVar25 = *(long *)(param_1 + 0x30);
            if ((uVar23 & 1) == 0) goto LAB_00a83784;
            lVar27 = *(long *)(lVar25 + 0x1b8);
            if (lVar27 == 0) {
              return;
            }
            uVar28 = 0x14;
          }
          else {
            FUN_01888a50(*(undefined8 *)(param_1 + 0x30),0);
            lVar25 = *(long *)(param_1 + 0x30);
            lVar27 = *(long *)(lVar25 + 0x1b8);
            if (lVar27 == 0) {
              return;
            }
            uVar28 = 8;
          }
          goto LAB_00a82c94;
        }
        local_1f0 = &LAB_01df29b8;
        local_1e8 = FUN_00a841ac;
        local_1e0 = &LAB_00a841f0;
        local_1d8 = &LAB_00a841fc;
        local_1d0[0] = param_1;
        FUN_01dd5e7c(*(undefined8 *)(param_1 + 0x30),&local_1f0);
        pcVar26 = local_1e8;
        if (local_1e8 != (code *)0x0) {
          local_1d8 = (undefined1 *)0x0;
          local_1e0 = (undefined1 *)0x0;
          local_1e8 = (code *)0x0;
          local_1f0 = (undefined1 *)0x0;
          (*pcVar26)(local_1d0);
        }
        uVar28 = 2;
        goto LAB_00a836a4;
      }
    }
    lVar25 = *(long *)(*(long *)(param_1 + 0x38) + 0x90);
    if ((lVar25 != 0) && (*(short *)(lVar25 + 0x1a) != 0)) {
      lVar25 = *(long *)(*(long *)(param_1 + 0x38) + 0x90);
      cVar5 = DAT_00000381;
      if ((lVar25 != 0) && (*(short *)(lVar25 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar25 + 0x1a);
        sVar16 = *(short *)(lVar25 + 0x1a);
LAB_00a836d8:
        sVar4 = *psVar2;
        if (sVar4 == sVar16) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00a836fc;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00a836fc:
          bVar7 = false;
        }
        cVar5 = DAT_00000381;
        if (!bVar7) goto code_r0x00a83704;
        lVar25 = *(long *)(lVar25 + 0x10);
        if (lVar25 != 0) {
          cVar5 = *(char *)(lVar25 + 0x359);
          lVar27 = *(long *)(lVar25 + 8);
          psVar2 = (short *)(lVar27 + 0x1a);
          do {
            sVar16 = *psVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar16 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar16 == 1) {
            *(undefined8 *)(lVar27 + 0x10) = 0;
            (**(code **)(*(long *)(lVar25 + -0x28) + 0x50))();
          }
          else if (sVar16 == 0) goto LAB_00a83b9c;
        }
      }
joined_r0x00a83a64:
      if (cVar5 != '\0') {
        local_300 = 0xffffffff00000003;
        local_2f8 = 0xffffffff;
        local_2f4 = 1;
        memset(auStack_2f3,0,0x100);
        FUN_01dc01b0(&local_300);
        goto LAB_00a836a0;
      }
    }
    lVar25 = *(long *)(*(long *)(param_1 + 0x38) + 0x100);
    if ((lVar25 != 0) && (*(short *)(lVar25 + 0x1a) != 0)) {
      lVar25 = *(long *)(*(long *)(param_1 + 0x38) + 0x100);
      cVar5 = DAT_00000381;
      if ((lVar25 != 0) && (*(short *)(lVar25 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar25 + 0x1a);
        sVar16 = *(short *)(lVar25 + 0x1a);
LAB_00a837b8:
        sVar4 = *psVar2;
        if (sVar4 == sVar16) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00a837dc;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00a837dc:
          bVar7 = false;
        }
        cVar5 = DAT_00000381;
        if (!bVar7) goto code_r0x00a837e4;
        lVar25 = *(long *)(lVar25 + 0x10);
        if (lVar25 != 0) {
          cVar5 = *(char *)(lVar25 + 0x359);
          lVar27 = *(long *)(lVar25 + 8);
          psVar2 = (short *)(lVar27 + 0x1a);
          do {
            sVar16 = *psVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar16 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar16 == 1) {
            *(undefined8 *)(lVar27 + 0x10) = 0;
            (**(code **)(*(long *)(lVar25 + -0x28) + 0x50))();
          }
          else if (sVar16 == 0) goto LAB_00a83b9c;
        }
      }
joined_r0x00a83a7c:
      if (cVar5 != '\0') {
        FUN_01dd58b8(*(undefined8 *)(param_1 + 0x30));
        lVar25 = *(long *)(param_1 + 0x30);
LAB_00a83784:
        FUN_0129e8c0(*(undefined8 *)(lVar25 + 0x150));
        return;
      }
    }
    if (*(char *)(*(long *)(param_1 + 0x30) + 0x2d0) != '\0') {
      lVar25 = *(long *)(*(long *)(param_1 + 0x38) + 0x90);
      if ((lVar25 != 0) && (*(short *)(lVar25 + 0x1a) != 0)) {
        lVar25 = *(long *)(*(long *)(param_1 + 0x38) + 0x90);
        cVar5 = DAT_00000381;
        if ((lVar25 != 0) && (*(short *)(lVar25 + 0x1a) != 0)) {
          psVar2 = (short *)(lVar25 + 0x1a);
          sVar16 = *(short *)(lVar25 + 0x1a);
          do {
            sVar4 = *psVar2;
            if (sVar4 == sVar16) {
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar7) {
                *psVar2 = sVar16 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 != '\0') goto LAB_00a839d4;
              bVar7 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_00a839d4:
              bVar7 = false;
            }
            cVar5 = DAT_00000381;
            if (bVar7) {
              lVar25 = *(long *)(lVar25 + 0x10);
              if (lVar25 != 0) {
                cVar5 = *(char *)(lVar25 + 0x359);
                lVar27 = *(long *)(lVar25 + 8);
                psVar2 = (short *)(lVar27 + 0x1a);
                do {
                  sVar16 = *psVar2;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                  if (bVar7) {
                    *psVar2 = sVar16 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (sVar16 == 1) {
                  *(undefined8 *)(lVar27 + 0x10) = 0;
                  (**(code **)(*(long *)(lVar25 + -0x28) + 0x50))();
                }
                else if (sVar16 == 0) {
LAB_00a83b9c:
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                             ,0x60,"Reference counter underflows.");
                }
              }
              break;
            }
            sVar16 = sVar4;
          } while (sVar4 != 0);
        }
        if (cVar5 != '\0') {
          local_380 = &LAB_00a84208;
          local_378 = FUN_00a84214;
          local_370 = &LAB_00a84218;
          local_368 = &LAB_00a84224;
          local_360[0] = param_1;
          FUN_00a6a24c(*(undefined8 *)(param_1 + 0x30),&local_380,0x1f,1,0,1);
          pcVar26 = local_378;
          if (local_378 != (code *)0x0) {
            local_368 = (undefined1 *)0x0;
            local_370 = (undefined1 *)0x0;
            local_378 = (code *)0x0;
            local_380 = (undefined1 *)0x0;
            (*pcVar26)(local_360);
          }
          *(undefined4 *)(param_1 + 0x40) = 9;
        }
      }
    }
    FUN_012977e0(param_1);
    break;
  case 3:
    memset(local_5e0,0,0x100);
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar18 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar18 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    lVar25 = *(long *)PTR_DAT_047d4ca0;
    *(long *)PTR_DAT_047d4ca8 = lVar25;
    puVar10 = PTR_DAT_047d4890;
    puVar9 = PTR_DAT_047d4888;
    plVar29 = *(long **)(lVar25 + 0x1c8);
    for (plVar20 = *(long **)(lVar25 + 0x1c0); plVar20 != plVar29; plVar20 = plVar20 + 1) {
      lVar25 = *plVar20;
      plVar19 = (long *)(*(code *)**(undefined8 **)(lVar25 + 0x28))((undefined8 *)(lVar25 + 0x28));
      if (((*puVar9 & 1) == 0) && (iVar18 = __cxa_guard_acquire(puVar9), iVar18 != 0)) {
        uVar22 = FUN_01b3fb0c();
        *(undefined8 *)puVar10 = uVar22;
        __cxa_guard_release(puVar9);
      }
      for (; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
        if (plVar19 == (long *)puVar10) goto LAB_00a82e68;
      }
    }
    lVar25 = 0;
LAB_00a82e68:
    lVar27 = *(long *)(param_1 + 0x30);
    FUN_01195974(lVar27);
    iVar18 = *(int *)(lVar27 + 0x108);
    if (iVar18 == 0) {
      uVar17 = (uint)*(byte *)(lVar25 + 0x570);
    }
    else if ((iVar18 == 1) || (iVar18 == 2)) {
      uVar17 = 0xffffffff;
    }
    else {
      uVar17 = 0xffffffff;
      iVar18 = 3;
    }
    lVar25 = *(long *)(param_1 + 0x30);
    uVar22 = FUN_01195974(lVar25);
    iVar8 = *(int *)(lVar25 + 0x108);
    local_488 = (int)((ulong)uVar22 >> 0x20);
    if (iVar8 == 0) {
      local_488 = (int)uVar22 + local_488 * 6;
    }
    else if ((iVar8 != 1) && (iVar8 != 2)) {
      local_488 = 1;
    }
    if ((*(char *)(*(long *)(param_1 + 0x30) + 0x2d2) != '\0') &&
       (*(char *)(param_1 + 0x50) != '\0')) {
      memcpy(local_5e0,(void *)(param_1 + 0x51),0x100);
    }
    local_484 = 0;
    local_490 = iVar18;
    local_48c = uVar17;
    memcpy(auStack_483,local_5e0,0x100);
    local_383 = (undefined2)local_f0;
    local_381 = local_f0._2_1_;
    FUN_01dc01b0(&local_490);
    if (*(char *)(*(long *)(param_1 + 0x30) + 0x2d0) == '\0') {
LAB_00a836a0:
      uVar28 = 10;
    }
    else {
      *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x2d1) = 1;
      uVar28 = 4;
    }
LAB_00a836a4:
    *(undefined4 *)(param_1 + 0x40) = uVar28;
    break;
  case 4:
    if (*(char *)(*(long *)(param_1 + 0x30) + 0x2d1) != '\0') {
      return;
    }
    goto LAB_00a833c8;
  case 5:
    local_5e0[0] = *(long **)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    FUN_01d1e3b8(local_5e0);
    if (*(char *)(param_1 + 0x50) != '\0') {
      *(undefined1 *)(param_1 + 0x50) = 0;
    }
    plVar20 = (long *)FUN_0167513c(local_5e0,*(undefined8 *)(param_1 + 8));
    if (plVar20 != (long *)0x0) {
      plVar29 = plVar20 + 5;
      do {
        lVar25 = *plVar29;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar7) {
          *(int *)plVar29 = (int)lVar25 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar25 == -1) goto LAB_00a831b8;
    }
    lVar25 = *(long *)(param_1 + 0x30);
    FUN_01195974(lVar25);
    puVar9 = PTR_DAT_047d4c98;
    iVar18 = *(int *)(lVar25 + 0x108);
    local_f0 = plVar20;
    if (iVar18 == 0) {
      if (((*PTR_DAT_047d4c98 & 1) == 0) &&
         (iVar18 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar18 != 0)) {
        FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4c98);
      }
      puVar13 = PTR_DAT_047d4ca8;
      puVar12 = PTR_DAT_047d4ca0;
      lVar25 = *(long *)PTR_DAT_047d4ca0;
      *(long *)PTR_DAT_047d4ca8 = lVar25;
      puVar11 = PTR_DAT_047d4890;
      puVar10 = PTR_DAT_047d4888;
      plVar19 = *(long **)(lVar25 + 0x1c8);
      for (plVar29 = *(long **)(lVar25 + 0x1c0); plVar29 != plVar19; plVar29 = plVar29 + 1) {
        lVar25 = *plVar29;
        plVar21 = (long *)(*(code *)**(undefined8 **)(lVar25 + 0x28))((undefined8 *)(lVar25 + 0x28))
        ;
        if (((*puVar10 & 1) == 0) && (iVar18 = __cxa_guard_acquire(puVar10), iVar18 != 0)) {
          uVar22 = FUN_01b3fb0c();
          *(undefined8 *)puVar11 = uVar22;
          __cxa_guard_release(puVar10);
        }
        for (; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
          if (plVar21 == (long *)puVar11) goto LAB_00a82f24;
        }
      }
      lVar25 = 0;
LAB_00a82f24:
      if (((*puVar9 & 1) == 0) && (iVar18 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar18 != 0)) {
        FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4c98);
      }
      lVar27 = *(long *)puVar12;
      *(long *)puVar13 = lVar27;
      puVar10 = PTR_DAT_047d8f00;
      puVar9 = PTR_DAT_047d8ef8;
      plVar19 = *(long **)(lVar27 + 0x1c8);
      for (plVar29 = *(long **)(lVar27 + 0x1c0); plVar29 != plVar19; plVar29 = plVar29 + 1) {
        lVar27 = *plVar29;
        plVar21 = (long *)(*(code *)**(undefined8 **)(lVar27 + 0x28))((undefined8 *)(lVar27 + 0x28))
        ;
        if (((*puVar9 & 1) == 0) && (iVar18 = __cxa_guard_acquire(puVar9), iVar18 != 0)) {
          uVar22 = FUN_01b3fb0c();
          *(undefined8 *)puVar10 = uVar22;
          __cxa_guard_release(puVar9);
        }
        for (; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
          if (plVar21 == (long *)puVar10) goto LAB_00a82fc4;
        }
      }
      lVar27 = 0;
LAB_00a82fc4:
      uVar3 = *(undefined1 *)(lVar25 + 0x570);
      lVar25 = *(long *)(param_1 + 0x30);
      uVar23 = FUN_01195974(lVar25);
      iVar18 = *(int *)(lVar25 + 0x108);
      uVar24 = uVar23 >> 0x20;
      if (iVar18 == 0) {
        uVar24 = (ulong)(uint)((int)uVar23 + (int)(uVar23 >> 0x20) * 6);
      }
      else if ((iVar18 != 1) && (iVar18 != 2)) {
        uVar24 = 1;
      }
      FUN_00eebacc(local_5e0,lVar27,uVar3,uVar24);
      plVar29 = local_5e0[0];
      if (local_5e0[0] == (long *)0x0) goto LAB_00a832fc;
      if (((*(byte *)(*(long *)(local_5e0[0][0xe] + 0x10) + 4) >> 2 & 1) == 0) &&
         (sVar16 = FUN_00cf44f4(), sVar16 == 0)) {
        local_f0 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar20 + 0x28))(plVar20,plVar29);
        plVar20 = (long *)0x0;
      }
      plVar19 = plVar29 + 5;
      do {
        iVar18 = (int)*plVar19;
        iVar8 = iVar18 + -1;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar7) {
          *(int *)plVar19 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
joined_r0x00a835a0:
      if (iVar8 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
      }
      else if (iVar18 == 0) goto LAB_00a833fc;
    }
    else {
      if (iVar18 == 1) {
        if (((*PTR_DAT_047d4568 & 1) == 0) &&
           (iVar18 = __cxa_guard_acquire(PTR_DAT_047d4568), iVar18 != 0)) {
          FUN_00100190(&LAB_02ace3a0,PTR_DAT_047d4570,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4568);
        }
        lVar25 = *(long *)PTR_DAT_047d4570;
        *(long *)PTR_DAT_047d4578 = lVar25;
        plVar29 = *(long **)(lVar25 + 0x28);
        if (plVar29 != (long *)0x0) {
          plVar19 = plVar29 + 5;
          do {
            lVar25 = *plVar19;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar7) {
              *(int *)plVar19 = (int)lVar25 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((int)lVar25 == -1) {
LAB_00a831b8:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
          lVar25 = *(long *)(param_1 + 0x30);
          uVar23 = FUN_01195974(lVar25);
          iVar18 = *(int *)(lVar25 + 0x108);
          uVar24 = uVar23 >> 0x20;
          if (iVar18 == 0) {
            uVar24 = (ulong)(uint)((int)uVar23 + (int)(uVar23 >> 0x20) * 6);
          }
          else if ((iVar18 != 1) && (iVar18 != 2)) {
            uVar24 = 1;
          }
          lVar25 = (**(code **)(*plVar29 + 0x60))(plVar29,uVar24);
          if ((lVar25 == 0) ||
             (((*(byte *)(*(long *)(*(long *)(lVar25 + 0x70) + 0x10) + 4) >> 2 & 1) == 0 &&
              (sVar16 = FUN_00cf44f4(), sVar16 == 0)))) {
            local_f0 = (long *)0x0;
          }
          else {
            (**(code **)(*plVar20 + 0x28))(plVar20,lVar25);
            plVar20 = (long *)0x0;
          }
          do {
            iVar18 = (int)*plVar19;
            iVar8 = iVar18 + -1;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar7) {
              *(int *)plVar19 = iVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          goto joined_r0x00a835a0;
        }
      }
LAB_00a832fc:
      local_f0 = (long *)0x0;
    }
    if (plVar20 != (long *)0x0) {
      plVar29 = plVar20 + 5;
      do {
        lVar25 = *plVar29;
        iVar18 = (int)lVar25 + -1;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar7) {
          *(int *)plVar29 = iVar18;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar18 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
      else if ((int)lVar25 == 0) goto LAB_00a833fc;
    }
    if (local_f0 != (long *)0x0) {
      FUN_01d2016c(&local_170);
      local_5e0[0] = *(long **)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = 0;
      FUN_01d1e3b8(local_5e0);
      puVar15 = local_170;
      local_170 = (undefined1 *)0x0;
      *(undefined1 **)(param_1 + 0x48) = puVar15;
      FUN_01d1e3b8(&local_170);
      uVar23 = FUN_01e5f804(*(undefined8 *)(param_1 + 0x48),&local_f0);
      if ((uVar23 & 1) == 0) {
        uVar28 = 0;
      }
      else {
        local_4a0 = (undefined8 *)0x0;
        uStack_498 = 0;
        FUN_01084328(&local_4a0,*(long *)(param_1 + 0x30) + 0x130);
        local_5e0[0] = (long *)CONCAT71(local_5e0[0]._1_7_,1);
        FUN_01de0af4(&local_4a0,s_F52FFAAAD818F1846_04542b08,local_5e0);
        puVar14 = local_4a0;
        if (local_4a0 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_4a0 + 3);
          do {
            sVar16 = *psVar2;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar16 == 1) {
            piVar1 = (int *)((long)local_4a0 + 0x1c);
            do {
              iVar18 = *piVar1;
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar18 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar18 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar18 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar25 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar25;
              local_5e0[0] = (long *)*puVar14;
              FUN_00c44438(lVar25 + 0x8040,local_5e0);
            }
          }
          else if (sVar16 == 0) {
LAB_00a83b50:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        uVar28 = 6;
      }
      *(undefined4 *)(param_1 + 0x40) = uVar28;
      if (local_f0 == (long *)0x0) {
        return;
      }
      plVar20 = local_f0 + 5;
      do {
        lVar25 = *plVar20;
        iVar18 = (int)lVar25 + -1;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar7) {
          *(int *)plVar20 = iVar18;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar18 == 0) {
        (**(code **)(*local_f0 + 0x10))();
        return;
      }
      if ((int)lVar25 != 0) {
        return;
      }
LAB_00a833fc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
LAB_00a833c8:
    *(undefined4 *)(param_1 + 0x40) = 0;
    break;
  case 6:
    FUN_00ada310(local_4b0,*(undefined8 *)(param_1 + 0x48));
    if (local_4b0[0] == '\0') {
      return;
    }
    local_4c0 = (undefined8 *)0x0;
    uStack_4b8 = 0;
    FUN_01084328(&local_4c0,*(long *)(param_1 + 0x30) + 0x130);
    local_5e0[0] = (long *)((ulong)local_5e0[0] & 0xffffffffffffff00);
    FUN_01de0af4(&local_4c0,s_F52FFAAAD818F1846_04542b08,local_5e0);
    puVar14 = local_4c0;
    if (local_4c0 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_4c0 + 3);
      do {
        sVar16 = *psVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar16 == 1) {
        piVar1 = (int *)((long)local_4c0 + 0x1c);
        do {
          iVar18 = *piVar1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar18 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar18 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar18 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar25 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar25;
          local_5e0[0] = (long *)*puVar14;
          FUN_00c44438(lVar25 + 0x8040,local_5e0);
        }
      }
      else if (sVar16 == 0) goto LAB_00a83b50;
    }
    if ((((local_4ac == '\0') || (local_4a8 != 0)) || (local_4a4 == 0)) ||
       ((99 < local_4a4 - 200U ||
        (lVar25 = *(long *)(param_1 + 0x48), *(char *)(lVar25 + 0x88) == '\0')))) {
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    else {
      cVar5 = *(char *)(lVar25 + 0x8c);
      memcpy(local_5e0,(void *)(lVar25 + 0x8d),0x11b);
      if (cVar5 == '\0') {
        cVar5 = *(char *)(param_1 + 0x50);
        memcpy((void *)(param_1 + 0x51),auStack_5c5,0x100);
        if (cVar5 == '\0') {
          *(undefined1 *)(param_1 + 0x50) = 1;
        }
        *(undefined4 *)(param_1 + 0x40) = 3;
      }
      else {
        local_f0 = (long *)&LAB_00a84230;
        local_e8 = FUN_00a8423c;
        local_e0 = &LAB_00a84240;
        local_d8 = &LAB_00a8424c;
        local_170 = &LAB_00a84230;
        local_168 = FUN_00a8423c;
        local_160 = &LAB_00a84240;
        local_158 = &LAB_00a8424c;
        local_150[0] = param_1;
        alStack_d0[0] = param_1;
        FUN_01dda320(*(undefined8 *)(param_1 + 0x30),0x34,&local_170,0,0,1,0);
        pcVar26 = local_168;
        if (local_168 == (code *)0x0) {
          *(undefined4 *)(param_1 + 0x40) = 8;
          pcVar26 = FUN_00a8423c;
        }
        else {
          local_158 = (undefined1 *)0x0;
          local_160 = (undefined1 *)0x0;
          local_168 = (code *)0x0;
          local_170 = (undefined1 *)0x0;
          (*pcVar26)(local_150);
          *(undefined4 *)(param_1 + 0x40) = 8;
          pcVar26 = local_e8;
          if (local_e8 == (code *)0x0) {
            return;
          }
        }
        local_e0 = (undefined1 *)0x0;
        local_d8 = (undefined1 *)0x0;
        local_f0 = (long *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar26)(alStack_d0);
      }
    }
    break;
  case 10:
    lVar25 = *(long *)(param_1 + 0x30);
    lVar27 = *(long *)(lVar25 + 0x1b8);
    if (lVar27 == 0) {
      return;
    }
    uVar28 = 1;
LAB_00a82c94:
    *(undefined4 *)(lVar25 + 0x170) = uVar28;
    *(undefined4 *)(lVar27 + 0x30) = uVar28;
  }
  return;
code_r0x00a835f8:
  sVar16 = sVar4;
  if (sVar4 == 0) goto joined_r0x00a83a4c;
  goto LAB_00a835cc;
code_r0x00a83704:
  sVar16 = sVar4;
  if (sVar4 == 0) goto joined_r0x00a83a64;
  goto LAB_00a836d8;
code_r0x00a837e4:
  sVar16 = sVar4;
  if (sVar4 == 0) goto joined_r0x00a83a7c;
  goto LAB_00a837b8;
}


