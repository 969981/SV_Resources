/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e4ab10; name: FUN_00e4ab10
 */


void FUN_00e4ab10(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  size_t __n;
  void *__s;
  undefined8 uVar8;
  long lVar9;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  __n = FUN_00e4acb0(*(undefined8 *)(param_1 + 0x130));
  __s = (void *)(**(code **)(**(long **)(param_1 + 0xb0) + 0x10))
                          (*(long **)(param_1 + 0xb0),__n,0x10);
  *(void **)(param_1 + 0x100) = __s;
  memset(__s,0,__n);
  local_38 = *(undefined8 *)(param_1 + 0x100);
  local_30 = *(undefined8 *)(param_1 + 0xa0);
  local_48 = PTR_DAT_047e32c0 + 0x10;
  puStack_40 = &local_38;
  uVar8 = FUN_00e4ae28(*(undefined8 *)(param_1 + 0x130));
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  FUN_00c43ef0(&local_60,param_1 + 0xd8);
  local_50 = *(undefined8 *)(param_1 + 0xe8);
  FUN_00e4afa0(&local_48,uVar8,&local_60,*(undefined1 *)(param_1 + 0xf0));
  puVar6 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_60 + 3);
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
      piVar2 = (int *)((long)local_60 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_28 = *puVar6;
        FUN_00c44438(lVar9 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


