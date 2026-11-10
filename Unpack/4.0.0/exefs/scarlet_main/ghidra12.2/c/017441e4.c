/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017441e4; name: FUN_017441e4
 */


void FUN_017441e4(long param_1,uint param_2)

{
  short *psVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  long *plVar21;
  long *local_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long *local_a8;
  undefined4 local_a0;
  long local_98;
  uint local_90;
  undefined4 uStack_8c;
  long local_88;
  long *local_80;
  long local_78;
  undefined8 uStack_70;
  long local_68;
  long *local_60;
  long *local_58;
  
  uVar4 = 0;
  if ((param_2 & 0xff) < 0xb) {
    uVar4 = param_2;
  }
  uVar18 = (ulong)uVar4 & 0xff;
  lVar15 = *(long *)PTR_DAT_047d90c8;
  local_c8 = *(long **)(lVar15 + uVar18 * 0x30 + 0x28);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x18))();
  }
  lVar12 = lVar15 + uVar18 * 0x30;
  local_c0 = *(undefined8 *)(lVar12 + 0x30);
  local_b8 = *(undefined8 *)(lVar12 + 0x38);
  lVar20 = *(long *)(lVar12 + 0x40);
  local_a8 = *(long **)(lVar12 + 0x48);
  local_b0 = lVar20;
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x18))();
  }
  local_a0 = *(undefined4 *)(lVar15 + uVar18 * 0x30 + 0x50);
  if (lVar20 != 0) {
    lVar12 = param_1 + (ulong)param_2 * 0x40;
    lVar15 = lVar12 + 0x28;
    uVar18 = FUN_011fd7e8(lVar15,1,&local_c8,0,*(undefined8 *)(param_1 + 8));
    if ((uVar18 & 1) == 0) {
      plVar16 = (long *)0x0;
    }
    else {
      plVar16 = *(long **)(lVar12 + 0x48);
      if (plVar16 != (long *)0x0) {
        lVar12 = plVar16[6];
        if (*(long *)(lVar12 + 0x10) == 0) goto LAB_01744964;
        psVar1 = (short *)(lVar12 + 0x1a);
        do {
          sVar5 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar5 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
          *(undefined8 *)(lVar12 + 8) = uVar10;
          *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
        }
        else if (sVar5 == -1) goto LAB_017446c4;
      }
    }
    if (((*PTR_DAT_047d8c58 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c58);
    }
    uVar10 = *(undefined8 *)PTR_DAT_047d8c60;
    *(undefined8 *)PTR_DAT_047d8c68 = uVar10;
    FUN_00f8b03c(&local_d0,uVar10,plVar16[1]);
    local_80 = local_d0;
    local_98 = lVar15;
    local_90 = param_2;
    local_88 = param_1;
    if (local_d0 != (long *)0x0) {
      lVar15 = local_d0[6];
      if (*(long *)(lVar15 + 0x10) == 0) {
LAB_01744964:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_pokelib_build_s2/pokelib_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar15 + 0x1a);
      do {
        sVar5 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
        *(undefined8 *)(lVar15 + 8) = uVar10;
        *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
      }
      else if (sVar5 == -1) {
LAB_017446c4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_pokelib_build_s2/pokelib_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    plVar21 = (long *)0x0;
    if (local_d0 != (long *)0x0) {
      plVar21 = local_d0 + 0xb;
    }
    if ((*(byte *)((long)plVar16 + 0x6d) & 1) == 0) {
      if ((*(byte *)((long)plVar16 + 0x6c) & 1) == 0) {
        plVar17 = plVar16 + 0xf;
        lVar15 = nn::os::GetCurrentThread();
LAB_0174436c:
        if (*plVar17 == 0) goto code_r0x01744374;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar16 + 0x10));
        do {
          if (*plVar17 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar16 + 0x10));
              while (*plVar17 == 0) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar7) {
                  *plVar17 = lVar15;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') goto LAB_0174437c;
              }
            } while( true );
          }
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar7) {
            *plVar17 = lVar15;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
LAB_0174437c:
        if ((*(byte *)((long)plVar16 + 0x6c) & 1) == 0) {
          uStack_70 = CONCAT44(uStack_8c,local_90);
          local_78 = local_98;
          local_68 = local_88;
          local_60 = local_80;
          if (local_80 != (long *)0x0) {
            lVar15 = local_80[6];
            if (*(long *)(lVar15 + 0x10) == 0) goto LAB_01744964;
            psVar1 = (short *)(lVar15 + 0x1a);
            do {
              sVar5 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar5 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar5 == 0) {
              uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
              *(undefined8 *)(lVar15 + 8) = uVar10;
              *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
            }
            else if (sVar5 == -1) goto LAB_017446c4;
          }
          local_58 = plVar21;
          if ((ulong)plVar16[0x1a] < (ulong)plVar16[0x1b]) {
            FUN_01747d3c(plVar16 + 0x19,&local_78);
            if (local_60 != (long *)0x0) {
              lVar15 = local_60[6];
              psVar1 = (short *)(lVar15 + 0x1a);
              do {
                sVar5 = *psVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar7) {
                  *psVar1 = sVar5 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar5 == 1) {
                *(undefined8 *)(lVar15 + 0x10) = 0;
                (**(code **)(*local_60 + 0x50))();
              }
              else if (sVar5 == 0) goto LAB_017447b0;
            }
          }
          else {
            uVar18 = plVar16[0x1d];
            lVar15 = plVar16[0x1a] - plVar16[0x19] >> 4;
            if (0x7ffffffffffffffe < uVar18) {
              uVar18 = 0x7fffffffffffffff;
            }
            uVar2 = lVar15 * -0x71c71c71c71c71c7 + 1;
            if (uVar18 < uVar2) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar12 = plVar16[0x1b] - plVar16[0x19] >> 4;
            uVar14 = lVar12 * 0x1c71c71c71c71c72;
            if (uVar2 <= uVar14) {
              uVar2 = uVar14;
            }
            plVar17 = plVar16 + 0x1c;
            if (uVar18 >> 1 <= (ulong)(lVar12 * -0x71c71c71c71c71c7)) {
              uVar2 = uVar18;
            }
            if (uVar2 == 0) {
              lVar12 = 0;
            }
            else {
              lVar12 = (**(code **)(*(long *)*plVar17 + 0x10))((long *)*plVar17,uVar2 * 0x90,0x10);
              if (lVar12 == 0) {
                (**(code **)(*(long *)*plVar17 + 0xe8))();
              }
            }
            lVar20 = *plVar17;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar11 = nn::os::GetTlsValue(DAT_04865a30);
            plVar8 = local_60;
            if (lVar11 != 0) {
              if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar20;
              *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
              plVar21 = local_58;
            }
            lVar20 = lVar12 + lVar15 * 0x10;
            *(undefined8 *)(lVar20 + 0x10) = 0;
            *(undefined8 *)(lVar20 + 0x18) = 0;
            *(undefined8 *)(lVar20 + 0x28) = uStack_70;
            *(long *)(lVar20 + 0x30) = local_68;
            puVar19 = (undefined8 *)(lVar12 + lVar15 * 0x10);
            local_60 = (long *)0x0;
            *(long **)(lVar20 + 0x38) = plVar8;
            *puVar19 = &LAB_01520104;
            *(long **)(lVar20 + 0x80) = plVar21;
            *(undefined1 **)(lVar20 + 8) = &LAB_02b6fcec;
            *(undefined1 **)(lVar20 + 0x10) = &LAB_02b6fd64;
            *(undefined1 **)(lVar20 + 0x18) = &LAB_02b6fe34;
            *(long *)(lVar20 + 0x20) = local_78;
            if (lVar11 != 0) {
              *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
            }
            lVar15 = plVar16[0x19];
            lVar20 = plVar16[0x1a];
            puVar3 = puVar19 + 0x12;
            if (lVar20 == lVar15) {
              lVar20 = lVar15;
            }
            else {
              do {
                puVar19 = puVar19 + -0x12;
                lVar20 = lVar20 + -0x90;
                FUN_00cbf394(plVar17,puVar19,lVar20);
              } while (lVar15 != lVar20);
              lVar15 = plVar16[0x19];
              lVar20 = plVar16[0x1a];
            }
            plVar16[0x19] = (long)puVar19;
            plVar16[0x1a] = (long)puVar3;
            lVar11 = plVar16[0x1b];
            plVar16[0x1b] = lVar12 + uVar2 * 0x90;
            while (lVar12 = lVar20, lVar12 != lVar15) {
              pcVar13 = *(code **)(lVar12 + -0x88);
              lVar20 = lVar12 + -0x90;
              if (pcVar13 != (code *)0x0) {
                *(undefined8 *)(lVar12 + -0x80) = 0;
                *(undefined8 *)(lVar12 + -0x78) = 0;
                *(undefined8 *)(lVar12 + -0x90) = 0;
                *(undefined8 *)(lVar12 + -0x88) = 0;
                (*pcVar13)(lVar12 + -0x70);
              }
            }
            if (lVar15 != 0) {
              plVar17 = (long *)*plVar17;
              uVar18 = (**(code **)(*plVar17 + 0xf8))(plVar17);
              if (((uVar18 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
                (**(code **)(*plVar17 + 0x18))(plVar17,lVar15,lVar11 - lVar15,0x10);
              }
              else {
                FUN_00c48fe8(plVar17,lVar15,lVar11 - lVar15,0x10);
              }
            }
          }
        }
        else {
          FUN_01520114(&local_98,plVar16[0xc],(int)plVar16[0xd]);
        }
        plVar16[0xf] = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar16 + 0x10));
        goto LAB_017445a0;
      }
      FUN_01520114(&local_98,plVar16[0xc],(int)plVar16[0xd]);
    }
LAB_017445a0:
    if (local_80 != (long *)0x0) {
      lVar15 = local_80[6];
      psVar1 = (short *)(lVar15 + 0x1a);
      do {
        sVar5 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar15 + 0x10) = 0;
        (**(code **)(*local_80 + 0x50))();
      }
      else if (sVar5 == 0) goto LAB_017447b0;
    }
    if (local_d0 != (long *)0x0) {
      lVar15 = local_d0[6];
      psVar1 = (short *)(lVar15 + 0x1a);
      do {
        sVar5 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar15 + 0x10) = 0;
        (**(code **)(*local_d0 + 0x50))();
      }
      else if (sVar5 == 0) goto LAB_017447b0;
    }
    lVar15 = plVar16[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar16 + 0x50))(plVar16);
    }
    else if (sVar5 == 0) {
LAB_017447b0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_pokelib_build_s2/pokelib_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  return;
code_r0x01744374:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
  if (bVar7) {
    *plVar17 = lVar15;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0174437c;
  goto LAB_0174436c;
}


