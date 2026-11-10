/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01124c0c; name: FUN_01124c0c
 */


/* WARNING: Removing unreachable block (ram,0x01124d1c) */
/* WARNING: Removing unreachable block (ram,0x01124d24) */
/* WARNING: Removing unreachable block (ram,0x01124d2c) */
/* WARNING: Removing unreachable block (ram,0x01124d34) */
/* WARNING: Removing unreachable block (ram,0x01124dec) */
/* WARNING: Removing unreachable block (ram,0x01124d3c) */
/* WARNING: Removing unreachable block (ram,0x01124d40) */

void FUN_01124c0c(long *param_1,long param_2)

{
  int *piVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *local_58;
  long local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar5 = PTR_DAT_047d3908;
  lVar12 = *(long *)(param_2 + 8);
  if (((*PTR_DAT_047d3908 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  puVar7 = PTR_DAT_047d3918;
  puVar6 = PTR_DAT_047d3910;
  uVar10 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar10;
  FUN_00c44204(&local_58,uVar10,lVar12);
  if (local_58 != (long *)0x0) {
    plVar13 = (long *)local_58[1];
    if (plVar13 != (long *)0x0) {
      plVar11 = (long *)FUN_01128e78();
LAB_01124c9c:
      if (plVar13 != plVar11) goto LAB_01124d68;
      FUN_01128ed8(&local_38,local_58);
      lVar8 = local_38;
      if (local_38 != 0) {
        FUN_01128df8(param_1);
        local_38 = 0;
        *param_1 = lVar8;
        param_1[1] = lVar12;
      }
      plVar13 = local_58 + 3;
      do {
        sVar2 = (short)*plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(short *)plVar13 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 != 1) goto LAB_01124cf0;
      piVar1 = (int *)((long)local_58 + 0x1c);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_01124db8;
    }
LAB_01124d70:
    plVar13 = local_58 + 3;
    do {
      sVar2 = (short)*plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(short *)plVar13 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      piVar1 = (int *)((long)local_58 + 0x1c);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01124db8:
      if (iVar9 != -1) {
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)puVar6;
        *(long *)puVar7 = lVar12;
        local_38 = *local_58;
        FUN_00c44438(lVar12 + 0x8040,&local_38);
      }
    }
    else {
LAB_01124cf0:
      if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
LAB_01124d68:
  plVar13 = (long *)*plVar13;
  if (plVar13 == (long *)0x0) goto LAB_01124d70;
  goto LAB_01124c9c;
}


