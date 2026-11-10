/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0129faf8; name: FUN_0129faf8
 */


void FUN_0129faf8(undefined8 *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  undefined1 *local_c0;
  code *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  undefined1 auStack_a0 [104];
  long *local_38;
  
  *(int *)param_1[1] = *(int *)param_1[1] + 1;
  lVar9 = *(long *)(param_2 + 0x1d0);
  plVar8 = *(long **)(param_2 + 0x1e8);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar6 = *(long **)(*(long *)param_1[2] + 0x178);
  plVar3 = *(long **)(*(long *)param_1[2] + 0x180);
  if (plVar6 == plVar3) {
LAB_0129fb60:
    if ((plVar6 != plVar3) && (*plVar6 != 0)) {
      FUN_0129fd44(&local_38,*plVar6,&local_c0);
      plVar6 = local_38;
      if (local_38 == (long *)0x0) goto LAB_0129fb84;
      if ((char)local_38[0x22] == '\0') {
        local_c0 = &LAB_022849e4;
        local_b8 = FUN_02b8054c;
        local_b0 = FUN_02b80550;
        local_a8 = &LAB_02b80554;
        pcVar7 = (code *)local_38[0x13];
        plVar3 = local_38 + 0x12;
        if (pcVar7 == (code *)0x0) {
LAB_0129fc14:
          (*local_b0)(auStack_a0,plVar6 + 0x16);
          plVar6[0x15] = (long)local_a8;
          *plVar3 = (long)local_c0;
          plVar6[0x13] = (long)local_b8;
          plVar6[0x14] = (long)local_b0;
        }
        else {
          local_38[0x14] = 0;
          local_38[0x15] = 0;
          *plVar3 = 0;
          local_38[0x13] = 0;
          (*pcVar7)(local_38 + 0x16);
          if (local_b0 != (code *)0x0) goto LAB_0129fc14;
        }
        pcVar7 = local_b8;
        if (local_b8 != (code *)0x0) {
          local_b0 = (code *)0x0;
          local_a8 = (undefined1 *)0x0;
          local_c0 = (undefined1 *)0x0;
          local_b8 = (code *)0x0;
          (*pcVar7)(auStack_a0);
        }
        *(undefined1 *)(local_38 + 0x22) = 1;
        if (local_38 == (long *)0x0) goto LAB_0129fb84;
      }
      local_c0 = &LAB_02284c00;
      local_b8 = FUN_02b80558;
      local_b0 = (code *)&LAB_02b8055c;
      local_a8 = &LAB_02b80560;
      FUN_012a001c(local_38,&local_c0);
      pcVar7 = local_b8;
      if (local_b8 != (code *)0x0) {
        local_b0 = (code *)0x0;
        local_a8 = (undefined1 *)0x0;
        local_c0 = (undefined1 *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar7)(auStack_a0);
      }
      goto LAB_0129fb84;
    }
  }
  else {
    do {
      if (*(long *)(*plVar6 + 0x1d0) == lVar9) goto LAB_0129fb60;
      plVar6 = plVar6 + 1;
    } while (plVar3 != plVar6);
  }
  local_38 = (long *)0x0;
LAB_0129fb84:
  *(int *)*param_1 = *(int *)*param_1 + 1;
  if (local_38 != (long *)0x0) {
    lVar9 = local_38[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  return;
}


