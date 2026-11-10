/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026e7ebc; name: FUN_026e7ebc
 */


void FUN_026e7ebc(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  undefined2 local_58;
  long *local_50;
  long *local_48;
  
  lVar5 = *param_2;
  if (param_2[1] != lVar5) {
    uVar7 = 0;
    do {
      puVar1 = (undefined8 *)(lVar5 + uVar7 * 0x40);
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
        plVar6 = local_50 + 5;
        do {
          lVar5 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *(int *)plVar6 = (int)lVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      plVar6 = (long *)puVar1[7];
      local_48 = plVar6;
      if (plVar6 == (long *)0x0) {
        FUN_026e936c(param_1,&local_80);
      }
      else {
        (**(code **)(*plVar6 + 0x18))(plVar6);
        FUN_026e936c(param_1,&local_80);
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
      if (local_50 != (long *)0x0) {
        plVar6 = local_50 + 5;
        do {
          lVar5 = *plVar6;
          iVar4 = (int)lVar5 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *(int *)plVar6 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*local_50 + 0x10))();
        }
        else if ((int)lVar5 == 0) {
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
      lVar5 = *param_2;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulong)(param_2[1] - lVar5 >> 6));
  }
  return;
}


