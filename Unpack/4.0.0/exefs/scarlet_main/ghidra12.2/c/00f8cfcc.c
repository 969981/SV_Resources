/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f8cfcc; name: FUN_00f8cfcc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f8cfcc(long param_1,int *param_2,undefined8 *param_3,undefined8 *param_4)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  undefined1 auVar19 [16];
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  
  iVar7 = param_2[1];
  uVar3 = param_2[2];
  iVar4 = *param_2;
  uVar22 = param_3[1];
  uVar8 = *param_3;
  uVar24 = param_4[1];
  uVar23 = *param_4;
  plVar10 = *(long **)(*(long *)(param_1 + 0xb0) +
                      ((long)iVar4 + (long)(iVar7 << (ulong)(uVar3 & 0x1f)) +
                      *(long *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar3 * 8)) * 8);
  if (plVar10 != (long *)0x0) {
    lVar11 = plVar10[6];
    if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar2 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar9;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  fVar12 = 1.0 / (float)(1 << (ulong)(uVar3 & 0x1f));
  auVar19 = NEON_fmov(0x3f800000,4);
  fVar13 = (float)uVar8;
  fVar14 = (float)((ulong)uVar8 >> 0x20);
  fVar18 = (float)uVar23;
  fVar15 = fVar18 + fVar13 * fVar12 * (float)iVar4;
  fVar20 = (float)((ulong)uVar23 >> 0x20);
  fVar16 = fVar20 + fVar14 * 0.0;
  fVar17 = (float)uVar24 + (float)uVar22 * fVar12 * -(float)(iVar7 + 1);
  fVar18 = fVar18 + fVar13 * fVar12 * (float)(iVar4 + 1);
  fVar20 = fVar20 + fVar14 * auVar19._4_4_;
  fVar21 = (float)uVar24 + (float)uVar22 * fVar12 * -(float)iVar7;
  fVar12 = fVar18 - fVar15;
  fVar13 = fVar20 - fVar16;
  local_90 = CONCAT44(fVar13,fVar12);
  fVar14 = fVar21 - fVar17;
  uStack_68 = (ulong)(uint)((fVar21 + fVar17) * 0.5);
  uStack_88 = (ulong)(uint)fVar14;
  uStack_78 = _UNK_03cabe58;
  uStack_80 = _DAT_03cabe50;
  local_70 = CONCAT44((fVar20 + fVar16) * 0.5,(fVar18 + fVar15) * 0.5);
  if ((((ulong)plVar10[0xc] < 0xfffffffffffffffe) &&
      (((plVar10[8] != 0 || (plVar10[9] != 0)) &&
       (auVar19._0_4_ = fVar12 * fVar12 + fVar13 * fVar13, auVar19._4_4_ = fVar14 * fVar14 + 0.0,
       auVar19._8_4_ = fVar12 * fVar12 + fVar13 * fVar13, auVar19._12_4_ = fVar14 * fVar14 + 0.0,
       auVar19 = NEON_ext(auVar19,auVar19,4,1), 1.1920929e-07 < auVar19._0_4_ + auVar19._4_4_)))) &&
     ((char)plVar10[0xd] == '\0')) {
    if (((*PTR_DAT_047d88d0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d88d0);
    }
    uVar8 = *(undefined8 *)PTR_DAT_047d88d8;
    *(undefined8 *)PTR_DAT_047d88e0 = uVar8;
    FUN_00dc21b8(uVar8,plVar10[8],plVar10[9],plVar10[0xc],&local_90);
  }
  FUN_00f8d3a8(plVar10,0);
  FUN_00f8e620(plVar10,0);
  if (param_2[2] < *(int *)(param_1 + 0x120) + -1) {
    local_90 = (ulong)(uint)(*param_2 << 1) | (ulong)(uint)param_2[1] << 0x21;
    uStack_88 = (ulong)(param_2[2] + 1);
    FUN_00f8cfcc(param_1,&local_90,param_3,param_4);
    local_90 = (ulong)(*param_2 << 1 | 1) | (ulong)(uint)param_2[1] << 0x21;
    uStack_88 = (ulong)(param_2[2] + 1);
    FUN_00f8cfcc(param_1,&local_90,param_3,param_4);
    local_90 = CONCAT44(param_2[1] << 1,*param_2 << 1) | 0x100000000;
    uStack_88 = (ulong)(param_2[2] + 1);
    FUN_00f8cfcc(param_1,&local_90,param_3,param_4);
    local_90 = CONCAT44(param_2[1] << 1,*param_2 << 1) | 0x100000001;
    uStack_88 = (ulong)(param_2[2] + 1);
    FUN_00f8cfcc(param_1,&local_90,param_3,param_4);
  }
  lVar11 = plVar10[6];
  psVar1 = (short *)(lVar11 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar2 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar2 == 1) {
    *(undefined8 *)(lVar11 + 0x10) = 0;
    (**(code **)(*plVar10 + 0x50))(plVar10);
  }
  else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


