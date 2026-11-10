/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010002f0; name: FUN_010002f0
 */


void FUN_010002f0(long *param_1,long *param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  short sVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  code *pcVar18;
  int local_d4;
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  int *local_b0 [12];
  long local_50;
  ulong local_48 [2];
  undefined4 local_38;
  
  local_50 = *param_2;
  local_48[0] = (ulong)(uint)(param_3 * param_3 * 0xc);
  local_48[1] = 4;
  local_38 = 0;
  local_d4 = param_3;
  lVar9 = FUN_00cf3764(local_d0,*(undefined8 *)(local_50 + 8),&local_50);
  *param_1 = lVar9;
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else {
    piVar3 = (int *)(lVar9 + 0x28);
    do {
      iVar12 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar9 = *param_1;
  }
  lVar13 = *(long *)(*(long *)(lVar9 + 0x70) + 0x30);
  local_d0 = *(undefined1 (*) [8])(lVar13 + 8);
  local_c8 = *(code **)(lVar13 + 0x6098);
  local_c0 = (undefined1 *)(lVar13 + 0x10);
  _local_d0 = FUN_00d56874(*(undefined8 *)(lVar13 + 0x6140),local_d0,local_48,0,0);
  lVar13 = lVar9 + 0x30;
  local_c0 = (undefined1 *)((ulong)local_c0 & 0xffffffffffffff00);
  FUN_00d56380(lVar13,local_d0);
  uVar8 = FUN_00d56320(lVar13);
  local_b0[0] = &local_d4;
  *(undefined4 *)(lVar9 + 0x78) = uVar8;
  local_d0 = (undefined1  [8])&LAB_02b3e7a8;
  local_c8 = FUN_02b3e88c;
  local_c0 = &LAB_02b3e890;
  puStack_b8 = &LAB_02b3e89c;
  pcVar10 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar9 + 0x70) + 0x110),lVar13);
  lVar11 = 0;
  if ((*pcVar10 != '\0') && (*(long *)(pcVar10 + 8) != 0)) {
    if (*(long *)(*(long *)(pcVar10 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_buffer","Map",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                 ,0x31);
    }
    lVar11 = (**(code **)PTR_DAT_047d8da8)();
  }
  pcVar18 = local_c8;
  if (local_d4 < 1) {
    FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar9 + 0x70) + 0x110),lVar13);
    pcVar18 = FUN_02b3e88c;
  }
  else {
    iVar12 = 0;
    sVar14 = 1;
    iVar16 = local_d4;
    iVar15 = 0;
    do {
      iVar2 = iVar15 + 1;
      if (0 < iVar16) {
        iVar17 = 0;
        do {
          sVar7 = (short)iVar15;
          sVar6 = (short)iVar17;
          psVar1 = (short *)(lVar11 + (long)iVar12 * 2);
          iVar12 = iVar12 + 6;
          *psVar1 = sVar6 + sVar7 * ((short)iVar16 + 1);
          psVar1[1] = sVar6 + sVar14 * ((short)*local_b0[0] + 1) + 1;
          psVar1[2] = sVar6 + sVar14 * ((short)*local_b0[0] + 1);
          psVar1[3] = sVar6 + sVar7 * ((short)*local_b0[0] + 1);
          psVar1[4] = sVar6 + sVar7 * ((short)*local_b0[0] + 1) + 1;
          iVar17 = iVar17 + 1;
          psVar1[5] = sVar6 + sVar14 * ((short)*local_b0[0] + 1) + 1;
          iVar16 = *local_b0[0];
        } while (iVar17 < iVar16);
      }
      sVar14 = sVar14 + 1;
      iVar15 = iVar2;
    } while (iVar2 < iVar16);
    FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar9 + 0x70) + 0x110),lVar13);
    if (pcVar18 == (code *)0x0) {
      return;
    }
  }
  local_c0 = (undefined1 *)0x0;
  puStack_b8 = (undefined1 *)0x0;
  local_d0 = (undefined1  [8])0x0;
  local_c8 = (code *)0x0;
  (*pcVar18)(local_b0);
  return;
}


