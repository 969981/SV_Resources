/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c3818; name: FUN_014c3818
 */


void FUN_014c3818(long *param_1)

{
  short *psVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 local_68;
  
  *param_1 = (long)&DAT_0459c4c8;
  param_1[4] = (long)&PTR_LAB_0459c540;
  param_1[5] = (long)&DAT_0459c590;
  FUN_014c426c(param_1 + 0x7c,param_1[0x82]);
  lVar14 = param_1[0x7c];
  param_1[0x7c] = 0;
  if (lVar14 != 0) {
    lVar12 = param_1[0x7d];
    plVar16 = (long *)param_1[0x7e];
    uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar10 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar14,lVar12 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar16,lVar14,lVar12 << 3,8);
    }
  }
  plVar16 = (long *)param_1[0x74];
  if (plVar16 != (long *)0x0) {
    plVar15 = (long *)param_1[0x75];
    if (plVar15 == plVar16) {
      plVar15 = plVar16;
    }
    else {
      do {
        plVar15 = plVar15 + -1;
        if ((long *)*plVar15 != (long *)0x0) {
          (**(code **)(*(long *)*plVar15 + 0x20))();
        }
      } while (plVar16 != plVar15);
      plVar15 = (long *)param_1[0x74];
    }
    lVar14 = param_1[0x76];
    param_1[0x75] = (long)plVar16;
    plVar16 = (long *)param_1[0x77];
    uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar10 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,lVar14 - (long)plVar15,8);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,lVar14 - (long)plVar15,8);
    }
  }
  pcVar13 = (code *)param_1[0x65];
  if (pcVar13 != (code *)0x0) {
    param_1[0x67] = 0;
    param_1[0x66] = 0;
    param_1[0x65] = 0;
    param_1[100] = 0;
    (*pcVar13)(param_1 + 0x68);
  }
  puVar8 = PTR_DAT_047d3918;
  puVar3 = PTR_DAT_047d3910;
  puVar2 = PTR_DAT_047d3908;
  plVar16 = (long *)param_1[0x5d];
  while (plVar16 != (long *)0x0) {
    plVar15 = (long *)*plVar16;
    puVar18 = (undefined8 *)plVar16[3];
    if (puVar18 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar18 + 3);
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
        piVar4 = (int *)((long)puVar18 + 0x1c);
        do {
          iVar9 = *piVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar7) {
            *piVar4 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 != -1) {
          if (((*puVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar2), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,puVar3,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar2);
          }
          lVar14 = *(long *)puVar3;
          *(long *)puVar8 = lVar14;
          local_68 = *puVar18;
          FUN_00c44438(lVar14 + 0x8040,&local_68);
        }
      }
      else if (sVar5 == 0) goto LAB_014c3b90;
    }
    if ((long *)plVar16[2] != (long *)0x0) {
      (**(code **)(*(long *)plVar16[2] + 0x20))();
    }
    plVar19 = (long *)param_1[0x5e];
    uVar10 = (**(code **)(*plVar19 + 0xf8))(plVar19);
    if (((uVar10 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar19 + 0x18))(plVar19,plVar16,0x28,8);
      plVar16 = plVar15;
    }
    else {
      FUN_00c48fe8(plVar19,plVar16,0x28,8);
      plVar16 = plVar15;
    }
  }
  lVar14 = param_1[0x57];
  param_1[0x57] = 0;
  if (lVar14 != 0) {
    lVar12 = param_1[0x58];
    plVar16 = (long *)param_1[0x59];
    uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar10 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar14,lVar12 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar16,lVar14,lVar12 << 3,8);
    }
  }
  plVar16 = (long *)param_1[0x50];
  if (plVar16 != (long *)0x0) {
    plVar15 = (long *)*plVar16;
    if ((long *)plVar16[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar16[5] + 0x20))();
    }
    plVar19 = (long *)param_1[0x51];
    uVar10 = (**(code **)(*plVar19 + 0xf8))(plVar19);
    if (((uVar10 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar19 + 0x18))(plVar19,plVar16,0x38,8);
    }
    else {
      FUN_00c48fe8(plVar19,plVar16,0x38,8);
    }
    while (plVar15 != (long *)0x0) {
      plVar16 = (long *)*plVar15;
      if ((long *)plVar15[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar15[5] + 0x20))();
      }
      plVar19 = (long *)param_1[0x51];
      uVar10 = (**(code **)(*plVar19 + 0xf8))(plVar19);
      if (((uVar10 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
        (**(code **)(*plVar19 + 0x18))(plVar19,plVar15,0x38,8);
        plVar15 = plVar16;
      }
      else {
        FUN_00c48fe8(plVar19,plVar15,0x38,8);
        plVar15 = plVar16;
      }
    }
  }
  lVar14 = param_1[0x4a];
  param_1[0x4a] = 0;
  if (lVar14 != 0) {
    FUN_00d3ab34(param_1 + 0x4b);
  }
  lVar14 = param_1[0x46];
  param_1[0x46] = 0;
  if (lVar14 != 0) {
    plVar16 = (long *)param_1[0x47];
    lVar12 = param_1[0x48];
    lVar17 = param_1[0x49];
    uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar14,lVar12,lVar17);
    }
    else {
      FUN_00c48fe8(plVar16,lVar14,lVar12,lVar17);
    }
  }
  pcVar13 = (code *)param_1[0x37];
  if (pcVar13 != (code *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    (*pcVar13)(param_1 + 0x3a);
  }
  FUN_014c3f94(param_1 + 0x2d);
  FUN_014c3f94(param_1 + 0x26);
  FUN_014c3f94(param_1 + 0x1f);
  FUN_00db239c(param_1 + 0x14);
  lVar14 = param_1[10];
  if (lVar14 != 0) {
    lVar17 = param_1[0xb];
    lVar12 = lVar14;
    if (lVar17 != lVar14) {
      if (*(long **)(lVar17 + -8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar17 + -8) + 0x20))();
      }
      if (lVar17 + -0x20 != lVar14) {
        do {
          if (*(long **)(lVar17 + -0x28) != (long *)0x0) {
            (**(code **)(**(long **)(lVar17 + -0x28) + 0x20))();
          }
          lVar17 = lVar17 + -0x20;
        } while (lVar14 + 0x20 != lVar17);
      }
      lVar12 = param_1[10];
    }
    lVar17 = param_1[0xc];
    plVar16 = (long *)param_1[0xd];
    param_1[0xb] = lVar14;
    uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar10 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar12,lVar17 - lVar12,8);
    }
    else {
      FUN_00c48fe8(plVar16,lVar12,lVar17 - lVar12,8);
    }
  }
  plVar16 = (long *)param_1[8];
  if (plVar16 != (long *)0x0) {
    lVar14 = plVar16[6];
    psVar1 = (short *)(lVar14 + 0x1a);
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
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*plVar16 + 0x50))();
    }
    else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  puVar2 = PTR_DAT_047d8c78 + 0x88;
  puVar3 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar2;
  param_1[5] = (long)puVar3;
  puVar18 = (undefined8 *)param_1[6];
  if (puVar18 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar18 + 3);
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
      piVar4 = (int *)((long)puVar18 + 0x1c);
      do {
        iVar9 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_68 = *puVar18;
        FUN_00c44438(lVar14 + 0x8040,&local_68);
      }
    }
    else if (sVar5 == 0) {
LAB_014c3b90:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


