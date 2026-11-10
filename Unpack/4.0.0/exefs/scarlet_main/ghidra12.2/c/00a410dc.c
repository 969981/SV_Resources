/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a410dc; name: FUN_00a410dc
 */


void FUN_00a410dc(long param_1,long *param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  undefined1 *puVar2;
  long *plVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  byte bVar16;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  long *local_a8;
  long local_a0 [2];
  undefined4 local_90;
  
  local_a8 = *(long **)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  local_a0[0] = 0x3fffffffffffffff;
  local_a0[1] = 0;
  local_c0 = (undefined1 *)0x0;
  local_b8 = (code *)0x0;
  local_cc = 0x2c000000003;
  local_90 = 0;
  local_c4 = 0x500;
  local_b0 = (undefined1 *)0x0;
  FUN_00a416f8(&local_c0,0,&local_cc,&local_c0);
  FUN_00a42c28(*(undefined8 *)(param_1 + 0x10),&local_c0,0);
  plVar3 = local_a8;
  puVar2 = local_c0;
  if (local_c0 != (undefined1 *)0x0) {
    local_b8 = (code *)local_c0;
    lVar12 = (long)local_b0 - (long)local_c0;
    uVar4 = (**(code **)(*local_a8 + 0xf8))(local_a8);
    if ((uVar4 & 1) != 0) {
      lVar13 = FUN_00c4e600();
      if (0 < *(int *)(lVar13 + 0x12c8)) {
        FUN_00c48fe8(plVar3,puVar2,lVar12,4);
        goto LAB_00a41198;
      }
    }
    (**(code **)(*plVar3 + 0x18))(plVar3,puVar2,lVar12,4);
  }
LAB_00a41198:
  local_a0[0] = param_1;
  if ((*(int *)(param_1 + 0x18) == 0x500) && (*(int *)(param_1 + 0x1c) == 0x2c0)) {
    lVar13 = *param_2;
    local_c0 = &LAB_00a41dd4;
    local_b8 = FUN_00a41e54;
    local_b0 = &LAB_00a41e58;
    local_a8 = (long *)&LAB_00a41e64;
    pcVar5 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar13 + 0x70) + 0x110),lVar13 + 0x30);
    lVar12 = 0;
    if ((*pcVar5 != '\0') && (*(long *)(pcVar5 + 8) != 0)) {
      if (*(long *)(*(long *)(pcVar5 + 8) + 0x20) == 0) {
LAB_00a413b8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_buffer","Map",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                   ,0x31);
      }
      lVar12 = (**(code **)PTR_DAT_047d8da8)();
    }
    lVar8 = *(long *)(param_1 + 0x10);
    lVar7 = *(long *)(lVar8 + 0x80);
    if ((int)((ulong)(*(long *)(lVar8 + 0x18) - *(long *)(lVar8 + 0x10)) >> 2) < 1) {
      lVar10 = 0;
      lVar8 = lVar7;
    }
    else {
      lVar10 = (long)**(int **)(lVar8 + 0x48) << 1;
      lVar8 = lVar7 + (long)**(int **)(lVar8 + 0x48) * 4;
    }
    lVar9 = 0;
    do {
      pbVar1 = (byte *)(lVar12 + lVar9);
      uVar14 = NEON_ucvtf((uint)*pbVar1);
      bVar16 = pbVar1[2];
      uVar15 = NEON_ucvtf((uint)pbVar1[1]);
      *(undefined4 *)(lVar7 + lVar9) = uVar14;
      uVar14 = NEON_ucvtf((uint)bVar16);
      *(undefined4 *)(lVar8 + lVar9) = uVar15;
      *(undefined4 *)(lVar7 + lVar10 * 4 + lVar9) = uVar14;
      lVar9 = lVar9 + 4;
    } while ((int)lVar9 != 0x370000);
    FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar13 + 0x70) + 0x110),lVar13 + 0x30);
    pcVar11 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined1 *)0x0;
      local_a8 = (long *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar11)(local_a0);
    }
  }
  else {
    lVar12 = *param_2;
    local_c0 = &LAB_00a41e70;
    local_b8 = FUN_00a41e7c;
    local_b0 = &LAB_00a4212c;
    local_a8 = (long *)&LAB_00a42138;
    pcVar5 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar12 + 0x70) + 0x110),lVar12 + 0x30);
    uVar6 = 0;
    pcVar11 = FUN_00a41e7c;
    if ((*pcVar5 != '\0') && (*(long *)(pcVar5 + 8) != 0)) {
      lVar13 = *(long *)(*(long *)(pcVar5 + 8) + 0x20);
      if (lVar13 == 0) goto LAB_00a413b8;
      uVar6 = (**(code **)PTR_DAT_047d8da8)(lVar13,0);
      param_1 = local_a0[0];
      pcVar11 = local_b8;
    }
    FUN_00a41e80(param_1,uVar6);
    FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar12 + 0x70) + 0x110),lVar12 + 0x30);
    if (pcVar11 != (code *)0x0) {
      local_b0 = (undefined1 *)0x0;
      local_a8 = (long *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar11)(local_a0);
    }
  }
  return;
}


