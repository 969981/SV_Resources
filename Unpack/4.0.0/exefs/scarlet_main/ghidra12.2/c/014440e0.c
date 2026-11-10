/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014440e0; name: FUN_014440e0
 */


void FUN_014440e0(char *param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  uint uVar9;
  int *piVar10;
  ushort *puVar11;
  long lVar12;
  char cVar13;
  long *plVar14;
  undefined1 *local_390;
  char *pcStack_388;
  long *local_380;
  long *local_378;
  long *local_370;
  undefined1 *puStack_368;
  undefined1 *local_360;
  undefined8 uStack_358;
  long *local_350;
  undefined4 local_348;
  undefined2 local_340;
  undefined8 local_330;
  code *local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined1 auStack_310 [96];
  undefined8 local_2b0;
  undefined8 local_2a0;
  code *local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [96];
  undefined8 local_220;
  code *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined1 auStack_200 [96];
  undefined8 local_1a0;
  long *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined8 local_180;
  long *local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined4 local_164;
  long *local_160;
  undefined2 local_148 [4];
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined8 local_130;
  long *local_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined8 local_110;
  long *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_f0;
  undefined1 *local_e8;
  undefined1 *puStack_e0;
  undefined8 local_d8;
  long *local_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined8 local_78;
  long *local_70;
  
  plVar14 = (long *)*param_4;
  if (*plVar14 == plVar14[1]) {
    return;
  }
  lVar12 = *param_3;
  cVar1 = *param_1;
  local_390 = &DAT_8f4683b30904fb31;
  pcStack_388 = "isVisible";
  local_380 = (long *)0x9;
  local_378 = (long *)0x0;
  lVar6 = FUN_010ffad0(lVar12,param_5,&local_390);
  if (lVar6 != 0) {
    cVar13 = *(char *)(lVar6 + 0x10);
  }
  else {
    cVar13 = '\0';
  }
  if (local_378 != (long *)0x0) {
    (**(code **)(*local_378 + 0x20))();
  }
  local_350 = (long *)0x0;
  local_340 = 0x101;
  pcStack_388 = (char *)0x0;
  local_370 = (long *)0x0;
  puStack_368 = &DAT_cbf29ce484222645;
  local_360 = &DAT_03c886bc;
  uStack_358 = 0;
  local_348 = 0;
  local_2b0 = 0;
  local_220 = 0;
  local_208 = 0;
  local_190 = &DAT_cbf29ce484222645;
  local_188 = &DAT_03c886bc;
  local_180 = 0;
  local_178 = (long *)0x0;
  local_168 = 1;
  local_164 = 0;
  local_160 = (long *)0x0;
  local_330 = 0;
  local_328 = (code *)0x0;
  local_320 = 0;
  uStack_318 = 0;
  local_2a0 = 0;
  local_298 = (code *)0x0;
  local_290 = 0;
  uStack_288 = 0;
  local_218 = (code *)0x0;
  local_210 = 0;
  local_1a0 = 0;
  local_198 = (long *)0x0;
  puVar8 = *(undefined1 **)(param_1 + 8);
  local_170 = (ulong)*(uint *)(param_1 + 0x10);
  local_390 = puVar8;
  local_380 = plVar14;
  if (*(code **)PTR_DAT_047db100 == (code *)0x0) {
    uVar9 = 0;
  }
  else {
    iVar5 = (**(code **)PTR_DAT_047db100)(PTR_DAT_047db100 + 0x20);
    puVar8 = *(undefined1 **)(param_1 + 8);
    uVar9 = (uint)(iVar5 != 0);
  }
  local_170 = CONCAT44(uVar9,(undefined4)local_170);
  local_160 = plVar14 + 7;
  piVar10 = *(int **)(param_1 + 0x18);
  local_148[0] = 0;
  local_f0 = 0;
  local_140 = &DAT_cbf29ce484222645;
  puStack_138 = &DAT_03c886bc;
  local_130 = 0;
  local_128 = (long *)0x0;
  local_120 = &DAT_cbf29ce484222645;
  puStack_118 = &DAT_03c886bc;
  local_110 = 0;
  local_108 = (long *)0x0;
  local_e8 = &DAT_cbf29ce484222645;
  puStack_e0 = &DAT_03c886bc;
  local_d8 = 0;
  local_d0 = (long *)0x0;
  local_c8 = &DAT_cbf29ce484222645;
  puStack_c0 = &DAT_03c886bc;
  local_b8 = 0;
  local_b0 = (long *)0x0;
  local_88 = &DAT_cbf29ce484222645;
  puStack_80 = &DAT_03c886bc;
  local_78 = 0;
  local_70 = (long *)0x0;
  puVar11 = (ushort *)((long)piVar10 - (long)*piVar10);
  uVar2 = *puVar11;
  if (uVar2 < 7) goto LAB_014442b0;
  if (((ulong)puVar11[3] != 0) && (*(char *)((long)piVar10 + (ulong)puVar11[3]) != '\0')) {
    local_148[0] = 3;
    if (uVar2 < 9) {
      local_100 = 0;
    }
    else {
      if ((ulong)puVar11[4] == 0) {
        local_100 = 0;
      }
      else {
        local_100 = *(undefined4 *)((long)piVar10 + (ulong)puVar11[4]);
      }
      if (10 < uVar2) {
        local_f8 = 0;
        local_fc = 0;
        if ((ulong)puVar11[5] != 0) {
          local_fc = *(undefined4 *)((long)piVar10 + (ulong)puVar11[5]);
        }
        if ((0xc < uVar2) && ((ulong)puVar11[6] != 0)) {
          local_f8 = *(undefined4 *)((long)piVar10 + (ulong)puVar11[6]);
        }
        goto LAB_01444298;
      }
    }
    local_fc = 0;
    local_f8 = 0;
  }
LAB_01444298:
  if (((uVar2 < 0xf) || ((ulong)puVar11[7] == 0)) ||
     (*(char *)((long)piVar10 + (ulong)puVar11[7]) == '\0')) goto LAB_014442b0;
  if (uVar2 < 0x11) {
    local_a8 = 0;
LAB_01444668:
    local_a4 = 0;
LAB_0144466c:
    local_a0 = 0;
LAB_01444670:
    local_9c = 0;
LAB_01444674:
    local_98 = 0;
LAB_01444678:
    local_94 = 0;
  }
  else {
    if ((ulong)puVar11[8] == 0) {
      local_a8 = 0;
    }
    else {
      local_a8 = *(undefined4 *)((long)piVar10 + (ulong)puVar11[8]);
    }
    if (uVar2 < 0x13) goto LAB_01444668;
    local_a4 = 0;
    if ((ulong)puVar11[9] != 0) {
      local_a4 = *(undefined4 *)((long)piVar10 + (ulong)puVar11[9]);
    }
    if (uVar2 < 0x15) goto LAB_0144466c;
    if ((ulong)puVar11[10] == 0) {
      local_a0 = 0;
    }
    else {
      local_a0 = *(undefined4 *)((long)piVar10 + (ulong)puVar11[10]);
    }
    if (uVar2 < 0x17) goto LAB_01444670;
    local_9c = 0;
    if ((ulong)puVar11[0xb] != 0) {
      local_9c = *(undefined4 *)((long)piVar10 + (ulong)puVar11[0xb]);
    }
    if (uVar2 < 0x19) goto LAB_01444674;
    if ((ulong)puVar11[0xc] == 0) {
      local_98 = 0;
    }
    else {
      local_98 = *(undefined4 *)((long)piVar10 + (ulong)puVar11[0xc]);
    }
    if (uVar2 < 0x1b) goto LAB_01444678;
    local_94 = 0;
    if ((ulong)puVar11[0xd] != 0) {
      local_94 = *(undefined4 *)((long)piVar10 + (ulong)puVar11[0xd]);
    }
    if (0x1c < uVar2) {
      if ((ulong)puVar11[0xe] == 0) {
        local_90 = 0;
      }
      else {
        local_90 = *(undefined4 *)((long)piVar10 + (ulong)puVar11[0xe]);
      }
      if ((uVar2 < 0x1f) || ((ulong)puVar11[0xf] == 0)) {
        local_8c = 0;
      }
      else {
        local_8c = *(undefined4 *)((long)piVar10 + (ulong)puVar11[0xf]);
      }
      goto LAB_014442b0;
    }
  }
  local_8c = 0;
  local_90 = 0;
LAB_014442b0:
  FUN_0102e1b0(&local_370,puVar8,local_148);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x20))();
  }
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  lVar12 = FUN_01444694(lVar12,*(undefined8 *)(lVar12 + 8),&local_390);
  *(undefined8 *)(lVar12 + 0xf0) = *param_5;
  *(undefined8 *)(lVar12 + 0xf8) = param_5[1];
  *(undefined8 *)(lVar12 + 0x100) = param_5[2];
  plVar14 = (long *)param_5[3];
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  plVar7 = *(long **)(lVar12 + 0x108);
  bVar3 = cVar1 != '\0' && (lVar6 == 0 || cVar13 != '\0');
  *(long **)(lVar12 + 0x108) = plVar14;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(bool *)(lVar12 + 0x480) = bVar3;
  if ((*(long *)(lVar12 + 0x488) != 0) &&
     (lVar6 = *(long *)(*(long *)(lVar12 + 0x488) + 0x120), lVar6 != 0)) {
    *(bool *)(lVar6 + 0x210) = bVar3;
  }
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  if (local_198 != (long *)0x0) {
    plVar14 = local_198 + 5;
    do {
      lVar6 = *plVar14;
      iVar5 = (int)lVar6 + -1;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *(int *)plVar14 = iVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_198 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  pcVar4 = local_218;
  if (local_218 != (code *)0x0) {
    local_210 = 0;
    local_208 = 0;
    local_220 = 0;
    local_218 = (code *)0x0;
    (*pcVar4)(auStack_200);
  }
  pcVar4 = local_298;
  if (local_298 != (code *)0x0) {
    local_290 = 0;
    uStack_288 = 0;
    local_2a0 = 0;
    local_298 = (code *)0x0;
    (*pcVar4)(auStack_280);
  }
  pcVar4 = local_328;
  if (local_328 != (code *)0x0) {
    local_320 = 0;
    uStack_318 = 0;
    local_330 = 0;
    local_328 = (code *)0x0;
    (*pcVar4)(auStack_310);
  }
  if (local_350 != (long *)0x0) {
    (**(code **)(*local_350 + 0x20))();
  }
  if (local_370 != (long *)0x0) {
    (**(code **)(*local_370 + 0x20))();
  }
  return;
}


