/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011ba878; name: FUN_011ba878
 */


undefined8 FUN_011ba878(undefined8 *param_1)

{
  code *pcVar1;
  short *psVar2;
  MutexType *pMVar3;
  int *piVar4;
  short sVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  short sVar22;
  bool bVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  long *plVar27;
  ulong local_270;
  ulong local_250;
  ulong local_240;
  undefined8 *local_230;
  undefined8 uStack_228;
  undefined1 *local_220;
  code *local_218;
  undefined1 *local_210;
  undefined1 *local_208;
  undefined8 *apuStack_200 [12];
  undefined8 *local_1a0;
  code *local_198;
  undefined1 *local_190;
  long *local_188;
  undefined8 *apuStack_180 [12];
  undefined8 local_120;
  char *local_118;
  undefined8 uStack_110;
  long *local_108;
  long *local_100;
  code *local_f8;
  code *local_f0;
  long *local_e8;
  undefined8 *apuStack_e0 [13];
  long *local_78;
  long *local_70 [2];
  
  if ((param_1[0x83] == 0) || (*(short *)(param_1[0x83] + 0x1a) == 0)) {
    FUN_00c9e664(&local_100,param_1 + 0x1d);
    lVar17 = 0;
    if (local_f8 != (code *)0x0) {
      lVar17 = *(long *)(local_f8 + 0x48);
    }
    lVar17 = FUN_01104bd8(lVar17 + 0x108,&local_1a0);
    if (local_f8 != (code *)0x0) {
      pcVar1 = local_f8 + 0x28;
      do {
        iVar13 = *(int *)pcVar1;
        iVar8 = iVar13 + -1;
        cVar7 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar23) {
          *(int *)pcVar1 = iVar8;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*(long *)local_f8 + 0x10))();
      }
      else if (iVar13 == 0) goto LAB_011bb60c;
    }
    if (local_100 != (long *)0x0) {
      (**(code **)(*local_100 + 0x60))();
    }
    if (lVar17 == 0) {
      return 0;
    }
    local_100 = (long *)0x0;
    local_f8 = (code *)0x0;
    FUN_00c43ef0(&local_100,lVar17 + 0x98);
    local_1a0 = (undefined8 *)0x0;
    local_198 = (code *)0x0;
    if (local_100[2] == lVar17 + 0x28) {
      FUN_00d6ca28(&local_1a0,&local_100);
    }
    plVar27 = local_100;
    if (local_100 != (long *)0x0) {
      plVar25 = local_100 + 3;
      do {
        sVar22 = (short)*plVar25;
        cVar7 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar23) {
          *(short *)plVar25 = sVar22 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar22 == 1) {
        piVar4 = (int *)((long)local_100 + 0x1c);
        do {
          iVar13 = *piVar4;
          cVar7 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar23) {
            *piVar4 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_220 = (undefined1 *)*plVar27;
          FUN_00c44438(lVar17 + 0x8040,&local_220);
        }
      }
      else if (sVar22 == 0) goto LAB_011bab30;
    }
    FUN_00d6c658(param_1 + 0x83,&local_1a0);
    puVar12 = local_1a0;
    if (local_1a0 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_1a0 + 3);
      do {
        sVar22 = *psVar2;
        cVar7 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar23) {
          *psVar2 = sVar22 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar22 == 1) {
        piVar4 = (int *)((long)local_1a0 + 0x1c);
        do {
          iVar13 = *piVar4;
          cVar7 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar23) {
            *piVar4 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_100 = (long *)*puVar12;
          FUN_00c44438(lVar17 + 0x8040,&local_100);
        }
      }
      else if (sVar22 == 0) {
LAB_011bab30:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  plVar25 = (long *)param_1[0x7d];
  plVar27 = (long *)param_1[0x7c];
  if (plVar25 == plVar27) {
    FUN_00c9e664(&local_100,param_1 + 0x1d);
    if (local_f8 == (code *)0x0) {
      lVar17 = 0;
    }
    else {
      lVar17 = *(long *)(local_f8 + 0x48);
    }
    plVar27 = (long *)(lVar17 + 0x110);
    lVar19 = *plVar27;
    local_1a0 = param_1;
    lVar26 = nn::os::GetCurrentThread();
    if (lVar26 != lVar19) {
      lVar26 = nn::os::GetCurrentThread();
      bVar23 = false;
LAB_011bac44:
      if (*plVar27 == 0) goto code_r0x011bac4c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x118));
      bVar23 = false;
      do {
        if (*plVar27 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x118));
            while (*plVar27 == 0) {
              cVar7 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar23) {
                *plVar27 = lVar26;
                cVar7 = ExclusiveMonitorsStatus();
              }
              bVar23 = false;
              if (cVar7 == '\0') goto LAB_011baa94;
            }
          } while( true );
        }
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar6) {
          *plVar27 = lVar26;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      goto LAB_011baa94;
    }
    bVar23 = true;
