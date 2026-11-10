/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01aaacc0; name: FUN_01aaacc0
 */


void FUN_01aaacc0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  short *psVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  
  lVar9 = param_1[0x31];
  *param_1 = (long)&DAT_04592fb8;
  param_1[4] = (long)&PTR_LAB_04593240;
  param_1[0x31] = 0;
  if (lVar9 != 0) {
    FUN_017b2850(param_1 + 0x32);
  }
  plVar8 = (long *)param_1[0x30];
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 5;
    do {
      lVar9 = *plVar2;
      iVar7 = (int)lVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  puVar1 = PTR_DAT_047dcd48 + 0x298;
  *param_1 = (long)(PTR_DAT_047dcd48 + 0x10);
  param_1[4] = (long)puVar1;
  FUN_01aaae00(param_1 + 0xe);
  lVar9 = param_1[10];
  param_1[10] = 0;
  if (lVar9 != 0) {
    FUN_015c1218(param_1 + 0xb);
  }
  plVar8 = (long *)param_1[9];
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[6];
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01aaadfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x50))();
      return;
    }
    if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


