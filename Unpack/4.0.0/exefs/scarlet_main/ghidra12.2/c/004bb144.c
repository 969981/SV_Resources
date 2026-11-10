/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004bb144; name: FUN_004bb144
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_004bb144(long param_1,undefined *param_2,undefined8 param_3)

{
  ulong uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  size_t sVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  byte *pbVar16;
  char *__s;
  undefined *local_f8 [2];
  undefined8 local_e8;
  undefined *local_e0;
  ulong uStack_d8;
  ulong local_d0;
  undefined ***local_c0;
  ulong uStack_b8;
  ulong local_b0;
  undefined **local_a0;
  undefined **ppuStack_98;
  ulong local_90;
  undefined *local_80;
  undefined **local_78;
  undefined *local_70;
  undefined **ppuStack_68;
  
  if (param_2[0x43] != '\0') {
    uVar14 = *(undefined8 *)(*(long *)(param_2 + 0x50) + 8);
    if (((DAT_047f4560 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_047f4560), iVar8 != 0)) {
      plVar9 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
      if (plVar9 != (long *)0x0) {
        plVar9[2] = 0;
        plVar9[1] = 0;
        *plVar9 = (long)(plVar9 + 1);
      }
      puVar5 = PTR_LAB_047cba48;
      uVar4 = s_google_protobuf__03bda6a1._8_8_;
      uVar3 = s_google_protobuf__03bda6a1._0_8_;
      lVar15 = 0;
      do {
        local_c0 = (undefined ***)CONCAT71(local_c0._1_7_,0x20);
        __s = *(char **)((long)&PTR_s_FileOptions_044c45f0 + lVar15);
        *(undefined8 *)((char *)((ulong)&local_c0 | 1) + 8) = uVar4;
        *(undefined8 *)((ulong)&local_c0 | 1) = uVar3;
        local_b0._0_2_ = (ushort)(byte)local_b0;
        sVar12 = strlen(__s);
                    /* try { // try from 004bb618 to 004bb623 has its CatchHandler @ 004bb91c */
        puVar10 = (ulong *)FUN_0021d540(&local_c0,__s,sVar12);
        ppuStack_98 = (undefined **)puVar10[1];
        local_a0 = (undefined **)*puVar10;
        local_90 = puVar10[2];
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
                    /* try { // try from 004bb63c to 004bb64b has its CatchHandler @ 004bb8fc */
        plVar13 = (long *)FUN_002a4d2c(plVar9,&local_e0,&local_a0);
        if (*plVar13 == 0) {
          puVar11 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x38);
          puVar11[6] = local_90;
          puVar11[5] = ppuStack_98;
          puVar11[4] = local_a0;
          ppuStack_98 = (undefined **)0x0;
          local_90 = 0;
          local_a0 = (undefined **)0x0;
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = local_e0;
          *plVar13 = (long)puVar11;
          if (*(long *)*plVar9 != 0) {
            *plVar9 = *(long *)*plVar9;
            puVar11 = (undefined8 *)*plVar13;
          }
          FUN_010108e0(plVar9[1],puVar11);
          plVar9[2] = plVar9[2] + 1;
        }
        if (((ulong)local_a0 & 1) != 0) {
          FUN_0049e790(puVar5,local_90);
        }
        if (((ulong)local_c0 & 1) != 0) {
          FUN_0049e790(puVar5,local_b0);
        }
        puVar6 = local_e0;
        local_e0 = (undefined *)CONCAT71(local_e0._1_7_,10);
        puVar7 = local_e0;
        *(undefined1 *)((undefined4 *)((ulong)&local_e0 | 1) + 1) = 0x6f;
        *(undefined4 *)((ulong)&local_e0 | 1) = 0x746f7270;
        local_e0._7_1_ = SUB81(puVar6,7);
        local_e0._0_7_ = (uint7)(uint6)puVar7;
                    /* try { // try from 004bb694 to 004bb6a3 has its CatchHandler @ 004bb8e8 */
        puVar10 = (ulong *)FUN_0021d540(&local_e0,&DAT_03c26258,2);
        uStack_b8 = puVar10[1];
        local_c0 = (undefined ***)*puVar10;
        local_b0 = puVar10[2];
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        sVar12 = strlen(__s);
                    /* try { // try from 004bb6c8 to 004bb6d3 has its CatchHandler @ 004bb8c0 */
        puVar11 = (undefined8 *)FUN_0021d540(&local_c0,__s,sVar12);
        ppuStack_98 = (undefined **)puVar11[1];
        local_a0 = (undefined **)*puVar11;
        local_90 = puVar11[2];
        puVar11[1] = 0;
        puVar11[2] = 0;
        *puVar11 = 0;
                    /* try { // try from 004bb6ec to 004bb6fb has its CatchHandler @ 004bb884 */
        plVar13 = (long *)FUN_002a4d2c(plVar9,local_f8,&local_a0);
        if (*plVar13 == 0) {
          puVar11 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x38);
          puVar11[6] = local_90;
          puVar11[5] = ppuStack_98;
          puVar11[4] = local_a0;
          ppuStack_98 = (undefined **)0x0;
          local_90 = 0;
          local_a0 = (undefined **)0x0;
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = local_f8[0];
          *plVar13 = (long)puVar11;
          if (*(long *)*plVar9 != 0) {
            *plVar9 = *(long *)*plVar9;
            puVar11 = (undefined8 *)*plVar13;
          }
          FUN_010108e0(plVar9[1],puVar11);
          plVar9[2] = plVar9[2] + 1;
        }
        if (((ulong)local_a0 & 1) != 0) {
          FUN_0049e790(puVar5,local_90);
        }
        if (((ulong)local_c0 & 1) != 0) {
          FUN_0049e790(puVar5,local_b0);
        }
        if (((ulong)local_e0 & 1) != 0) {
          FUN_0049e790(puVar5,local_d0);
        }
        lVar15 = lVar15 + 8;
      } while (lVar15 != 0x40);
                    /* try { // try from 004bb854 to 004bb863 has its CatchHandler @ 004bb87c */
      FUN_0052d820(PTR_FUN_047cd798,plVar9);
      DAT_047f4558 = plVar9;
      __cxa_guard_release(&DAT_047f4560);
    }
    plVar9 = (long *)FUN_002a4f14(DAT_047f4558,uVar14);
    if (DAT_047f4558 + 1 == plVar9) {
      FUN_004aa7f4(param_1,*(undefined8 *)(param_2 + 8),param_3,3,
                   "Extensions in proto3 are only allowed for defining options.");
      iVar8 = *(int *)(param_2 + 0x3c);
      goto joined_r0x004bb1b0;
    }
  }
  iVar8 = *(int *)(param_2 + 0x3c);
