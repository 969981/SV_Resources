/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0140f018; name: FUN_0140f018
 */


void FUN_0140f018(long param_1)

{
  short *psVar1;
  int *piVar2;
  uint uVar3;
  short sVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  short sVar13;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 *local_50 [2];
  
  puVar9 = (undefined8 *)FUN_0140f310();
  local_70 = *puVar9;
  uStack_68 = puVar9[1];
  local_60 = puVar9[2];
  local_58 = (long *)puVar9[3];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  FUN_0140f318(local_50,param_1,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_50[0] != (undefined8 *)0x0) {
    puVar9 = local_50[0];
    if (*(short *)((long)local_50[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_50[0] + 0x1a);
      sVar13 = *(short *)((long)local_50[0] + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar13) {
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_0140f0d8;
          bVar12 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0140f0d8:
          bVar12 = false;
        }
        if (bVar12) {
          lVar11 = local_50[0][2];
          if (lVar11 == 0) goto LAB_0140f1e8;
          lVar10 = FUN_0104b474(lVar11 + 0xe0,&local_90);
          if (lVar10 != 0) {
            local_90 = 0x9be6e70907aa6861;
            pcStack_88 = "Visible";
            local_80 = 7;
            local_78 = (long *)0x0;
            uVar7 = FUN_0141f968(param_1,&local_90);
            uVar3 = 0;
            if ((uVar7 & 0xff) != 0) {
              uVar3 = uVar7 >> 8 & 0xff;
            }
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 0x20))();
            }
            uVar7 = FUN_022498a4(lVar10);
            if (uVar3 != (uVar7 & 1)) {
              local_90 = 0x9ca0b799c2c122f1;
              pcStack_88 = "Restore";
              local_80 = 7;
              local_78 = (long *)0x0;
              uVar6 = FUN_0141f968(param_1,&local_90);
              if (local_78 != (long *)0x0) {
                (**(code **)(*local_78 + 0x20))();
              }
              if ((uVar6 & 0xff) != 0 && 0xff < uVar6) {
                puVar9 = (undefined8 *)FUN_01235878(param_1 + 0x158,&DAT_03d63510);
                *(char *)(puVar9 + 2) = (char)(uVar7 & 1);
                *puVar9 = PTR_LAB_047dcd90;
              }
              FUN_022498b0(lVar10,uVar3 != 0);
            }
          }
          (**(code **)(*(long *)(lVar11 + -0x28) + 0x60))((long *)(lVar11 + -0x28));
          break;
        }
        sVar13 = sVar4;
      } while (sVar4 != 0);
      puVar9 = local_50[0];
      if (local_50[0] == (undefined8 *)0x0) {
        return;
      }
    }
LAB_0140f1e8:
    psVar1 = (short *)(puVar9 + 3);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)puVar9 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_90 = *puVar9;
        FUN_00c44438(lVar11 + 0x8040,&local_90);
      }
    }
    else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


