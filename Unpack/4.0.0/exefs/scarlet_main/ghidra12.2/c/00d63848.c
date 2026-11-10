/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d63848; name: FUN_00d63848
 */


undefined8 FUN_00d63848(undefined8 param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  undefined *puVar13;
  short sVar14;
  undefined8 uVar15;
  byte *pbVar16;
  long *local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  plVar10 = (long *)FUN_00d63ba4();
  if ((((*plVar10 != 0) && (*(short *)(*plVar10 + 0x1a) != 0)) && (lVar11 = *plVar10, lVar11 != 0))
     && (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar11 + 0x1a);
    sVar14 = *(short *)(lVar11 + 0x1a);
LAB_00d63970:
    sVar3 = *psVar1;
    if (sVar3 == sVar14) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00d63994;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00d63994:
      bVar5 = false;
    }
    if (!bVar5) goto code_r0x00d6399c;
    lVar11 = *(long *)(lVar11 + 0x10);
    if (lVar11 != 0) {
      plVar10 = (long *)(lVar11 + -0x28);
      FUN_01e0f388(&local_58,plVar10);
      lVar11 = *(long *)(lVar11 + 8);
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))(plVar10);
      }
      else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      goto LAB_00d63878;
    }
  }
LAB_00d63870:
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  local_58 = (long *)0x0;
LAB_00d63878:
  if (((local_58 != (long *)0x0) && (local_50 != (undefined8 *)0x0)) &&
     (*(short *)((long)local_50 + 0x1a) != 0)) {
    iVar8 = (**(code **)(*local_58 + 0x20))();
    puVar6 = PTR_DAT_047d3e30;
    if (iVar8 != 0) {
      iVar12 = 0;
      puVar13 = PTR_LAB_047d4118;
      pbVar16 = PTR_DAT_047d3e28;
      do {
        if (((local_58 == (long *)0x0) || (local_50 == (undefined8 *)0x0)) ||
           (*(short *)((long)local_50 + 0x1a) == 0)) {
          plVar10 = (long *)puVar6;
          if ((*pbVar16 & 1) == 0) {
            iVar9 = __cxa_guard_acquire(pbVar16);
            if (iVar9 == 0) {
              pbVar16 = PTR_DAT_047d3e28;
            }
            else {
              FUN_00100190(puVar13,puVar6,&PTR_LOOP_04483000);
              pbVar16 = PTR_DAT_047d3e28;
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
          }
        }
        else {
          plVar10 = (long *)(**(code **)(*local_58 + 0x28))(local_58,iVar12);
          puVar13 = PTR_LAB_047d4118;
        }
        if (*param_2 == *plVar10) {
          uVar15 = 1;
          break;
        }
        iVar12 = iVar12 + 1;
        uVar15 = 0;
      } while (iVar8 != iVar12);
      goto LAB_00d63924;
    }
  }
  uVar15 = 0;
LAB_00d63924:
  puVar7 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar14 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar14 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_28 = *puVar7;
        FUN_00c44438(lVar11 + 0x8040,&local_28);
      }
    }
    else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return uVar15;
code_r0x00d6399c:
  sVar14 = sVar3;
  if (sVar3 == 0) goto LAB_00d63870;
  goto LAB_00d63970;
}


