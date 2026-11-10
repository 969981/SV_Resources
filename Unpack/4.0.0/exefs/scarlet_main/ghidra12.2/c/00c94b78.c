/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c94b78; name: FUN_00c94b78
 */


void FUN_00c94b78(long param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  
  if (*(int *)(param_1 + 0x60) == 5) {
    return;
  }
  if (*(char *)(param_1 + 0x150) == '\0') {
    lVar13 = *(long *)(param_1 + 0x70);
    if (*(int *)(lVar13 + 0x15c) != 1) {
      return;
    }
    uVar11 = FUN_00ea79f4(lVar13);
    if ((uVar11 & 1) == 0) {
      return;
    }
    lVar9 = *(long *)(lVar13 + 0x108);
    if (lVar9 == 0) {
      return;
    }
    for (lVar3 = *(long *)(lVar9 + 0x38); lVar3 != *(long *)(lVar9 + 0x40); lVar3 = lVar3 + 0x40) {
      if (*(long *)(lVar3 + 8) == 0) {
        return;
      }
      if ((*(byte *)(*(long *)(lVar3 + 8) + 0x1e8) & 1) == 0) {
        return;
      }
    }
    if (*(long *)(lVar13 + 0x110) != 0) {
      lVar9 = *(long *)(*(long *)(lVar13 + 0x110) + 0x38);
      if (lVar9 == 0) {
        return;
      }
      if ((*(byte *)(lVar9 + 0x1e8) & 1) == 0) {
        return;
      }
    }
    if (*(long *)(lVar13 + 0x118) != 0) {
      lVar13 = *(long *)(*(long *)(lVar13 + 0x118) + 0x38);
      if (lVar13 == 0) {
        return;
      }
      if ((*(byte *)(lVar13 + 0x1e8) & 1) == 0) {
        return;
      }
    }
    *(undefined1 *)(param_1 + 0x150) = 1;
  }
  uVar5 = *(uint *)(param_1 + 0x88);
  uVar11 = 1L << ((ulong)uVar5 & 0x3f);
  if ((uVar11 & *(ulong *)(param_1 + 0x90)) == 0) {
    if ((int)uVar5 < *(int *)(*(long *)(param_1 + 0x70) + 0x158)) {
      if ((*(ulong *)(param_1 + 0x98) & uVar11) != 0) {
        return;
      }
      if (*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x70) + 0xd0) + (long)(int)uVar5 * 8) +
                   0x78) == 0) {
        *(ulong *)(param_1 + 0x98) = *(ulong *)(param_1 + 0x98) | uVar11;
        FUN_00c95fb8(param_1);
        return;
      }
    }
  }
  plVar8 = *(long **)(*(long *)(param_1 + 0x68) + 0x120);
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 5;
    do {
      lVar13 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)lVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar13 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  uVar5 = *(uint *)(plVar8 + 0x32);
  *(uint *)(param_1 + 0x88) = uVar5;
  if ((((char)plVar8[0x3a] == '\0') || (plVar8[0x19] == 0)) ||
     (lVar13 = *(long *)(plVar8[0x19] + 0x78), lVar13 == 0)) {
    uVar11 = (ulong)uVar5;
  }
  else {
    uVar11 = (ulong)uVar5;
    if (*(long *)(lVar13 + 0x78) != 0) {
      iVar10 = *(int *)(*(long *)(param_1 + 0x70) + 0x158);
      if (iVar10 <= (int)uVar5) goto LAB_00c94c28;
      uVar11 = (ulong)(iVar10 - 1);
    }
  }
  do {
    uVar12 = 1L << (uVar11 & 0x3f);
    iVar10 = (int)uVar11;
    if (((uVar12 & *(ulong *)(param_1 + 0x90)) == 0) && ((*(ulong *)(param_1 + 0x98) & uVar12) == 0)
       ) {
      *(int *)(param_1 + 0x88) = iVar10;
      FUN_00ec80ec(*(undefined8 *)(param_1 + 0x70),1,uVar11,*(undefined8 *)(param_1 + 0x120),
                   *(undefined1 *)(param_1 + 0x82),param_1 + 0x130);
      *(undefined1 *)(param_1 + 0x150) = 0;
      break;
    }
    uVar11 = (ulong)(iVar10 - 1);
  } while ((int)uVar5 < iVar10);
LAB_00c94c28:
  lVar13 = *(long *)(param_1 + 0x70);
  piVar1 = (int *)(lVar13 + 0x1a8);
  if (*piVar1 != 0) {
    plVar2 = (long *)(lVar13 + 400);
    lVar9 = nn::os::GetCurrentThread();
    do {
      if (*plVar2 != 0) {
        ClearExclusiveLocal();
        goto LAB_00c94c38;
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      iVar10 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = 0;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar10 == 2) {
      puVar14 = *(undefined8 **)(lVar13 + 0xd0);
      puVar4 = *(undefined8 **)(lVar13 + 0xd8);
      if (((puVar14 != puVar4) && (FUN_00e12c2c(*puVar14,0), puVar14 + 1 != puVar4)) &&
         (FUN_00e12c2c(puVar14[1],0), puVar14 + 2 != puVar4)) {
        FUN_00e12c2c(puVar14[2],0);
        for (puVar14 = puVar14 + 3; puVar14 != puVar4; puVar14 = puVar14 + 1) {
          FUN_00e12c2c(*puVar14,0);
        }
      }
    }
    else if (iVar10 == 1) {
      puVar14 = *(undefined8 **)(lVar13 + 0xd0);
      puVar4 = *(undefined8 **)(lVar13 + 0xd8);
      if (((puVar14 != puVar4) && (FUN_00e12c2c(*puVar14,1), puVar14 + 1 != puVar4)) &&
         (FUN_00e12c2c(puVar14[1],1), puVar14 + 2 != puVar4)) {
        FUN_00e12c2c(puVar14[2],1);
        for (puVar14 = puVar14 + 3; puVar14 != puVar4; puVar14 = puVar14 + 1) {
          FUN_00e12c2c(*puVar14,1);
        }
      }
    }
    *(undefined8 *)(lVar13 + 400) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x198));
  }
LAB_00c94c38:
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 5;
    do {
      lVar13 = *plVar2;
      iVar10 = (int)lVar13 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar10 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00c94d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x10))();
      return;
    }
    if ((int)lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


