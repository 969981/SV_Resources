/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02347aa8; name: FUN_02347aa8
 */


/* WARNING: Removing unreachable block (ram,0x02347b44) */
/* WARNING: Removing unreachable block (ram,0x02347b48) */
/* WARNING: Removing unreachable block (ram,0x02347b50) */
/* WARNING: Removing unreachable block (ram,0x02347b58) */
/* WARNING: Removing unreachable block (ram,0x02347bf4) */
/* WARNING: Removing unreachable block (ram,0x02347bfc) */
/* WARNING: Removing unreachable block (ram,0x02347c00) */
/* WARNING: Removing unreachable block (ram,0x02347c08) */
/* WARNING: Removing unreachable block (ram,0x02347c10) */
/* WARNING: Removing unreachable block (ram,0x02347d08) */
/* WARNING: Removing unreachable block (ram,0x02347d18) */
/* WARNING: Removing unreachable block (ram,0x02347c18) */
/* WARNING: Removing unreachable block (ram,0x02347b60) */
/* WARNING: Removing unreachable block (ram,0x02347b64) */

void FUN_02347aa8(long *param_1,long *param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long local_50;
  undefined8 local_48;
  
  plVar1 = param_2 + 1;
  do {
    lVar14 = *plVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    puVar7 = PTR_DAT_047d3908;
  } while (cVar5 != '\0');
  if (((*PTR_DAT_047d3908 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  puVar9 = PTR_DAT_047d3918;
  puVar8 = PTR_DAT_047d3910;
  uVar11 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar11;
  FUN_00c44204(&local_50,uVar11,lVar14);
  puVar12 = (undefined8 *)*param_2;
  *param_2 = 0;
  if (puVar12 != (undefined8 *)0x0) {
    psVar2 = (short *)(puVar12 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)puVar12 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)puVar8;
        *(long *)puVar9 = lVar13;
        local_48 = *puVar12;
        FUN_00c44438(lVar13 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) goto LAB_02347ba8;
  }
  if (local_50 == 0) {
    FUN_02347dc8(param_1);
  }
  else {
    puVar12 = (undefined8 *)*param_1;
    *param_1 = 0;
    if (puVar12 != (undefined8 *)0x0) {
      psVar2 = (short *)(puVar12 + 3);
      do {
        sVar4 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)puVar12 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)puVar8;
          *(long *)puVar9 = lVar13;
          local_48 = *puVar12;
          FUN_00c44438(lVar13 + 0x8040,&local_48);
        }
      }
      else if (sVar4 == 0) {
LAB_02347ba8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    *param_1 = local_50;
    param_1[1] = lVar14;
  }
  return;
}


