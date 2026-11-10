/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01527f9c; name: FUN_01527f9c
 */


/* WARNING: Removing unreachable block (ram,0x0152847c) */
/* WARNING: Removing unreachable block (ram,0x01528480) */
/* WARNING: Removing unreachable block (ram,0x01528488) */
/* WARNING: Removing unreachable block (ram,0x01528490) */
/* WARNING: Removing unreachable block (ram,0x0152862c) */
/* WARNING: Removing unreachable block (ram,0x01528634) */
/* WARNING: Removing unreachable block (ram,0x01528638) */
/* WARNING: Removing unreachable block (ram,0x01528640) */
/* WARNING: Removing unreachable block (ram,0x01528648) */
/* WARNING: Removing unreachable block (ram,0x01528918) */
/* WARNING: Removing unreachable block (ram,0x01528928) */
/* WARNING: Removing unreachable block (ram,0x01528650) */
/* WARNING: Removing unreachable block (ram,0x01528498) */
/* WARNING: Removing unreachable block (ram,0x0152849c) */

void FUN_01527f9c(long param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  byte *pbVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  bool bVar23;
  long *plVar24;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  
  plVar24 = (long *)(param_1 + 0xb290);
  lVar17 = *plVar24;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 != lVar17) {
    lVar11 = nn::os::GetCurrentThread();
LAB_01527fe4:
    if (*plVar24 == 0) goto code_r0x01527fec;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb298));
    do {
      if (*plVar24 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb298));
          while (*plVar24 == 0) {
            cVar5 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar23) {
              *plVar24 = lVar11;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01527ff4;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar23) {
        *plVar24 = lVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01527ff4:
    bVar23 = false;
    goto LAB_01527ffc;
  }
  plVar24 = (long *)0x0;
  bVar23 = true;
