/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00172a40; name: FUN_00172a40
 */


/* WARNING: Control flow encountered bad instruction data */

long FUN_00172a40(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                 long param_7)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined8 local_320;
  long local_310;
  ulong local_300;
  long local_2e0;
  long local_2d8;
  long local_2b8;
  long local_2b0 [8];
  long local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined4 local_258 [2];
  long local_250 [12];
  long local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  long local_1b8;
  long local_1b0 [3];
  undefined4 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  
  lVar15 = *(long *)(param_1 + 0x10);
  uVar17 = *(undefined8 *)(param_7 + 8);
  local_180 = 0;
  local_168 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_178 = 0;
  uStack_170 = 0;
  lVar2 = param_2;
  if (param_5 != 0) {
    lVar2 = param_5;
  }
  local_150 = 0;
  local_138 = 0;
  local_128 = 0;
  local_130 = 0;
  local_120 = 0;
  local_110 = 0;
  local_118 = 0;
  local_108 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_198 = 0;
  local_1b0[0] = param_7;
  local_160 = 0;
  uStack_158 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_1b0[1] = 0;
  local_1b0[2] = 0;
  if (*(long *)(param_1 + 0x38) == 0) {
    local_310 = FUN_001731e0(param_1,local_1b0,param_2,param_3,param_4,lVar2,lVar2,0,param_7);
LAB_001731a0:
    FUN_00173810(local_1b0);
    *(undefined8 *)(param_7 + 8) = uVar17;
    return local_310;
  }
  lVar13 = (long)*(int *)(lVar15 + 0x24);
  local_250[3] = 0;
  local_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_1b8 = 0;
  lVar3 = lVar13;
  if (lVar13 < 0x4000001) {
    lVar3 = 0x4000000;
  }
  local_1f0 = 0;
  uStack_1e8 = 0;
  if (*(char *)(param_1 + 0x50) != '\0' || param_6 != 0) {
    lVar3 = lVar13;
  }
  local_1e0 = 0;
  bVar4 = *(int *)(lVar15 + 0x30) == 3;
  uVar1 = 1;
  if (bVar4) {
    uVar1 = 2;
  }
  local_2e0 = param_6;
  if (*(int *)(lVar15 + 8) == 0) {
    lVar13 = (param_2 - lVar2) + param_4;
    if (lVar3 < lVar13) {
      lVar21 = lVar3;
      if (lVar3 < 0) {
        lVar21 = lVar3 + 1;
      }
      lVar21 = lVar21 >> 1;
      if (((param_6 == 0) && (4 < *(int *)(param_1 + 4))) && (*(int *)(lVar15 + 0x28) != 0)) {
        lVar16 = 0;
        if (lVar21 != 0) {
          lVar16 = (lVar13 + lVar21 + -1) / lVar21;
        }
        local_2e0 = FUN_00163700(lVar2,lVar16 * lVar21 - lVar3,*(undefined4 *)PTR_DAT_047cb8f0,
                                 *(undefined4 *)PTR_DAT_047cb8f8,0,lVar21,
                                 *(undefined4 *)PTR_DAT_047cb900);
        lVar13 = lVar21;
        local_2d8 = local_2e0;
      }
      else {
        local_2d8 = 0;
        lVar13 = lVar21;
      }
    }
    else {
      local_2e0 = 0;
      local_2d8 = 0;
    }
  }
  else {
    local_2d8 = 0;
    lVar13 = (long)*(int *)(lVar15 + 0xc);
  }
  lVar16 = lVar13 * 5;
  lVar21 = lVar16 + 3;
  if (-1 < lVar16) {
    lVar21 = lVar16;
  }
  uVar22 = 0;
  local_310 = 0;
  uVar18 = uVar1 - 1;
  local_2b8 = 1;
  local_300 = 0;
  lVar16 = param_4;
  lVar20 = lVar2;
  if (0 < param_4) goto LAB_00172ce8;
