/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0159459c; name: FUN_0159459c
 */


void FUN_0159459c(long param_1)

{
  undefined8 *puVar1;
  short *psVar2;
  MutexType *pMVar3;
  short sVar4;
  char cVar5;
  byte bVar6;
  undefined2 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long **pplVar11;
  code *pcVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  long *plVar16;
  size_t sVar17;
  undefined4 uVar18;
  long lVar19;
  byte *pbVar20;
  uint uVar21;
  long lVar22;
  int *piVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  long *plVar28;
  undefined1 *puVar29;
  long *plVar30;
  long lVar31;
  long *plVar32;
  byte *__s;
  undefined8 uVar33;
  long *plVar34;
  long *plVar35;
  long *local_1b0;
  long **local_1a8;
  code *local_1a0;
  code *pcStack_198;
  undefined8 local_190;
  code *local_188;
  undefined8 local_180;
  long local_178;
  undefined1 auStack_170 [96];
  undefined8 local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 auStack_f0 [96];
  long *local_90;
  undefined8 uStack_88;
  int local_80;
  undefined4 uStack_7c;
  long local_78;
  long local_70 [2];
  
  cVar5 = *(char *)(param_1 + 0x519);
  bVar13 = cVar5 != *(char *)(param_1 + 0x578);
  if (cVar5 == '\0') {
    if ((bVar13) && (*(int *)(param_1 + 0x128) == 0xc)) {
      uVar18 = 10;
      goto LAB_015946a4;
    }
  }
  else if ((bVar13) && (*(int *)(param_1 + 0x128) == 0xc)) {
    uVar18 = 5;
LAB_015946a4:
    *(undefined4 *)(param_1 + 0x128) = uVar18;
  }
  switch(*(undefined4 *)(param_1 + 0x128)) {
  case 5:
    lVar24 = *(long *)(*(long *)(param_1 + 0x130) + 0x38);
    if ((lVar24 != 0) && ((*(byte *)(lVar24 + 0x1e8) & 1) != 0)) {
      FUN_01595dc8(*(undefined8 *)(param_1 + 0x130),1,*(undefined8 *)(param_1 + 0x510));
      uVar18 = 6;
      goto LAB_0159472c;
    }
    break;
  case 6:
    lVar24 = *(long *)(param_1 + 0x130);
    if ((*(long *)(lVar24 + 0x38) != 0) && ((*(byte *)(*(long *)(lVar24 + 0x38) + 0x1e8) & 1) != 0))
    {
      lVar19 = (*(long *)(*(long *)(lVar24 + 0x38) + 0x2e0) -
                *(long *)(*(long *)(lVar24 + 0x38) + 0x2d8) >> 3) * -0x5555555555555555;
      lVar27 = *(long *)(lVar24 + 0xd0);
      lVar22 = *(long *)(lVar24 + 0xd8);
      if (lVar19 == lVar22 - lVar27 >> 6) {
        if (lVar27 == lVar22) {
          uVar21 = 0;
        }
        else {
          uVar21 = 0;
          if (*(long *)(lVar27 + 8) != 0) {
            uVar21 = *(byte *)(*(long *)(lVar27 + 8) + 0x1e8) & 1;
          }
          if (lVar27 + 0x40 != lVar22) {
            if (*(long *)(lVar27 + 0x48) != 0) {
              uVar21 = uVar21 + (*(byte *)(*(long *)(lVar27 + 0x48) + 0x1e8) & 1);
            }
            if (lVar27 + 0x80 != lVar22) {
              if (*(long *)(lVar27 + 0x88) != 0) {
                uVar21 = uVar21 + (*(byte *)(*(long *)(lVar27 + 0x88) + 0x1e8) & 1);
              }
              for (lVar27 = lVar27 + 0xc0; lVar27 != lVar22; lVar27 = lVar27 + 0x40) {
                if (*(long *)(lVar27 + 8) != 0) {
                  uVar21 = uVar21 + (*(byte *)(*(long *)(lVar27 + 8) + 0x1e8) & 1);
                }
              }
            }
          }
          lVar19 = *(long *)(lVar24 + 0xd8) - *(long *)(lVar24 + 0xd0) >> 6;
        }
        if (lVar19 == (int)uVar21) {
          FUN_015963f4(*(undefined8 *)(param_1 + 0x130));
          uVar18 = 7;
          goto LAB_0159472c;
        }
      }
    }
    break;
  case 7:
    lVar24 = *(long *)(*(long *)(param_1 + 0x130) + 0x38);
    lVar24 = *(long *)(lVar24 + 0x290) - *(long *)(lVar24 + 0x288);
    if (lVar24 != 0) {
      uVar26 = 0;
      do {
        local_1b0 = (long *)0x0;
        local_1a8 = (long **)0x0;
        FUN_00c43ef0(&local_1b0,param_1 + 0x98);
        local_90 = (long *)0x0;
        uStack_88 = 0;
        if (local_1b0[2] == param_1 + 0x28) {
          FUN_01218a70(&local_90,&local_1b0);
        }
        plVar28 = local_1b0;
        if (local_1b0 != (long *)0x0) {
          plVar34 = local_1b0 + 3;
          do {
            sVar4 = (short)*plVar34;
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar13) {
              *(short *)plVar34 = sVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar4 == 1) {
            piVar23 = (int *)((long)local_1b0 + 0x1c);
            do {
              iVar14 = *piVar23;
              cVar5 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar23,0x10);
              if (bVar13) {
                *piVar23 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar14 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar27 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar27;
              local_70[0] = *plVar28;
              FUN_00c44438(lVar27 + 0x8040,local_70);
            }
          }
          else if (sVar4 == 0) goto LAB_015955c8;
        }
        puVar8 = PTR_DAT_047dd4c0;
        iVar14 = (int)uVar26;
        local_80 = iVar14;
        local_78 = param_1 + 0x51a;
        if (((*PTR_DAT_047dd4c0 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar15 != 0)) {
          FUN_00100190(&LAB_02b478e0,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar8);
        }
        puVar10 = PTR_DAT_047dd4d0;
        puVar9 = PTR_DAT_047dd4c8;
        *(undefined8 *)PTR_DAT_047dd4d0 = *(undefined8 *)PTR_DAT_047dd4c8;
        if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar15 != 0)) {
          FUN_00100190(&LAB_02b478e0,puVar9,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047dd4c0);
        }
        lVar27 = *(long *)puVar9;
        *(long *)puVar10 = lVar27;
        lVar27 = *(long *)(lVar27 + 0x28);
        nn::os::LockMutex((MutexType *)(lVar27 + 0x3d0));
        local_190 = 0;
        local_188 = (code *)0x0;
        local_1a0 = (code *)0x0;
        pcStack_198 = (code *)0x0;
        local_1b0 = (long *)0x0;
        local_1a8 = (long **)0x0;
        FUN_01217ab0(&local_190,&local_90);
        local_180 = CONCAT44(uStack_7c,local_80);
        local_178 = local_78;
        local_1b0 = (long *)&LAB_0218899c;
        local_1a8 = (long **)FUN_02188ae8;
        local_1a0 = FUN_02188bf8;
        pcStack_198 = FUN_02188c30;
        FUN_00dd17e4(lVar27 + 0x360,&local_1b0);
        pplVar11 = local_1a8;
        if (local_1a8 != (long **)0x0) {
          local_1a0 = (code *)0x0;
          pcStack_198 = (code *)0x0;
          local_1b0 = (long *)0x0;
          local_1a8 = (long **)0x0;
          (*(code *)pplVar11)(&local_190);
        }
        *(undefined8 *)(lVar27 + 0x3f8) = *(undefined8 *)(lVar27 + 0x3a8);
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar27 + 0x3f0));
        nn::os::UnlockMutex((MutexType *)(lVar27 + 0x3d0));
        plVar28 = *(long **)(lVar27 + 0x400);
        plVar34 = *(long **)(lVar27 + 0x408);
        if (plVar28 != plVar34) {
          lVar27 = *plVar28;
          pMVar3 = (MutexType *)(lVar27 + 0x3f0);
          nn::os::LockMutex(pMVar3);
          nn::os::SignalConditionVariable((ConditionVariableType *)(lVar27 + 0x410));
          nn::os::UnlockMutex(pMVar3);
          if (plVar28 + 1 != plVar34) {
            lVar27 = plVar28[1];
            pMVar3 = (MutexType *)(lVar27 + 0x3f0);
            nn::os::LockMutex(pMVar3);
            nn::os::SignalConditionVariable((ConditionVariableType *)(lVar27 + 0x410));
            nn::os::UnlockMutex(pMVar3);
            for (plVar28 = plVar28 + 2; plVar28 != plVar34; plVar28 = plVar28 + 1) {
              lVar27 = *plVar28;
              pMVar3 = (MutexType *)(lVar27 + 0x3f0);
              nn::os::LockMutex(pMVar3);
              nn::os::SignalConditionVariable((ConditionVariableType *)(lVar27 + 0x410));
              nn::os::UnlockMutex(pMVar3);
            }
          }
        }
        plVar28 = local_90;
        if (local_90 != (long *)0x0) {
          plVar34 = local_90 + 3;
          do {
            sVar4 = (short)*plVar34;
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar13) {
              *(short *)plVar34 = sVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar4 == 1) {
            piVar23 = (int *)((long)local_90 + 0x1c);
            do {
              iVar15 = *piVar23;
              cVar5 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar23,0x10);
              if (bVar13) {
                *piVar23 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar27 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar27;
              local_1b0 = (long *)*plVar28;
              FUN_00c44438(lVar27 + 0x8040,&local_1b0);
            }
          }
          else if (sVar4 == 0) {
LAB_015955c8:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        uVar26 = (ulong)(iVar14 + 1);
      } while (uVar26 < (ulong)(lVar24 >> 7));
    }
    uVar18 = 8;
    goto LAB_0159472c;
  case 8:
    lVar24 = *(long *)(param_1 + 0x130);
    if (*(ulong *)(lVar24 + 400) != 0) {
      uVar25 = *(ulong *)(lVar24 + 400) & 0x1f;
      piVar23 = *(int **)(lVar24 + 0x158);
      lVar27 = *(long *)(lVar24 + 0x160) - (long)piVar23;
      uVar26 = lVar27 >> 2;
      if (uVar25 == 0) {
        if (lVar27 != 0) {
          if (uVar26 < 2) {
            uVar26 = 1;
          }
          do {
            if (*piVar23 != -1) goto switchD_015946f8_default;
            uVar26 = uVar26 - 1;
            piVar23 = piVar23 + 1;
          } while (uVar26 != 0);
        }
      }
      else {
        while (uVar26 = uVar26 - 1, uVar26 != 0) {
          if (*piVar23 != -1) goto switchD_015946f8_default;
          piVar23 = piVar23 + 1;
        }
        if (*(uint *)(*(long *)(lVar24 + 0x160) + -4) != ~(-1 << uVar25)) break;
      }
    }
    lVar24 = *(long *)(lVar24 + 0xa0) - *(long *)(lVar24 + 0x98);
    lVar27 = *(long *)(param_1 + 0x178);
    uVar26 = lVar24 >> 3;
    if ((ulong)(*(long *)(param_1 + 0x188) - lVar27 >> 3) < uVar26) {
      lVar22 = *(long *)(param_1 + 0x180);
      puVar1 = (undefined8 *)(param_1 + 400);
      lVar24 = (**(code **)(**(long **)(param_1 + 400) + 0x10))(*(long **)(param_1 + 400),lVar24,8);
      if (lVar24 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
      lVar27 = lVar24 + (lVar22 - lVar27 >> 3) * 8;
      lVar22 = *(long *)(param_1 + 0x178);
      lVar19 = *(long *)(param_1 + 0x180);
      if (lVar19 == lVar22) {
        lVar31 = lVar27;
      }
      else {
        lVar31 = lVar27 + -8;
        FUN_015988f8(puVar1,lVar31,lVar19 + -8);
        if (lVar19 + -8 != lVar22) {
          do {
            lVar31 = lVar31 + -8;
            FUN_015988f8(puVar1,lVar31,lVar19 + -0x10);
            lVar19 = lVar19 + -8;
          } while (lVar22 + 8 != lVar19);
        }
        lVar22 = *(long *)(param_1 + 0x178);
      }
      lVar19 = *(long *)(param_1 + 0x188);
      *(long *)(param_1 + 0x178) = lVar31;
      *(long *)(param_1 + 0x180) = lVar27;
      *(ulong *)(param_1 + 0x188) = lVar24 + uVar26 * 8;
      if (lVar22 != 0) {
        plVar28 = (long *)*puVar1;
        lVar19 = lVar19 - lVar22;
        uVar26 = (**(code **)(*plVar28 + 0xf8))(plVar28);
        if (((uVar26 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
          (**(code **)(*plVar28 + 0x18))(plVar28,lVar22,lVar19,8);
        }
        else {
          FUN_00c48fe8(plVar28,lVar22,lVar19,8);
        }
      }
    }
    plVar28 = *(long **)(*(long *)(param_1 + 0x130) + 0x98);
    plVar34 = *(long **)(*(long *)(param_1 + 0x130) + 0xa0);
    if (plVar28 != plVar34) {
      do {
        local_180 = 0;
        local_178 = 0;
        local_190 = 0;
        local_188 = (code *)0x0;
        local_110 = 0;
        local_108 = (code *)0x0;
        local_100 = 0;
        local_f8 = 0;
        local_1b0 = *(long **)(param_1 + 0x510);
        local_1a0 = *(code **)(param_1 + 0x400);
        if (*(code **)(param_1 + 0x420) != (code *)0x0) {
          (**(code **)(param_1 + 0x420))(param_1 + 0x430,auStack_170);
          pcVar12 = local_108;
          local_178 = *(long *)(param_1 + 0x428);
          local_190 = *(undefined8 *)(param_1 + 0x410);
          local_188 = *(code **)(param_1 + 0x418);
          local_180 = *(undefined8 *)(param_1 + 0x420);
          if (local_108 != (code *)0x0) {
            local_100 = 0;
            local_f8 = 0;
            local_110 = 0;
            local_108 = (code *)0x0;
            (*pcVar12)(auStack_f0);
          }
        }
        if (*(code **)(param_1 + 0x4a0) != (code *)0x0) {
          (**(code **)(param_1 + 0x4a0))(param_1 + 0x4b0,auStack_f0);
          local_f8 = *(undefined8 *)(param_1 + 0x4a8);
          local_108 = *(code **)(param_1 + 0x498);
          local_110 = *(undefined8 *)(param_1 + 0x490);
          local_100 = *(undefined8 *)(param_1 + 0x4a0);
        }
        plVar35 = *(long **)(param_1 + 0x138);
        plVar32 = *(long **)(param_1 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar24 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar24 + 0x80)) {
LAB_015954c4:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar24 + *(ulong *)(lVar24 + 0x80) * 8) = plVar32;
        *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + 1;
        plVar16 = (long *)(**(code **)(*plVar32 + 0x10))(plVar32,0x370,0x10);
        if (plVar16 == (long *)0x0) {
          (**(code **)(*plVar32 + 0xe8))(plVar32);
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("ptr","Create",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                     ,0x40);
        }
        FUN_01595618(plVar16,&local_1b0);
        *(undefined4 *)(plVar16 + 3) = 0x100370;
        plVar16[1] = (long)plVar32;
        plVar16[2] = (long)plVar16;
        *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + -1;
        (**(code **)(*plVar16 + 0x58))(plVar16);
        plVar32 = plVar16 + 4;
        (**(code **)(*plVar32 + 0xe8))(plVar32,plVar35);
        (**(code **)(*plVar32 + 0x68))(plVar32);
        local_90 = plVar16;
        FUN_00df8c30(plVar35 + 0x21,&local_90);
        if (local_90 != (long *)0x0) {
          lVar24 = local_90[0x13];
          psVar2 = (short *)(lVar24 + 0x1a);
          do {
            sVar4 = *psVar2;
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar13) {
              *psVar2 = sVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar4 == 1) {
            *(undefined8 *)(lVar24 + 0x10) = 0;
            (**(code **)(*local_90 + 0x50))();
          }
          else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        (**(code **)(*plVar35 + 0x100))(plVar35,plVar32);
        plVar30 = plVar35 + 0x88;
        lVar27 = *plVar30;
        lVar24 = nn::os::GetCurrentThread();
        if (lVar24 != lVar27) {
          lVar24 = nn::os::GetCurrentThread();
LAB_01594ab8:
          if (*plVar30 == 0) goto code_r0x01594ac0;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar35 + 0x89));
          do {
            if (*plVar30 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(plVar35 + 0x89));
                while (*plVar30 == 0) {
                  cVar5 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(plVar30,0x10);
                  if (bVar13) {
                    *plVar30 = lVar24;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_01594ac8;
                }
              } while( true );
            }
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar30,0x10);
            if (bVar13) {
              *plVar30 = lVar24;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_01594ac8:
          bVar13 = false;
          goto LAB_01594acc;
        }
        plVar30 = (long *)0x0;
        bVar13 = true;
LAB_01594acc:
        if ((*(byte *)(plVar35 + 0x8b) >> 2 & 1) == 0) {
          FUN_00d37964(plVar35,0,0);
        }
        else {
          (**(code **)(*plVar32 + 0xf8))(plVar32);
        }
        if (!bVar13) {
          *plVar30 = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar30 + 1));
        }
        plVar16[0x48] = *(long *)(param_1 + 0x570);
        lVar24 = *(long *)(*(long *)(*(long *)(param_1 + 0x130) + 0x38) + 0x40);
        puVar1 = (undefined8 *)PTR_PTR_047d4508;
        if (lVar24 != 0) {
          puVar1 = (undefined8 *)(lVar24 + 0x38);
        }
        __s = (byte *)*puVar1;
        if (__s == (byte *)0x0) {
          local_90 = plVar16;
          if ((*PTR_DAT_047d3e28 & 1) == 0) {
            iVar14 = __cxa_guard_acquire(PTR_DAT_047d3e28);
            if (iVar14 != 0) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
          }
          puVar29 = *(undefined1 **)PTR_DAT_047d3e30;
          __s = *(byte **)(PTR_DAT_047d3e30 + 8);
          sVar17 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
          plVar32 = *(long **)(PTR_DAT_047d3e30 + 0x18);
          if (plVar32 != (long *)0x0) {
            (**(code **)(*plVar32 + 0x18))(plVar32);
          }
        }
        else {
          local_90 = plVar16;
          sVar17 = strlen((char *)__s);
          bVar6 = *__s;
          if (bVar6 == 0) {
            plVar32 = (long *)0x0;
            puVar29 = &DAT_cbf29ce484222645;
          }
          else {
            puVar29 = &DAT_cbf29ce484222645;
            pbVar20 = __s;
            do {
              pbVar20 = pbVar20 + 1;
              puVar29 = (undefined1 *)(((ulong)puVar29 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar20;
            } while (bVar6 != 0);
            plVar32 = (long *)0x0;
          }
        }
        plVar16[0x3c] = (long)puVar29;
        plVar16[0x3d] = (long)__s;
        plVar16[0x3e] = sVar17;
        if (plVar32 != (long *)0x0) {
          (**(code **)(*plVar32 + 0x18))(plVar32);
        }
        plVar35 = (long *)plVar16[0x3f];
        plVar16[0x3f] = (long)plVar32;
        if (plVar35 != (long *)0x0) {
          (**(code **)(*plVar35 + 0x20))();
        }
        if (plVar32 != (long *)0x0) {
          (**(code **)(*plVar32 + 0x20))(plVar32);
        }
        if ((int)plVar16[0x25] == 0) {
          lVar24 = *plVar28;
          if (lVar24 != 0) {
            piVar23 = (int *)(lVar24 + 0x28);
            do {
              iVar14 = *piVar23;
              cVar5 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar23,0x10);
              if (bVar13) {
                *piVar23 = iVar14 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar14 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","IncrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x53,"Reference counter overflows.");
            }
          }
          plVar32 = (long *)plVar16[0x26];
          plVar16[0x26] = lVar24;
          if (plVar32 != (long *)0x0) {
            plVar35 = plVar32 + 5;
            do {
              lVar24 = *plVar35;
              iVar14 = (int)lVar24 + -1;
              cVar5 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar35,0x10);
              if (bVar13) {
                *(int *)plVar35 = iVar14;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar14 == 0) {
              (**(code **)(*plVar32 + 0x10))();
            }
            else if ((int)lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
          *(undefined4 *)(plVar16 + 0x25) = 1;
        }
        cVar5 = *(char *)(param_1 + 0x57d);
        if ((char)plVar16[0x6d] != cVar5) {
          plVar32 = (long *)plVar16[0x2e];
          plVar35 = (long *)plVar16[0x2f];
          *(char *)(plVar16 + 0x6d) = cVar5;
          for (; plVar32 != plVar35; plVar32 = plVar32 + 1) {
            if (*(long *)(*plVar32 + 0x120) != 0) {
              *(char *)(*(long *)(*plVar32 + 0x120) + 0x210) = cVar5;
            }
          }
        }
        puVar1 = *(undefined8 **)(param_1 + 0x180);
        if (puVar1 == *(undefined8 **)(param_1 + 0x188)) {
          FUN_015989d4((long *)(param_1 + 0x178),&local_90);
        }
        else {
          uVar33 = *(undefined8 *)(param_1 + 400);
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar24 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar24 == 0) {
            *puVar1 = plVar16;
          }
          else {
            if (0xf < *(ulong *)(lVar24 + 0x80)) goto LAB_015954c4;
            *(undefined8 *)(lVar24 + *(ulong *)(lVar24 + 0x80) * 8) = uVar33;
            *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + 1;
            *puVar1 = local_90;
            *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + -1;
          }
          *(undefined8 **)(param_1 + 0x180) = puVar1 + 1;
        }
        pcVar12 = local_108;
        if (local_108 != (code *)0x0) {
          local_100 = 0;
          local_f8 = 0;
          local_110 = 0;
          local_108 = (code *)0x0;
          (*pcVar12)(auStack_f0);
        }
        pcVar12 = local_188;
        if (local_188 != (code *)0x0) {
          local_180 = 0;
          local_178 = 0;
          local_190 = 0;
          local_188 = (code *)0x0;
          (*pcVar12)(auStack_170);
        }
        plVar28 = plVar28 + 1;
      } while (plVar28 != plVar34);
    }
    uVar18 = 9;
    goto LAB_0159472c;
  case 9:
    plVar28 = *(long **)(param_1 + 0x178);
    do {
      if (plVar28 == *(long **)(param_1 + 0x180)) {
        *(undefined1 *)(param_1 + 0x578) = 1;
        goto LAB_01594728;
      }
      lVar24 = *plVar28;
      plVar28 = plVar28 + 1;
    } while (*(int *)(lVar24 + 0x128) == 4);
    break;
  case 10:
    *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x178);
    local_90 = local_70;
    local_1b0 = (long *)(*(long *)(param_1 + 0x138) + 0x108);
    local_1a8 = &local_90;
    FUN_01596c70(local_1b0,&local_1b0);
    uVar18 = 0xb;
    goto LAB_0159472c;
  case 0xb:
    FUN_01595bbc(*(undefined8 *)(param_1 + 0x130));
    *(undefined1 *)(param_1 + 0x578) = 0;
LAB_01594728:
    uVar18 = 0xc;
LAB_0159472c:
    *(undefined4 *)(param_1 + 0x128) = uVar18;
  }
