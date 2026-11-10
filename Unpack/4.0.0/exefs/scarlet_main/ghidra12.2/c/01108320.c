/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01108320; name: FUN_01108320
 */


int FUN_01108320(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  
  plVar13 = (long *)(param_1 + 0xa30);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar13 == 0 && *(long *)(param_1 + 0xa38) == 0) {
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar11) {
      *plVar13 = lVar9;
      *(undefined8 *)(param_1 + 0xa38) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_01108360;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa40));
  do {
    if (*plVar13 != 0 || *(long *)(param_1 + 0xa38) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa40));
        while (*plVar13 == 0 && *(long *)(param_1 + 0xa38) == 0) {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar11) {
            *plVar13 = lVar9;
            *(undefined8 *)(param_1 + 0xa38) = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_01108360;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar11) {
      *plVar13 = lVar9;
      *(undefined8 *)(param_1 + 0xa38) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_01108360:
  if (*(long *)(param_1 + 0xa20) == 0) {
    iVar12 = *(int *)(param_1 + 0x918);
    *(int *)(param_1 + 0x918) = iVar12 + 1;
  }
  else {
    lVar9 = *(long *)(param_1 + 0xa20) + -1;
    iVar12 = *(int *)(param_1 + lVar9 * 4 + 0x920);
    *(long *)(param_1 + 0xa20) = lVar9;
  }
  *(ulong *)(param_1 + 0xa28) =
       1L << ((ulong)(uint)(iVar12 - *(int *)(param_1 + 0x910)) & 0x3f) |
       *(ulong *)(param_1 + 0xa28);
  *(int *)(param_1 + 0x91c) = *(int *)(param_1 + 0x91c) + 1;
  do {
    lVar9 = *plVar13;
    lVar5 = *(long *)(param_1 + 0xa38);
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar11) {
      *plVar13 = lVar9;
      *(long *)(param_1 + 0xa38) = lVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar3 = *plVar13;
    lVar4 = *(long *)(param_1 + 0xa38);
    if (lVar3 != lVar9 || lVar4 != lVar5) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_01108424;
    }
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar11) {
      *plVar13 = 0;
      *(long *)(param_1 + 0xa34) = lVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar11 = true;
LAB_01108424:
  if (!bVar11) {
    do {
      lVar9 = *plVar13;
      lVar5 = *(long *)(param_1 + 0xa38);
      if (lVar9 != lVar3 || lVar5 != lVar4) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x011086cc;
      }
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar11) {
        *plVar13 = 0;
        *(long *)(param_1 + 0xa34) = lVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar11 = true;
joined_r0x011086cc:
    if (!bVar11) {
      do {
        lVar3 = *plVar13;
        lVar4 = *(long *)(param_1 + 0xa38);
        if (lVar3 != lVar9 || lVar4 != lVar5) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar9 = lVar3;
          lVar5 = lVar4;
          goto joined_r0x011086cc;
        }
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar11) {
          *plVar13 = 0;
          *(long *)(param_1 + 0xa34) = lVar5;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar11 = true;
      lVar9 = lVar3;
      lVar5 = lVar4;
      goto joined_r0x011086cc;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xa40));
  plVar13 = *(long **)(param_1 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar13;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  plVar10 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x40,8);
  if (plVar10 == (long *)0x0) {
    (**(code **)(*plVar13 + 0xe8))(plVar13);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  piVar1 = (int *)(param_1 + 0x28);
  do {
    iVar8 = *piVar1;
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar11) {
      *piVar1 = iVar8 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    puVar7 = PTR_DAT_047d66f8;
  } while (cVar6 != '\0');
  if (iVar8 == -1) {
LAB_0110870c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  plVar10[2] = 0;
  *(undefined4 *)(plVar10 + 3) = 0;
  *plVar10 = (long)(puVar7 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  nn::os::GetTlsValue(DAT_04865a30);
  plVar14 = plVar10 + 5;
  *(int *)plVar14 = 0;
  *plVar10 = (long)&PTR_FUN_04595e90;
  plVar10[1] = (long)plVar13;
  plVar10[4] = (long)&PTR_LAB_04595ed0;
  plVar10[6] = param_1;
  *(int *)(plVar10 + 7) = iVar12;
  plVar10[2] = (long)plVar10;
  *(undefined4 *)(plVar10 + 3) = 0x80040;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  do {
    lVar9 = *plVar14;
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar11) {
      *(int *)plVar14 = (int)lVar9 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((int)lVar9 == -1) goto LAB_0110870c;
  do {
    lVar9 = *plVar14;
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar11) {
      *(int *)plVar14 = (int)lVar9 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((int)lVar9 == -1) goto LAB_0110870c;
  plVar13 = *(long **)(param_2 + 0x98);
  *(long **)(param_2 + 0x98) = plVar10;
  if (plVar13 != (long *)0x0) {
    plVar2 = plVar13 + 5;
    do {
      lVar9 = *plVar2;
      iVar8 = (int)lVar9 + -1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *(int *)plVar2 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_011085b4;
  }
  do {
    lVar9 = *plVar14;
    iVar8 = (int)lVar9 + -1;
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar11) {
      *(int *)plVar14 = iVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  else if ((int)lVar9 == 0) {
LAB_011085b4:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return iVar12;
}


