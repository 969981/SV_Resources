/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cd7cac; name: FUN_00cd7cac
 */


void FUN_00cd7cac(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
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
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar9 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_LAB_045d5b80;
  param_1[1] = lVar9;
  param_1[4] = (long)&PTR_LAB_045d5c08;
  param_1[6] = 0;
  lVar7 = *param_2;
  plVar10 = *(long **)(lVar7 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar10;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  puVar8 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x410,8);
  if (puVar8 == (undefined8 *)0x0) {
    (**(code **)(*plVar10 + 0xe8))(plVar10);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_00cf38a8(puVar8,lVar7);
  puVar8[2] = puVar8;
  *puVar8 = &DAT_045d6000;
  puVar8[1] = plVar10;
  puVar8[4] = &PTR_LAB_045d6040;
  *(undefined4 *)(puVar8 + 3) = 0x80410;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  piVar1 = (int *)(puVar8 + 5);
  do {
    iVar6 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar6 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  local_48 = 0;
  local_58 = 0x390;
  uStack_50 = 0x100;
  FUN_00d560a0(puVar8,&local_58,2,0,0);
  plVar10 = (long *)param_1[6];
  param_1[6] = 0;
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 5;
    do {
      lVar7 = *plVar2;
      iVar6 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  param_1[6] = (long)puVar8;
  FUN_00c41540(puVar8);
  *(undefined4 *)((long)puVar8 + 0x84) = 0;
  *(undefined8 *)((long)puVar8 + 0x7c) = 0xbf80000000000000;
  *(undefined8 *)((long)puVar8 + 0x10c) = 0x3ecccccd3f000000;
  *(undefined8 *)((long)puVar8 + 0x114) = 0x3a83126f3e4ccccd;
  *(undefined8 *)((long)puVar8 + 0x18c) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0x194) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0x8c) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x94) = 0x461c40003f800000;
  *(undefined8 *)((long)puVar8 + 0x11c) = 0x3ecccccd3f000000;
  *(undefined8 *)((long)puVar8 + 0x124) = 0x3a83126f3e4ccccd;
  *(undefined8 *)((long)puVar8 + 0x19c) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0x1a4) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0x9c) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0xa4) = 0x461c40003f800000;
  *(undefined8 *)((long)puVar8 + 300) = 0x3ecccccd3f000000;
  *(undefined8 *)((long)puVar8 + 0x134) = 0x3a83126f3e4ccccd;
  *(undefined8 *)((long)puVar8 + 0x1ac) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0x1b4) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0xac) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0xb4) = 0x461c40003f800000;
  *(undefined8 *)((long)puVar8 + 0x13c) = 0x3ecccccd3f000000;
  *(undefined8 *)((long)puVar8 + 0x144) = 0x3a83126f3e4ccccd;
  *(undefined8 *)((long)puVar8 + 0x1bc) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0x1c4) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0xbc) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0xc4) = 0x461c40003f800000;
  *(undefined8 *)((long)puVar8 + 0x14c) = 0x3ecccccd3f000000;
  *(undefined8 *)((long)puVar8 + 0x154) = 0x3a83126f3e4ccccd;
  *(undefined8 *)((long)puVar8 + 0x1cc) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0x1d4) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0xcc) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0xd4) = 0x461c40003f800000;
  *(undefined8 *)((long)puVar8 + 0x15c) = 0x3ecccccd3f000000;
  *(undefined8 *)((long)puVar8 + 0x164) = 0x3a83126f3e4ccccd;
  *(undefined8 *)((long)puVar8 + 0x1dc) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0x1e4) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0xdc) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0xe4) = 0x461c40003f800000;
  *(undefined8 *)((long)puVar8 + 0x16c) = 0x3ecccccd3f000000;
  *(undefined8 *)((long)puVar8 + 0x174) = 0x3a83126f3e4ccccd;
  *(undefined8 *)((long)puVar8 + 0x1ec) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 500) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0xec) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0xf4) = 0x461c40003f800000;
  *(undefined8 *)((long)puVar8 + 0x17c) = 0x3ecccccd3f000000;
  *(undefined8 *)((long)puVar8 + 0x184) = 0x3a83126f3e4ccccd;
  *(undefined8 *)((long)puVar8 + 0x1fc) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0x204) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0xfc) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x104) = 0x461c40003f800000;
  *(undefined8 *)((long)puVar8 + 0x20c) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0x214) = 0;
  *(undefined8 *)((long)puVar8 + 0x21c) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x224) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x22c) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x234) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x23c) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x244) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x24c) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x254) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x25c) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x264) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x26c) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x274) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x27c) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x284) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x28c) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x294) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x29c) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x2a4) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x2ac) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x2b4) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x2dc) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x2e4) = 0x3f800000;
  *(undefined8 *)((long)puVar8 + 0x2cc) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x2d4) = 0x3f800000;
  *(undefined8 *)((long)puVar8 + 700) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x2c4) = 0x3f800000;
  *(undefined8 *)((long)puVar8 + 0x2ec) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x2f4) = 0x3f800000;
  *(undefined8 *)((long)puVar8 + 0x2fc) = 0x3f800000;
  *(undefined8 *)((long)puVar8 + 0x304) = 0;
  *(undefined8 *)((long)puVar8 + 0x30c) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x314) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x31c) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x324) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x32c) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x334) = 0x3f800000;
  *(undefined8 *)((long)puVar8 + 0x33c) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x344) = 0x3f800000;
  *(undefined8 *)((long)puVar8 + 0x34c) = 0x3f800000;
  *(undefined4 *)((long)puVar8 + 0x354) = 0x3f800000;
  *(undefined8 *)((long)puVar8 + 0x35c) = 0x3ecccccd3f000000;
  *(undefined8 *)((long)puVar8 + 0x364) = 0x3a83126f3e4ccccd;
  *(undefined8 *)((long)puVar8 + 0x38c) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0x394) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0x36c) = 0x3f80000000000000;
  *(undefined4 *)((long)puVar8 + 0x374) = 0x3f19999a;
  *(undefined4 *)(puVar8 + 0x6f) = 0x3dcccccd;
  *(undefined8 *)((long)puVar8 + 0x39c) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0x3a4) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0x37c) = 0x3f19999a3ecccccd;
  *(undefined8 *)((long)puVar8 + 900) = 0x3a83126f3e4ccccd;
  *(undefined8 *)((long)puVar8 + 0x3ac) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0x3b4) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0x3bc) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x3c4) = 0;
  *(undefined8 *)((long)puVar8 + 0x3cc) = 0x461c4000461c4000;
  *(undefined8 *)((long)puVar8 + 0x3d4) = 0;
  *(undefined8 *)((long)puVar8 + 0x3dc) = 0x3f800000;
  *(undefined8 *)((long)puVar8 + 0x3e4) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0x3ec) = 0;
  *(undefined4 *)((long)puVar8 + 0x3f4) = 0;
  puVar8[0x7f] = 0x3f800000;
  return;
}