LAB_00172ffc:
  if (uVar22 != local_300) {
    while( true ) {
      uVar12 = local_300 & uVar18;
      lVar6 = local_250[uVar12 * 0x10 + 3];
      if (lVar6 != 0) {
        (**(code **)PTR_PTR_047cb908)(lVar6,*(undefined8 *)(lVar15 + 0x34));
        local_250[uVar12 * 0x10 + 3] = 0;
      }
      plVar19 = local_250 + uVar12 * 0x10 + 2;
      lVar6 = FUN_001731e0(param_1,local_1b0,local_2b0[uVar12 * 0x10],param_3,
                           local_2b0[uVar12 * 0x10 + 1],local_2b0[uVar12 * 0x10 + 4],
                           local_2b0[uVar12 * 0x10 + 2],*plVar19,param_7);
      puVar14 = (undefined8 *)*plVar19;
      if (puVar14 != (undefined8 *)0x0) {
        if (*(code **)PTR_DAT_047cb878 == (code *)0x0) {
          local_320 = 0xffffffffffffffff;
        }
        else {
          local_320 = (**(code **)PTR_DAT_047cb878)("DeleteMatchFinder",0);
          puVar14 = (undefined8 *)*plVar19;
        }
        (**(code **)*puVar14)(puVar14);
        (**(code **)PTR_PTR_047cb898)(puVar14);
        if (*(code **)PTR_DAT_047cb880 != (code *)0x0) {
          (**(code **)PTR_DAT_047cb880)(local_320);
        }
      }
      local_310 = lVar6 + local_310;
      local_300 = local_300 + 1;
      param_3 = param_3 + lVar6;
      local_2b8 = local_2b8 + -1;
      if (lVar16 < 1) goto LAB_00172ffc;
LAB_00172ce8:
      if (uVar1 <= uVar22 - local_300) goto LAB_00172ffc;
      uVar12 = uVar22;
      if (0 < param_4) break;
      while( true ) {
        lVar6 = lVar16;
        if (lVar13 <= lVar16) {
          lVar6 = lVar13;
        }
        if (*(int *)(lVar15 + 8) == 0) {
          lVar10 = param_2 - lVar2;
          lVar9 = lVar16;
          if (lVar3 <= lVar16) {
            lVar9 = lVar3;
          }
          if (lVar10 != 0) {
            lVar9 = lVar6;
          }
          lVar6 = lVar9;
          if (lVar16 <= lVar21 >> 2) {
            lVar6 = lVar16;
          }
          lVar9 = lVar3 - lVar6;
          if (lVar9 == 0 || lVar3 < lVar6) {
            lVar10 = 0;
            iVar5 = *(int *)(lVar15 + 0x14);
          }
          else {
            if (lVar13 <= lVar10) {
              lVar10 = lVar13;
            }
            if (lVar9 <= lVar10) {
              lVar10 = lVar9;
            }
            iVar5 = *(int *)(lVar15 + 0x14);
          }
          if (0 < iVar5) {
            if (iVar5 <= lVar10) {
              lVar10 = (long)iVar5;
            }
          }
        }
        else {
          lVar10 = 0;
          lVar20 = param_2;
        }
        uVar22 = uVar12 & uVar18;
        local_2b0[uVar22 * 0x10 + 4] = param_2 - lVar10;
        local_2b0[uVar22 * 0x10 + 5] = lVar10;
        local_2b0[uVar22 * 0x10] = param_2;
        local_2b0[uVar22 * 0x10 + 1] = lVar6;
        local_2b0[uVar22 * 0x10 + 2] = lVar20;
        local_2b0[uVar22 * 0x10 + 3] = lVar2;
        local_2b0[uVar22 * 0x10 + 6] = local_2e0;
        local_2b0[uVar22 * 0x10 + 7] = local_2d8;
        local_258[uVar22 * 0x20] = *(undefined4 *)(lVar15 + 0x30);
        local_250[uVar22 * 0x10] = *(long *)(lVar15 + 0x34);
        local_250[uVar22 * 0x10 + 1] = *(long *)(param_1 + 0x38);
        iVar5 = FUN_0015ed20("v:\\devel\\projects\\oodle2\\core\\newlz_vtable.cpp",0x4aa,
                             "newlz_compress_vtable",
                             "wholeRawLen > 0 && subjob->dictionary_inset >= 0");
        if (iVar5 != 0) {
          halt_baddata();
        }
        if (uVar12 == 0) {
          uVar7 = *(undefined8 *)(lVar15 + 0x34);
          lVar9 = 0;
          bVar8 = false;
        }
        else {
          uVar7 = *(undefined8 *)(lVar15 + 0x34);
          uVar11 = uVar12 - 1 & uVar18;
          bVar8 = bVar4;
          if (local_2b0 + uVar11 * 0x10 == (long *)0x0) {
            lVar9 = 0;
          }
          else {
            lVar9 = local_250[uVar11 * 0x10 + 3];
          }
        }
        FUN_001854a0(local_250 + uVar22 * 0x10 + 3,&LAB_00173730,local_2b0 + uVar22 * 0x10,uVar7,
                     bVar8,lVar9,0);
        lVar16 = lVar16 - lVar6;
        param_2 = param_2 + lVar6;
        uVar22 = uVar12 + 1;
        if (lVar16 < 1) break;
        uVar11 = local_2b8 + uVar12;
        uVar12 = uVar22;
        if (uVar1 <= uVar11) goto LAB_00172ffc;
      }
      if (uVar22 == local_300) goto LAB_001730f0;
    }
    do {
      lVar6 = lVar16;
      if (lVar13 <= lVar16) {
        lVar6 = lVar13;
      }
      if (*(int *)(lVar15 + 8) == 0) {
        lVar10 = param_2 - lVar2;
        lVar9 = lVar16;
        if (lVar3 <= lVar16) {
          lVar9 = lVar3;
        }
        if (lVar10 != 0) {
          lVar9 = lVar6;
        }
        lVar6 = lVar9;
        if (lVar16 <= lVar21 >> 2) {
          lVar6 = lVar16;
        }
        lVar9 = lVar3 - lVar6;
        if (lVar9 == 0 || lVar3 < lVar6) {
          lVar10 = 0;
          iVar5 = *(int *)(lVar15 + 0x14);
        }
        else {
          if (lVar13 <= lVar10) {
            lVar10 = lVar13;
          }
          if (lVar9 <= lVar10) {
            lVar10 = lVar9;
          }
          iVar5 = *(int *)(lVar15 + 0x14);
        }
        if (0 < iVar5) {
          if (iVar5 <= lVar10) {
            lVar10 = (long)iVar5;
          }
        }
      }
      else {
        lVar10 = 0;
        lVar20 = param_2;
      }
      uVar22 = uVar12 & uVar18;
      local_2b0[uVar22 * 0x10 + 4] = param_2 - lVar10;
      local_2b0[uVar22 * 0x10 + 5] = lVar10;
      local_2b0[uVar22 * 0x10] = param_2;
      local_2b0[uVar22 * 0x10 + 1] = lVar6;
      local_2b0[uVar22 * 0x10 + 6] = local_2e0;
      local_2b0[uVar22 * 0x10 + 2] = lVar20;
      local_2b0[uVar22 * 0x10 + 3] = lVar2;
      local_2b0[uVar22 * 0x10 + 7] = local_2d8;
      local_258[uVar22 * 0x20] = *(undefined4 *)(lVar15 + 0x30);
      local_250[uVar22 * 0x10] = *(long *)(lVar15 + 0x34);
      local_250[uVar22 * 0x10 + 1] = *(long *)(param_1 + 0x38);
      if ((lVar10 < 0) &&
         (iVar5 = FUN_0015ed20("v:\\devel\\projects\\oodle2\\core\\newlz_vtable.cpp",0x4aa,
                               "newlz_compress_vtable",
                               "wholeRawLen > 0 && subjob->dictionary_inset >= 0"), iVar5 != 0)) {
        halt_baddata();
      }
      if (uVar12 == 0) {
        uVar7 = *(undefined8 *)(lVar15 + 0x34);
        bVar8 = false;
        lVar9 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(lVar15 + 0x34);
        uVar11 = uVar12 - 1 & uVar18;
        bVar8 = bVar4;
        if (local_2b0 + uVar11 * 0x10 == (long *)0x0) {
          lVar9 = 0;
        }
        else {
          lVar9 = local_250[uVar11 * 0x10 + 3];
        }
      }
      FUN_001854a0(local_250 + uVar22 * 0x10 + 3,&LAB_00173730,local_2b0 + uVar22 * 0x10,uVar7,bVar8
                   ,lVar9,0);
      lVar16 = lVar16 - lVar6;
      param_2 = param_2 + lVar6;
      uVar22 = uVar12 + 1;
      if (lVar16 < 1) {
        break;
      }
      uVar11 = local_2b8 + uVar12;
      uVar12 = uVar22;
    } while (uVar11 < uVar1);
    goto LAB_00172ffc;
  }
LAB_001730f0:
  if (local_2d8 != 0) {
    FUN_00163930();
  }
  if ((local_1b8 == 0) ||
     (iVar5 = FUN_0015ed20("v:/devel/projects/oodle2/core/oodlejob.h",0x65,"~OodleJob","handle == 0"
                          ), iVar5 == 0)) {
    local_1e0 = 0;
    if (local_1f0 != 0) {
      (**(code **)PTR_PTR_047cb898)();
    }
    local_1f0 = 0;
    uStack_1e8 = 0;
    if ((local_250[3] == 0) ||
       (iVar5 = FUN_0015ed20("v:/devel/projects/oodle2/core/oodlejob.h",0x65,"~OodleJob",
                             "handle == 0"), iVar5 == 0)) {
      local_260 = 0;
      if (local_270 != 0) {
        (**(code **)PTR_PTR_047cb898)();
      }
      goto LAB_001731a0;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


