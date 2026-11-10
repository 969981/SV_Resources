/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01981c88; name: FUN_01981c88
 */


void FUN_01981c88(undefined8 param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  bool bVar11;
  short sVar12;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 *local_40 [2];
  
  uVar6 = FUN_017350a8();
  if ((uVar6 & 1) == 0) {
    puVar7 = (undefined8 *)FUN_0140f310(param_1);
    local_60 = *puVar7;
    uStack_58 = puVar7[1];
    local_50 = puVar7[2];
    local_48 = (long *)puVar7[3];
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))();
    }
    FUN_0140f318(local_40,param_1,&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (local_40[0] != (undefined8 *)0x0) {
      puVar7 = local_40[0];
      if (*(short *)((long)local_40[0] + 0x1a) != 0) {
        psVar1 = (short *)((long)local_40[0] + 0x1a);
        sVar12 = *(short *)((long)local_40[0] + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar12) {
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar11) {
              *psVar1 = sVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_01981d54;
            bVar11 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01981d54:
            bVar11 = false;
          }
          if (bVar11) {
            lVar10 = local_40[0][2];
            if (lVar10 == 0) goto LAB_01981e00;
            lVar8 = FUN_01491340(lVar10 + 0xe0,&local_80);
            if (lVar8 != 0) {
              local_80 = 0x1b56d66692e6806b;
              pcStack_78 = "Alpha";
              local_70 = 5;
              local_68 = (long *)0x0;
              uVar9 = FUN_01180d38(param_1,&local_80);
              uVar6 = 0;
              if ((uVar9 & 0xff) != 0) {
                uVar6 = uVar9 >> 0x20;
              }
              if (local_68 != (long *)0x0) {
                (**(code **)(*local_68 + 0x20))();
              }
              FUN_015efc88(uVar6,lVar8);
            }
            (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))((long *)(lVar10 + -0x28));
            break;
          }
          sVar12 = sVar3;
        } while (sVar3 != 0);
        puVar7 = local_40[0];
        if (local_40[0] == (undefined8 *)0x0) {
          return;
        }
      }
LAB_01981e00:
      psVar1 = (short *)(puVar7 + 3);
      do {
        sVar12 = *psVar1;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar12 == 1) {
        piVar2 = (int *)((long)puVar7 + 0x1c);
        do {
          iVar5 = *piVar2;
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar5 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_80 = *puVar7;
          FUN_00c44438(lVar10 + 0x8040,&local_80);
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
  }
  return;
}


