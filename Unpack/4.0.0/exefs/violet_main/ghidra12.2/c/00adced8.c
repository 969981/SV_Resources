/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00adced8; name: FUN_00adced8
 */


void FUN_00adced8(long param_1,undefined8 param_2,void *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined1 auStack_888 [2072];
  undefined1 auStack_70 [16];
  
  memcpy(auStack_888,param_3,0x814);
  plVar5 = (long *)FUN_0167513c(auStack_70,*(undefined8 *)(param_1 + 0x48));
  if (plVar5 != (long *)0x0) {
    plVar8 = plVar5 + 5;
    do {
      lVar6 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar6 == -1) goto LAB_00add2c4;
  }
  FUN_018e922c(plVar5,auStack_888,1);
  if (plVar5 != (long *)0x0) {
    plVar8 = plVar5 + 5;
    do {
      lVar6 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar6 == -1) {
LAB_00add2c4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  puVar10 = *(undefined8 **)(param_1 + 0x68);
  if (puVar10 < *(undefined8 **)(param_1 + 0x70)) {
    uVar14 = *(undefined8 *)(param_1 + 0x78);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 == 0) {
      *puVar10 = param_2;
      puVar10[1] = plVar5;
    }
    else {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00add3c8;
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar14;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar10 = param_2;
      puVar10[1] = plVar5;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    puVar10 = puVar10 + 2;
    *(undefined8 **)(param_1 + 0x68) = puVar10;
  }
  else {
    uVar13 = *(ulong *)(param_1 + 0x80);
    lVar6 = (long)puVar10 - *(long *)(param_1 + 0x60) >> 4;
    uVar9 = lVar6 + 1;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = (long)*(undefined8 **)(param_1 + 0x70) - *(long *)(param_1 + 0x60);
    uVar12 = lVar11 >> 3;
    if (uVar9 <= uVar12) {
      uVar9 = uVar12;
    }
    if (uVar13 >> 1 <= (ulong)(lVar11 >> 4)) {
      uVar9 = uVar13;
    }
    if (uVar9 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(**(long **)(param_1 + 0x78) + 0x10))
                         (*(long **)(param_1 + 0x78),uVar9 << 4,8);
      if (lVar11 == 0) {
        (**(code **)(**(long **)(param_1 + 0x78) + 0xe8))();
      }
    }
    puVar10 = (undefined8 *)(lVar11 + lVar6 * 0x10);
    uVar14 = *(undefined8 *)(param_1 + 0x78);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 == 0) {
      *puVar10 = param_2;
      puVar10[1] = plVar5;
    }
    else {
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_00add3c8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar14;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar10 = param_2;
      puVar10[1] = plVar5;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    lVar6 = *(long *)(param_1 + 0x60);
    lVar15 = *(long *)(param_1 + 0x68);
    puVar16 = puVar10;
    if (lVar15 == lVar6) {
      lVar15 = lVar6;
    }
    else {
      do {
        uVar14 = *(undefined8 *)(param_1 + 0x78);
        if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar7 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar7 != 0) {
          if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00add3c8;
          *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar14;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        }
        puVar16[-2] = *(undefined8 *)(lVar15 + -0x10);
        uVar14 = *(undefined8 *)(lVar15 + -8);
        *(undefined8 *)(lVar15 + -8) = 0;
        lVar15 = lVar15 + -0x10;
        puVar16[-1] = uVar14;
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
        puVar16 = puVar16 + -2;
      } while (lVar6 != lVar15);
      lVar6 = *(long *)(param_1 + 0x68);
      lVar15 = *(long *)(param_1 + 0x60);
    }
    lVar7 = *(long *)(param_1 + 0x70);
    *(undefined8 **)(param_1 + 0x60) = puVar16;
    *(undefined8 **)(param_1 + 0x68) = puVar10 + 2;
    *(ulong *)(param_1 + 0x70) = lVar11 + uVar9 * 0x10;
    for (; lVar6 != lVar15; lVar6 = lVar6 + -0x10) {
      plVar8 = *(long **)(lVar6 + -8);
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 5;
        do {
          lVar11 = *plVar1;
          iVar4 = (int)lVar11 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        else if ((int)lVar11 == 0) goto LAB_00add250;
      }
    }
    if (lVar15 != 0) {
      plVar8 = *(long **)(param_1 + 0x78);
      lVar7 = lVar7 - lVar15;
      uVar9 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar9 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar15,lVar7,8);
      }
      else {
        FUN_00c48fe8(plVar8,lVar15,lVar7,8);
      }
    }
    puVar10 = *(undefined8 **)(param_1 + 0x68);
  }
  if ((1 < (ulong)((long)puVar10 - *(long *)(param_1 + 0x60) >> 4)) &&
     (*(char *)(param_1 + 0x98) == '\0')) {
    FUN_00add790();
    *(undefined2 *)(param_1 + 0x98) = 1;
  }
  if (plVar5 != (long *)0x0) {
    plVar8 = plVar5 + 5;
    do {
      lVar6 = *plVar8;
      iVar4 = (int)lVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    else if ((int)lVar6 == 0) {
LAB_00add250:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


