/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011733c0; name: FUN_011733c0
 */


void FUN_011733c0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  uint local_24;
  
  plVar9 = (long *)param_1[10];
  *param_1 = (long)&DAT_045959e8;
  param_1[4] = (long)&PTR_LAB_04595a28;
  if (plVar9 != (long *)0x0) {
    local_24 = *(uint *)(param_1 + 0xb);
    uVar10 = (ulong)local_24;
    if (-1 < (int)local_24) {
      lVar8 = *(long *)(*(long *)(plVar9[0xb] + 0x98) + uVar10 * 8);
      if (lVar8 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        if (*(char *)(lVar8 + 9) != '\0') {
          lVar7 = lVar8;
        }
      }
      FUN_011735e8(lVar7,&LAB_01055788,plVar9);
      FUN_0117356c(plVar9[0xb],plVar9 + 7,uVar10);
      FUN_01173670(plVar9 + 0x12,&local_24);
      plVar9 = (long *)param_1[10];
      if (plVar9 == (long *)0x0) goto LAB_01173450;
    }
    plVar2 = plVar9 + 5;
    do {
      lVar8 = *plVar2;
      iVar5 = (int)lVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
LAB_01173450:
  lVar8 = param_1[6];
  *param_1 = (long)&PTR_FUN_04595ba0;
  param_1[4] = (long)&PTR_LAB_04595be0;
  param_1[6] = 0;
  if (lVar8 != 0) {
    plVar9 = (long *)param_1[7];
    lVar7 = param_1[8];
    lVar11 = param_1[9];
    uVar10 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar10 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,lVar7,lVar11);
    }
    else {
      FUN_00c48fe8(plVar9,lVar8,lVar7,lVar11);
    }
  }
  puVar1 = PTR_DAT_047dcf30 + 0x50;
  *param_1 = (long)(PTR_DAT_047dcf30 + 0x10);
  param_1[4] = (long)puVar1;
                    /* WARNING: Could not recover jumptable at 0x011734a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0xd0))();
  return;
}


