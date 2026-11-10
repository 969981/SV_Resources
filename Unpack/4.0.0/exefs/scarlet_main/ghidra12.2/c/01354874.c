/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01354874; name: FUN_01354874
 */


void FUN_01354874(long *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  bool bVar15;
  short sVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *local_68;
  long local_60;
  undefined8 *local_58;
  undefined8 local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar5 = PTR_DAT_047d3908;
  lVar17 = *(long *)(param_2 + 8);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  if (((*PTR_DAT_047d3908 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  puVar7 = PTR_DAT_047d3918;
  puVar6 = PTR_DAT_047d3910;
  uVar11 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar11;
  FUN_00c44204(&local_58,uVar11,lVar17);
  puVar8 = PTR_DAT_047e3008;
  if ((local_58 != (undefined8 *)0x0) &&
     (puVar18 = (undefined8 *)local_58[1], puVar18 != (undefined8 *)0x0)) {
    if (((*PTR_DAT_047e3000 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047e3000), iVar10 != 0)) {
      uVar11 = FUN_00cf27f8();
      *(undefined8 *)puVar8 = uVar11;
      __cxa_guard_release(PTR_DAT_047e3000);
    }
LAB_01354900:
    puVar9 = local_68;
    if (puVar18 != (undefined8 *)puVar8) goto LAB_01354ac0;
    local_68 = (undefined8 *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar9 + 3);
      do {
        sVar16 = *psVar1;
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 1) {
        piVar2 = (int *)((long)puVar9 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar4 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar15) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 != -1) {
          if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)puVar6;
          *(long *)puVar7 = lVar13;
          local_38 = *puVar9;
          FUN_00c44438(lVar13 + 0x8040,&local_38);
        }
      }
      else if (sVar16 == 0) goto LAB_0135499c;
    }
    local_68 = local_58;
    local_58 = (undefined8 *)0x0;
    local_60 = lVar17;
    goto LAB_0135492c;
  }
LAB_01354ac8:
  FUN_013572e8(&local_68);
LAB_0135492c:
  puVar18 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58 + 3);
    do {
      sVar16 = *psVar1;
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar15) {
        *psVar1 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)local_58 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar15) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)puVar6;
        *(long *)puVar7 = lVar13;
        local_38 = *puVar18;
        FUN_00c44438(lVar13 + 0x8040,&local_38);
      }
    }
    else if (sVar16 == 0) goto LAB_0135499c;
  }
  if (local_68 != (undefined8 *)0x0) {
    if (*(short *)((long)local_68 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_68 + 0x1a);
      sVar16 = *(short *)((long)local_68 + 0x1a);
LAB_01354a64:
      sVar3 = *psVar1;
      if (sVar3 == sVar16) {
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01354a88;
        bVar15 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01354a88:
        bVar15 = false;
      }
      if (!bVar15) goto code_r0x01354a90;
      lVar13 = local_68[2];
      if (lVar13 == 0) goto LAB_01354a9c;
      plVar12 = (long *)*param_1;
      *param_1 = 0;
      if (plVar12 != (long *)0x0) {
        lVar14 = plVar12[6];
        psVar1 = (short *)(lVar14 + 0x1a);
        do {
          sVar16 = *psVar1;
          cVar4 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar15) {
            *psVar1 = sVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar16 == 1) {
          *(undefined8 *)(lVar14 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))();
        }
        else if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      *param_1 = lVar13 + -0x28;
      param_1[1] = lVar17;
LAB_01354a98:
      if (local_68 == (undefined8 *)0x0) {
        return;
      }
    }
LAB_01354a9c:
    puVar18 = local_68;
    psVar1 = (short *)(local_68 + 3);
    do {
      sVar16 = *psVar1;
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar15) {
        *psVar1 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)local_68 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar15) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)puVar6;
        *(long *)puVar7 = lVar17;
        local_38 = *puVar18;
        FUN_00c44438(lVar17 + 0x8040,&local_38);
      }
    }
    else if (sVar16 == 0) {
LAB_0135499c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_01354ac0:
  puVar18 = (undefined8 *)*puVar18;
  if (puVar18 == (undefined8 *)0x0) goto LAB_01354ac8;
  goto LAB_01354900;
code_r0x01354a90:
  sVar16 = sVar3;
  if (sVar3 == 0) goto LAB_01354a98;
  goto LAB_01354a64;
}


