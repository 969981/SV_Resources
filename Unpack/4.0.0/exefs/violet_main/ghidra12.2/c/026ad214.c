/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026ad214; name: FUN_026ad214
 */


/* WARNING: Removing unreachable block (ram,0x026ad2f8) */
/* WARNING: Removing unreachable block (ram,0x026ad2fc) */
/* WARNING: Removing unreachable block (ram,0x026ad304) */
/* WARNING: Removing unreachable block (ram,0x026ad30c) */
/* WARNING: Removing unreachable block (ram,0x026ad3a8) */
/* WARNING: Removing unreachable block (ram,0x026ad3b0) */
/* WARNING: Removing unreachable block (ram,0x026ad3b4) */
/* WARNING: Removing unreachable block (ram,0x026ad3bc) */
/* WARNING: Removing unreachable block (ram,0x026ad3c4) */
/* WARNING: Removing unreachable block (ram,0x026ad4bc) */
/* WARNING: Removing unreachable block (ram,0x026ad4cc) */
/* WARNING: Removing unreachable block (ram,0x026ad3cc) */
/* WARNING: Removing unreachable block (ram,0x026ad314) */
/* WARNING: Removing unreachable block (ram,0x026ad318) */

void FUN_026ad214(long *param_1,long *param_2)

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
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long local_50;
  undefined8 local_48 [3];
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((*param_2 == 0) || (uVar11 = FUN_026ac920(), (uVar11 & 1) == 0)) {
    return;
  }
  plVar1 = param_2 + 1;
  do {
    lVar15 = *plVar1;
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
  uVar12 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar12;
  FUN_00c44204(&local_50,uVar12,lVar15);
  puVar13 = (undefined8 *)*param_2;
  *param_2 = 0;
  if (puVar13 != (undefined8 *)0x0) {
    psVar2 = (short *)(puVar13 + 3);
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
      piVar3 = (int *)((long)puVar13 + 0x1c);
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
        lVar14 = *(long *)puVar8;
        *(long *)puVar9 = lVar14;
        local_48[0] = *puVar13;
        FUN_00c44438(lVar14 + 0x8040,local_48);
      }
    }
    else if (sVar4 == 0) goto LAB_026ad35c;
  }
  if (local_50 == 0) {
    FUN_026acc64(param_1);
  }
  else {
    puVar13 = (undefined8 *)*param_1;
    *param_1 = 0;
    if (puVar13 != (undefined8 *)0x0) {
      psVar2 = (short *)(puVar13 + 3);
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
        piVar3 = (int *)((long)puVar13 + 0x1c);
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
          lVar14 = *(long *)puVar8;
          *(long *)puVar9 = lVar14;
          local_48[0] = *puVar13;
          FUN_00c44438(lVar14 + 0x8040,local_48);
        }
      }
      else if (sVar4 == 0) {
LAB_026ad35c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    *param_1 = local_50;
    param_1[1] = lVar15;
  }
  return;
}


