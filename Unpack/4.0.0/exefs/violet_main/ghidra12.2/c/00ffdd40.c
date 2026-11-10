/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ffdd40; name: FUN_00ffdd40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ffdd40(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  float fVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  long local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  float local_38;
  undefined4 uStack_34;
  
  plVar15 = *(long **)(param_1 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar15;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  lVar11 = (**(code **)(*plVar15 + 0x10))(plVar15,0x78,8);
  if (lVar11 == 0) {
    (**(code **)(*plVar15 + 0xe8))(plVar15);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_0100970c();
  *(undefined4 *)(lVar11 + 0x18) = 0x80078;
  *(long **)(lVar11 + 8) = plVar15;
  *(long *)(lVar11 + 0x10) = lVar11;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  piVar1 = (int *)(lVar11 + 0x28);
  do {
    iVar9 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 == -1) goto LAB_00ffe328;
  plVar15 = *(long **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (plVar15 != (long *)0x0) {
    plVar14 = plVar15 + 5;
    do {
      lVar10 = *plVar14;
      iVar9 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_00ffe0b0;
  }
  *(long *)(param_1 + 0x88) = lVar11;
  FUN_011c5978(**(undefined8 **)(lVar11 + 0x38),*(long *)(*(long *)(param_1 + 0x78) + 0x70) + 0x10,
               0xffffffff);
  FUN_01086348(**(undefined8 **)(*(long *)(param_1 + 0x88) + 0x38));
  plVar15 = *(long **)(*(long *)(param_1 + 0x88) + 0x30);
  if (plVar15 == (long *)0x0) {
    plVar14 = *(long **)(param_1 + 0x70);
    if (plVar14 != (long *)0x0) {
      plVar15 = plVar14 + 5;
      do {
        lVar10 = *plVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = (int)lVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar10 == -1) goto LAB_00ffe328;
    }
    plVar15 = _DAT_00000070;
    if (_DAT_00000070 != (long *)0x0) {
      plVar12 = _DAT_00000070 + 5;
      _DAT_00000070 = plVar14;
      do {
        iVar9 = (int)*plVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *(int *)plVar12 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 != 0) goto joined_r0x00ffe164;
      lVar10 = *plVar15;
      goto LAB_00ffe0c0;
    }
  }
  else {
    plVar14 = plVar15 + 5;
    do {
      lVar10 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = (int)lVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar10 == -1) goto LAB_00ffe328;
    lVar10 = *(long *)(param_1 + 0x70);
    if (lVar10 != 0) {
      piVar1 = (int *)(lVar10 + 0x28);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == -1) goto LAB_00ffe328;
    }
    plVar12 = (long *)plVar15[0xe];
    plVar15[0xe] = lVar10;
    if (plVar12 != (long *)0x0) {
      plVar2 = plVar12 + 5;
      do {
        lVar10 = *plVar2;
        iVar9 = (int)lVar10 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
      else if ((int)lVar10 == 0) goto LAB_00ffe0b0;
    }
    do {
      iVar9 = (int)*plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      lVar10 = *plVar15;
LAB_00ffe0c0:
      (**(code **)(lVar10 + 0x10))(plVar15);
      plVar14 = _DAT_00000070;
    }
    else {
joined_r0x00ffe164:
      plVar14 = _DAT_00000070;
      if (iVar9 == 0) goto LAB_00ffe0b0;
    }
  }
  _DAT_00000070 = plVar14;
  lVar10 = *(long *)(param_1 + 0x38);
  if (lVar10 == 0) {
    FUN_02173ef4(0,ZEXT816(0),&local_50);
  }
  else {
    uStack_48 = *(undefined8 *)(lVar10 + 0x318);
    local_38 = (float)*(undefined8 *)(lVar10 + 0x328);
    uStack_34 = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0x328) >> 0x20);
    local_50 = *(long *)(lVar10 + 0x310);
    uStack_40 = *(undefined8 *)(lVar10 + 800);
  }
  fVar8 = local_38;
  uVar7 = uStack_48;
  lVar10 = local_50;
  auVar6._8_4_ = local_38;
  auVar6._0_8_ = uStack_40;
  auVar17._8_4_ = local_38;
  auVar17._0_8_ = uStack_40;
  fVar22 = (float)uStack_40;
  fVar23 = (float)((ulong)uStack_40 >> 0x20);
  auVar17._12_4_ = uStack_34;
  auVar6._12_4_ = uStack_34;
  auVar17 = NEON_ext(auVar17,auVar6,8,1);
  plVar15 = *(long **)(*(long *)(param_1 + 0x88) + 0x30);
  if (plVar15 == (long *)0x0) {
    _DAT_00000080 = local_50;
    _DAT_00000088 = (ulong)auVar17._0_4_;
  }
  else {
    plVar14 = plVar15 + 5;
    do {
      lVar11 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = (int)lVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar11 == -1) goto LAB_00ffe328;
    plVar15[0x11] = (ulong)auVar17._0_4_;
    plVar15[0x10] = local_50;
    do {
      lVar11 = *plVar14;
      iVar9 = (int)lVar11 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_00ffe0b0;
  }
  plVar15 = *(long **)(*(long *)(param_1 + 0x88) + 0x30);
  fVar19 = (float)lVar10;
  fVar21 = (float)((ulong)lVar10 >> 0x20);
  if (plVar15 == (long *)0x0) {
    _DAT_00000090 = CONCAT44((fVar21 + fVar23) * 0.5,(fVar19 + fVar22) * 0.5);
    uRam0000000000000098 = (ulong)(uint)(((float)uVar7 + fVar8) * 0.5);
  }
  else {
    plVar14 = plVar15 + 5;
    do {
      lVar10 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = (int)lVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar10 == -1) goto LAB_00ffe328;
    plVar15[0x13] = (ulong)(uint)(((float)uVar7 + fVar8) * 0.5);
    plVar15[0x12] = CONCAT44((fVar21 + fVar23) * 0.5,(fVar19 + fVar22) * 0.5);
    do {
      lVar10 = *plVar14;
      iVar9 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_00ffe0b0;
  }
  lVar10 = *(long *)(param_1 + 0x38);
  if (lVar10 == 0) {
    uVar16 = 0x3f800000;
    uVar18 = 0x3f800000;
    uVar20 = 0x3f800000;
  }
  else {
    uVar18 = *(undefined4 *)(lVar10 + 0x230);
    uVar16 = *(uint *)(lVar10 + 0x234);
    uVar20 = *(undefined4 *)(lVar10 + 0x238);
  }
  plVar15 = *(long **)(*(long *)(param_1 + 0x88) + 0x30);
  if (plVar15 == (long *)0x0) {
    _DAT_000000a0 = CONCAT44(uVar20,uVar18);
    _DAT_000000a8 = (ulong)uVar16;
  }
  else {
    plVar14 = plVar15 + 5;
    do {
      lVar10 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = (int)lVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar10 == -1) goto LAB_00ffe328;
    plVar15[0x15] = (ulong)uVar16;
    plVar15[0x14] = CONCAT44(uVar20,uVar18);
    do {
      lVar10 = *plVar14;
      iVar9 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_00ffe0b0;
  }
  uVar13 = (ulong)*(uint *)(param_1 + 0x250);
  plVar15 = *(long **)(*(long *)(param_1 + 0x88) + 0x30);
  if ((*(uint *)(param_1 + 0x250) == 0) ||
     (*(ulong *)(*(long *)(*(long *)(param_1 + 0x70) + 0xb0) + 0x90) < uVar13)) {
    if (plVar15 == (long *)0x0) {
      uVar13 = 1;
      goto LAB_00ffe1c8;
    }
    plVar14 = plVar15 + 5;
    do {
      lVar10 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = (int)lVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar10 == -1) goto LAB_00ffe328;
    FUN_010005b4(plVar15,1);
    do {
      iVar9 = (int)*plVar14;
      iVar5 = iVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if (plVar15 == (long *)0x0) {
LAB_00ffe1c8:
      FUN_010005b4(0,uVar13);
      return;
    }
    plVar14 = plVar15 + 5;
    do {
      lVar10 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = (int)lVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar10 == -1) {
LAB_00ffe328:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_010005b4(plVar15,*(undefined4 *)(param_1 + 0x250));
    do {
      iVar9 = (int)*plVar14;
      iVar5 = iVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar5 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  else if (iVar9 == 0) {
LAB_00ffe0b0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}


