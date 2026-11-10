/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0130fed4; name: FUN_0130fed4
 */


void FUN_0130fed4(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *puVar17;
  
  plVar14 = (long *)(param_1 + 0x68);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar14 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar3) {
      *plVar14 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0130ff18;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x70));
  do {
    if (*plVar14 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x70));
        while (*plVar14 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0130ff18;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar3) {
      *plVar14 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0130ff18:
  plVar14 = *(long **)(param_1 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_013104a4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar14;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  plVar7 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x40,8);
  puVar4 = PTR_DAT_047d66f8;
  if (plVar7 == (long *)0x0) {
    (**(code **)(*plVar14 + 0xe8))(plVar14);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  plVar16 = (long *)*param_3;
  *param_3 = 0;
  plVar7[2] = 0;
  *(undefined4 *)(plVar7 + 3) = 0;
  *plVar7 = (long)(puVar4 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar8 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*(long *)(lVar8 + 0x80) != 0) {
      lVar10 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
    }
  }
  plVar7[1] = lVar10;
  plVar13 = plVar7 + 5;
  *(int *)plVar13 = 0;
  *plVar7 = (long)&PTR_LAB_0459bd70;
  plVar7[4] = (long)&PTR_LAB_0459bda8;
  plVar7[6] = param_2;
  plVar7[7] = (long)plVar16;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x18))(plVar16);
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
  *(undefined4 *)(plVar7 + 3) = 0x80040;
  plVar7[1] = (long)plVar14;
  plVar7[2] = (long)plVar7;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  do {
    lVar6 = *plVar13;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *(int *)plVar13 = (int)lVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 < *(undefined8 **)(param_1 + 0x40)) {
    uVar15 = *(undefined8 *)(param_1 + 0x48);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 == 0) {
      *puVar1 = plVar7;
    }
    else {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_013104a4;
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar15;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar1 = plVar7;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0x38) = puVar1 + 1;
  }
  else {
    uVar12 = *(ulong *)(param_1 + 0x50);
    lVar6 = (long)puVar1 - *(long *)(param_1 + 0x30) >> 3;
    uVar9 = lVar6 + 1;
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = (long)*(undefined8 **)(param_1 + 0x40) - *(long *)(param_1 + 0x30);
    uVar11 = lVar8 >> 2;
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    if (uVar12 >> 1 <= (ulong)(lVar8 >> 3)) {
      uVar9 = uVar12;
    }
    if (uVar9 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))
                        (*(long **)(param_1 + 0x48),uVar9 << 3,8);
      if (lVar8 == 0) {
        (**(code **)(**(long **)(param_1 + 0x48) + 0xe8))();
      }
    }
    puVar1 = (undefined8 *)(lVar8 + lVar6 * 8);
    uVar15 = *(undefined8 *)(param_1 + 0x48);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 == 0) {
      *puVar1 = plVar7;
    }
    else {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_013104a4;
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar15;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar1 = plVar7;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    plVar14 = *(long **)(param_1 + 0x30);
    plVar7 = *(long **)(param_1 + 0x38);
    puVar17 = puVar1;
    if (plVar7 == plVar14) {
      plVar7 = plVar14;
    }
    else {
      do {
        uVar15 = *(undefined8 *)(param_1 + 0x48);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 == 0) {
          lVar6 = plVar7[-1];
          plVar7[-1] = 0;
          puVar17[-1] = lVar6;
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_013104a4;
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar15;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          lVar10 = plVar7[-1];
          plVar7[-1] = 0;
          puVar17[-1] = lVar10;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        plVar7 = plVar7 + -1;
        puVar17 = puVar17 + -1;
      } while (plVar14 != plVar7);
      plVar14 = *(long **)(param_1 + 0x38);
      plVar7 = *(long **)(param_1 + 0x30);
    }
    lVar6 = *(long *)(param_1 + 0x40);
    *(undefined8 **)(param_1 + 0x30) = puVar17;
    *(undefined8 **)(param_1 + 0x38) = puVar1 + 1;
    *(ulong *)(param_1 + 0x40) = lVar8 + uVar9 * 8;
    while (plVar14 != plVar7) {
      plVar14 = plVar14 + -1;
      plVar16 = (long *)*plVar14;
      if (plVar16 != (long *)0x0) {
        plVar13 = plVar16 + 5;
        do {
          lVar8 = *plVar13;
          iVar5 = (int)lVar8 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *(int *)plVar13 = iVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar16 + 0x10))();
        }
        else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    if (plVar7 != (long *)0x0) {
      plVar14 = *(long **)(param_1 + 0x48);
      lVar6 = lVar6 - (long)plVar7;
      uVar9 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,plVar7,lVar6,8);
      }
      else {
        FUN_00c48fe8(plVar14,plVar7,lVar6,8);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x70));
  return;
}


