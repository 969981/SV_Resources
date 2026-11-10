/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f004fc; name: FUN_00f004fc
 */


void FUN_00f004fc(long *param_1,long *param_2,byte *param_3)

{
  ulong uVar1;
  short *psVar2;
  int *piVar3;
  undefined8 *puVar4;
  byte bVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  long lVar11;
  long *extraout_x1;
  long lVar12;
  long *plVar13;
  byte *pbVar14;
  ulong uVar15;
  short sVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  long *local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *plStack_70;
  long *local_68;
  long *local_60;
  long *plStack_58;
  long local_38;
  
  pbVar14 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar14 = param_3 + 1;
  }
  if (pbVar14 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar20 = *(undefined1 **)PTR_DAT_047d3e30;
    plVar17 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x18))(plVar17);
    }
LAB_00f0056c:
    if (puVar20 == (undefined1 *)0x5d950d67a31673a9 && param_2[2] != 0) goto LAB_00f006ec;
  }
  else {
    bVar5 = *pbVar14;
    puVar20 = &DAT_cbf29ce484222645;
    if (bVar5 != 0) {
      plVar17 = (long *)0x0;
      do {
        pbVar14 = pbVar14 + 1;
        puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar14;
      } while (bVar5 != 0);
      goto LAB_00f0056c;
    }
    plVar17 = (long *)0x0;
  }
  if (((*PTR_DAT_047d4df8 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar12 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar12;
  if ((*param_2 != 0) && (plVar13 = *(long **)(lVar12 + 0xb1e0), plVar13 != (long *)0x0)) {
    do {
      if ((undefined1 *)plVar13[2] == puVar20) {
        local_a0 = (long *)(*(long *)(param_3 + 0x20) - (long)*(long **)(param_3 + 0x18));
        local_78 = *(long **)(param_3 + 0x18);
        uVar9 = (*(code *)plVar13[6])(plVar13 + 10,param_2,&local_78,&local_a0);
        memcpy(&local_a0,param_2,0x28);
        switch(uVar9) {
        case 1:
          local_98 = extraout_x1;
          break;
        case 2:
          local_90 = extraout_x1;
          break;
        case 3:
          local_88 = extraout_x1;
          break;
        case 4:
          local_80 = extraout_x1;
        }
        goto switchD_00f00658_default;
      }
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  memcpy(&local_a0,param_2,0x28);
switchD_00f00658_default:
  if (local_90 == (long *)0x0) {
    plVar13 = (long *)0x0;
  }
  else {
    FUN_00d2bee4(&local_78);
    local_a0 = local_78;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))();
    }
    plVar13 = local_90;
  }
  if ((long *)param_2[2] != plVar13) {
    if (plVar13[0x71] != 0) {
      if (*(short *)(plVar13[0x71] + 0x1a) != 0) goto LAB_00f00698;
      plVar13 = local_90;
    }
    (**(code **)(*plVar13 + 0x18))(&local_78,plVar13);
    local_b0 = (long *)0x0;
    uStack_a8 = 0;
    plVar19 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      plVar19 = plVar13 + 5;
    }
    if ((long *)local_78[2] == plVar19) {
      FUN_00cbc6dc(&local_b0,&local_78);
    }
    plVar13 = local_78;
    if (local_78 != (long *)0x0) {
      plVar19 = local_78 + 3;
      do {
        sVar16 = (short)*plVar19;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar8) {
          *(short *)plVar19 = sVar16 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar16 == 1) {
        piVar3 = (int *)((long)local_78 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_38 = *plVar13;
          FUN_00c44438(lVar12 + 0x8040,&local_38);
        }
      }
      else if (sVar16 == 0) goto LAB_00f0072c;
    }
    puVar21 = (undefined8 *)param_1[1];
    plVar13 = param_1 + 3;
    if (puVar21 < (undefined8 *)param_1[2]) {
      lVar12 = *plVar13;
      if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        *puVar21 = 0;
        puVar21[1] = 0;
        FUN_00ca1ea4(puVar21,&local_b0);
      }
      else {
        if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00f00e98;
        *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar12;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        *puVar21 = 0;
        puVar21[1] = 0;
        FUN_00ca1ea4(puVar21,&local_b0);
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      }
      param_1[1] = (long)(puVar21 + 2);
    }
    else {
      lVar12 = (long)puVar21 - *param_1 >> 4;
      uVar1 = lVar12 + 1;
      if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar11 = param_1[2] - *param_1;
      uVar15 = lVar11 >> 3;
      local_60 = (long *)0x0;
      if (uVar1 <= uVar15) {
        uVar1 = uVar15;
      }
      if (0x7fffffffffffffe < (ulong)(lVar11 >> 4)) {
        uVar1 = 0xfffffffffffffff;
      }
      plStack_58 = plVar13;
      if (uVar1 == 0) {
        plVar19 = (long *)0x0;
      }
      else {
        plVar19 = (long *)(**(code **)(*(long *)*plVar13 + 0x10))((long *)*plVar13,uVar1 << 4,8);
        if (plVar19 == (long *)0x0) {
          (**(code **)(*(long *)*plVar13 + 0xe8))();
        }
      }
      plVar18 = plVar19 + lVar12 * 2;
      local_60 = plVar19 + uVar1 * 2;
      lVar12 = *plVar13;
      local_78 = plVar19;
      plStack_70 = plVar18;
      local_68 = plVar18;
      if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        *plVar18 = 0;
        plVar18[1] = 0;
        FUN_00ca1ea4(plVar18,&local_b0);
      }
      else {
        if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_00f00e98:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar12;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        *plVar18 = 0;
        plVar18[1] = 0;
        FUN_00ca1ea4(plVar18,&local_b0);
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        plVar18 = local_68;
      }
      local_68 = plVar18 + 2;
      FUN_00f00f10(param_1,&local_78);
      FUN_00f0107c(&local_78);
    }
    plVar13 = local_b0;
    if (local_b0 != (long *)0x0) {
      plVar19 = local_b0 + 3;
      do {
        sVar16 = (short)*plVar19;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar8) {
          *(short *)plVar19 = sVar16 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar16 == 1) {
        piVar3 = (int *)((long)local_b0 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_78 = (long *)*plVar13;
          FUN_00c44438(lVar12 + 0x8040,&local_78);
        }
      }
      else if (sVar16 == 0) goto LAB_00f0072c;
    }
  }
