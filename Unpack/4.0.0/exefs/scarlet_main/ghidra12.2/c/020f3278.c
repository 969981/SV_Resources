/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020f3278; name: FUN_020f3278
 */


void FUN_020f3278(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 local_28;
  
  *param_1 = (long)&PTR_FUN_04582dd8;
  param_1[4] = (long)&PTR_LAB_04582e68;
  param_1[5] = (long)&DAT_04582eb8;
  plVar9 = param_1 + 0x8d2;
  lVar10 = -0xc00;
  do {
    if ((char)*plVar9 != '\0') {
      *(undefined1 *)plVar9 = 0;
    }
    if ((char)plVar9[-6] != '\0') {
      *(undefined1 *)(plVar9 + -6) = 0;
    }
    plVar9 = plVar9 + -0xc;
    lVar10 = lVar10 + 0x60;
  } while (lVar10 != 0);
  FUN_020f34e8(param_1 + 0x638);
  if ((char)param_1[0x635] != '\0') {
    *(undefined1 *)(param_1 + 0x635) = 0;
  }
  if ((char)param_1[0x632] != '\0') {
    *(undefined1 *)(param_1 + 0x632) = 0;
  }
  if ((char)param_1[0x62f] != '\0') {
    *(undefined1 *)(param_1 + 0x62f) = 0;
  }
  if ((char)param_1[0x62c] != '\0') {
    *(undefined1 *)(param_1 + 0x62c) = 0;
  }
  if ((char)param_1[0x629] != '\0') {
    *(undefined1 *)(param_1 + 0x629) = 0;
  }
  if ((char)param_1[0x626] != '\0') {
    *(undefined1 *)(param_1 + 0x626) = 0;
  }
  if ((char)param_1[0x623] != '\0') {
    *(undefined1 *)(param_1 + 0x623) = 0;
  }
  if ((char)param_1[0x620] != '\0') {
    *(undefined1 *)(param_1 + 0x620) = 0;
  }
  if ((char)param_1[0x61d] != '\0') {
    *(undefined1 *)(param_1 + 0x61d) = 0;
  }
  if ((char)param_1[0x61a] != '\0') {
    *(undefined1 *)(param_1 + 0x61a) = 0;
  }
  if ((char)param_1[0x617] != '\0') {
    *(undefined1 *)(param_1 + 0x617) = 0;
  }
  if ((char)param_1[0x614] != '\0') {
    *(undefined1 *)(param_1 + 0x614) = 0;
  }
  if ((char)param_1[0x611] != '\0') {
    *(undefined1 *)(param_1 + 0x611) = 0;
  }
  if ((char)param_1[0x60e] != '\0') {
    *(undefined1 *)(param_1 + 0x60e) = 0;
  }
  if ((char)param_1[0x60b] != '\0') {
    *(undefined1 *)(param_1 + 0x60b) = 0;
  }
  if ((char)param_1[0x608] != '\0') {
    *(undefined1 *)(param_1 + 0x608) = 0;
  }
  lVar10 = 0x3000;
  do {
    if (*(char *)((long)param_1 + lVar10 + 0x28) != '\0') {
      *(undefined1 *)((long)param_1 + lVar10 + 0x28) = 0;
    }
    if (*(char *)((long)param_1 + lVar10 + 0x10) != '\0') {
      *(undefined1 *)((long)param_1 + lVar10 + 0x10) = 0;
    }
    lVar10 = lVar10 + -0x30;
  } while (lVar10 != 0);
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar11 = (undefined8 *)param_1[6];
  if (puVar11 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar11 + 3);
    do {
      sVar5 = *psVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar7) {
        *psVar3 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)puVar11 + 0x1c);
      do {
        iVar8 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_28 = *puVar11;
        FUN_00c44438(lVar10 + 0x8040,&local_28);
      }
    }
    else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


