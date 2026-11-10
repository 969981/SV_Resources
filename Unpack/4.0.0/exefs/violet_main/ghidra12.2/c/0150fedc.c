/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0150fedc; name: FUN_0150fedc
 */


void FUN_0150fedc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long *local_28;
  
  puVar5 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  puVar6 = (undefined4 *)FUN_01053840();
  lVar7 = nn::os::GetTlsValue(*puVar6);
  lVar8 = 0;
  if ((lVar7 != 0) && (lVar8 = 0, *(long *)(lVar7 + 0x80) != 0)) {
    lVar8 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
  }
  param_1[1] = lVar8;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *param_1 = (long)&PTR_FUN_0459bdd8;
  param_1[4] = (long)&PTR_LAB_0459be10;
  DAT_04841640 = param_1;
  FUN_01510010(&LAB_02b3b7e4,FUN_0216ba08,0);
  FUN_0150fff4(&local_28);
  FUN_0145dfc8(param_1 + 6,&local_28);
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 5;
    do {
      lVar8 = *plVar1;
      iVar4 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


