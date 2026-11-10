/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01487ec8; name: FUN_01487ec8
 */


undefined1  [16] FUN_01487ec8(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  short *psVar1;
  int *piVar2;
  uint *puVar3;
  char *pcVar4;
  short sVar5;
  uint uVar6;
  ushort uVar7;
  char cVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  ushort *puVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  uint *puVar26;
  long *plVar27;
  undefined1 auVar28 [16];
  undefined1 auStack_e0 [24];
  long *local_c8;
  long *local_c0 [3];
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90 [4];
  long *local_70;
  
  puVar26 = (uint *)*param_3;
  uVar6 = *puVar26;
  piVar2 = (int *)((long)puVar26 + (ulong)uVar6);
  uVar7 = ((ushort *)((long)piVar2 - (long)*piVar2))[2];
  puVar3 = (uint *)((long)piVar2 + (ulong)uVar7);
  plVar24 = (long *)((long)puVar3 + (ulong)*puVar3);
  plVar23 = *(long **)(param_2 + 0x10);
  if (*(char *)((long)plVar24 + 4) == '\0') {
LAB_0148826c:
    auVar28._0_8_ = (ulong)(plVar23 != (long *)0x0) << 1;
    auVar28._8_8_ = plVar23;
    return auVar28;
  }
  local_c0[0] = (long *)0x0;
  if (4 < *(ushort *)((long)piVar2 - (long)*piVar2) && uVar7 != 0) {
    local_c0[0] = plVar24;
  }
  FUN_00cf95c4(local_90,local_c0);
  plVar24 = (long *)*param_1;
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xd) ||
     (uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6], uVar17 == 0)) {
    bVar11 = false;
  }
  else {
    bVar11 = *(char *)((long)piVar2 + uVar17) != '\0';
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_014887d0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar24;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
  plVar14 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0x288,8);
  if (plVar14 == (long *)0x0) {
    lVar13 = *plVar24;
  }
  else {
    FUN_01488b38(plVar14,local_90,plVar23 + 0x6d,bVar11);
    *(undefined4 *)(plVar14 + 3) = 0x80288;
    plVar14[1] = (long)plVar24;
    plVar14[2] = (long)plVar14;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    lVar13 = plVar14[0x13];
    if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar5 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar16;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    plVar24 = plVar14 + 4;
    (**(code **)(*plVar24 + 0xe8))(plVar24,plVar23);
    (**(code **)(*plVar24 + 0x68))(plVar24);
    local_c0[0] = plVar14;
    FUN_00df8c30(plVar23 + 0x21,local_c0);
    if (local_c0[0] != (long *)0x0) {
      lVar13 = local_c0[0][0x13];
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar5 = *psVar1;
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar5 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*local_c0[0] + 0x50))();
      }
      else if (sVar5 == 0) goto LAB_01488398;
    }
    (**(code **)(*plVar23 + 0x100))(plVar23,plVar24);
    plVar27 = plVar23 + 0x88;
    lVar25 = *plVar27;
    lVar13 = nn::os::GetCurrentThread();
    if (lVar13 != lVar25) {
      lVar13 = nn::os::GetCurrentThread();
LAB_01488098:
      if (*plVar27 == 0) goto code_r0x014880a0;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar23 + 0x89));
      do {
        if (*plVar27 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar23 + 0x89));
            while (*plVar27 == 0) {
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar11) {
                *plVar27 = lVar13;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_014880a8;
            }
          } while( true );
        }
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar11) {
          *plVar27 = lVar13;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_014880a8:
      bVar11 = false;
      plVar15 = plVar27;
      goto LAB_014880b0;
    }
    plVar15 = (long *)0x0;
    bVar11 = true;
