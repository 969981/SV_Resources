/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02249948; name: FUN_02249948
 */


void FUN_02249948(undefined8 param_1)

{
  short *psVar1;
  ulong *puVar2;
  int *piVar3;
  undefined *puVar4;
  short sVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  bool bVar11;
  short sVar12;
  ulong *puVar13;
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *local_90;
  ulong local_88;
  undefined auStack_80 [24];
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  ulong *local_40 [2];
  
  puVar8 = (undefined8 *)FUN_0140f310();
  local_60 = *puVar8;
  uStack_58 = puVar8[1];
  local_50 = puVar8[2];
  local_48 = (long *)puVar8[3];
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  FUN_0140f318(local_40,param_1,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_40[0] != (ulong *)0x0) {
    puVar13 = local_40[0];
    if (*(short *)((long)local_40[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_40[0] + 0x1a);
      sVar12 = *(short *)((long)local_40[0] + 0x1a);
      do {
        sVar5 = *psVar1;
        if (sVar5 == sVar12) {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar12 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_02249a00;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02249a00:
          bVar11 = false;
        }
        if (bVar11) {
          uVar9 = local_40[0][2];
          if (uVar9 == 0) goto LAB_02249ae8;
          lVar10 = FUN_0104b474(uVar9 + 0xe0,&local_88);
          if (lVar10 != 0) {
            local_a8 = 0x6567239344a4b398;
            pcStack_a0 = "TagName";
            local_98 = 7;
            local_90 = (long *)0x0;
            FUN_01315eac(&local_88,param_1,&local_a8);
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            puVar4 = PTR_DAT_047d3e30;
            if ((char)local_88 != '\0') {
              puVar4 = auStack_80;
            }
            lVar10 = FUN_00e895ec(lVar10,puVar4);
            if ((char)local_88 != '\0') {
              if (local_68 != (long *)0x0) {
                (**(code **)(*local_68 + 0x20))();
              }
              local_88 = local_88 & 0xffffffffffffff00;
            }
            if (local_90 != (long *)0x0) {
              (**(code **)(*local_90 + 0x20))();
            }
            if (lVar10 != 0) {
              FUN_02249c28(lVar10);
            }
          }
          (**(code **)(*(long *)(uVar9 - 0x28) + 0x60))((long *)(uVar9 - 0x28));
          break;
        }
        sVar12 = sVar5;
      } while (sVar5 != 0);
      puVar13 = local_40[0];
      if (local_40[0] == (ulong *)0x0) {
        return;
      }
    }
LAB_02249ae8:
    puVar2 = puVar13 + 3;
    do {
      sVar12 = (short)*puVar2;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar11) {
        *(short *)puVar2 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      piVar3 = (int *)((long)puVar13 + 0x1c);
      do {
        iVar7 = *piVar3;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar11) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_88 = *puVar13;
        FUN_00c44438(lVar10 + 0x8040,&local_88);
      }
    }
    else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


