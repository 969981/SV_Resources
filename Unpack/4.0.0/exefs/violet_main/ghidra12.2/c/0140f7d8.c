/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0140f7d8; name: FUN_0140f7d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0140f7d8(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  undefined1 auStack_a0 [4];
  float local_9c;
  float local_98;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  float local_4c;
  float local_48;
  
  uVar7 = _UNK_03cabe58;
  uVar6 = _DAT_03cabe50;
  param_1[1] = 0;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  *param_1 = 0;
  param_1[4] = 0;
  if (((*PTR_DAT_047d91f8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d91f8), iVar8 != 0))
  {
    FUN_00100190(&LAB_00aa89a4,PTR_DAT_047d9200,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d91f8);
  }
  lVar9 = *(long *)PTR_DAT_047d9200;
  *(long *)PTR_DAT_047d9208 = lVar9;
  if ((((*(long *)(lVar9 + 0x50) != 0) && (*(short *)(*(long *)(lVar9 + 0x50) + 0x1a) != 0)) &&
      (lVar9 = *(long *)(lVar9 + 0x50), lVar9 != 0)) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar10 = *(short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0140f920;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0140f920:
        bVar4 = false;
      }
      if (bVar4) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return;
        }
        plVar11 = (long *)(lVar9 + -0x28);
        FUN_01acb394(auStack_a0,plVar11,param_2,param_3,param_4);
        if (param_5 != 1) {
          if ((param_5 == 0) || (param_5 == 2)) {
            local_80 = local_70;
            uStack_78 = uStack_68;
            local_4c = local_48;
            local_9c = local_98;
          }
          else {
            local_4c = 0.0;
            local_80 = 0;
            uStack_78 = 0;
            local_9c = 0.0;
          }
        }
        param_1[1] = uStack_78;
        *param_1 = CONCAT44((float)((ulong)local_80 >> 0x20) + local_4c + local_9c * 0.5,
                            (int)local_80);
        fVar5 = local_4c + 3.0;
        if (param_5 != 2) {
          fVar5 = local_4c;
        }
        *(float *)(param_1 + 4) = fVar5;
        *(float *)((long)param_1 + 0x24) = local_9c;
        lVar9 = *(long *)(lVar9 + 8);
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar10 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))(plVar11);
          return;
        }
        if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar10 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


