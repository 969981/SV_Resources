/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a868ec; name: FUN_00a868ec
 */


void FUN_00a868ec(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  byte bVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 local_a40;
  long *local_a38;
  undefined8 local_a30 [320];
  
  if (((*PTR_DAT_047d8550 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8550), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d8568,PTR_DAT_047d8558,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8550);
  }
  lVar12 = *(long *)PTR_DAT_047d8558;
  *(long *)PTR_DAT_047d8560 = lVar12;
  lVar12 = *(long *)(lVar12 + 0x140);
  if (lVar12 != 0) {
    piVar1 = (int *)(lVar12 + 0x28);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar10 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 5;
    do {
      lVar6 = *plVar2;
      iVar9 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar6 == 0) goto LAB_00a86c08;
  }
  *(long *)(param_1 + 0x30) = lVar12;
  iVar9 = *(int *)(lVar12 + 0x171c);
  if ((DAT_04839fc0 == 1) || (DAT_0485e950 != '\x01')) {
    bVar8 = 0;
  }
  else {
    bVar8 = nn::nifm::IsNetworkAvailable();
    bVar8 = bVar8 & DAT_04839fc0 == 4;
  }
  *(byte *)(param_1 + 0x60) = bVar8;
  if (iVar9 == 1) {
    lVar12 = *(long *)(param_1 + 0x30);
    memcpy(local_a30,(void *)(lVar12 + 0x2d4),0x9fc);
    lVar12 = *(long *)(lVar12 + 0x1c8);
    if (lVar12 != 0) {
      uVar11 = FUN_01f66758(lVar12,local_a30);
      FUN_00a6a82c(*(undefined8 *)(param_1 + 0x30));
      if ((uVar11 & 1) != 0) {
        *(undefined8 *)(param_1 + 0x44) = 0;
        FUN_01f675f4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x1c8));
        goto LAB_00a86a00;
      }
    }
    *(undefined8 *)(param_1 + 0x44) = 7;
  }
LAB_00a86a00:
  FUN_014e2ae0(*(undefined8 *)(param_1 + 0x30));
  FUN_0129e570(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x150));
  FUN_01967bd8(*(undefined8 *)(param_1 + 0x30),0);
  FUN_01dc02fc(local_a30);
  plVar10 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 5;
    do {
      lVar12 = *plVar2;
      iVar5 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar12 == 0) goto LAB_00a86c08;
  }
  *(undefined8 *)(param_1 + 0x50) = local_a30[0];
  FUN_01dc02fc(local_a30);
  plVar10 = *(long **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 5;
    do {
      lVar12 = *plVar2;
      iVar5 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar12 == 0) goto LAB_00a86c08;
  }
  *(undefined8 *)(param_1 + 0x58) = local_a30[0];
  FUN_0187066c(*(undefined8 *)(param_1 + 0x30),0,1,1,0);
  FUN_01df05ac(&local_a38,*(undefined8 *)(param_1 + 0x30));
  plVar10 = local_a38;
  FUN_015d81e0(local_a38[6],0);
  FUN_01ded404(plVar10);
  FUN_01df060c(&local_a40,local_a38);
  local_a30[0] = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_014a3154(local_a30);
  uVar7 = local_a40;
  local_a40 = 0;
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  FUN_014a3154(&local_a40);
  switch(iVar9) {
  case 4:
  case 7:
    FUN_01df3778(param_1);
    if (iVar9 == 5) goto switchD_00a86b20_caseD_5;
    break;
  case 5:
  case 8:
switchD_00a86b20_caseD_5:
    *(undefined8 *)(param_1 + 0x44) = 0xb;
  }
  if (local_a38 != (long *)0x0) {
    plVar10 = local_a38 + 5;
    do {
      lVar12 = *plVar10;
      iVar9 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_a38 + 0x10))();
    }
    else if ((int)lVar12 == 0) {
LAB_00a86c08:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


