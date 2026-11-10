/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ac973c; name: FUN_01ac973c
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01ac973c(long param_1,undefined4 param_2,undefined4 *param_3,ulong param_4,
                 undefined8 *param_5)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  short sVar19;
  long *plVar20;
  undefined1 uVar21;
  ushort uVar22;
  long *plVar23;
  long *plVar24;
  undefined8 *puVar25;
  long lVar26;
  long *plVar27;
  undefined4 local_44c;
  undefined4 local_43c;
  long *local_430;
  ulong local_428;
  undefined8 local_420;
  code *local_418;
  code *local_410;
  undefined8 local_408;
  undefined1 auStack_400 [96];
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined1 *local_388;
  undefined1 *local_380;
  undefined8 local_378;
  long *local_370;
  undefined1 *local_368;
  undefined1 *local_360;
  undefined8 local_358;
  long *local_350;
  undefined4 local_348;
  undefined8 local_340;
  code *local_338;
  code *local_330;
  undefined8 local_328;
  undefined1 auStack_320 [96];
  undefined4 local_2c0;
  long *local_2b8;
  undefined8 uStack_2b0;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined8 local_298;
  long *local_290;
  undefined8 local_280;
  undefined8 local_278;
  undefined2 local_270;
  undefined4 local_260;
  undefined2 local_25c;
  long *local_250;
  code *local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined1 auStack_230 [96];
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  undefined8 local_1a8;
  long *local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined8 local_188;
  long *local_180;
  undefined4 local_178;
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 auStack_150 [96];
  undefined4 local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined4 local_90;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined8 local_80;
  char local_78;
  undefined8 local_70 [2];
  
  plVar23 = *(long **)(param_1 + 0x58);
  plVar24 = *(long **)(param_1 + 8);
  local_410 = (code *)0x0;
  local_408 = 0;
  local_420 = 0;
  local_418 = (code *)0x0;
  if ((code *)param_5[2] != (code *)0x0) {
    (*(code *)param_5[2])(param_5 + 4,auStack_400);
    local_408 = param_5[3];
    local_418 = (code *)param_5[1];
    local_420 = *param_5;
    local_410 = (code *)param_5[2];
  }
  uVar12 = (**(code **)(*plVar23 + 0x18))(plVar23);
  if ((uVar12 & 1) != 0) {
    local_350 = (long *)0x0;
    local_3a0 = 0;
    local_398 = 0x10000270f;
    local_390 = 1;
    local_388 = &DAT_cbf29ce484222645;
    local_380 = &DAT_03c886bc;
    local_378 = 0;
    local_348 = 0;
    local_2c0 = 0;
    local_270 = 0x101;
    local_370 = (long *)0x0;
    local_368 = &DAT_cbf29ce484222645;
    local_360 = &DAT_03c886bc;
    local_358 = 0;
    local_340 = 0;
    local_338 = (code *)0x0;
    local_330 = (code *)0x0;
    local_328 = 0;
    local_2b8 = (long *)0x0;
    uStack_2b0 = 0;
    local_2a8 = &DAT_cbf29ce484222645;
    local_2a0 = &DAT_03c886bc;
    local_298 = 0;
    local_290 = (long *)0x0;
    local_280 = 0;
    local_278 = 0;
    local_260 = 0;
    local_25c = 0x101;
    if (((*PTR_DAT_047daeb0 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_047daeb0), iVar11 != 0)) {
      FUN_00100190(&LAB_02a1c3ec,PTR_DAT_047daeb8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047daeb0);
    }
    lVar17 = *(long *)PTR_DAT_047daeb8;
    *(long *)PTR_DAT_047daec0 = lVar17;
    lVar17 = *(long *)(lVar17 + 0x50);
    if ((lVar17 != 0) && (*(short *)(lVar17 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar17 + 0x1a);
      sVar19 = *(short *)(lVar17 + 0x1a);
LAB_01ac9974:
      sVar6 = *psVar1;
      if (sVar6 == sVar19) {
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar19 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_01ac9998;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01ac9998:
        bVar10 = false;
      }
      if (!bVar10) goto code_r0x01ac99a0;
      lVar17 = *(long *)(lVar17 + 0x10);
      if (lVar17 != 0) {
        if (*(char *)(lVar17 + 0xdc) == '\0') {
          plVar20 = (long *)0x0;
          uVar21 = 0;
          local_430 = (long *)0x0;
          uVar22 = 0;
          local_44c = 0;
          bVar10 = false;
          local_43c = 0;
        }
        else {
          local_1d0 = (long *)CONCAT44(local_1d0._4_4_,param_2);
          puVar13 = (undefined4 *)
                    FUN_01557ce4((long *)(lVar17 + -0x28) + (long)(int)plVar23[0x2e] * 7 + 0xb,
                                 &local_1d0);
          local_43c = *puVar13;
          local_44c = puVar13[1];
          local_430 = *(long **)(puVar13 + 8);
          if (local_430 != (long *)0x0) {
            (**(code **)(*local_430 + 0x18))();
          }
          plVar20 = *(long **)(puVar13 + 0x10);
          if (plVar20 != (long *)0x0) {
            (**(code **)(*plVar20 + 0x18))(plVar20);
          }
          bVar10 = true;
          uVar21 = (undefined1)(*(ushort *)(puVar13 + 0x14) >> 8);
          uVar22 = *(ushort *)(puVar13 + 0x14) & 1;
        }
        lVar18 = *(long *)(lVar17 + 8);
        psVar1 = (short *)(lVar18 + 0x1a);
        do {
          sVar19 = *psVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar19 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar19 == 1) {
          *(undefined8 *)(lVar18 + 0x10) = 0;
          (**(code **)(*(long *)(lVar17 + -0x28) + 0x50))();
          if (bVar10) goto LAB_01ac9a54;
LAB_01aca028:
          bVar8 = false;
        }
        else {
          if (sVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          bVar8 = false;
          if (bVar10) {
LAB_01ac9a54:
            local_80 = 0x100000001;
            local_78 = '\x01';
            uVar12 = FUN_01aca6a8(plVar23,local_43c,&local_80);
            if ((uVar12 & 1) == 0) goto LAB_01aca028;
            local_1c4 = (undefined4)local_80;
            local_1c0 = local_80._4_4_;
            local_240 = 0;
            local_238 = 0;
            local_8c = uVar22 != 0 && local_78 != '\0';
            local_250 = (long *)0x0;
            local_248 = (code *)0x0;
            local_1d0 = (long *)CONCAT44(local_43c,param_2);
            local_1c8 = 0;
            local_1bc = local_44c;
            local_1b8 = &DAT_cbf29ce484222645;
            local_1b0 = &DAT_03c886bc;
            local_1a8 = 0;
            local_1a0 = (long *)0x0;
            local_198 = &DAT_cbf29ce484222645;
            local_190 = &DAT_03c886bc;
            local_188 = 0;
            local_180 = (long *)0x0;
            local_178 = 0;
            local_170 = 0;
            local_168 = (code *)0x0;
            local_160 = 0;
            local_158 = 0;
            local_f0 = 0;
            local_e8 = (undefined8 *)0x0;
            local_e0 = 0;
            local_d8 = &DAT_cbf29ce484222645;
            local_d0 = &DAT_03c886bc;
            local_c8 = 0;
            local_c0 = (long *)0x0;
            local_b0 = 0;
            local_a8 = 0;
            local_a0 = 0x101;
            local_90 = 0;
            local_8b = uVar21;
            FUN_01aca4f8(&local_3a0,&local_1d0);
            if (local_c0 != (long *)0x0) {
              (**(code **)(*local_c0 + 0x20))();
            }
            puVar14 = local_e8;
            if (local_e8 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_e8 + 3);
              do {
                sVar19 = *psVar1;
                cVar7 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar10) {
                  *psVar1 = sVar19 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar19 == 1) {
                piVar2 = (int *)((long)local_e8 + 0x1c);
                do {
                  iVar11 = *piVar2;
                  cVar7 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar10) {
                    *piVar2 = -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar11 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar17 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar17;
                  local_70[0] = *puVar14;
                  FUN_00c44438(lVar17 + 0x8040,local_70);
                }
              }
              else if (sVar19 == 0) goto LAB_01ac9900;
            }
            pcVar9 = local_168;
            if (local_168 != (code *)0x0) {
              local_160 = 0;
              local_158 = 0;
              local_170 = 0;
              local_168 = (code *)0x0;
              (*pcVar9)(auStack_150);
            }
            if (local_180 != (long *)0x0) {
              (**(code **)(*local_180 + 0x20))();
            }
            if (local_1a0 != (long *)0x0) {
              (**(code **)(*local_1a0 + 0x20))();
            }
            pcVar9 = local_248;
            if (local_248 != (code *)0x0) {
              local_238 = 0;
              local_240 = 0;
              local_248 = (code *)0x0;
              local_250 = (long *)0x0;
              (*pcVar9)(auStack_230);
            }
            bVar8 = true;
          }
        }
        if (plVar20 != (long *)0x0) {
          (**(code **)(*plVar20 + 0x20))();
        }
        if (local_430 != (long *)0x0) {
          (**(code **)(*local_430 + 0x20))(local_430);
        }
        if (bVar8) {
          if (param_3 == (undefined4 *)0x0) {
            if ((param_4 & 1) != 0) {
              local_260 = 2;
            }
          }
          else {
            local_2c0 = *param_3;
            FUN_00d0a71c(&local_2b8,param_3 + 2);
            local_2a8 = *(undefined1 **)(param_3 + 6);
            local_2a0 = *(undefined1 **)(param_3 + 8);
            local_298 = *(undefined8 *)(param_3 + 10);
            plVar20 = *(long **)(param_3 + 0xc);
            if (plVar20 != (long *)0x0) {
              (**(code **)(*plVar20 + 0x18))(plVar20);
            }
            if (local_290 != (long *)0x0) {
              lVar17 = *local_290;
              local_290 = plVar20;
              (**(code **)(lVar17 + 0x20))();
              plVar20 = local_290;
            }
            local_290 = plVar20;
            local_270 = *(undefined2 *)(param_3 + 0x14);
            local_278 = *(undefined8 *)(param_3 + 0x12);
            local_280 = *(undefined8 *)(param_3 + 0x10);
            local_260 = 1;
          }
          pcVar9 = local_338;
          if (local_338 != (code *)0x0) {
            local_330 = (code *)0x0;
            local_328 = 0;
            local_340 = 0;
            local_338 = (code *)0x0;
            (*pcVar9)(auStack_320);
          }
          if (local_410 != (code *)0x0) {
            (*local_410)(auStack_400,auStack_320);
            local_330 = local_410;
            local_328 = local_408;
            local_340 = local_420;
            local_338 = local_418;
          }
          puVar14 = (undefined8 *)(**(code **)(*plVar24 + 0x10))(plVar24,0x170,0x10);
          if (puVar14 == (undefined8 *)0x0) {
            plVar24 = (long *)0x0;
            lVar18 = 0;
            lVar17 = 0;
          }
          else {
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar15 = nn::os::GetTlsValue(DAT_04865a30);
            if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar24;
            *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
            *puVar14 = &PTR_LAB_045610d0;
            puVar14[1] = plVar23;
            puVar14[3] = local_398;
            puVar14[4] = local_390;
            puVar14[2] = local_3a0;
            puVar14[5] = local_388;
            puVar14[6] = local_380;
            puVar14[7] = local_378;
            puVar14[8] = local_370;
            if (local_370 != (long *)0x0) {
              (**(code **)(*local_370 + 0x18))();
            }
            puVar14[9] = local_368;
            puVar14[10] = local_360;
            puVar14[0xb] = local_358;
            puVar14[0xc] = local_350;
            if (local_350 != (long *)0x0) {
              (**(code **)(*local_350 + 0x18))();
            }
            puVar14[0xe] = 0;
            *(undefined4 *)(puVar14 + 0xd) = local_348;
            puVar14[0xf] = 0;
            puVar14[0x10] = 0;
            puVar14[0x11] = 0;
            if (local_330 != (code *)0x0) {
              (*local_330)(auStack_320,puVar14 + 0x12);
              puVar14[0x11] = local_328;
              puVar14[0xe] = local_340;
              puVar14[0xf] = local_338;
              puVar14[0x10] = local_330;
            }
            puVar14[0x1f] = 0;
            puVar14[0x20] = 0;
            *(undefined4 *)(puVar14 + 0x1e) = local_2c0;
            FUN_00d0a71c(puVar14 + 0x1f,&local_2b8);
            puVar14[0x21] = local_2a8;
            puVar14[0x22] = local_2a0;
            puVar14[0x23] = local_298;
            puVar14[0x24] = local_290;
            if (local_290 != (long *)0x0) {
              (**(code **)(*local_290 + 0x18))();
            }
            lVar17 = 0x10;
            lVar18 = 0x170;
            *(undefined2 *)(puVar14 + 0x28) = local_270;
            puVar14[0x26] = local_280;
            puVar14[0x27] = local_278;
            *(undefined2 *)((long)puVar14 + 0x154) = local_25c;
            *(undefined4 *)(puVar14 + 0x2a) = local_260;
            puVar14[0x2c] = 0;
            *(undefined1 *)(puVar14 + 0x2d) = 0;
            *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
          }
          puVar25 = (undefined8 *)plVar23[0x73];
          plVar23[0x73] = (long)puVar14;
          if (puVar25 != (undefined8 *)0x0) {
            FUN_00c4e600();
            FUN_00c4e600();
            lVar15 = FUN_00c4e600();
            iVar5 = *(int *)(lVar15 + 0x12c8);
            iVar11 = iVar5 + 1;
            *(int *)(lVar15 + 0x12c8) = iVar11;
            if (*(int *)(lVar15 + 0x12cc) <= iVar5) {
              *(int *)(lVar15 + 0x12cc) = iVar11;
            }
            (**(code **)*puVar25)(puVar25);
            plVar20 = (long *)plVar23[0x74];
            lVar15 = plVar23[0x75];
            lVar26 = plVar23[0x76];
            uVar12 = (**(code **)(*plVar20 + 0xf8))(plVar20);
            if (((uVar12 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
              (**(code **)(*plVar20 + 0x18))(plVar20,puVar25,lVar15,lVar26);
            }
            else {
              FUN_00c48fe8(plVar20,puVar25,lVar15,lVar26);
            }
            lVar15 = FUN_00c4e600();
            iVar11 = *(int *)(lVar15 + 0x12c8) + -1;
            *(int *)(lVar15 + 0x12c8) = iVar11;
            if (iVar11 == 0) {
              plVar20 = (long *)FUN_00c4e600();
              if (plVar20[600] != 0) {
                local_250 = plVar20 + plVar20[600] * 3;
                local_1d0 = plVar20;
                FUN_00c4ea30(&local_1d0,&local_250);
                plVar27 = (long *)*plVar20;
                plVar4 = plVar20;
                if (plVar20[600] != 0) {
                  plVar4 = plVar20 + plVar20[600] * 3;
                }
                if (plVar4 == plVar20) {
                  local_428 = 0;
                  uVar12 = 0;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar27) {
                    (**(code **)(*plVar27 + 0x100))(plVar27,plVar20,plVar20);
                    plVar27 = (long *)*plVar20;
                  }
                  plVar3 = plVar20 + 3;
                  if (plVar4 == plVar3) {
                    local_428 = 0;
                    uVar12 = 1;
                  }
                  else {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    bVar10 = (long *)*plVar3 != plVar27;
                    if (bVar10) {
                      (**(code **)(*plVar27 + 0x100))(plVar27,plVar20,plVar20 + 3);
                      plVar27 = (long *)plVar20[3];
                    }
                    local_428 = (ulong)bVar10;
                    plVar3 = plVar20 + 6;
                    if (plVar4 == plVar3) {
                      uVar12 = 2;
                    }
                    else {
                      (**(code **)(*(long *)*plVar3 + 0xd0))();
                      if ((long *)*plVar3 != plVar27) {
                        (**(code **)(*plVar27 + 0x100))(plVar27,plVar20 + local_428 * 3,plVar20 + 6)
                        ;
                        plVar27 = (long *)plVar20[6];
                        local_428 = 2;
                      }
                      plVar3 = plVar20 + 9;
                      if (plVar4 == plVar3) {
                        uVar12 = 3;
                      }
                      else {
                        (**(code **)(*(long *)*plVar3 + 0xd0))();
                        if ((long *)*plVar3 != plVar27) {
                          (**(code **)(*plVar27 + 0x100))
                                    (plVar27,plVar20 + local_428 * 3,plVar20 + 9);
                          plVar27 = (long *)plVar20[9];
                          local_428 = 3;
                        }
                        plVar3 = plVar20 + 0xc;
                        if (plVar4 == plVar3) {
                          uVar12 = 4;
                        }
                        else {
                          (**(code **)(*(long *)*plVar3 + 0xd0))();
                          if ((long *)*plVar3 != plVar27) {
                            (**(code **)(*plVar27 + 0x100))
                                      (plVar27,plVar20 + local_428 * 3,plVar20 + 0xc);
                            plVar27 = (long *)plVar20[0xc];
                            local_428 = 4;
                          }
                          plVar3 = plVar20 + 0xf;
                          if (plVar4 == plVar3) {
                            uVar12 = 5;
                          }
                          else {
                            (**(code **)(*(long *)*plVar3 + 0xd0))();
                            if ((long *)*plVar3 != plVar27) {
                              (**(code **)(*plVar27 + 0x100))
                                        (plVar27,plVar20 + local_428 * 3,plVar20 + 0xf);
                              plVar27 = (long *)plVar20[0xf];
                              local_428 = 5;
                            }
                            uVar12 = 6;
                            for (local_430 = plVar20 + 0x12; plVar4 != local_430;
                                local_430 = local_430 + 3) {
                              (**(code **)(*(long *)*local_430 + 0xd0))();
                              if ((long *)*local_430 != plVar27) {
                                (**(code **)(*plVar27 + 0x100))
                                          (plVar27,plVar20 + local_428 * 3,local_430);
                                plVar27 = (long *)*local_430;
                                local_428 = uVar12;
                              }
                              uVar12 = uVar12 + 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                (**(code **)(*plVar27 + 0x100))
                          (plVar27,plVar20 + local_428 * 3,plVar20 + uVar12 * 3);
                plVar20[600] = 0;
              }
              *(undefined4 *)(lVar15 + 0x12cc) = 0;
            }
          }
          plVar23[0x74] = (long)plVar24;
          plVar23[0x75] = lVar18;
          plVar23[0x76] = lVar17;
        }
      }
    }
LAB_01ac9868:
    if (local_290 != (long *)0x0) {
      (**(code **)(*local_290 + 0x20))();
    }
    plVar23 = local_2b8;
    if (local_2b8 != (long *)0x0) {
      plVar24 = local_2b8 + 3;
      do {
        sVar19 = (short)*plVar24;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar10) {
          *(short *)plVar24 = sVar19 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar19 == 1) {
        piVar2 = (int *)((long)local_2b8 + 0x1c);
        do {
          iVar11 = *piVar2;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar10) {
            *piVar2 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_1d0 = (long *)*plVar23;
          FUN_00c44438(lVar17 + 0x8040,&local_1d0);
        }
      }
      else if (sVar19 == 0) {
LAB_01ac9900:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    pcVar9 = local_338;
    if (local_338 != (code *)0x0) {
      local_330 = (code *)0x0;
      local_328 = 0;
      local_340 = 0;
      local_338 = (code *)0x0;
      (*pcVar9)(auStack_320);
    }
    if (local_350 != (long *)0x0) {
      (**(code **)(*local_350 + 0x20))();
    }
    if (local_370 != (long *)0x0) {
      (**(code **)(*local_370 + 0x20))();
    }
  }
  if (local_418 != (code *)0x0) {
    (*local_418)(auStack_400);
  }
  return;
code_r0x01ac99a0:
  sVar19 = sVar6;
  if (sVar6 == 0) goto LAB_01ac9868;
  goto LAB_01ac9974;
}


