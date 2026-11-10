/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6ee7c; name: FUN_00c6ee7c
 */


void FUN_00c6ee7c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  bool bVar10;
  uint uVar11;
  
  if (*(int *)(param_1 + 0x130) != 3) {
    return;
  }
  if (*(char *)(param_1 + 0x332) == '\0') {
    if (*(long *)(param_1 + 0x120) != 0) {
      *(undefined1 *)(*(long *)(param_1 + 0x120) + 0x211) = 0;
    }
    goto LAB_00c6efc4;
  }
  plVar8 = (long *)(param_1 + 0x2c0);
  do {
    lVar6 = *plVar8;
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar10) {
      *plVar8 = lVar6;
      *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 0x2c8);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar6) {
    bVar10 = true;
  }
  else {
    lVar6 = nn::os::GetCurrentThread();
    do {
      lVar5 = *plVar8;
      lVar9 = *(long *)(param_1 + 0x2c8);
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar10) {
        *plVar8 = lVar5;
        *(long *)(param_1 + 0x2c8) = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      while ((lVar5 != 0 && (lVar6 != lVar5))) {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2d0));
        do {
          lVar5 = *plVar8;
          lVar9 = *(long *)(param_1 + 0x2c8);
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar10) {
            *plVar8 = lVar5;
            *(long *)(param_1 + 0x2c8) = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      do {
        lVar2 = *plVar8;
        if (lVar2 != lVar5 || *(long *)(param_1 + 0x2c8) != lVar9) {
          bVar10 = false;
          ClearExclusiveLocal();
          goto LAB_00c6ef1c;
        }
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar10) {
          *plVar8 = lVar5;
          *(long *)(param_1 + 0x2c4) = lVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar10 = true;
LAB_00c6ef1c:
      lVar5 = lVar2;
      lVar9 = *(long *)(param_1 + 0x2c8);
    } while (!bVar10);
    bVar10 = false;
  }
  lVar6 = *(long *)(param_1 + 0x2e0);
  lVar5 = *(long *)(param_1 + 0x120);
  if (lVar6 == 0) {
    if (lVar5 != 0) {
      *(undefined1 *)(lVar5 + 0x211) = 0;
    }
  }
  else if (lVar5 == 0) {
    if ((*(char *)(lVar6 + 0x69) != '\0') || (*(char *)(lVar6 + 0x6a) != '\0')) goto LAB_00c6efa0;
  }
  else if (*(char *)(lVar6 + 0x69) == '\0') {
    if ((*(char *)(lVar5 + 0x211) != '\0') != (*(char *)(lVar6 + 0x6a) != '\0')) goto LAB_00c6efa0;
  }
  else if (*(char *)(lVar5 + 0x211) == '\0') {
LAB_00c6efa0:
    FUN_00ed155c(param_1,param_1 + 0x2e0);
  }
  if (!bVar10) {
    do {
      lVar6 = *plVar8;
      lVar5 = *(long *)(param_1 + 0x2c8);
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar10) {
        *plVar8 = lVar6;
        *(long *)(param_1 + 0x2c8) = lVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar9 = *plVar8;
      lVar2 = *(long *)(param_1 + 0x2c8);
      if (lVar9 != lVar6 || lVar2 != lVar5) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto LAB_00c6efb8;
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar10) {
        *plVar8 = lVar6;
        *(long *)(param_1 + 0x2c4) = lVar5 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar10 = true;
LAB_00c6efb8:
    if (!bVar10) {
      do {
        lVar6 = *plVar8;
        lVar5 = *(long *)(param_1 + 0x2c8);
        if (lVar6 != lVar9 || lVar5 != lVar2) {
          bVar10 = false;
          ClearExclusiveLocal();
          goto joined_r0x00c6f184;
        }
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar10) {
          *plVar8 = lVar9;
          *(long *)(param_1 + 0x2c4) = lVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar10 = true;
joined_r0x00c6f184:
      if (!bVar10) {
        do {
          lVar9 = *plVar8;
          lVar2 = *(long *)(param_1 + 0x2c8);
          if (lVar9 != lVar6 || lVar2 != lVar5) {
            bVar10 = false;
            ClearExclusiveLocal();
            lVar6 = lVar9;
            lVar5 = lVar2;
            goto joined_r0x00c6f184;
          }
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar10) {
            *plVar8 = lVar6;
            *(long *)(param_1 + 0x2c4) = lVar5 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar10 = true;
        lVar6 = lVar9;
        lVar5 = lVar2;
        goto joined_r0x00c6f184;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2d0));
  }
LAB_00c6efc4:
  lVar6 = *(long *)(param_1 + 0x120);
  if (lVar6 == 0) {
    return;
  }
  uVar7 = FUN_00c6f280(param_1,*(undefined4 *)(lVar6 + 0x194));
  if ((uVar7 & 0xff) == 0) {
    return;
  }
  uVar11 = (uint)(uVar7 >> 0x20);
  if (uVar11 == 0xffffffff) {
    FUN_00c6fa08(lVar6,0xffffffff,1,param_2);
    return;
  }
  uVar7 = 1L << (uVar7 >> 0x20 & 0x3f);
  if (((*(uint *)(lVar6 + 0x194) != 0xffffffff) && (*(uint *)(lVar6 + 0x194) != uVar11)) &&
     ((*(ulong *)(lVar6 + 0x1a0) & uVar7) != 0)) {
    FUN_00c6fa08(lVar6,uVar11,1,param_2);
  }
  if ((*(ulong *)(lVar6 + 0x1a0) & uVar7) == 0) {
    iVar3 = (int)((ulong)(*(long *)(lVar6 + 0x58) - *(long *)(lVar6 + 0x50)) >> 3) * -0x49249249;
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    if (iVar3 <= (int)uVar11) {
      uVar11 = iVar3 - 1;
    }
  }
  else {
    lVar5 = (**(code **)(*DAT_0485a020 + 0x110))();
    if (lVar5 == 0) {
      return;
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x1c8) + 0xb0);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 5;
      do {
        lVar5 = *plVar1;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *(int *)plVar1 = (int)lVar5 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      iVar3 = *(int *)(plVar8[0x12] + 0x334);
      if (iVar3 == 0) {
        iVar3 = -1;
      }
      *(int *)(param_1 + 0x2f8) = iVar3;
      do {
        lVar5 = *plVar1;
        iVar3 = (int)lVar5 + -1;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *(int *)plVar1 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    uVar11 = *(uint *)(param_1 + 0x2f8);
    if (uVar11 == 0xffffffff) {
      return;
    }
    *(uint *)(lVar6 + 0x198) = uVar11;
    if ((*(ulong *)(lVar6 + 0x1a0) >> ((ulong)uVar11 & 0x3f) & 1) != 0) {
      return;
    }
    iVar3 = (int)((ulong)(*(long *)(lVar6 + 0x58) - *(long *)(lVar6 + 0x50)) >> 3) * -0x49249249;
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    if (iVar3 <= (int)uVar11) {
      uVar11 = iVar3 - 1;
    }
  }
  *(uint *)(lVar6 + 400) = uVar11;
  return;
}


