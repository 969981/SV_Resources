/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e5c130; name: FUN_01e5c130
 */


undefined4 FUN_01e5c130(long param_1,long param_2,ulong param_3,ulong param_4)

{
  short *psVar1;
  int *piVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  undefined8 *puVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_00c93e08(&local_48,param_2 + 0x10);
  uVar9 = FUN_01e5cc40(&local_48);
  puVar6 = local_48;
  if (local_48 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_48 + 3);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_48 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar8 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_38 = *puVar6;
        FUN_00c44438(lVar10 + 0x8040,&local_38);
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
  if ((uVar9 & 1) == 0) {
    uVar11 = 0;
  }
  else {
    bVar7 = (param_3 & 1) == 0;
    lVar10 = 0xe4;
    if (bVar7) {
      lVar10 = 0xe0;
    }
    lVar3 = 0xec;
    if (bVar7) {
      lVar3 = 0xe8;
    }
    if ((param_4 & 1) == 0) {
      lVar3 = lVar10;
    }
    uVar11 = *(undefined4 *)(param_1 + lVar3);
  }
  return uVar11;
}


