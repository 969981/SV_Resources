/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f8b508; name: FUN_01f8b508
 */


void FUN_01f8b508(char *param_1,char *param_2)

{
  undefined *puVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  char *pcVar13;
  undefined8 *puVar14;
  undefined8 local_28;
  
  if (*param_1 == '\0') {
    if (*param_2 != '\0') {
      puVar1 = PTR_DAT_047d5400 + 0x10;
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      puVar7 = PTR_DAT_047d53f0;
      *(undefined **)(param_1 + 0x20) = puVar1;
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
      uVar11 = *(undefined8 *)(param_2 + 0x30);
      *(undefined **)(param_1 + 0x40) = puVar7 + 0x10;
      *(undefined8 *)(param_1 + 0x30) = uVar11;
      param_1[0x50] = '\0';
      param_1[0x51] = '\0';
      param_1[0x52] = '\0';
      param_1[0x53] = '\0';
      param_1[0x54] = '\0';
      param_1[0x55] = '\0';
      param_1[0x56] = '\0';
      param_1[0x57] = '\0';
      pcVar13 = param_1 + 0x48;
      pcVar13[0] = '\0';
      pcVar13[1] = '\0';
      pcVar13[2] = '\0';
      pcVar13[3] = '\0';
      pcVar13[4] = '\0';
      pcVar13[5] = '\0';
      pcVar13[6] = '\0';
      pcVar13[7] = '\0';
      FUN_00d0a71c(pcVar13,param_2 + 0x48);
      puVar1 = PTR_DAT_047d53f8;
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
      uVar11 = *(undefined8 *)(param_2 + 0x60);
      *(undefined **)(param_1 + 0x70) = puVar1 + 0x10;
      param_1[0x80] = '\0';
      param_1[0x81] = '\0';
      param_1[0x82] = '\0';
      param_1[0x83] = '\0';
      param_1[0x84] = '\0';
      param_1[0x85] = '\0';
      param_1[0x86] = '\0';
      param_1[0x87] = '\0';
      *(undefined8 *)(param_1 + 0x60) = uVar11;
      pcVar13 = param_1 + 0x78;
      pcVar13[0] = '\0';
      pcVar13[1] = '\0';
      pcVar13[2] = '\0';
      pcVar13[3] = '\0';
      pcVar13[4] = '\0';
      pcVar13[5] = '\0';
      pcVar13[6] = '\0';
      pcVar13[7] = '\0';
      FUN_00d0a71c(pcVar13,param_2 + 0x78);
      pcVar13 = param_1 + 0x88;
      pcVar13[0] = '\0';
      pcVar13[1] = '\0';
      pcVar13[2] = '\0';
      pcVar13[3] = '\0';
      pcVar13[4] = '\0';
      pcVar13[5] = '\0';
      pcVar13[6] = '\0';
      pcVar13[7] = '\0';
      param_1[0x90] = '\0';
      param_1[0x91] = '\0';
      param_1[0x92] = '\0';
      param_1[0x93] = '\0';
      param_1[0x94] = '\0';
      param_1[0x95] = '\0';
      param_1[0x96] = '\0';
      param_1[0x97] = '\0';
      FUN_00c6c994(pcVar13,param_2 + 0x88);
      plVar10 = *(long **)(param_2 + 0x98);
      *(long **)(param_1 + 0x98) = plVar10;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))();
      }
      *param_1 = '\x01';
    }
  }
  else if (*param_2 == '\0') {
    FUN_01bb6044(param_1 + 0x70);
    *(undefined **)(param_1 + 0x40) = PTR_DAT_047d53f0 + 0x10;
    puVar14 = *(undefined8 **)(param_1 + 0x48);
    if (puVar14 != (undefined8 *)0x0) {
      psVar2 = (short *)(puVar14 + 3);
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
        piVar3 = (int *)((long)puVar14 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_28 = *puVar14;
          FUN_00c44438(lVar12 + 0x8040,&local_28);
        }
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    *param_1 = '\0';
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    FUN_00d0a71c(param_1 + 0x48,param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    FUN_00d0a71c(param_1 + 0x78,param_2 + 0x78);
    FUN_00c6c994(param_1 + 0x88,param_2 + 0x88);
    plVar10 = *(long **)(param_2 + 0x98);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    plVar9 = *(long **)(param_1 + 0x98);
    *(long **)(param_1 + 0x98) = plVar10;
    if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01f8b5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x20))();
      return;
    }
  }
  return;
}


