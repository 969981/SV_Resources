/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011b3e90; name: FUN_011b3e90
 */


void FUN_011b3e90(undefined8 param_1,long param_2,undefined8 *param_3)

{
  code *pcVar1;
  char *pcVar2;
  float *pfVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 *puVar9;
  ulong uVar8;
  long lVar10;
  undefined1 local_1e8 [96];
  float local_188 [8];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  float *local_80;
  
  local_c0._0_4_ = 0x22;
  local_120._0_4_ = 1;
  FUN_00c85118(param_2,&local_120,&local_c0);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 0xc;
  uVar4 = (uint)*param_3;
  if ((uVar4 >> 1 & 1) != 0) {
    local_c0._0_4_ = 0x22;
    local_120._0_4_ = 2;
    FUN_00c85118(param_2,&local_120,&local_c0);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 0xc;
    uVar4 = (uint)*param_3;
  }
  if ((uVar4 >> 2 & 1) != 0) {
    local_c0._0_4_ = 0x16;
    local_120._0_4_ = 0x1e;
    FUN_00c85118(param_2,&local_120,&local_c0);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 8;
  }
  FUN_00ebd51c(param_2,param_1,0x18,1);
  local_120 = 0x3f8000003f800000;
  uStack_118 = 0x3f800000bf800000;
  local_e0 = 0x3f800000bf800000;
  uStack_d8 = 0xbf800000bf800000;
  local_110 = 0xbf800000bf800000;
  uStack_108 = 0xbf800000bf800000;
  local_100 = 0xbf800000bf800000;
  uStack_f8 = 0xbf8000003f800000;
  local_168 = 0;
  uStack_160 = 0xbf800000bf800000;
  local_138 = 0xbf80000000000000;
  uStack_130 = 0;
  local_128 = 0x3f800000;
  local_f0 = 0x3f8000003f800000;
  uStack_e8 = 0x3f8000003f800000;
  local_d0 = 0xbf8000003f800000;
  uStack_c8 = 0x3f8000003f800000;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0x3f8000003f800000;
  uStack_140 = 0;
  local_188[0] = 0.0;
  local_188[1] = 0.0;
  local_188[2] = 0.0;
  local_188[3] = 1.0;
  local_188[4] = 1.0;
  local_188[5] = 1.0;
  local_188[6] = 1.0;
  local_188[7] = 0.0;
  memcpy(local_1e8,&DAT_03d65014,0x60);
  lVar10 = *(long *)(param_2 + 0x38);
  local_98 = &local_120;
  local_80 = local_188;
  local_88 = &local_168;
  local_c0 = &LAB_02bb4524;
  local_b8 = FUN_02bb4814;
  local_b0 = &LAB_02bb4818;
  puStack_a8 = &LAB_02bb482c;
  local_a0 = local_1e8;
  local_90 = param_3;
  pcVar2 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar10 + 0x70) + 0x110),lVar10 + 0x30);
  pfVar3 = (float *)0x0;
  if ((*pcVar2 != '\0') && (*(long *)(pcVar2 + 8) != 0)) {
    if (*(long *)(*(long *)(pcVar2 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_buffer","Map",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                 ,0x31);
    }
    pfVar3 = (float *)(**(code **)PTR_DAT_047d8da8)();
  }
  lVar5 = 0;
  lVar6 = 8;
  puVar7 = &local_120;
  puVar9 = local_1e8;
  while( true ) {
    uVar8 = (ulong)*(uint *)(puVar9 + lVar5);
    *pfVar3 = *(float *)((long)puVar7 + uVar8 * 0xc) * 0.5;
    pfVar3[1] = *(float *)((long)local_98 + uVar8 * 0xc + 4) * 0.5;
    pfVar3[2] = *(float *)((long)local_98 + uVar8 * 0xc + 8) * 0.5;
    uVar4 = (uint)*local_90;
    if ((uVar4 >> 1 & 1) == 0) {
      pfVar3 = pfVar3 + 3;
    }
    else {
      pfVar3[3] = *(float *)((long)local_88 + lVar6 + -8);
      pfVar3[4] = *(float *)((long)local_88 + lVar6 + -4);
      pfVar3[5] = *(float *)((long)local_88 + lVar6);
      uVar4 = (uint)*local_90;
      pfVar3 = pfVar3 + 6;
    }
    if ((uVar4 >> 2 & 1) != 0) {
      *pfVar3 = *local_80;
      pfVar3[1] = local_80[1];
      pfVar3 = pfVar3 + 2;
    }
    uVar8 = (ulong)*(uint *)(local_a0 + lVar5 + 4);
    *pfVar3 = *(float *)((long)local_98 + uVar8 * 0xc) * 0.5;
    pfVar3[1] = *(float *)((long)local_98 + uVar8 * 0xc + 4) * 0.5;
    pfVar3[2] = *(float *)((long)local_98 + uVar8 * 0xc + 8) * 0.5;
    uVar4 = (uint)*local_90;
    if ((uVar4 >> 1 & 1) == 0) {
      pfVar3 = pfVar3 + 3;
    }
    else {
      pfVar3[3] = *(float *)((long)local_88 + lVar6 + -8);
      pfVar3[4] = *(float *)((long)local_88 + lVar6 + -4);
      pfVar3[5] = *(float *)((long)local_88 + lVar6);
      uVar4 = (uint)*local_90;
      pfVar3 = pfVar3 + 6;
    }
    if ((uVar4 >> 2 & 1) != 0) {
      *pfVar3 = local_80[2];
      pfVar3[1] = local_80[3];
      pfVar3 = pfVar3 + 2;
    }
    uVar8 = (ulong)*(uint *)(local_a0 + lVar5 + 8);
    *pfVar3 = *(float *)((long)local_98 + uVar8 * 0xc) * 0.5;
    pfVar3[1] = *(float *)((long)local_98 + uVar8 * 0xc + 4) * 0.5;
    pfVar3[2] = *(float *)((long)local_98 + uVar8 * 0xc + 8) * 0.5;
    uVar4 = (uint)*local_90;
    if ((uVar4 >> 1 & 1) == 0) {
      pfVar3 = pfVar3 + 3;
    }
    else {
      pfVar3[3] = *(float *)((long)local_88 + lVar6 + -8);
      pfVar3[4] = *(float *)((long)local_88 + lVar6 + -4);
      pfVar3[5] = *(float *)((long)local_88 + lVar6);
      uVar4 = (uint)*local_90;
      pfVar3 = pfVar3 + 6;
    }
    if ((uVar4 >> 2 & 1) != 0) {
      *pfVar3 = local_80[4];
      pfVar3[1] = local_80[5];
      pfVar3 = pfVar3 + 2;
    }
    uVar8 = (ulong)*(uint *)(local_a0 + lVar5 + 0xc);
    *pfVar3 = *(float *)((long)local_98 + uVar8 * 0xc) * 0.5;
    pfVar3[1] = *(float *)((long)local_98 + uVar8 * 0xc + 4) * 0.5;
    pfVar3[2] = *(float *)((long)local_98 + uVar8 * 0xc + 8) * 0.5;
    uVar4 = (uint)*local_90;
    if ((uVar4 >> 1 & 1) == 0) {
      pfVar3 = pfVar3 + 3;
    }
    else {
      pfVar3[3] = *(float *)((long)local_88 + lVar6 + -8);
      pfVar3[4] = *(float *)((long)local_88 + lVar6 + -4);
      pfVar3[5] = *(float *)((long)local_88 + lVar6);
      pfVar3 = pfVar3 + 6;
      uVar4 = (uint)*local_90;
    }
    if ((uVar4 >> 2 & 1) != 0) {
      *pfVar3 = local_80[6];
      pfVar3[1] = local_80[7];
      pfVar3 = pfVar3 + 2;
    }
    if (lVar6 == 0x44) break;
    lVar6 = lVar6 + 0xc;
    lVar5 = lVar5 + 0x10;
    puVar7 = local_98;
    puVar9 = local_a0;
  }
  FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar10 + 0x70) + 0x110),lVar10 + 0x30);
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar1)(&local_a0);
  }
  return;
}


