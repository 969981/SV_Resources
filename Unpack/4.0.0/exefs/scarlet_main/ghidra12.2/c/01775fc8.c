/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01775fc8; name: FUN_01775fc8
 */


void FUN_01775fc8(undefined8 *param_1,undefined8 param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *local_58;
  undefined8 local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar6 = PTR_DAT_047d3908;
  if (((*PTR_DAT_047d3908 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  uVar11 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar11;
  FUN_00c44204(&local_58,uVar11,param_2);
  puVar14 = local_58;
  if ((local_58 == (undefined8 *)0x0) || (plVar15 = (long *)local_58[1], plVar15 == (long *)0x0)) {
LAB_017760f4:
    FUN_017762e0(param_1);
LAB_01776060:
    if (puVar14 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar14 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)puVar14 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)puVar7;
          *(long *)puVar8 = lVar13;
          local_38 = *puVar14;
          FUN_00c44438(lVar13 + 0x8040,&local_38);
        }
      }
      else if (sVar3 == 0) {
LAB_017760c4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    return;
  }
  plVar12 = (long *)FUN_01776244();
LAB_01776038:
  if (plVar15 != plVar12) goto LAB_017760ec;
  puVar14 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar14 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar14 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar14 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)puVar7;
        *(long *)puVar8 = lVar13;
        local_38 = *puVar14;
        FUN_00c44438(lVar13 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) goto LAB_017760c4;
  }
  puVar9 = local_58;
  local_58 = (undefined8 *)0x0;
  puVar14 = (undefined8 *)0x0;
  *param_1 = puVar9;
  param_1[1] = param_2;
  goto LAB_01776060;
LAB_017760ec:
  plVar15 = (long *)*plVar15;
  if (plVar15 == (long *)0x0) goto LAB_017760f4;
  goto LAB_01776038;
}


