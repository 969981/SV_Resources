/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d9f3e4; name: FUN_01d9f3e4
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01d9f3e4(long *param_1)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  long *local_38;
  char local_30;
  long *local_28;
  
  plVar8 = (long *)*param_1;
  if (plVar8 == (long *)0x0) {
    DAT_048364f0 = 0;
    return 1;
  }
  switch(DAT_048364f0) {
  case '\0':
    FUN_014ecfec();
    break;
  case '\x01':
    uVar7 = FUN_014ed19c();
    goto joined_r0x01d9f560;
  case '\x02':
    plVar1 = plVar8 + 5;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)lVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_28 = plVar8;
    if ((int)lVar9 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_01dbec40(&local_28);
    if (local_28 != (long *)0x0) {
      plVar8 = local_28 + 5;
      do {
        lVar9 = *plVar8;
        iVar6 = (int)lVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_01d9f4e8;
    }
    break;
  case '\x03':
    if (DAT_0483b3a0 != (long *)0x0) {
      if ((*(byte *)((long)DAT_0483b3a0 + 0x24a) & 1) == 0) {
        return 0;
      }
      FUN_014ece90(DAT_0483b3a0);
      plVar8 = DAT_0483b3a0;
      DAT_0483b3a0 = (long *)0x0;
      if (plVar8 == (long *)0x0) {
        DAT_0483b3a0 = (long *)0x0;
        return 0;
      }
      lVar9 = plVar8[6];
      psVar2 = (short *)(lVar9 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 != 1) {
        if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return 0;
      }
      *(undefined8 *)(lVar9 + 0x10) = 0;
      pcVar10 = *(code **)(*plVar8 + 0x50);
      goto LAB_01d9f5e0;
    }
    uVar7 = FUN_014ece00();
joined_r0x01d9f560:
    if ((uVar7 & 1) == 0) {
switchD_01d9f420_default:
      return 0;
    }
    break;
  case '\x04':
    thunk_FUN_014ece20(&local_38);
    if (local_30 != '\0') {
      FUN_01dbf0f8(*param_1,local_38);
    }
    DAT_048364f0 = DAT_048364f0 + '\x01';
    if (local_38 == (long *)0x0) {
      return 0;
    }
    plVar8 = local_38 + 5;
    do {
      lVar9 = *plVar8;
      iVar6 = (int)lVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 != 0) {
      if ((int)lVar9 != 0) {
        return 0;
      }
LAB_01d9f4e8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
    pcVar10 = *(code **)(*local_38 + 0x10);
LAB_01d9f5e0:
    (*pcVar10)();
    return 0;
  case '\x05':
    FUN_014ed0c4();
    break;
  case '\x06':
    DAT_048364f0 = 0;
    return 1;
  default:
    goto switchD_01d9f420_default;
  }
  DAT_048364f0 = DAT_048364f0 + '\x01';
  return 0;
}


