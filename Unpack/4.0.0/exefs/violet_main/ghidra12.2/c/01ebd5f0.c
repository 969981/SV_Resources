/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ebd5f0; name: FUN_01ebd5f0
 */


void FUN_01ebd5f0(long param_1,long *param_2,undefined8 *param_3)

{
  short *psVar1;
  int *piVar2;
  undefined2 *puVar3;
  short sVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined2 local_120 [4];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  param_2 = (long *)*param_2;
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar10 = *param_2;
  lVar13 = param_2[2];
  cVar5 = *(char *)(lVar10 + lVar13);
  param_2[2] = lVar13 + 1;
  if (cVar5 != -0x44) {
    return;
  }
  bVar6 = *(byte *)(lVar10 + lVar13 + 1);
  uVar12 = (ulong)bVar6;
  lVar11 = lVar13 + 2;
  param_2[2] = lVar11;
  if (0x83 < uVar12) {
    return;
  }
  switch(bVar6) {
  case 0x80:
    uVar12 = (ulong)*(byte *)(lVar10 + lVar11);
    lVar11 = lVar13 + 3;
    break;
  case 0x81:
    uVar12 = (ulong)*(ushort *)(lVar10 + lVar11);
    lVar11 = lVar13 + 4;
    break;
  case 0x82:
    uVar12 = (ulong)*(uint *)(lVar10 + lVar11);
    lVar11 = lVar13 + 6;
    break;
  case 0x83:
    uVar12 = *(ulong *)(lVar10 + lVar11);
    lVar11 = lVar13 + 10;
    break;
  default:
    goto switchD_01ebd758_default;
  }
  param_2[2] = lVar11;
switchD_01ebd758_default:
  if (uVar12 == 0x60) {
    puVar3 = (undefined2 *)(lVar10 + lVar11);
    uStack_d8 = *(undefined8 *)(puVar3 + 0x1c);
    local_58 = *(undefined8 *)(puVar3 + 0x14);
    local_e0 = *(undefined8 *)(puVar3 + 0x18);
    local_120[0] = *puVar3;
    uStack_108 = *(undefined8 *)(puVar3 + 2);
    local_100 = *(undefined4 *)(puVar3 + 6);
    uStack_fc = *(undefined4 *)(puVar3 + 8);
    local_f8 = *(undefined8 *)(puVar3 + 10);
    uStack_f0 = *(undefined8 *)(puVar3 + 0xe);
    local_e8 = *(undefined4 *)(puVar3 + 0x12);
    uStack_c8 = *(undefined8 *)(puVar3 + 0x24);
    local_d0 = *(undefined8 *)(puVar3 + 0x20);
    local_c0 = *(undefined4 *)(puVar3 + 0x28);
    local_b8 = *(undefined8 *)(puVar3 + 0x2c);
    param_2[2] = lVar11 + 0x60;
    local_68 = (long *)0x0;
    local_a8 = (undefined8 *)0x0;
    uStack_a0 = 0;
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    local_118 = *param_3;
    local_b0 = 0;
    local_80 = 1;
    local_90 = 0;
    uStack_88 = 0;
    local_110 = local_118;
    uStack_50 = local_e0;
    local_48 = uStack_d8;
    local_40 = local_58;
    local_38 = local_e0;
    uStack_30 = uStack_d8;
    FUN_01ebef24(param_1 + 0x88,local_120);
    if (*(code **)(param_1 + 0x140) != (code *)0x0) {
      (**(code **)(param_1 + 0x140))(param_1 + 0x160,local_120);
    }
    if (local_68 != (long *)0x0) {
      lVar10 = local_68[6];
      psVar1 = (short *)(lVar10 + 0x1a);
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
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*local_68 + 0x50))();
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    puVar8 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_78 + 3);
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
        piVar2 = (int *)((long)local_78 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_28 = *puVar8;
          FUN_00c44438(lVar10 + 0x8040,&local_28);
        }
      }
      else if (sVar4 == 0) goto LAB_01ebd7b0;
    }
    puVar8 = local_a8;
    if (local_a8 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_a8 + 3);
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
        piVar2 = (int *)((long)local_a8 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_28 = *puVar8;
          FUN_00c44438(lVar10 + 0x8040,&local_28);
        }
      }
      else if (sVar4 == 0) {
LAB_01ebd7b0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}