joined_r0x004bb1b0:
  if (iVar8 == 2) {
    FUN_004aa7f4(param_1,*(undefined8 *)(param_2 + 8),param_3,2,
                 "Required fields are not allowed in proto3.");
  }
  if (param_2[0x40] != '\0') {
    FUN_004aa7f4(param_1,*(undefined8 *)(param_2 + 8),param_3,4,
                 "Explicit default values are not allowed in proto3.");
  }
  puVar5 = PTR_LAB_047cd728;
  puVar10 = *(ulong **)(param_2 + 0x30);
  if (puVar10 != (ulong *)0x0) {
    local_e0 = PTR_LAB_047cd728;
    local_f8[0] = param_2;
    if (*puVar10 != 0xffffffffffffffff) {
      local_a0 = &local_e0;
      ppuStack_98 = local_f8;
      local_c0 = &local_a0;
      std::__call_once(puVar10,&local_c0,(_func_void_void_ptr *)&LAB_004c0750);
    }
  }
  if (*(int *)(param_2 + 0x38) == 0xe) {
    puVar10 = *(ulong **)(param_2 + 0x30);
    if ((puVar10 != (ulong *)0x0) && (local_e0 = param_2, *puVar10 != 0xffffffffffffffff)) {
      ppuStack_98 = &local_e0;
      local_a0 = (undefined **)puVar5;
      local_c0 = &local_a0;
      std::__call_once(puVar10,&local_c0,(_func_void_void_ptr *)&LAB_004c9500);
    }
    lVar15 = *(long *)(param_2 + 0x70);
    if (lVar15 != 0) {
      puVar10 = *(ulong **)(param_2 + 0x30);
      if (puVar10 != (ulong *)0x0) {
        local_e0 = param_2;
        if (*puVar10 != 0xffffffffffffffff) {
          ppuStack_98 = &local_e0;
          local_a0 = (undefined **)puVar5;
          local_c0 = &local_a0;
          std::__call_once(puVar10,&local_c0,(_func_void_void_ptr *)&LAB_004c9500);
        }
        lVar15 = *(long *)(param_2 + 0x70);
      }
      iVar8 = *(int *)(*(long *)(lVar15 + 0x10) + 0x3c);
      if (iVar8 != 3) {
        puVar10 = *(ulong **)(param_2 + 0x30);
        if (puVar10 != (ulong *)0x0) {
          local_e0 = param_2;
          if (*puVar10 != 0xffffffffffffffff) {
            ppuStack_98 = &local_e0;
            local_a0 = (undefined **)puVar5;
            local_c0 = &local_a0;
            std::__call_once(puVar10,&local_c0,(_func_void_void_ptr *)&LAB_004c9500);
          }
          lVar15 = *(long *)(param_2 + 0x70);
          iVar8 = *(int *)(*(long *)(lVar15 + 0x10) + 0x3c);
        }
        if (iVar8 != 0) {
          uVar14 = *(undefined8 *)(param_2 + 8);
          puVar10 = *(ulong **)(param_2 + 0x30);
          if (puVar10 != (ulong *)0x0) {
            local_80 = param_2;
            if (*puVar10 != 0xffffffffffffffff) {
              ppuStack_68 = &local_80;
              local_70 = puVar5;
              local_78 = &local_70;
              std::__call_once(puVar10,&local_78,(_func_void_void_ptr *)&LAB_004c9500);
            }
            lVar15 = *(long *)(param_2 + 0x70);
          }
          FUN_004a8ec0(local_f8,"Enum type \"",*(undefined8 *)(lVar15 + 8));
                    /* try { // try from 004bb370 to 004bb383 has its CatchHandler @ 004bb9e4 */
          puVar10 = (ulong *)FUN_0021d540(local_f8,"\" is not a proto3 enum, but is used in \"",0x28
                                         );
          uStack_d8 = puVar10[1];
          local_e0 = (undefined *)*puVar10;
          local_d0 = puVar10[2];
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = 0;
          pbVar16 = *(byte **)(*(long *)(param_2 + 0x50) + 8);
          uVar1 = *(ulong *)(pbVar16 + 8);
          pbVar2 = *(byte **)(pbVar16 + 0x10);
          if ((*pbVar16 & 1) == 0) {
            pbVar2 = pbVar16 + 1;
            uVar1 = (ulong)(*pbVar16 >> 1);
          }
                    /* try { // try from 004bb3bc to 004bb3c3 has its CatchHandler @ 004bb9bc */
          puVar11 = (undefined8 *)FUN_0021d540(&local_e0,pbVar2,uVar1);
          uStack_b8 = puVar11[1];
          local_c0 = (undefined ***)*puVar11;
          local_b0 = puVar11[2];
          puVar11[1] = 0;
          puVar11[2] = 0;
          *puVar11 = 0;
                    /* try { // try from 004bb3dc to 004bb3ef has its CatchHandler @ 004bb994 */
          puVar11 = (undefined8 *)FUN_0021d540(&local_c0,"\" which is a proto3 message type.",0x21);
          ppuStack_98 = (undefined **)puVar11[1];
          local_a0 = (undefined **)*puVar11;
          local_90 = puVar11[2];
          puVar11[1] = 0;
          puVar11[2] = 0;
          *puVar11 = 0;
          plVar9 = *(long **)(param_1 + 0x10);
          if (plVar9 != (long *)0x0) {
                    /* try { // try from 004bb41c to 004bb42f has its CatchHandler @ 004bb94c */
            (**(code **)(*plVar9 + 0x10))(plVar9,param_1 + 0x38,uVar14,param_3,2,&local_a0);
          }
          *(undefined1 *)(param_1 + 0x30) = 1;
          if (((ulong)local_a0 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_90);
          }
          if (((ulong)local_c0 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_b0);
          }
          if (((ulong)local_e0 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_d0);
          }
          if (((ulong)local_f8[0] & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_e8);
          }
        }
      }
    }
  }
  puVar10 = *(ulong **)(param_2 + 0x30);
  if (puVar10 != (ulong *)0x0) {
    local_e0 = puVar5;
    local_f8[0] = param_2;
    if (*puVar10 != 0xffffffffffffffff) {
      local_a0 = &local_e0;
      ppuStack_98 = local_f8;
      local_c0 = &local_a0;
      std::__call_once(puVar10,&local_c0,(_func_void_void_ptr *)&LAB_004c0750);
    }
  }
  if (*(int *)(param_2 + 0x38) == 10) {
    FUN_004aa7f4(param_1,*(undefined8 *)(param_2 + 8),param_3,2,
                 "Groups are not supported in proto3 syntax.");
  }
  return;
}