LAB_011baa94:
    FUN_011bb980(*(undefined8 *)(lVar17 + 0x128),*(undefined8 *)(lVar17 + 0x130),&local_1a0);
    FUN_011bb980(*(undefined8 *)(lVar17 + 0x160),*(undefined8 *)(lVar17 + 0x168),&local_1a0);
    if (!bVar23) {
      *(undefined8 *)(lVar17 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0x118));
    }
    if (local_f8 != (code *)0x0) {
      pcVar1 = local_f8 + 0x28;
      do {
        iVar13 = *(int *)pcVar1;
        iVar8 = iVar13 + -1;
        cVar7 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar23) {
          *(int *)pcVar1 = iVar8;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*(long *)local_f8 + 0x10))();
      }
      else if (iVar13 == 0) {
LAB_011bb60c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_100 != (long *)0x0) {
      (**(code **)(*local_100 + 0x60))();
    }
    plVar25 = (long *)param_1[0x7d];
    plVar27 = (long *)param_1[0x7c];
    if (plVar25 == plVar27) {
      return 0;
    }
  }
  puVar11 = PTR_LAB_047d4118;
  puVar10 = PTR_DAT_047d3e30;
  puVar9 = PTR_DAT_047d3e28;
  if (plVar27 != plVar25) {
    do {
      lVar17 = *plVar27;
      if ((lVar17 != 0) && (*(short *)(lVar17 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar17 + 0x1a);
        sVar22 = *(short *)(lVar17 + 0x1a);
LAB_011bacb4:
        sVar5 = *psVar2;
        if (sVar5 == sVar22) {
          cVar7 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar23) {
            *psVar2 = sVar22 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_011bacd8;
          bVar23 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_011bacd8:
          bVar23 = false;
        }
        if (!bVar23) goto code_r0x011bace0;
        lVar17 = *(long *)(lVar17 + 0x10);
        if (lVar17 != 0) {
          plVar24 = (long *)(lVar17 + -0x28);
          if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
            FUN_00100190(puVar11,puVar10,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar9);
          }
          uVar21 = FUN_015255c0(plVar24,puVar10);
          lVar17 = *(long *)(lVar17 + 0x70);
          psVar2 = (short *)(lVar17 + 0x1a);
          do {
            sVar22 = *psVar2;
            cVar7 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar23) {
              *psVar2 = sVar22 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar22 == 1) {
            *(undefined8 *)(lVar17 + 0x10) = 0;
            (**(code **)(*plVar24 + 0x50))(plVar24);
          }
          else if (sVar22 == 0) goto LAB_011bb524;
          if ((uVar21 & 1) == 0) {
            return 0;
          }
        }
      }
LAB_011ba8f4:
      plVar27 = plVar27 + 3;
    } while (plVar27 != plVar25);
    lVar17 = param_1[0x7c];
    lVar26 = param_1[0x7d];
    if (lVar17 != lVar26) {
LAB_011ba930:
      if (*(char *)(lVar17 + 0x10) == '\0') {
        local_230 = (undefined8 *)0x0;
        uStack_228 = 0;
        FUN_00d4ca00(&local_230,lVar17);
        if (local_230 != (undefined8 *)0x0) {
          if (*(short *)((long)local_230 + 0x1a) != 0) {
            psVar2 = (short *)((long)local_230 + 0x1a);
            sVar22 = *(short *)((long)local_230 + 0x1a);
            do {
              sVar5 = *psVar2;
              if (sVar5 == sVar22) {
                cVar7 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar23) {
                  *psVar2 = sVar22 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 != '\0') goto LAB_011bad78;
                bVar23 = true;
              }
              else {
                ClearExclusiveLocal();
LAB_011bad78:
                bVar23 = false;
              }
              if (bVar23) {
                lVar19 = local_230[2];
                if (lVar19 != 0) {
                  plVar27 = (long *)(lVar19 + -0x28);
                  FUN_0135d26c(&local_100);
                  lVar14 = FUN_01132f14(plVar27,&local_100);
                  if (lVar14 == 0) {
                    local_70[0] = (long *)0x0;
                  }
                  else {
                    FUN_011343b4(local_70,lVar14,&local_1a0);
                  }
                  if (local_e8 != (long *)0x0) {
                    (**(code **)(*local_e8 + 0x20))();
                  }
                  FUN_0135d26c(&local_100,param_1 + 0xe8);
                  lVar14 = FUN_01132f14(plVar27,&local_100);
                  if (lVar14 == 0) {
                    local_78 = (long *)0x0;
                  }
                  else {
                    FUN_0100d810(&local_78);
                  }
                  if (local_e8 != (long *)0x0) {
                    (**(code **)(*local_e8 + 0x20))();
                  }
                  if (local_70[0] != (long *)0x0) {
                    local_1a0 = (undefined8 *)0xc270be1aad2825bc;
                    local_198 = (code *)0x3c65325;
                    local_190 = (undefined1 *)0xf;
                    local_188 = (long *)0x0;
                    local_100 = (long *)&LAB_01202420;
                    local_f8 = FUN_02e409f8;
                    local_f0 = (code *)&LAB_02e409fc;
                    local_e8 = (long *)&LAB_02e40a08;
                    apuStack_e0[0] = param_1;
                    FUN_01133d3c(local_70[0],&local_1a0,&local_100);
                    pcVar1 = local_f8;
                    if (local_f8 != (code *)0x0) {
                      local_f0 = (code *)0x0;
                      local_e8 = (long *)0x0;
                      local_100 = (long *)0x0;
                      local_f8 = (code *)0x0;
                      (*pcVar1)(apuStack_e0);
                    }
                    if (local_188 != (long *)0x0) {
                      (**(code **)(*local_188 + 0x20))();
                    }
                    local_120 = 0x9abc58ede27fac76;
                    local_118 = "Audio/PostLoopEvent";
                    uStack_110 = 0x13;
                    local_108 = (long *)0x0;
                    local_100 = (long *)&LAB_029a4804;
                    local_f8 = FUN_02e40a14;
                    local_f0 = (code *)&LAB_02e40a18;
                    local_e8 = (long *)&LAB_02e40a24;
                    local_1a0 = (undefined8 *)&LAB_0177f0a4;
                    local_198 = FUN_02e40a30;
                    local_190 = &LAB_02e40a34;
                    local_188 = (long *)&LAB_02e40a40;
                    local_220 = &LAB_0170a7a8;
                    local_218 = FUN_02e40a4c;
                    local_210 = &LAB_02e40a50;
                    local_208 = &LAB_02e40a5c;
                    apuStack_200[0] = param_1;
                    apuStack_180[0] = param_1;
                    apuStack_e0[0] = param_1;
                    FUN_0116aafc(local_70[0],&local_120,&local_100,&local_1a0,&local_220);
                    pcVar1 = local_218;
                    if (local_218 != (code *)0x0) {
                      local_210 = (undefined1 *)0x0;
                      local_208 = (undefined1 *)0x0;
                      local_220 = (undefined1 *)0x0;
                      local_218 = (code *)0x0;
                      (*pcVar1)(apuStack_200);
                    }
                    pcVar1 = local_198;
                    if (local_198 != (code *)0x0) {
                      local_190 = (undefined1 *)0x0;
                      local_188 = (long *)0x0;
                      local_1a0 = (undefined8 *)0x0;
                      local_198 = (code *)0x0;
                      (*pcVar1)(apuStack_180);
                    }
                    pcVar1 = local_f8;
                    if (local_f8 != (code *)0x0) {
                      local_f0 = (code *)0x0;
                      local_e8 = (long *)0x0;
                      local_100 = (long *)0x0;
                      local_f8 = (code *)0x0;
                      (*pcVar1)(apuStack_e0);
                    }
                    if (local_108 != (long *)0x0) {
                      (**(code **)(*local_108 + 0x20))();
                    }
                    local_120 = 0x8d299dada6d68765;
                    local_118 = "Audio/LockMotionDetector";
                    uStack_110 = 0x18;
                    local_108 = (long *)0x0;
                    local_100 = (long *)&LAB_02e40a68;
                    local_f8 = FUN_02e40bf4;
                    local_f0 = (code *)&LAB_02e40bf8;
                    local_e8 = (long *)&LAB_02e40c04;
                    local_1a0 = (undefined8 *)&LAB_02e40c10;
                    local_198 = FUN_02e40c50;
                    local_190 = &LAB_02e40c54;
                    local_188 = (long *)&LAB_02e40c60;
                    local_220 = &LAB_02e40c6c;
                    local_218 = FUN_02e40e10;
                    local_208 = &LAB_02e40e20;
                    local_210 = &LAB_02e40e14;
                    apuStack_200[0] = param_1;
                    apuStack_180[0] = param_1;
                    apuStack_e0[0] = param_1;
                    FUN_0116aafc(local_70[0],&local_120,&local_100,&local_1a0,&local_220);
                    pcVar1 = local_218;
                    if (local_218 != (code *)0x0) {
                      local_210 = (undefined1 *)0x0;
                      local_208 = (undefined1 *)0x0;
                      local_220 = (undefined1 *)0x0;
                      local_218 = (code *)0x0;
                      (*pcVar1)(apuStack_200);
                    }
                    pcVar1 = local_198;
                    if (local_198 != (code *)0x0) {
                      local_190 = (undefined1 *)0x0;
                      local_188 = (long *)0x0;
                      local_1a0 = (undefined8 *)0x0;
                      local_198 = (code *)0x0;
                      (*pcVar1)(apuStack_180);
                    }
                    pcVar1 = local_f8;
                    if (local_f8 != (code *)0x0) {
                      local_f0 = (code *)0x0;
                      local_e8 = (long *)0x0;
                      local_100 = (long *)0x0;
                      local_f8 = (code *)0x0;
                      (*pcVar1)(apuStack_e0);
                    }
                    if (local_108 != (long *)0x0) {
                      (**(code **)(*local_108 + 0x20))();
                    }
                  }
                  plVar25 = local_78;
                  if (local_78 == (long *)0x0) goto LAB_011bb3cc;
                  local_100 = (long *)&LAB_029a4814;
                  local_f8 = FUN_02e40e2c;
                  pMVar3 = (MutexType *)(local_78 + 0x2a);
                  local_f0 = FUN_02e40e30;
                  local_e8 = (long *)&LAB_02e40e3c;
                  apuStack_e0[0] = param_1;
                  nn::os::LockMutex(pMVar3);
                  plVar24 = plVar25 + 0x1d;
                  local_240 = plVar25[0x1e];
                  if (local_240 == 0) goto LAB_011bb114;
                  uVar21 = local_240 - 1;
                  if ((local_240 & uVar21) == 0) {
                    local_270 = uVar21 & 0xc270be1aad2825bc;
                    plVar15 = *(long **)(*plVar24 + local_270 * 8);
                    if (plVar15 != (long *)0x0) goto LAB_011bb71c;
                    goto LAB_011bb114;
                  }
                  local_270 = 0xc270be1aad2825bc;
                  if (local_240 < 0xc270be1aad2825bd) {
                    uVar21 = 0;
                    if (local_240 != 0) {
                      uVar21 = 0xc270be1aad2825bc / local_240;
                    }
                    local_270 = 0xc270be1aad2825bc - uVar21 * local_240;
                  }
                  plVar15 = *(long **)(*plVar24 + local_270 * 8);
                  if (plVar15 != (long *)0x0) goto LAB_011bb7f8;
                  goto LAB_011bb114;
                }
                break;
              }
              sVar22 = sVar5;
            } while (sVar5 != 0);
          }
          goto LAB_011bb420;
        }
        goto LAB_011ba950;
      }
      goto LAB_011ba954;
    }
  }
  return 1;
