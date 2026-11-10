/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010bf058; name: FUN_010bf058
 */


void FUN_010bf058(long *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  char *pcVar10;
  long lVar11;
  long *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long *local_48;
  long local_40;
  undefined1 auStack_38 [8];
  
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
  *param_1 = (long)&DAT_045d70f8;
  param_1[1] = lVar11;
  param_1[6] = (long)&PTR_LAB_045d71c0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = lVar11;
  param_1[4] = (long)&PTR_LAB_045d7190;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = lVar11;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0x38e38e38e38e38e;
  param_1[0xf] = 0;
  local_50 = (ulong)local_50._4_4_ << 0x20;
  local_80 = DAT_0485a0a0;
  local_60 = 0x20;
  local_58 = (char *)0x4;
  lVar11 = FUN_00cf3764(&local_40,DAT_0485a0a0[1],&local_80);
  lVar8 = 0;
  if (lVar11 != 0) {
    piVar1 = (int *)(lVar11 + 0x28);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 != -1) {
      lVar8 = lVar11;
      goto LAB_010bf154;
    }
LAB_010bf458:
    pcVar10 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
    ;
LAB_010bf478:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",pcVar10,0x53,"Reference counter overflows."
              );
  }
LAB_010bf154:
  FUN_00d560a0(lVar8,&local_60,2,0,0);
  plVar9 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 5;
    do {
      lVar8 = *plVar2;
      iVar7 = (int)lVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010bf430;
  }
  param_1[9] = lVar11;
  pcVar10 = PTR_s_Skinning_047e1240;
  local_50 = 0x1f;
  local_48 = (long *)0x0;
  local_80 = (long *)&DAT_1db521607460bdd8;
  pcStack_78 = "[Skinning]";
  local_60 = 0x2f37145f69622d7e;
  local_58 = PTR_s_Skinning_047e1240;
  local_70 = 10;
  local_68 = (long *)0x0;
  local_40 = DAT_0485a0d0;
  lVar8 = FUN_00dfee60(auStack_38,*(undefined8 *)(DAT_0485a0d0 + 8),&local_40,&local_80);
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == -1) {
      pcVar10 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      goto LAB_010bf478;
    }
    pcVar10 = local_58;
  }
  if (*pcVar10 != '\0') {
    FUN_00eac828(lVar8,&local_60);
  }
  plVar9 = (long *)param_1[8];
  param_1[8] = 0;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 5;
    do {
      lVar11 = *plVar2;
      iVar7 = (int)lVar11 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_010bf430;
  }
  param_1[8] = lVar8;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  *(undefined4 *)(param_1[8] + 0x100) = 1;
  FUN_00c973e4(*(undefined8 *)(param_1[8] + 200),0);
  lVar8 = *(long *)(DAT_0485a0d8 + 0x38);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x20) + 0x10))();
  }
  local_60 = 0x2f37145f69622d7e;
  local_58 = PTR_s_Skinning_047e1248;
  local_50 = 0x1f;
  local_48 = (long *)0x0;
  FUN_00eb0610(&local_80,*(undefined8 *)(lVar8 + 0x40),&local_60);
  lVar11 = FUN_010bf4b8(&local_60,param_1[1],&local_80);
  if (lVar11 != 0) {
    piVar1 = (int *)(lVar11 + 0x28);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == -1) goto LAB_010bf458;
  }
  plVar9 = (long *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 5;
    do {
      lVar5 = *plVar2;
      iVar7 = (int)lVar5 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_010bf430;
  }
  param_1[0x12] = lVar11;
  if (local_80 != (long *)0x0) {
    plVar9 = local_80 + 5;
    do {
      lVar11 = *plVar9;
      iVar7 = (int)lVar11 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
    else if ((int)lVar11 == 0) {
LAB_010bf430:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  (**(code **)(*(long *)(lVar8 + 0x20) + 0x18))((long *)(lVar8 + 0x20));
  return;
}


