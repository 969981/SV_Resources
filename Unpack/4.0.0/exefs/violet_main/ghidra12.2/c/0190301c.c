/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0190301c; name: FUN_0190301c
 */


void FUN_0190301c(long *param_1,long param_2,long param_3)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long local_50;
  long local_48;
  
  puVar6 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar6 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar8 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar8 + 0x80) != 0) {
      lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_045ee330;
  param_1[1] = lVar11;
  param_1[4] = (long)&PTR_LAB_045ee368;
  param_1[10] = 0;
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[8] = 0;
  param_1[9] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  lVar8 = tpidr_el0;
  if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
      (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) &&
     (lVar11 = *(long *)(lVar8 + 0x30), lVar11 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar11 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xb] = lVar11;
  param_1[0x11] = 0;
  param_1[0xc] = 0x3ffffffffffffff;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
      (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) &&
     (lVar11 = *(long *)(lVar8 + 0x30), lVar11 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar11 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x12] = lVar11;
  param_1[0x18] = 0;
  param_1[0x13] = 0x3ffffffffffffff;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
      (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) &&
     (lVar11 = *(long *)(lVar8 + 0x30), lVar11 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar11 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x19] = lVar11;
  param_1[0x1f] = 0;
  param_1[0x1a] = 0x3ffffffffffffff;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
      (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) &&
     (lVar11 = *(long *)(lVar8 + 0x30), lVar11 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar11 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x20] = lVar11;
  param_1[0x26] = 0;
  param_1[0x21] = 0x3ffffffffffffff;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
      (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) &&
     (lVar11 = *(long *)(lVar8 + 0x30), lVar11 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar11 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  param_1[0x27] = lVar11;
  uVar10 = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = (long)&PTR_FUN_045ee398;
  param_1[0x2c] = 0;
  *(undefined1 *)((long)param_1 + 0x21a) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x33] = (long)&PTR_FUN_045ee398;
  param_1[0x34] = 0;
  param_1[0x28] = 0x3ffffffffffffff;
  param_1[0x29] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  do {
    uVar12 = 0;
    uVar3 = uVar10 << (ulong)(uVar10 & 0x1f);
    *(undefined2 *)(param_1 + 0x43) = 0;
    lVar8 = 0x17c;
    do {
      if ((uVar12 & uVar3) != 0) break;
      lVar11 = param_1[7] + lVar8;
      uVar12 = uVar12 | *(ushort *)(lVar11 + -0x8c);
      *(short *)(param_1 + 0x43) = (short)uVar12;
      if ((uVar3 & uVar12) == 0) {
        uVar12 = *(ushort *)(lVar11 + -0x70) | uVar12;
        *(short *)(param_1 + 0x43) = (short)uVar12;
        if ((uVar3 & uVar12) == 0) {
          uVar12 = *(ushort *)(lVar11 + -0x54) | uVar12;
          *(short *)(param_1 + 0x43) = (short)uVar12;
          if ((uVar3 & uVar12) == 0) {
            uVar12 = *(ushort *)(lVar11 + -0x38) | uVar12;
            *(short *)(param_1 + 0x43) = (short)uVar12;
            if ((uVar3 & uVar12) == 0) {
              uVar12 = *(ushort *)(lVar11 + -0x1c) | uVar12;
              *(short *)(param_1 + 0x43) = (short)uVar12;
              if ((uVar3 & uVar12) == 0) {
                uVar12 = *(ushort *)(param_1[7] + lVar8) | uVar12;
                *(short *)(param_1 + 0x43) = (short)uVar12;
              }
            }
          }
        }
      }
      lVar8 = lVar8 + 0xc0;
    } while (lVar8 != 0x53c);
    uVar10 = uVar10 + 1;
  } while (uVar10 != 7);
  if ((*(byte *)(param_3 + 0x499) >> 2 & 1) != 0) {
    lVar8 = FUN_01903e48(param_1[1]);
    local_50 = lVar8;
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 0x28);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == -1) goto LAB_01903894;
    }
    local_48 = param_1[0x42];
    param_1[0x42] = 0;
    FUN_018e2638(&local_48);
    local_50 = 0;
    param_1[0x42] = lVar8;
    FUN_018e2638(&local_50);
  }
  lVar8 = FUN_01903a34(param_1[1]);
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == -1) goto LAB_01903894;
  }
  plVar9 = (long *)param_1[0x3b];
  param_1[0x3b] = 0;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 5;
    do {
      lVar11 = *plVar2;
      iVar7 = (int)lVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_019034d4;
  }
  param_1[0x3b] = lVar8;
  lVar8 = FUN_01903a34(param_1[1]);
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == -1) goto LAB_01903894;
  }
  plVar9 = (long *)param_1[0x3c];
  param_1[0x3c] = 0;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 5;
    do {
      lVar11 = *plVar2;
      iVar7 = (int)lVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_019034d4;
  }
  param_1[0x3c] = lVar8;
  lVar8 = FUN_01903a34(param_1[1]);
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == -1) goto LAB_01903894;
  }
  plVar9 = (long *)param_1[0x3d];
  param_1[0x3d] = 0;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 5;
    do {
      lVar11 = *plVar2;
      iVar7 = (int)lVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_019034d4;
  }
  param_1[0x3d] = lVar8;
  lVar8 = FUN_01903a34(param_1[1]);
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == -1) goto LAB_01903894;
  }
  plVar9 = (long *)param_1[0x3e];
  param_1[0x3e] = 0;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 5;
    do {
      lVar11 = *plVar2;
      iVar7 = (int)lVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_019034d4;
  }
  param_1[0x3e] = lVar8;
  lVar8 = FUN_01903a34(param_1[1]);
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == -1) {
LAB_01903894:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar9 = (long *)param_1[0x3f];
  param_1[0x3f] = 0;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 5;
    do {
      lVar11 = *plVar2;
      iVar7 = (int)lVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar11 == 0) {
LAB_019034d4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  param_1[0x3f] = lVar8;
  return;
}