switchD_015946f8_default:
  plVar28 = *(long **)(*(long *)(param_1 + 0x130) + 0x70);
  if (plVar28 == (long *)0x0) {
    return;
  }
  plVar34 = plVar28 + 5;
  do {
    lVar24 = *plVar34;
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar34,0x10);
    if (bVar13) {
      *(int *)plVar34 = (int)lVar24 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((int)lVar24 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  plVar32 = (long *)(param_1 + 0x38);
  if ((char)plVar28[0x4a] == '\0') {
    if ((*(char *)(param_1 + 0x58) == '\a') && (*(char *)(param_1 + 0x59) == '\a'))
    goto LAB_0159464c;
    uVar7 = *(undefined2 *)(param_1 + 0x58);
    *(undefined2 *)(param_1 + 0x58) = 0x707;
  }
  else {
    if ((*(char *)(param_1 + 0x58) == '\0') && (*(char *)(param_1 + 0x59) == '\0'))
    goto LAB_0159464c;
    uVar7 = *(undefined2 *)(param_1 + 0x58);
    *(undefined2 *)(param_1 + 0x58) = 0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_00c6a584(*(long *)(param_1 + 0x48),plVar32);
  }
  (**(code **)(*plVar32 + 0x20))(plVar32,uVar7);
LAB_0159464c:
  do {
    lVar24 = *plVar34;
    iVar14 = (int)lVar24 + -1;
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar34,0x10);
    if (bVar13) {
      *(int *)plVar34 = iVar14;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar14 == 0) {
    (**(code **)(*plVar28 + 0x10))(plVar28);
  }
  else if ((int)lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
code_r0x01594ac0:
  cVar5 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar30,0x10);
  if (bVar13) {
    *plVar30 = lVar24;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_01594ac8;
  goto LAB_01594ab8;
}


