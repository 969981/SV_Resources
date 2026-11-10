/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0223a1b0; name: FUN_0223a1b0
 */


void FUN_0223a1b0(undefined8 param_1,undefined8 *param_2,long param_3)

{
  short *psVar1;
  undefined4 uVar2;
  short sVar3;
  char cVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  bool bVar19;
  short sVar20;
  ushort *puVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  code *local_148;
  undefined1 auStack_130 [104];
  undefined8 *local_c8;
  undefined8 uStack_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_48;
  
  local_148 = (code *)0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(param_3 + 0x20,auStack_130);
    local_148 = *(code **)(param_3 + 8);
  }
  local_90 = param_2[0x22];
  uStack_88 = param_2[0x23];
  local_80 = param_2[0x24];
  local_78 = (long *)param_2[0x25];
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x18))();
  }
  if ((code *)param_2[2] == (code *)0x0) {
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
  }
  else {
    (*(code *)param_2[2])(&local_70,param_2 + 6,&local_90);
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_70 == (undefined8 *)0x0) goto LAB_0223a260;
  if (*(short *)((long)local_70 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_70 + 0x1a);
    sVar20 = *(short *)((long)local_70 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar20) {
        cVar4 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar19) {
          *psVar1 = sVar20 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0223a2e8;
        bVar19 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0223a2e8:
        bVar19 = false;
      }
      if (bVar19) {
        lVar16 = local_70[2];
        if (lVar16 == 0) goto LAB_0223a438;
        lVar11 = FUN_00ded3a0(lVar16 + 0xe0,&local_b8);
        if (lVar11 == 0) goto LAB_0223a420;
        piVar15 = (int *)*param_2;
        puVar21 = (ushort *)((long)piVar15 - (long)*piVar15);
        if (*puVar21 < 0xb) {
          iVar18 = 0;
          iVar10 = 0;
          iVar9 = 0;
          if (8 < *puVar21) goto LAB_0223a348;
        }
        else {
          iVar9 = 0;
          if ((ulong)puVar21[5] != 0) {
            iVar9 = *(int *)((long)piVar15 + (ulong)puVar21[5]);
          }
LAB_0223a348:
          iVar18 = iVar9;
          if ((ulong)puVar21[4] == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = *(int *)((long)piVar15 + (ulong)puVar21[4]);
          }
        }
        if (iVar18 - iVar10 != 1) {
          uVar2 = *(undefined4 *)(lVar11 + 0x18c);
          puVar13 = (undefined8 *)FUN_01235878(param_2 + 0x2b,&DAT_03d63508);
          *(undefined4 *)(puVar13 + 2) = uVar2;
          *puVar13 = PTR_LAB_047dcdf0;
          goto LAB_0223a420;
        }
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        plVar23 = *(long **)PTR_DAT_047d3e30;
        plVar24 = *(long **)(PTR_DAT_047d3e30 + 8);
        plVar25 = *(long **)(PTR_DAT_047d3e30 + 0x10);
        plVar22 = *(long **)(PTR_DAT_047d3e30 + 0x18);
        if (plVar22 != (long *)0x0) {
          (**(code **)(*plVar22 + 0x18))(plVar22);
        }
        FUN_01340a44(&local_b8,param_2,1);
        plVar8 = local_98;
        plVar7 = local_a0;
        plVar6 = local_a8;
        plVar5 = local_b0;
        if ((char)local_b8 != '\0') {
          if (local_98 != (long *)0x0) {
            (**(code **)(*local_98 + 0x18))(local_98);
          }
          if (plVar22 != (long *)0x0) {
            (**(code **)(*plVar22 + 0x20))(plVar22);
          }
          plVar22 = plVar8;
          plVar23 = plVar5;
          plVar24 = plVar6;
          plVar25 = plVar7;
          if ((char)local_b8 != '\0') {
            if (local_98 != (long *)0x0) {
              (**(code **)(*local_98 + 0x20))();
            }
            local_b8 = (long *)((ulong)local_b8 & 0xffffffffffffff00);
          }
        }
        if ((char)*plVar24 == '\0') {
          uVar12 = FUN_021237ec(param_2,0x100000001);
          if ((uVar12 & 0xff) != 0) {
            *(float *)(lVar11 + 0x18c) = ((float)(uVar12 >> 0x20) * 3.1415927) / 180.0;
          }
          goto LAB_0223a41c;
        }
        local_b8 = plVar23;
        local_b0 = plVar24;
        local_a8 = plVar25;
        local_a0 = plVar22;
        if (plVar22 != (long *)0x0) {
          (**(code **)(*plVar22 + 0x18))(plVar22);
        }
        if ((code *)param_2[2] == (code *)0x0) {
          local_c8 = (undefined8 *)0x0;
          uStack_c0 = 0;
        }
        else {
          (*(code *)param_2[2])(&local_c8,param_2 + 6,&local_b8);
        }
        if (local_a0 != (long *)0x0) {
          (**(code **)(*local_a0 + 0x20))();
        }
        if (local_c8 == (undefined8 *)0x0) goto LAB_0223a41c;
        if (*(short *)((long)local_c8 + 0x1a) == 0) goto LAB_0223a6d0;
        psVar1 = (short *)((long)local_c8 + 0x1a);
        sVar20 = *(short *)((long)local_c8 + 0x1a);
        goto LAB_0223a5c4;
      }
      sVar20 = sVar3;
    } while (sVar3 != 0);
    goto LAB_0223a434;
  }
  goto LAB_0223a438;
  while (sVar20 = sVar3, sVar3 != 0) {
LAB_0223a5c4:
    sVar3 = *psVar1;
    if (sVar3 == sVar20) {
      cVar4 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar19) {
        *psVar1 = sVar20 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_0223a5e8;
      bVar19 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0223a5e8:
      bVar19 = false;
    }
    if (bVar19) {
      lVar17 = local_c8[2];
      if (lVar17 == 0) goto LAB_0223a6d0;
      lVar14 = FUN_00ded3a0(lVar17 + 0xe0,&local_48);
      if (lVar14 != 0) {
        *(undefined4 *)(lVar11 + 0x18c) = *(undefined4 *)(lVar14 + 0x18c);
      }
      (**(code **)(*(long *)(lVar17 + -0x28) + 0x60))((long *)(lVar17 + -0x28));
      break;
    }
  }
  if (local_c8 != (undefined8 *)0x0) {
LAB_0223a6d0:
    puVar13 = local_c8;
    psVar1 = (short *)(local_c8 + 3);
    do {
      sVar20 = *psVar1;
      cVar4 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar19) {
        *psVar1 = sVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar20 == 1) {
      piVar15 = (int *)((long)local_c8 + 0x1c);
      do {
        iVar10 = *piVar15;
        cVar4 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar19) {
          *piVar15 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = *puVar13;
        FUN_00c44438(lVar11 + 0x8040,&local_48);
      }
    }
    else if (sVar20 == 0) goto LAB_0223a458;
  }
LAB_0223a41c:
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x20))(plVar22);
  }
LAB_0223a420:
  (**(code **)(*(long *)(lVar16 + -0x28) + 0x60))((long *)(lVar16 + -0x28));
LAB_0223a434:
  if (local_70 == (undefined8 *)0x0) goto LAB_0223a260;
LAB_0223a438:
  puVar13 = local_70;
  psVar1 = (short *)(local_70 + 3);
  do {
    sVar20 = *psVar1;
    cVar4 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar19) {
      *psVar1 = sVar20 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar20 == 1) {
    piVar15 = (int *)((long)local_70 + 0x1c);
    do {
      iVar10 = *piVar15;
      cVar4 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar19) {
        *piVar15 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar16 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar16;
      local_c8 = (undefined8 *)*puVar13;
      FUN_00c44438(lVar16 + 0x8040,&local_c8);
    }
  }
  else if (sVar20 == 0) {
LAB_0223a458:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
LAB_0223a260:
  if (local_148 != (code *)0x0) {
    (*local_148)(auStack_130);
  }
  return;
}


