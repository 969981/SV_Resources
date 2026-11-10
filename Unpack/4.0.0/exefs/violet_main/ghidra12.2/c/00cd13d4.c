/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cd13d4; name: FUN_00cd13d4
 */


void FUN_00cd13d4(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *local_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_045d7240;
  param_1[1] = param_2;
  lVar8 = *param_3;
  param_1[2] = lVar8;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x20) + 0x10))();
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[3] = 0;
  param_1[4] = &PTR_FUN_045d7270;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  puVar1 = PTR_DAT_047dd330 + 0x10;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = puVar1;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0xd] = puVar1;
  param_1[0xe] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = puVar1;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x1f] = puVar1;
  param_1[0x20] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = puVar1;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x31] = puVar1;
  param_1[0x32] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = puVar1;
  FUN_00cd180c(param_1 + 0x50);
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  puVar1 = PTR_DAT_047e1250 + 0x10;
  param_1[0x55] = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x54] = puVar1;
  param_1[0x68] = 0;
  param_1[0x61] = puVar1;
  *(undefined1 *)(param_1 + 0x69) = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = puVar1;
  *(undefined1 *)(param_1 + 0x76) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x7b] = puVar1;
  *(undefined1 *)(param_1 + 0x83) = 0;
  param_1[0x88] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = puVar1;
  *(undefined1 *)(param_1 + 0x91) = 0;
  local_30 = (long *)FUN_00f93c28(param_1[2]);
  local_30 = (long *)*local_30;
  if (local_30 != (long *)0x0) {
    plVar9 = local_30 + 5;
    do {
      lVar8 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *(int *)plVar9 = (int)lVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar8 == -1) goto LAB_00cd168c;
  }
  lVar8 = FUN_00cd16dc(auStack_28,param_2,&local_30);
  if (lVar8 != 0) {
    piVar2 = (int *)(lVar8 + 0x28);
    do {
      iVar4 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == -1) {
LAB_00cd168c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar9 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar9 != (long *)0x0) {
    plVar3 = plVar9 + 5;
    do {
      lVar7 = *plVar3;
      iVar4 = (int)lVar7 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_00cd16b4;
  }
  param_1[3] = lVar8;
  if (local_30 != (long *)0x0) {
    plVar9 = local_30 + 5;
    do {
      lVar8 = *plVar9;
      iVar4 = (int)lVar8 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *(int *)plVar9 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
LAB_00cd16b4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


