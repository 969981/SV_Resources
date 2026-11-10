/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018a7b08; name: FUN_018a7b08
 */


void FUN_018a7b08(long *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  long *plVar11;
  long *local_40;
  long local_38;
  
  param_1[2] = 0;
  puVar5 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  puVar5 = PTR_DAT_047d8c78;
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar9 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar9;
  param_1[4] = (long)(puVar5 + 0x88);
  plVar8 = param_1 + 5;
  *plVar8 = (long)(puVar5 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar8);
  *param_1 = (long)&PTR_FUN_0460ab70;
  param_1[4] = (long)&PTR_LAB_0460abe8;
  *plVar8 = (long)&DAT_0460ac38;
  param_1[8] = *param_2;
  param_1[9] = param_2[1];
  param_1[10] = param_2[2];
  param_1[0xb] = param_2[3];
  plVar8 = (long *)param_2[4];
  param_1[0xc] = (long)plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  param_1[0xd] = param_2[5];
  param_1[0xe] = param_2[6];
  param_1[0xf] = param_2[7];
  plVar8 = (long *)param_2[8];
  param_1[0x10] = (long)plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  FUN_00e4dbbc(param_1 + 0x11,param_2 + 9);
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  FUN_00e4de20(param_1 + 0x13,param_2 + 0xb);
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  FUN_00e4e084(param_1 + 0x15,param_2 + 0xd);
  lVar7 = param_2[0xf];
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(char *)(param_1 + 0x17) = (char)lVar7;
  plVar11 = param_1 + 0x18;
  *plVar11 = 0;
  param_1[0x19] = 0;
  FUN_018a854c(param_1 + 0x1c);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  FUN_018a8680(param_1 + 0x23);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x27] = 0;
  FUN_018a87b4(param_1 + 0x2a);
  FUN_018a7e38(param_1 + 0x2e);
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x3e,0,1);
  FUN_018a7e78(param_1 + 0x20);
  FUN_018a7f90(param_1 + 0x19);
  local_40 = param_1;
  FUN_018a8218(&local_38,param_1[1],&local_40);
  plVar8 = (long *)*plVar11;
  *plVar11 = 0;
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *plVar11 = local_38;
  pcVar10 = *(code **)(local_38 + 0x388);
  if (pcVar10 != (code *)0x0) {
    *(undefined8 *)(local_38 + 0x390) = 0;
    *(undefined8 *)(local_38 + 0x398) = 0;
    *(undefined8 *)(local_38 + 0x380) = 0;
    *(undefined8 *)(local_38 + 0x388) = 0;
    (*pcVar10)(local_38 + 0x3a0);
  }
  *(undefined1 **)(local_38 + 0x3a8) = &LAB_014b20d8;
  *(undefined1 **)(local_38 + 0x388) = &LAB_02e69220;
  *(undefined1 **)(local_38 + 0x390) = &LAB_02e69224;
  *(long **)(local_38 + 0x3a0) = param_1;
  *(undefined8 *)(local_38 + 0x3b0) = 0;
  *(undefined1 **)(local_38 + 0x380) = &LAB_02e69204;
  *(undefined1 **)(local_38 + 0x398) = &LAB_02e69238;
  return;
}


