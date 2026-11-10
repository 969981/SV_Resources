/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eadf84; name: FUN_01eadf84
 */


void FUN_01eadf84(long param_1,ushort *param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long *local_88;
  undefined1 *local_80;
  long lStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  ushort *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  
  local_58 = param_2;
  FUN_01eae298(&local_38,&local_58);
  if (local_38 != (long *)0x0) {
    uVar3 = *(uint *)(param_1 + 0x578);
    *(uint *)(param_1 + 0x578) = uVar3 + 1;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = (ushort *)0x0;
    uStack_50 = 0;
    puVar10 = &DAT_cbf29ce484222645;
    snprintf((char *)&local_58,0x20,"net_%u__%u",*param_2 & 3,(uint)(*param_2 >> 2));
    lVar2 = param_1 + ((ulong)uVar3 & 0x1f) * 0x20;
    *(undefined8 *)(lVar2 + 0x188) = local_48;
    *(undefined8 *)(lVar2 + 400) = uStack_40;
    uVar9 = (ulong)local_58 & 0xff;
    *(ushort **)(lVar2 + 0x178) = local_58;
    *(undefined8 *)(lVar2 + 0x180) = uStack_50;
    if ((int)uVar9 != 0) {
      pbVar8 = (byte *)(lVar2 + 0x179);
      do {
        puVar10 = (undefined1 *)(((ulong)puVar10 ^ uVar9) * 0x100000001b3);
        bVar4 = *pbVar8;
        uVar9 = (ulong)bVar4;
        pbVar8 = pbVar8 + 1;
      } while (bVar4 != 0);
    }
    FUN_01eae320(param_1);
    local_60 = *(long **)(param_1 + 0x170);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x58))();
    }
    local_70 = 0x1f;
    local_68 = (long *)0x0;
    local_88 = local_38;
    local_80 = puVar10;
    lStack_78 = lVar2 + 0x178;
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 5;
      do {
        lVar2 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)lVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    FUN_01eae540(0,&local_60,&local_80,&local_88,*(undefined4 *)(param_2 + 0x10),1);
    if (local_88 != (long *)0x0) {
      plVar1 = local_88 + 5;
      do {
        lVar2 = *plVar1;
        iVar7 = (int)lVar2 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
      else if ((int)lVar2 == 0) goto LAB_01eae15c;
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x60))();
    }
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 5;
      do {
        lVar2 = *plVar1;
        iVar7 = (int)lVar2 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      else if ((int)lVar2 == 0) {
LAB_01eae15c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