LAB_014880b0:
    if ((*(byte *)(plVar23 + 0x8b) >> 2 & 1) == 0) {
      FUN_00d37964(plVar23,0,0);
    }
    else {
      (**(code **)(*plVar24 + 0xf8))(plVar24);
    }
    if (!bVar11) {
      *plVar15 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
    }
    plVar24 = (long *)plVar23[1];
    if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar13 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_014887d0;
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar24;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    plVar15 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0x4f0,0x10);
    if (plVar15 != (long *)0x0) {
      FUN_01488858();
      *(undefined4 *)(plVar15 + 3) = 0x1004f0;
      plVar15[1] = (long)plVar24;
      plVar15[2] = (long)plVar15;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
      (**(code **)(*plVar15 + 0x58))(plVar15);
      plVar24 = plVar15 + 4;
      (**(code **)(*plVar24 + 0xe8))(plVar24,plVar23);
      (**(code **)(*plVar24 + 0x68))(plVar24);
      local_c0[0] = plVar15;
      FUN_00df8c30(plVar23 + 0x21,local_c0);
      if (local_c0[0] != (long *)0x0) {
        lVar13 = local_c0[0][0x13];
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar5 = *psVar1;
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar5 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*local_c0[0] + 0x50))();
        }
        else if (sVar5 == 0) {
LAB_01488398:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      (**(code **)(*plVar23 + 0x100))(plVar23,plVar24);
      lVar25 = plVar23[0x88];
      lVar13 = nn::os::GetCurrentThread();
      if (lVar13 != lVar25) {
        lVar13 = nn::os::GetCurrentThread();
LAB_014881cc:
        if (*plVar27 == 0) goto code_r0x014881d4;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar23 + 0x89));
        do {
          if (*plVar27 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar23 + 0x89));
              while (*plVar27 == 0) {
                cVar8 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar11) {
                  *plVar27 = lVar13;
                  cVar8 = ExclusiveMonitorsStatus();
                }
                if (cVar8 == '\0') goto LAB_014881dc;
              }
            } while( true );
          }
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar11) {
            *plVar27 = lVar13;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
LAB_014881dc:
        bVar11 = false;
        goto LAB_014881e0;
      }
      plVar27 = (long *)0x0;
      bVar11 = true;
