/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0100012c; name: FUN_0100012c
 */


void FUN_0100012c(undefined8 param_1,long param_2,int param_3)

{
  bool bVar1;
  float *pfVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  code *pcVar10;
  int local_c4;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  int *local_a0 [13];
  undefined4 local_34;
  
  local_c0 = (undefined1 *)CONCAT44(local_c0._4_4_,0x2e);
  local_34 = 1;
  local_c4 = param_3;
  FUN_00c85118(param_2,&local_34,&local_c0);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 0x10;
  FUN_00ebd51c(param_2,param_1,(param_3 + 1) * (param_3 + 1),1);
  lVar9 = *(long *)(param_2 + 0x38);
  local_a0[0] = &local_c4;
  lVar3 = lVar9 + 0x30;
  local_c0 = &LAB_02b3e718;
  local_b8 = FUN_02b3e78c;
  local_b0 = &LAB_02b3e790;
  puStack_a8 = &LAB_02b3e79c;
  pcVar4 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar9 + 0x70) + 0x110),lVar3);
  if (*pcVar4 == '\0' || *(long *)(pcVar4 + 8) == 0) {
    lVar5 = 0;
  }
  else {
    if (*(long *)(*(long *)(pcVar4 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_buffer","Map",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                 ,0x31);
    }
    lVar5 = (**(code **)PTR_DAT_047d8da8)();
  }
  pcVar10 = local_b8;
  if (local_c4 < 0) {
    FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar9 + 0x70) + 0x110),lVar3);
    pcVar10 = FUN_02b3e78c;
  }
  else {
    iVar6 = local_c4;
    iVar7 = 0;
    do {
      if (-1 < iVar6) {
        iVar8 = 0;
        do {
          pfVar2 = (float *)(lVar5 + (long)(iVar8 + iVar7 * (iVar6 + 1)) * 0x10);
          *pfVar2 = (float)iVar8 / (float)iVar6;
          pfVar2[1] = 0.0;
          pfVar2[2] = -(float)iVar7 / (float)iVar6;
          pfVar2[3] = (float)iVar6;
          iVar6 = *local_a0[0];
          bVar1 = iVar8 < iVar6;
          iVar8 = iVar8 + 1;
        } while (bVar1);
      }
      bVar1 = iVar7 < iVar6;
      iVar7 = iVar7 + 1;
    } while (bVar1);
    FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar9 + 0x70) + 0x110),lVar3);
    if (pcVar10 == (code *)0x0) {
      return;
    }
  }
  local_b0 = (undefined1 *)0x0;
  puStack_a8 = (undefined1 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_b8 = (code *)0x0;
  (*pcVar10)(local_a0);
  return;
}


