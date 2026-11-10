/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001731e0; name: FUN_001731e0
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

long FUN_001731e0(undefined4 *param_1,long param_2,ulong param_3,long param_4,ulong param_5,
                 long param_6,long param_7,long *param_8,undefined8 param_9)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 local_1e8 [7];
  ulong local_1b0 [2];
  uint local_1a0 [2];
  long local_198 [13];
  long local_130;
  long local_d0;
  long local_70;
  
  if (*(code **)PTR_DAT_047cb878 == (code *)0x0) {
    uVar4 = 0xffffffffffffffff;
  }
  else {
    uVar4 = (**(code **)PTR_DAT_047cb878)("newlz_compress_vts",0);
  }
  lVar5 = FUN_00152510(*param_1,param_5);
  lVar15 = *(long *)(param_1 + 4);
  local_130 = 0;
  local_198[1] = 0;
  local_70 = 0;
  local_d0 = 0;
  if (param_8 == (long *)0x0) {
    uVar11 = 1;
    lVar13 = 0;
  }
  else {
    iVar3 = *(int *)(lVar15 + 0x30);
    if (((1 < iVar3) ||
        ((uVar11 = 1, iVar3 == 0 && (*(undefined **)PTR_PTR_047cb8a8 != PTR_FUN_047cb8b0)))) &&
       (uVar11 = 2, iVar3 == 3)) {
      uVar11 = 3;
    }
    uVar16 = param_5 + 0x3ffff >> 0x12;
    if (uVar16 <= uVar11) {
      uVar11 = uVar16;
    }
    if (uVar11 < 2) {
      uVar11 = 1;
    }
    puVar12 = param_1;
    if ((4 < uVar11) &&
       (iVar3 = FUN_0015ed20("v:\\devel\\projects\\oodle2\\core\\newlz_vtable.cpp",0x2fa,
                             "newlz_compress_vtable_sub",
                             "parse_job_count >= 1 && parse_job_count <= MAX_PARSE_JOBS"),
       iVar3 != 0)) {
      halt_baddata();
    }
    do {
      puVar12 = *(undefined4 **)(puVar12 + 0x20);
    } while (puVar12 != (undefined4 *)0x0);
    uVar16 = uVar11 * 0x40000;
    if ((long)param_5 <= (long)(uVar11 * 0x40000)) {
      uVar16 = param_5;
    }
    FUN_00164c64(param_2 + 0x80,
                 (-(uVar16 >> 0x1f & 1) & 0xfffffff800000000 | (uVar16 & 0xffffffff) << 3) *
                 (long)(int)param_1[0x10],param_9);
    lVar13 = *(long *)(param_2 + 0x80);
  }
  iVar1 = param_1[0x10];
  param_5 = param_3 + param_5;
  iVar3 = 0;
  uVar16 = 0;
  puVar8 = local_1e8;
  do {
    lVar9 = (long)iVar3;
    iVar3 = iVar3 + iVar1 * 0x40000;
    puVar8[2] = param_9;
    puVar8[3] = lVar13 + lVar9 * 8;
    uVar17 = uVar11;
    if (uVar16 != 0) {
      uVar17 = uVar16;
    }
    uVar16 = uVar16 + 1;
    puVar8[4] = param_6;
    puVar8[5] = param_4 + lVar5;
    puVar8[10] = param_4;
    *puVar8 = param_1;
    puVar8[1] = param_2;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[6] = local_1e8 + uVar17 * 0xc + -2;
    puVar8[7] = 0;
    puVar8 = puVar8 + 0xc;
  } while ((uVar11 & 0xffffffff) != uVar16);
  lVar5 = param_4;
  if (param_3 < param_5) {
    uVar17 = 0;
    uVar18 = 0;
    uVar16 = param_3;
    do {
      uVar14 = param_5 - uVar16;
      if (0x3ffff < (long)uVar14) {
        uVar14 = 0x40000;
      }
      if (uVar11 + uVar18 == uVar17) {
        uVar2 = 0;
        if (uVar11 != 0) {
          uVar2 = uVar18 / uVar11;
        }
        plVar7 = (long *)((long)local_198 + (uVar18 - uVar2 * uVar11) * 0x60 + 8);
        lVar13 = *plVar7;
        if (lVar13 != 0) {
          (**(code **)PTR_PTR_047cb908)(lVar13,*(undefined8 *)(lVar15 + 0x34));
          *plVar7 = 0;
        }
        uVar18 = uVar18 + 1;
      }
      uVar2 = 0;
      if (uVar11 != 0) {
        uVar2 = uVar17 / uVar11;
      }
      lVar13 = uVar17 - uVar2 * uVar11;
      if (param_8 != (long *)0x0) {
        if (*(code **)PTR_DAT_047cb878 == (code *)0x0) {
          uVar6 = 0xffffffffffffffff;
        }
        else {
          uVar6 = (**(code **)PTR_DAT_047cb878)("mf_ProcessChunk",0);
        }
        (**(code **)(*param_8 + 0x10))
                  (param_8,uVar14 & 0xffffffff,local_1e8[lVar13 * 0xc + 3],param_1[0x10]);
        if (*(code **)PTR_DAT_047cb880 != (code *)0x0) {
          (**(code **)PTR_DAT_047cb880)(uVar6);
        }
      }
      local_1b0[lVar13 * 0xc] = uVar16;
      local_1b0[lVar13 * 0xc + 1] = uVar16 - param_7;
      local_1a0[lVar13 * 0x18] = (uint)uVar14;
      uVar2 = uVar16 - param_6;
      if (uVar2 == 0) {
        uVar10 = 1;
LAB_00173524:
        local_1a0[lVar13 * 0x18 + 1] = uVar10;
        if (((uVar16 != param_3) && (uVar10 != 0)) &&
           (iVar3 = FUN_0015ed20("v:\\devel\\projects\\oodle2\\core\\newlz_vtable.cpp",0x355,
                                 "newlz_compress_vtable_sub","!pj->blockIsReset || rawPtr == raw"),
           iVar3 != 0)) {
          halt_baddata();
        }
        puVar8 = local_1e8 + lVar13 * 0xc;
        if (uVar11 != 1) goto LAB_0017356c;
LAB_001733e0:
        FUN_00173a70(puVar8);
      }
      else {
        if (((uVar2 & 0x3ffff) == 0) && (*(int *)(lVar15 + 8) != 0)) {
          uVar10 = (uint)(((long)*(int *)(lVar15 + 0xc) - 1U & uVar2) == 0);
          goto LAB_00173524;
        }
        local_1a0[lVar13 * 0x18 + 1] = 0;
        puVar8 = local_1e8 + lVar13 * 0xc;
        if (uVar11 == 1) goto LAB_001733e0;
LAB_0017356c:
        if (uVar17 == 0) {
          uVar6 = *(undefined8 *)(lVar15 + 0x34);
          lVar9 = 0;
          plVar7 = (long *)((long)local_198 + lVar13 * 0x60U + 8U);
        }
        else {
          uVar2 = 0;
          if (uVar11 != 0) {
            uVar2 = (uVar17 - 1) / uVar11;
          }
          uVar6 = *(undefined8 *)(lVar15 + 0x34);
          plVar7 = (long *)((long)local_198 + lVar13 * 0x60U + 8U);
          lVar13 = (uVar17 - 1) - uVar2 * uVar11;
          if (local_1e8 + lVar13 * 0xc == (undefined8 *)0x0) {
            lVar9 = 0;
          }
          else {
            lVar9 = *(long *)((long)local_198 + lVar13 * 0x60U + 8U);
          }
        }
        FUN_001854a0(plVar7,FUN_00173a70,puVar8,uVar6,1 < uVar11,lVar9,0);
      }
      uVar16 = uVar16 + (long)(int)(uint)uVar14;
      uVar17 = uVar17 + 1;
    } while (uVar16 < param_5);
    if (uVar17 != uVar18) {
      do {
        uVar16 = 0;
        if (uVar11 != 0) {
          uVar16 = uVar18 / uVar11;
        }
        lVar13 = uVar18 - uVar16 * uVar11;
        plVar7 = (long *)((long)local_198 + lVar13 * 0x60U + 8U);
        lVar5 = *plVar7;
        if (lVar5 != 0) {
          (**(code **)PTR_PTR_047cb908)(lVar5,*(undefined8 *)(lVar15 + 0x34));
          *plVar7 = 0;
        }
        uVar18 = uVar18 + 1;
      } while (uVar17 != uVar18);
      lVar5 = local_198[lVar13 * 0xc];
    }
  }
  if ((((local_70 != 0) &&
       (iVar3 = FUN_0015ed20("v:/devel/projects/oodle2/core/oodlejob.h",0x65,"~OodleJob",
                             "handle == 0"), iVar3 != 0)) ||
      ((local_d0 != 0 &&
       (iVar3 = FUN_0015ed20("v:/devel/projects/oodle2/core/oodlejob.h",0x65,"~OodleJob",
                             "handle == 0"), iVar3 != 0)))) ||
     (((local_130 != 0 &&
       (iVar3 = FUN_0015ed20("v:/devel/projects/oodle2/core/oodlejob.h",0x65,"~OodleJob",
                             "handle == 0"), iVar3 != 0)) ||
      ((local_198[1] != 0 &&
       (iVar3 = FUN_0015ed20("v:/devel/projects/oodle2/core/oodlejob.h",0x65,"~OodleJob",
                             "handle == 0"), iVar3 != 0)))))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(code **)PTR_DAT_047cb880 != (code *)0x0) {
    (**(code **)PTR_DAT_047cb880)(uVar4);
  }
  return lVar5 - param_4;
}


