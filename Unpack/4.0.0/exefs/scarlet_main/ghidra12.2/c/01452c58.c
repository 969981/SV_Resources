/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01452c58; name: FUN_01452c58
 */


long * FUN_01452c58(long *param_1,int *param_2)

{
  short *psVar1;
  code *pcVar2;
  int *piVar3;
  uint *puVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  code *pcVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ushort *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 *local_110;
  undefined8 uStack_108;
  code *local_100;
  code *local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  long *local_78;
  undefined8 local_68;
  
  if (param_1 != (long *)0x0) {
    if (*(ushort *)((long)param_2 - (long)*param_2) < 5) {
      local_100 = (code *)0x0;
    }
    else {
      uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
      local_100 = (code *)0x0;
      if (uVar14 != 0) {
        puVar4 = (uint *)((long)param_2 + uVar14);
        local_100 = (code *)((long)puVar4 + (ulong)*puVar4);
      }
    }
    FUN_00ea0a7c(&local_78,&local_100);
    puVar15 = (ushort *)((long)param_2 - (long)*param_2);
    if (*puVar15 < 7) {
      uVar19 = 0;
      fVar20 = 0.0;
    }
    else {
      fVar20 = 0.0;
      uVar19 = 0;
      if ((ulong)puVar15[3] != 0) {
        uVar19 = *(undefined4 *)((long)param_2 + (ulong)puVar15[3]);
      }
      if ((8 < *puVar15) && ((ulong)puVar15[4] != 0)) {
        fVar20 = *(float *)((long)param_2 + (ulong)puVar15[4]);
      }
    }
    lVar12 = FUN_01453138(param_1,param_1[1]);
    plVar10 = local_78;
    plVar13 = (long *)PTR_DAT_047d8b70;
    if (local_78 != (long *)0x0) {
      plVar13 = local_78 + 6;
    }
    lVar16 = *plVar13;
    plVar13 = (long *)PTR_PTR_047d4508;
    if (local_78 != (long *)0x0) {
      plVar13 = local_78 + 7;
    }
    lVar17 = *plVar13;
    if (local_78 == (long *)0x0) {
      lVar18 = 0;
    }
    else {
      lVar18 = local_78[8];
      (**(code **)(*local_78 + 0x18))(local_78);
    }
    *(long *)(lVar12 + 0xf0) = lVar16;
    *(long *)(lVar12 + 0xf8) = lVar17;
    *(long *)(lVar12 + 0x100) = lVar18;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    plVar13 = *(long **)(lVar12 + 0x108);
    *(long **)(lVar12 + 0x108) = plVar10;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x20))();
    }
    if (fVar20 <= 1.1920929e-07) {
      fVar20 = 1.1920929e-07;
    }
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
    FUN_014530b0(lVar12,1);
    FUN_014530b8(CONCAT44(fVar20,fVar20),lVar12);
    (**(code **)(*param_1 + 0x18))(&local_100,param_1);
    local_110 = (undefined8 *)0x0;
    uStack_108 = 0;
    if (*(long **)(local_100 + 0x10) == param_1 + 5) {
      FUN_00cbc6dc(&local_110,&local_100);
    }
    pcVar9 = local_100;
    if (local_100 != (code *)0x0) {
      pcVar2 = local_100 + 0x18;
      do {
        sVar5 = *(short *)pcVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar7) {
          *(short *)pcVar2 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        pcVar2 = local_100 + 0x1c;
        do {
          iVar11 = *(int *)pcVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar7) {
            *(int *)pcVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar16 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar16;
          local_68 = *(undefined8 *)pcVar9;
          FUN_00c44438(lVar16 + 0x8040,&local_68);
        }
      }
      else if (sVar5 == 0) goto LAB_01452ee0;
    }
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_f0 = (undefined1 *)0x0;
    puStack_e8 = (undefined1 *)0x0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e0[0] = uVar19;
    FUN_00ca1ea4(&local_d8,&local_110);
    local_100 = FUN_02b56118;
    local_f8 = FUN_021aa5e4;
    local_f0 = &LAB_021aa6f4;
    puStack_e8 = &LAB_021aa714;
    FUN_014530c0(lVar12,&local_100);
    pcVar9 = local_f8;
    if (local_f8 != (code *)0x0) {
      local_f0 = (undefined1 *)0x0;
      puStack_e8 = (undefined1 *)0x0;
      local_100 = (code *)0x0;
      local_f8 = (code *)0x0;
      (*pcVar9)(local_e0);
    }
    puVar8 = local_110;
    if (local_110 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_110 + 3);
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
        piVar3 = (int *)((long)local_110 + 0x1c);
        do {
          iVar11 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_68 = *puVar8;
          FUN_00c44438(lVar12 + 0x8040,&local_68);
        }
      }
      else if (sVar5 == 0) {
LAB_01452ee0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
  }
  return param_1;
}