LAB_01527ffc:
  (**(code **)(*param_2 + 0x18))(&local_80,param_2);
  puVar7 = PTR_DAT_047d3908;
  local_90 = (undefined8 *)0x0;
  local_88 = 0;
  plVar19 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    plVar19 = param_2 + 5;
  }
  if ((long *)local_80[2] == plVar19) {
    do {
      uVar20 = local_78;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(&local_78,0x10);
      if (bVar4) {
        local_78 = 0;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    puVar9 = PTR_DAT_047d3918;
    puVar8 = PTR_DAT_047d3910;
    uVar12 = *(undefined8 *)PTR_DAT_047d3910;
    *(undefined8 *)PTR_DAT_047d3918 = uVar12;
    FUN_00c44204(&local_70,uVar12,uVar20);
    puVar18 = local_80;
    local_80 = (undefined8 *)0x0;
    if (puVar18 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar18 + 3);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)puVar18 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)puVar8;
          *(long *)puVar9 = lVar11;
          local_68 = *puVar18;
          FUN_00c44438(lVar11 + 0x8040,&local_68);
        }
      }
      else if (sVar3 == 0) goto LAB_015284c0;
    }
    puVar18 = local_90;
    if (local_70 == (undefined8 *)0x0) {
      FUN_01528cf8(&local_90);
    }
    else {
      local_90 = (undefined8 *)0x0;
      if (puVar18 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar18 + 3);
        do {
          sVar3 = *psVar1;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)puVar18 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*puVar7 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)puVar8;
            *(long *)puVar9 = lVar11;
            local_68 = *puVar18;
            FUN_00c44438(lVar11 + 0x8040,&local_68);
          }
        }
        else if (sVar3 == 0) goto LAB_015284c0;
      }
      local_90 = local_70;
      local_70 = (undefined8 *)0x0;
      local_88 = uVar20;
    }
  }
  puVar18 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_80 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_80 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_68 = *puVar18;
        FUN_00c44438(lVar11 + 0x8040,&local_68);
      }
    }
    else if (sVar3 == 0) goto LAB_015284c0;
  }
  puVar18 = *(undefined8 **)(param_1 + 0xb2b0);
  if (puVar18 < *(undefined8 **)(param_1 + 0xb2b8)) {
    uVar20 = *(undefined8 *)(param_1 + 0xb2c0);
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      *puVar18 = 0;
      puVar18[1] = 0;
      FUN_015289d4(puVar18,&local_90);
    }
    else {
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_015289a4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar20;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      *puVar18 = 0;
      puVar18[1] = 0;
      FUN_015289d4(puVar18,&local_90);
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0xb2b0) = puVar18 + 2;
  }
  else {
    lVar11 = (long)puVar18 - *(long *)(param_1 + 0xb2a8) >> 4;
    uVar13 = lVar11 + 1;
    if (uVar13 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar17 = (long)*(undefined8 **)(param_1 + 0xb2b8) - *(long *)(param_1 + 0xb2a8);
    uVar15 = lVar17 >> 3;
    if (uVar13 <= uVar15) {
      uVar13 = uVar15;
    }
    if (0x7fffffffffffffe < (ulong)(lVar17 >> 4)) {
      uVar13 = 0xfffffffffffffff;
    }
    if (uVar13 == 0) {
      lVar17 = 0;
    }
    else {
      lVar17 = (**(code **)(**(long **)(param_1 + 0xb2c0) + 0x10))
                         (*(long **)(param_1 + 0xb2c0),uVar13 << 4,8);
      if (lVar17 == 0) {
        (**(code **)(**(long **)(param_1 + 0xb2c0) + 0xe8))();
      }
    }
    uVar20 = *(undefined8 *)(param_1 + 0xb2c0);
    puVar18 = (undefined8 *)(lVar17 + lVar11 * 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      *puVar18 = 0;
      puVar18[1] = 0;
      FUN_015289d4(puVar18,&local_90);
    }
    else {
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_015289a4;
      *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar20;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      *puVar18 = 0;
      puVar18[1] = 0;
      FUN_015289d4(puVar18,&local_90);
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    puVar21 = *(undefined8 **)(param_1 + 0xb2a8);
    puVar22 = *(undefined8 **)(param_1 + 0xb2b0);
    puVar6 = puVar18;
    if (puVar22 == puVar21) {
      puVar14 = puVar18;
      puVar22 = puVar21;
    }
    else {
      do {
        puVar14 = puVar6 + -2;
        uVar20 = *(undefined8 *)(param_1 + 0xb2c0);
        puVar22 = puVar22 + -2;
        if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar11 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar11 == 0) {
          *puVar14 = 0;
          puVar6[-1] = 0;
          FUN_015289d4(puVar14,puVar22);
        }
        else {
          if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_015289a4;
          *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar20;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
          *puVar14 = 0;
          puVar6[-1] = 0;
          FUN_015289d4(puVar14,puVar22);
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        }
        puVar6 = puVar14;
      } while (puVar21 != puVar22);
      puVar21 = *(undefined8 **)(param_1 + 0xb2b0);
      puVar22 = *(undefined8 **)(param_1 + 0xb2a8);
    }
    lVar11 = *(long *)(param_1 + 0xb2b8);
    *(undefined8 **)(param_1 + 0xb2a8) = puVar14;
    *(undefined8 **)(param_1 + 0xb2b0) = puVar18 + 2;
    *(ulong *)(param_1 + 0xb2b8) = lVar17 + uVar13 * 0x10;
    puVar7 = PTR_DAT_047d3918;
    if (puVar21 != puVar22) {
      pbVar16 = PTR_DAT_047d3908;
      plVar19 = (long *)PTR_DAT_047d3910;
      do {
        puVar21 = puVar21 + -2;
        puVar18 = (undefined8 *)*puVar21;
        if (puVar18 != (undefined8 *)0x0) {
          psVar1 = (short *)(puVar18 + 3);
          do {
            sVar3 = *psVar1;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar3 == 1) {
            piVar2 = (int *)((long)puVar18 + 0x1c);
            do {
              iVar10 = *piVar2;
              cVar5 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar10 != -1) {
              if (((*pbVar16 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), plVar19 = (long *)PTR_DAT_047d3910
                 , iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
                plVar19 = (long *)PTR_DAT_047d3910;
              }
              lVar17 = *plVar19;
              *(long *)puVar7 = lVar17;
              local_80 = (undefined8 *)*puVar18;
              FUN_00c44438(lVar17 + 0x8040,&local_80);
              pbVar16 = PTR_DAT_047d3908;
            }
          }
          else if (sVar3 == 0) goto LAB_015284c0;
        }
      } while (puVar21 != puVar22);
    }
    if (puVar22 != (undefined8 *)0x0) {
      plVar19 = *(long **)(param_1 + 0xb2c0);
      lVar11 = lVar11 - (long)puVar22;
      uVar13 = (**(code **)(*plVar19 + 0xf8))(plVar19);
      if (((uVar13 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
        (**(code **)(*plVar19 + 0x18))(plVar19,puVar22,lVar11,8);
      }
      else {
        FUN_00c48fe8(plVar19,puVar22,lVar11,8);
      }
    }
  }
  puVar18 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_90 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_90 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_80 = (undefined8 *)*puVar18;
        FUN_00c44438(lVar11 + 0x8040,&local_80);
      }
    }
    else if (sVar3 == 0) {
LAB_015284c0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (!bVar23) {
    *plVar24 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar24 + 1));
  }
  return;
code_r0x01527fec:
  cVar5 = '\x01';
  bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar23) {
    *plVar24 = lVar11;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_01527ff4;
  goto LAB_01527fe4;
}


