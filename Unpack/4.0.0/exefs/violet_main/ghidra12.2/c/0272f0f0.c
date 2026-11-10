/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0272f0f0; name: FUN_0272f0f0
 */


void FUN_0272f0f0(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong *puVar11;
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_18;
  
  FUN_00c5ecb4(&local_18,*(undefined8 *)(DAT_0485a0d8 + 0x38));
  plVar10 = local_18;
  if (local_18 == (long *)0x0) {
    return;
  }
  FUN_00eaabc4(local_18);
  *(undefined1 *)((long)plVar10 + 0x1a3) = 1;
  FUN_00eaabc4(plVar10);
  puVar11 = (ulong *)(param_2 + 8);
  uVar6 = *puVar11;
  uVar7 = *(ulong *)(param_1 + 0x2a8);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & uVar6;
    }
    else if (uVar6 < uVar7) {
      uVar9 = uVar6;
    }
    else {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = uVar6 / uVar7;
      }
      uVar9 = uVar6 - uVar9 * uVar7;
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x2a0) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar10[1] == uVar6) {
            if (plVar10[2] == uVar6) goto LAB_0272f1f0;
          }
          else if ((plVar10[1] & uVar7 - 1) != uVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == uVar6) {
            if (plVar10[2] == uVar6) goto LAB_0272f1f0;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
LAB_0272f2ec:
  FUN_0113d4c4(param_1 + 0x238,puVar11);
  if (local_18 != (long *)0x0) {
    plVar10 = local_18 + 5;
    do {
      lVar5 = *plVar10;
      iVar3 = (int)lVar5 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *(int *)plVar10 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_18 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
LAB_0272f1f0:
  local_50 = 0xe7d5621586e83d61;
  puStack_48 = PTR_s_Shadow_047e11f0;
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  FUN_010f7f40(local_18,1,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = 0xeed0538c14eaa7d2;
  puStack_48 = PTR_s_ShadowCascaded1_047e11f8;
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  FUN_010f7f40(local_18,1,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = 0xeed0528c14eaa61f;
  puStack_48 = PTR_s_ShadowCascaded2_047e1200;
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  FUN_010f7f40(local_18,1,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = 0xeed0518c14eaa46c;
  puStack_48 = PTR_s_ShadowCascaded3_047e1208;
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  FUN_010f7f40(local_18,1,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_0113d4c4((long *)(param_1 + 0x2a0),puVar11);
  goto LAB_0272f2ec;
}


