/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01962210; name: FUN_01962210
 */


void FUN_01962210(long param_1,long *param_2,long param_3)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined8 local_68;
  
  uVar15 = *(ulong *)(param_1 + 0x40);
  lVar9 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  plVar3 = (long *)(lVar9 + (uVar15 / 0x55) * 8);
  if (lVar5 == lVar9) {
    lVar13 = 0;
  }
  else {
    lVar13 = *plVar3 + (uVar15 % 0x55) * 0x30;
  }
  if (param_3 == lVar13) {
    uVar17 = 0;
LAB_019623d8:
    plVar14 = plVar3;
    lVar11 = lVar13;
  }
  else {
    lVar11 = lVar13 - *plVar3 >> 4;
    uVar17 = ((long)param_2 - (long)plVar3 >> 3) * 0x55 +
             (param_3 - *param_2 >> 4) * -0x5555555555555555 + lVar11 * 0x5555555555555555;
    if (uVar17 == 0) goto LAB_019623d8;
    uVar10 = uVar17 + lVar11 * -0x5555555555555555;
    if ((long)uVar10 < 1) {
      lVar11 = 0x54 - uVar10;
      lVar16 = SUB168(SEXT816(lVar11) * SEXT816(-0x6060606060606061),8);
      plVar14 = plVar3 + ((lVar16 >> 5) - (lVar16 >> 0x3f));
      lVar11 = plVar3[(lVar16 >> 5) - (lVar16 >> 0x3f)] + ((lVar11 / 0x55) * 0x55 - lVar11) * 0x30 +
               0xfc0;
    }
    else {
      plVar14 = plVar3 + uVar10 / 0x55;
      lVar11 = plVar3[uVar10 / 0x55] + (uVar10 % 0x55) * 0x30;
    }
  }
  lVar16 = *(long *)(param_1 + 0x48);
  auVar18 = FUN_019625f0(plVar14,lVar11);
  if (uVar17 <= lVar16 - 1U >> 1) {
    FUN_01962a40(plVar3,lVar13,plVar14,lVar11);
    puVar12 = *(undefined8 **)(lVar13 + 8);
    if (puVar12 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar12 + 3);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)puVar12 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_68 = *puVar12;
          FUN_00c44438(lVar9 + 0x8040,&local_68);
        }
      }
      else if (sVar4 == 0) {
LAB_019623ac:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
    FUN_0186d408(param_1);
    return;
  }
  uVar15 = lVar16 + uVar15;
  plVar3 = (long *)(lVar9 + (uVar15 / 0x55) * 8);
  if (lVar5 == lVar9) {
    lVar9 = 0;
  }
  else {
    lVar9 = *plVar3 + (uVar15 % 0x55) * 0x30;
  }
  lVar9 = FUN_01962760(auVar18._0_8_,auVar18._8_8_,plVar3,lVar9,plVar14,lVar11);
  puVar12 = *(undefined8 **)(lVar9 + 8);
  if (puVar12 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar12 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)puVar12 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_68 = *puVar12;
        FUN_00c44438(lVar9 + 0x8040,&local_68);
      }
    }
    else if (sVar4 == 0) goto LAB_019623ac;
  }
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
  FUN_01962688(param_1);
  return;
}