code_r0x011bac4c:
  cVar7 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
  if (bVar6) {
    *plVar27 = lVar26;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_011baa94;
  goto LAB_011bac44;
code_r0x011bace0:
  sVar22 = sVar5;
  if (sVar5 == 0) goto LAB_011ba8f4;
  goto LAB_011bacb4;
  while (plVar15[2] != -0x3d8f41e552d7da44) {
LAB_011bb71c:
    plVar15 = (long *)*plVar15;
    if ((plVar15 == (long *)0x0) ||
       (plVar15[1] != 0xc270be1aad2825bc && (plVar15[1] & uVar21) != local_270)) goto LAB_011bb114;
  }
  goto LAB_011bb380;
  while( true ) {
    uVar21 = plVar15[1];
    if (uVar21 != 0xc270be1aad2825bc) {
      if (local_240 <= uVar21) {
        uVar20 = 0;
        if (local_240 != 0) {
          uVar20 = uVar21 / local_240;
        }
        uVar21 = uVar21 - uVar20 * local_240;
      }
      if (uVar21 != local_270) goto LAB_011bb114;
    }
    if (plVar15[2] == -0x3d8f41e552d7da44) break;
LAB_011bb7f8:
    plVar15 = (long *)*plVar15;
    if (plVar15 == (long *)0x0) goto LAB_011bb114;
  }
LAB_011bb380:
  nn::os::UnlockMutex(pMVar3);
  pcVar1 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    local_e8 = (long *)0x0;
    local_100 = (long *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar1)(apuStack_e0);
  }
  if (local_78 != (long *)0x0) {
    lVar14 = local_78[6];
    psVar2 = (short *)(lVar14 + 0x1a);
    do {
      sVar22 = *psVar2;
      cVar7 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar23) {
        *psVar2 = sVar22 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar22 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*local_78 + 0x50))();
    }
    else if (sVar22 == 0) {
LAB_011bb524:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
LAB_011bb3cc:
  if (local_70[0] != (long *)0x0) {
    lVar14 = local_70[0][6];
    psVar2 = (short *)(lVar14 + 0x1a);
    do {
      sVar22 = *psVar2;
      cVar7 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar23) {
        *psVar2 = sVar22 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar22 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*local_70[0] + 0x50))();
    }
    else if (sVar22 == 0) goto LAB_011bb524;
  }
  lVar19 = *(long *)(lVar19 + 0x70);
  psVar2 = (short *)(lVar19 + 0x1a);
  do {
    sVar22 = *psVar2;
    cVar7 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar23) {
      *psVar2 = sVar22 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar22 == 1) {
    *(undefined8 *)(lVar19 + 0x10) = 0;
    (**(code **)(*plVar27 + 0x50))();
  }
  else if (sVar22 == 0) goto LAB_011bb524;
