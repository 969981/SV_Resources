/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012a6430; name: FUN_012a6430
 */


void FUN_012a6430(long *param_1,long *param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  code *pcVar7;
  undefined4 uVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  short *psVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int local_d8;
  int local_d4;
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  int *local_b0;
  int *local_a8;
  ulong local_48 [2];
  undefined4 local_38;
  long local_18;
  
  local_18 = *param_2;
  local_38 = 0;
  local_48[0] = (ulong)(uint)(((param_4 + -2) * param_3 * 2 + param_3 * 2) * 6);
  local_48[1] = 4;
  local_d8 = param_4;
  local_d4 = param_3;
  lVar9 = FUN_00cf3764(local_d0,*(undefined8 *)(local_18 + 8),&local_18);
  *param_1 = lVar9;
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else {
    piVar16 = (int *)(lVar9 + 0x28);
    do {
      iVar13 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar13 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar9 = *param_1;
  }
  lVar12 = *(long *)(*(long *)(lVar9 + 0x70) + 0x30);
  local_d0 = *(undefined1 (*) [8])(lVar12 + 8);
  local_c8 = *(code **)(lVar12 + 0x6098);
  local_c0 = (undefined1 *)(lVar12 + 0x10);
  _local_d0 = FUN_00d56874(*(undefined8 *)(lVar12 + 0x6140),local_d0,local_48,0,0);
  lVar12 = lVar9 + 0x30;
  local_c0 = (undefined1 *)((ulong)local_c0 & 0xffffffffffffff00);
  FUN_00d56380(lVar12,local_d0);
  uVar8 = FUN_00d56320(lVar12);
  local_b0 = &local_d4;
  local_a8 = &local_d8;
  *(undefined4 *)(lVar9 + 0x78) = uVar8;
  local_d0 = (undefined1  [8])&LAB_02bb4388;
  local_c8 = FUN_02bb44ec;
  local_c0 = &LAB_02bb44f0;
  puStack_b8 = &LAB_02bb44fc;
  pcVar10 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar9 + 0x70) + 0x110),lVar12);
  if ((*pcVar10 != '\0') && (*(long *)(pcVar10 + 8) != 0)) {
    if (*(long *)(*(long *)(pcVar10 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_buffer","Map",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                 ,0x31);
    }
    lVar11 = (**(code **)PTR_DAT_047d8da8)();
    if (lVar11 != 0) {
      if (local_d4 < 1) {
        iVar13 = 0;
        piVar16 = &local_d8;
        iVar17 = local_d4;
      }
      else {
        iVar13 = 0;
        psVar14 = (short *)(lVar11 + 4);
        do {
          sVar5 = (short)local_d4 + 1 + (short)iVar13;
          psVar14[-1] = sVar5;
          psVar14[-2] = (short)iVar13;
          iVar13 = iVar13 + 1;
          *psVar14 = sVar5 + 1;
          psVar14 = psVar14 + 3;
        } while (iVar13 < *local_b0);
        piVar16 = local_a8;
        iVar17 = *local_b0;
      }
      iVar20 = *piVar16;
      if (iVar20 < 3) {
        iVar15 = 1;
      }
      else {
        iVar1 = local_d4 + 1;
        iVar18 = local_d4 * 2 + 2;
        iVar15 = 1;
        iVar19 = iVar1;
        do {
          if (0 < iVar17) {
            iVar21 = 0;
            iVar20 = iVar13 * 3 + 5;
            do {
              sVar5 = (short)iVar19 + (short)iVar21;
              *(short *)(lVar11 + (long)(iVar20 + -5) * 2) = sVar5;
              sVar6 = (short)iVar18 + (short)iVar21;
              sVar4 = sVar6 + 1;
              *(short *)(lVar11 + (long)(iVar20 + -4) * 2) = sVar4;
              iVar21 = iVar21 + 1;
              *(short *)(lVar11 + (long)(iVar20 + -3) * 2) = sVar5 + 1;
              *(short *)(lVar11 + (long)(iVar20 + -2) * 2) = sVar5;
              *(short *)(lVar11 + (long)(iVar20 + -1) * 2) = sVar6;
              iVar13 = iVar13 + 2;
              *(short *)(lVar11 + (long)iVar20 * 2) = sVar4;
              iVar17 = *local_b0;
              iVar20 = iVar20 + 6;
            } while (iVar21 < iVar17);
            iVar20 = *local_a8;
          }
          iVar15 = iVar15 + 1;
          iVar18 = iVar18 + iVar1;
          iVar19 = iVar19 + iVar1;
        } while (iVar15 < iVar20 + -1);
      }
      if (0 < iVar17) {
        sVar4 = (short)local_d4 + 1;
        sVar5 = (short)iVar15 * sVar4;
        iVar17 = 0;
        psVar14 = (short *)(lVar11 + (long)iVar13 * 6 + 4);
        do {
          sVar6 = sVar5 + (short)iVar17;
          psVar14[-2] = sVar6;
          psVar14[-1] = sVar5 + sVar4 + (short)iVar17;
          iVar17 = iVar17 + 1;
          *psVar14 = sVar6 + 1;
          psVar14 = psVar14 + 3;
        } while (iVar17 < *local_b0);
      }
    }
  }
  FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar9 + 0x70) + 0x110),lVar12);
  pcVar7 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    puStack_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1  [8])0x0;
    local_c8 = (code *)0x0;
    (*pcVar7)(&local_b0);
  }
  return;
}