LAB_00f00698:
  plVar19 = local_90;
  plVar18 = local_90 + 5;
  (**(code **)(*local_90 + 0x18))(&local_78,local_90);
  local_b0 = (long *)0x0;
  uStack_a8 = 0;
  plVar13 = (long *)0x0;
  if (plVar19 != (long *)0x0) {
    plVar13 = plVar18;
  }
  if ((long *)local_78[2] == plVar13) {
    FUN_00cbc6dc(&local_b0,&local_78);
  }
  plVar13 = local_78;
  if (local_78 != (long *)0x0) {
    plVar19 = local_78 + 3;
    do {
      sVar16 = (short)*plVar19;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar8) {
        *(short *)plVar19 = sVar16 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar16 == 1) {
      piVar3 = (int *)((long)local_78 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_38 = *plVar13;
        FUN_00c44438(lVar12 + 0x8040,&local_38);
      }
    }
    else if (sVar16 == 0) goto LAB_00f0072c;
  }
  plVar13 = local_b0;
  if (local_b0 != (long *)0x0) {
    if (*(short *)((long)local_b0 + 0x1a) != 0) {
      psVar2 = (short *)((long)local_b0 + 0x1a);
      sVar16 = *(short *)((long)local_b0 + 0x1a);
      do {
        sVar6 = *psVar2;
        if (sVar6 == sVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar8) {
            *psVar2 = sVar16 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_00f00c7c;
          bVar8 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f00c7c:
          bVar8 = false;
        }
        if (bVar8) {
          plVar19 = (long *)0x0;
          if (local_b0[2] != 0) {
            plVar19 = (long *)(local_b0[2] + -0x28);
          }
          goto LAB_00f00ca4;
        }
        sVar16 = sVar6;
      } while (sVar6 != 0);
    }
    plVar19 = (long *)0x0;
LAB_00f00ca4:
    plVar18 = local_b0 + 3;
    do {
      sVar16 = (short)*plVar18;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar8) {
        *(short *)plVar18 = sVar16 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar16 == 1) {
      piVar3 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_78 = (long *)*plVar13;
        FUN_00c44438(lVar12 + 0x8040,&local_78);
      }
    }
    else if (sVar16 == 0) {
LAB_00f0072c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar19 != (long *)0x0) {
      puVar21 = *(undefined8 **)(param_3 + 0x30);
      puVar4 = *(undefined8 **)(param_3 + 0x38);
      if ((puVar21 != puVar4) && (FUN_00f004fc(param_1,&local_a0,*puVar21), puVar21 + 1 != puVar4))
      {
        FUN_00f004fc(param_1,&local_a0,puVar21[1]);
        for (puVar21 = puVar21 + 2; puVar21 != puVar4; puVar21 = puVar21 + 1) {
          FUN_00f004fc(param_1,&local_a0,*puVar21);
        }
      }
      lVar12 = plVar19[6];
      psVar2 = (short *)(lVar12 + 0x1a);
      do {
        sVar16 = *psVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar16 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar16 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*plVar19 + 0x50))(plVar19);
      }
      else if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
LAB_00f006ec:
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
  return;
}