LAB_011bb420:
  puVar12 = local_230;
  if (local_230 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_230 + 3);
    do {
      sVar22 = *psVar2;
      cVar7 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar23) {
        *psVar2 = sVar22 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar22 == 1) {
      piVar4 = (int *)((long)local_230 + 0x1c);
      do {
        iVar13 = *piVar4;
        cVar7 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar23) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_100 = (long *)*puVar12;
        FUN_00c44438(lVar19 + 0x8040,&local_100);
      }
    }
    else if (sVar22 == 0) goto LAB_011bab30;
  }
LAB_011ba950:
  *(undefined1 *)(lVar17 + 0x10) = 1;
LAB_011ba954:
  lVar17 = lVar17 + 0x18;
  if (lVar17 == lVar26) {
    return 1;
  }
  goto LAB_011ba930;
LAB_011bb114:
  plVar15 = (long *)(**(code **)(*(long *)plVar25[0x24] + 0x10))((long *)plVar25[0x24],0xb0,0x10);
  if (plVar15 == (long *)0x0) {
    (**(code **)(*(long *)plVar25[0x24] + 0xe8))();
  }
  lVar14 = plVar25[0x24];
  if (((DAT_04865a38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar16 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar16 != 0) {
    if (0xf < *(ulong *)(lVar16 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = lVar14;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
  }
  plVar15[2] = -0x3d8f41e552d7da44;
  plVar15[5] = 0;
  plVar15[6] = 0;
  plVar15[9] = 0;
  plVar15[7] = 0;
  plVar15[8] = 0;
  plVar15[3] = (long)"Audio/PostEvent";
  plVar15[4] = 0xf;
  if (local_f0 != (code *)0x0) {
    (*local_f0)(apuStack_e0,plVar15 + 10);
    plVar15[9] = (long)local_e8;
    plVar15[7] = (long)local_f8;
    plVar15[8] = (long)local_f0;
    plVar15[6] = (long)local_100;
  }
  if (lVar16 != 0) {
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
  }
  *plVar15 = 0;
  plVar15[1] = -0x3d8f41e552d7da44;
  if ((local_240 == 0) ||
     (*(float *)(plVar25 + 0x29) * (float)local_240 < (float)(plVar25[0x28] + 1))) {
    uVar21 = (ulong)(local_240 < 3 || (local_240 & local_240 - 1) != 0) | local_240 << 1;
    local_250 = (ulong)((float)(plVar25[0x28] + 1) / *(float *)(plVar25 + 0x29));
    if (local_250 <= uVar21) {
      local_250 = uVar21;
    }
    if (local_250 - 1 == 0) {
      local_250 = 2;
    }
    else if ((local_250 & local_250 - 1) != 0) {
      local_250 = std::__next_prime(local_250);
    }
    local_240 = plVar25[0x1e];
    if (local_240 < local_250) {
LAB_011bb2b8:
      FUN_01a7bfa0(plVar24,local_250);
LAB_011bb2c4:
      local_240 = plVar25[0x1e];
    }
    else if (local_250 < local_240) {
      uVar21 = (ulong)((float)(ulong)plVar25[0x28] / *(float *)(plVar25 + 0x29));
      if ((local_240 < 3) ||
         (uVar20 = local_240 - (local_240 >> 1 & 0x5555555555555555),
         uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333),
         1 < (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar21 = std::__next_prime(uVar21);
      }
      else if (1 < uVar21) {
        uVar21 = 1L << (-LZCOUNT(uVar21 - 1) & 0x3fU);
      }
      if (uVar21 <= local_250) {
        uVar21 = local_250;
      }
      local_250 = uVar21;
      if (uVar21 < local_240) goto LAB_011bb2b8;
      goto LAB_011bb2c4;
    }
    if ((local_240 & local_240 - 1) == 0) {
      local_270 = local_240 - 1 & 0xc270be1aad2825bc;
    }
    else if (local_240 < 0xc270be1aad2825bd) {
      uVar21 = 0;
      if (local_240 != 0) {
        uVar21 = 0xc270be1aad2825bc / local_240;
      }
      local_270 = 0xc270be1aad2825bc - uVar21 * local_240;
    }
    else {
      local_270 = 0xc270be1aad2825bc;
    }
  }
  plVar18 = *(long **)(*plVar24 + local_270 * 8);
  if (plVar18 == (long *)0x0) {
    *plVar15 = plVar25[0x23];
    plVar25[0x23] = (long)plVar15;
    *(long **)(plVar25[0x1d] + local_270 * 8) = plVar25 + 0x23;
    if (*plVar15 != 0) {
      uVar21 = *(ulong *)(*plVar15 + 8);
      if ((local_240 & local_240 - 1) == 0) {
        uVar21 = uVar21 & local_240 - 1;
      }
      else if (local_240 <= uVar21) {
        uVar20 = 0;
        if (local_240 != 0) {
          uVar20 = uVar21 / local_240;
        }
        uVar21 = uVar21 - uVar20 * local_240;
      }
      plVar18 = (long *)(*plVar24 + uVar21 * 8);
      goto LAB_011bb5d4;
    }
  }
  else {
    *plVar15 = *plVar18;
LAB_011bb5d4:
    *plVar18 = (long)plVar15;
  }
  plVar25[0x28] = plVar25[0x28] + 1;
  goto LAB_011bb380;
}


