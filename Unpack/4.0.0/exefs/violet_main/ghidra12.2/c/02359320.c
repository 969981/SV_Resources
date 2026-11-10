/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02359320; name: FUN_02359320
 */


void FUN_02359320(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  undefined2 local_58;
  long *local_50;
  long *local_48;
  
  lVar6 = *param_2;
  if (param_2[1] != lVar6) {
    uVar8 = 0;
    do {
      puVar1 = (undefined8 *)(lVar6 + uVar8 * 0x40);
      local_80 = *puVar1;
      local_78 = puVar1[1];
      local_70 = puVar1[2];
      local_68 = (long *)puVar1[3];
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x18))();
      }
      local_60 = puVar1[4];
      local_58 = *(undefined2 *)(puVar1 + 5);
      local_50 = (long *)puVar1[6];
      if (local_50 != (long *)0x0) {
        plVar7 = local_50 + 5;
        do {
          lVar6 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *(int *)plVar7 = (int)lVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      plVar7 = (long *)puVar1[7];
      local_48 = plVar7;
      if (plVar7 == (long *)0x0) {
        uVar5 = FUN_023594e4(param_1,&local_80);
      }
      else {
        (**(code **)(*plVar7 + 0x18))(plVar7);
        uVar5 = FUN_023594e4(param_1,&local_80);
        (**(code **)(*plVar7 + 0x20))(plVar7);
      }
      if (local_50 != (long *)0x0) {
        plVar7 = local_50 + 5;
        do {
          lVar6 = *plVar7;
          iVar4 = (int)lVar6 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *(int *)plVar7 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*local_50 + 0x10))();
        }
        else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if ((uVar5 & 1) == 0) {
        return;
      }
      lVar6 = *param_2;
      uVar8 = uVar8 + 1;
    } while (uVar8 < (ulong)(param_2[1] - lVar6 >> 6));
  }
  return;
}