LAB_014881e0:
      if ((*(byte *)(plVar23 + 0x8b) >> 2 & 1) == 0) {
        FUN_00d37964(plVar23,0,0);
      }
      else {
        (**(code **)(*plVar24 + 0xf8))(plVar24);
      }
      if (!bVar11) {
        *plVar27 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar27 + 1));
      }
      puVar10 = PTR_DAT_047d4250;
      puVar9 = PTR_DAT_047d4248;
      puVar18 = (ushort *)((long)piVar2 - (long)*piVar2);
      if ((((0xe < *puVar18) && (0x10 < *puVar18)) && (uVar17 = (ulong)puVar18[7], puVar18[7] != 0))
         && (uVar21 = (ulong)puVar18[8], uVar21 != 0)) {
        uVar19 = (ulong)*(uint *)((long)piVar2 + uVar17);
        iVar12 = *(int *)((long)((long)piVar2 + uVar17) + uVar19);
        if ((0 < iVar12) &&
           (uVar22 = (ulong)*(uint *)((long)piVar2 + uVar21),
           iVar12 == *(int *)((long)((long)piVar2 + uVar21) + uVar22))) {
          lVar13 = (long)puVar26 + (ulong)uVar6 + 8;
          lVar25 = 1;
          do {
            uVar6 = *(uint *)(lVar13 + uVar17 + uVar19 + -4);
            local_98 = (long *)0x0;
            pcVar4 = (char *)(lVar13 + uVar21 + uVar22 +
                                       (ulong)*(uint *)(lVar13 + uVar21 + uVar22 + -4));
            if (*pcVar4 == '\0') {
              plVar24 = (long *)FUN_00d44228();
              if (plVar24 != (long *)0x0) {
                (**(code **)(*plVar24 + 0x18))();
              }
              plVar27 = local_98;
              if (local_98 != (long *)0x0) {
                lVar20 = *local_98;
                local_98 = plVar24;
                (**(code **)(lVar20 + 0x20))(plVar27);
                plVar24 = local_98;
              }
            }
            else {
              if (((*PTR_DAT_047d4240 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
                FUN_00100190(PTR_LAB_047d4510,puVar9,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d4240);
              }
              uVar16 = *(undefined8 *)puVar9;
              *(undefined8 *)puVar10 = uVar16;
              FUN_00cf9884(local_c0,uVar16,pcVar4);
              plVar24 = local_98;
              local_98 = (long *)0x0;
              if (plVar24 != (long *)0x0) {
                (**(code **)(*plVar24 + 0x20))();
              }
              local_98 = local_c0[0];
              plVar24 = local_98;
            }
            local_98 = plVar24;
            pcVar4 = (char *)(lVar13 + uVar17 + uVar19 + (ulong)uVar6);
            local_a0 = (long *)0x0;
            if (*pcVar4 == '\0') {
              plVar24 = (long *)FUN_00d44228();
              if (plVar24 != (long *)0x0) {
                (**(code **)(*plVar24 + 0x18))();
              }
              plVar27 = local_a0;
              if (local_a0 != (long *)0x0) {
                lVar20 = *local_a0;
                local_a0 = plVar24;
                (**(code **)(lVar20 + 0x20))(plVar27);
                plVar24 = local_a0;
              }
            }
            else {
              if (((*PTR_DAT_047d4240 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
                FUN_00100190(PTR_LAB_047d4510,puVar9,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d4240);
              }
              uVar16 = *(undefined8 *)puVar9;
              *(undefined8 *)puVar10 = uVar16;
              FUN_00cf9884(local_c0,uVar16,pcVar4);
              plVar24 = local_a0;
              local_a0 = (long *)0x0;
              if (plVar24 != (long *)0x0) {
                (**(code **)(*plVar24 + 0x20))();
              }
              local_a0 = local_c0[0];
              plVar24 = local_a0;
            }
            local_a0 = plVar24;
            if ((local_98 == (long *)0x0) || (*(char *)local_98[7] == '\0')) {
LAB_01488544:
              if (local_a0 != (long *)0x0) {
                (**(code **)(*local_a0 + 0x20))();
              }
            }
            else if (local_a0 != (long *)0x0) {
              if (*(char *)local_a0[7] != '\0') {
                FUN_0135d26c(local_c0,&local_98);
                FUN_0135d26c(auStack_e0,&local_a0);
                FUN_02142b38(plVar14,local_c0,auStack_e0);
                if (local_c8 != (long *)0x0) {
                  (**(code **)(*local_c8 + 0x20))();
                }
                if (local_a8 != (long *)0x0) {
                  (**(code **)(*local_a8 + 0x20))();
                }
              }
              goto LAB_01488544;
            }
            if (local_98 != (long *)0x0) {
              (**(code **)(*local_98 + 0x20))();
            }
            uVar17 = (ulong)*(ushort *)((long)piVar2 + (0xe - (long)*piVar2));
            uVar19 = (ulong)*(uint *)((long)piVar2 + uVar17);
            if (*(int *)((long)((long)piVar2 + uVar17) + uVar19) <= lVar25) break;
            uVar21 = (ulong)*(ushort *)((long)piVar2 + (0x10 - (long)*piVar2));
            lVar25 = lVar25 + 1;
            lVar13 = lVar13 + 4;
            uVar22 = (ulong)*(uint *)((long)piVar2 + uVar21);
          } while( true );
        }
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (local_90[0] != (long *)0x0) {
        (**(code **)(*local_90[0] + 0x20))();
      }
      goto LAB_0148826c;
    }
    lVar13 = *plVar24;
  }
  (**(code **)(lVar13 + 0xe8))(plVar24);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("ptr","Create",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
             ,0x40);
code_r0x014880a0:
  cVar8 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
  if (bVar11) {
    *plVar27 = lVar13;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_014880a8;
  goto LAB_01488098;
code_r0x014881d4:
  cVar8 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
  if (bVar11) {
    *plVar27 = lVar13;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_014881dc;
  goto LAB_014881cc;
}


