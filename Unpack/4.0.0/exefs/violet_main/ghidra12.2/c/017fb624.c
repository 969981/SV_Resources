/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017fb624; name: FUN_017fb624
 */


undefined8 FUN_017fb624(undefined8 param_1,long param_2,undefined8 *param_3,uint param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *puStack_60;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  if (param_4 == 9) {
    param_4 = *(uint *)(param_2 + 0x130);
  }
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  lVar10 = *(long *)PTR_DAT_047d6c28;
  *(long *)PTR_DAT_047d6c30 = lVar10;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0x90) == -1)) {
    uVar9 = 0xffffffffffffffff;
  }
  else {
    FUN_0142cac4(local_58,*(undefined8 *)(lVar10 + (long)*(int *)(lVar8 + 0x90) * 8 + 0x6a0));
    if (local_58[0] == (undefined8 *)0x0) {
      return 0xffffffffffffffff;
    }
    if (*(short *)((long)local_58[0] + 0x1a) == 0) {
      uVar9 = 0xffffffffffffffff;
    }
    else {
      local_68 = *(undefined8 *)(PTR_PTR_047d6c38 + (ulong)param_4 * 8);
      puStack_60 = &LAB_02b7b874;
      local_a0 = (undefined8 *)0x0;
      uStack_98 = 0;
      FUN_00c43ef0(&local_a0,local_58);
      local_90 = *param_3;
      uStack_88 = param_3[1];
      local_80 = param_3[2];
      local_78 = (long *)param_3[3];
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x18))();
      }
      local_70 = 0;
      if (*(long *)(param_2 + 0xe8) != 0) {
        local_70 = *(undefined8 *)(*(long *)(param_2 + 0xe8) + 0x48);
      }
      uVar9 = FUN_017fb9dc(param_1,*(undefined8 *)(param_2 + 0x138),&local_68,&local_a0);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      puVar6 = local_a0;
      if (local_a0 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_a0 + 3);
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
          piVar2 = (int *)((long)local_a0 + 0x1c);
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
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_48 = *puVar6;
            FUN_00c44438(lVar10 + 0x8040,&local_48);
          }
        }
        else if (sVar3 == 0) goto LAB_017fb784;
      }
    }
    if (local_58[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58[0] + 3);
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
        piVar2 = (int *)((long)local_58[0] + 0x1c);
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
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_a0 = (undefined8 *)*local_58[0];
          FUN_00c44438(lVar10 + 0x8040,&local_a0);
        }
      }
      else if (sVar3 == 0) {
LAB_017fb784:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return uVar9;
}


