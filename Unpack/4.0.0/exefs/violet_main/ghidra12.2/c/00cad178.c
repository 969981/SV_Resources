/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cad178; name: FUN_00cad178
 */


bool FUN_00cad178(char *param_1,char *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *local_50 [2];
  undefined8 *local_40 [2];
  undefined8 local_18;
  
  cVar4 = *param_1;
  cVar5 = *param_2;
  if (cVar4 == cVar5) {
    if ((((cVar4 == '\0') || (cVar4 == '\x02')) || (cVar4 == '\x01')) || (cVar4 == '\x03')) {
      return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
    }
    return false;
  }
  if ((cVar4 == '\x03') || (cVar5 == '\x03')) {
    FUN_00cad458(local_40);
    FUN_00cad458(local_50,param_2);
    bVar7 = local_40[0] == local_50[0];
    puVar12 = local_40[0];
    if (local_50[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50[0] + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_50[0] + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
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
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_18 = *local_50[0];
          FUN_00c44438(lVar10 + 0x8040,&local_18);
        }
      }
      else if (sVar3 == 0) goto LAB_00cad2f8;
      puVar12 = local_40[0];
    }
    if (puVar12 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar12 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)puVar12 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
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
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_50[0] = (undefined8 *)*puVar12;
          FUN_00c44438(lVar10 + 0x8040,local_50);
        }
      }
      else if (sVar3 == 0) {
LAB_00cad2f8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    return bVar7;
  }
  if (cVar4 == '\0') {
LAB_00cad254:
    lVar10 = *(long *)(param_1 + 8);
  }
  else if (cVar4 == '\x02') {
    lVar10 = 0;
    if (*(long *)(param_1 + 8) != 0) {
      lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x10);
      lVar10 = 0;
      if (lVar11 != 0) {
        lVar10 = lVar11 + -0x28;
      }
    }
  }
  else {
    if (cVar4 == '\x01') goto LAB_00cad254;
    lVar10 = 0;
  }
  if (cVar5 != '\0') {
    if (cVar5 == '\x02') {
      lVar11 = 0;
      if (*(long *)(param_2 + 8) != 0) {
        lVar9 = *(long *)(*(long *)(param_2 + 8) + 0x10);
        lVar11 = 0;
        if (lVar9 != 0) {
          lVar11 = lVar9 + -0x28;
        }
      }
      goto LAB_00cad294;
    }
    if (cVar5 != '\x01') {
      lVar11 = 0;
      goto LAB_00cad294;
    }
  }
  lVar11 = *(long *)(param_2 + 8);
LAB_00cad294:
  return lVar10 == lVar11;
}


