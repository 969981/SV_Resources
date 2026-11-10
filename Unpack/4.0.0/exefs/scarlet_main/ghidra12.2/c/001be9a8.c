/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001be9a8; name: FUN_001be9a8
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_001be9a8(long param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  
  lVar5 = (long)param_3 - (long)param_2;
  *(long **)(param_1 + 0x18) = param_2;
  if (lVar5 == 0) {
    return;
  }
  if (*(code **)PTR_DAT_047cb878 == (code *)0x0) {
    uVar4 = 0xffffffffffffffff;
  }
  else {
    uVar4 = (**(code **)PTR_DAT_047cb878)("ctmf_preload",0);
  }
  if ((lVar5 < 1) &&
     (iVar3 = FUN_0015ed20("v:/devel/projects/oodle2/core/ctmf.h",0xd0,"set_base_and_preload",
                           "preload_len > 0"), iVar3 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  plVar1 = (long *)((long)param_3 - param_4);
  if (lVar5 <= param_4) {
    param_4 = lVar5;
    plVar1 = param_2;
  }
  *(long **)(param_1 + 0x20) = plVar1;
  lVar5 = param_4 >> 0x12;
  if (lVar5 < 3) {
    lVar5 = 2;
  }
  if (param_4 < 0) {
    param_4 = param_4 + 1;
  }
  lVar6 = 0;
  if (lVar5 != 0) {
    lVar6 = (param_4 >> 1) / lVar5;
  }
  uVar7 = *plVar1 * *(long *)(param_1 + 0x38);
  uVar7 = (ulong)(uint)((int)(uVar7 >> 0x20) << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f)) |
          (uVar7 >> 0x20) >> ((ulong)(0x20 - *(uint *)(param_1 + 0x10)) & 0x3f);
  *(int *)(param_1 + 0x40) = (int)uVar7;
  *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 8) + (uVar7 & *(uint *)(param_1 + 0x14)) * 4;
  do {
    lVar6 = lVar6 + -1;
    lVar9 = lVar5;
    if (lVar6 < 1) {
      if (param_3 <= plVar1) {
        if (*(code **)PTR_DAT_047cb880 == (code *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x001bebcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)PTR_DAT_047cb880)(uVar4);
        return;
      }
      lVar9 = lVar5 >> 1;
      if (lVar5 < 2) {
        iVar3 = FUN_0015ed20("v:/devel/projects/oodle2/core/ctmf.h",0xe3,"set_base_and_preload",
                             "step >= 1");
        if (iVar3 != 0) {
          halt_baddata();
        }
        lVar6 = 0;
        if (lVar9 != 0) {
          lVar6 = ((long)param_3 - (long)plVar1) / lVar9;
        }
      }
      else {
        lVar6 = 0;
        if (lVar9 != 0) {
          lVar6 = ((long)param_3 - (long)plVar1) / lVar9;
        }
        if (3 < lVar5) {
          if (lVar6 < 0) {
            lVar6 = lVar6 + 1;
          }
          lVar6 = lVar6 >> 1;
        }
      }
    }
    iVar3 = (int)plVar1;
    plVar1 = (long *)((long)plVar1 + lVar9);
    *(long **)(param_1 + 0x20) = plVar1;
    puVar8 = *(uint **)(param_1 + 0x28);
    uVar7 = *plVar1 * *(long *)(param_1 + 0x38);
    uVar2 = *(uint *)(param_1 + 0x40);
    uVar7 = (ulong)(uint)((int)(uVar7 >> 0x20) << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f)) |
            (uVar7 >> 0x20) >> ((ulong)(0x20 - *(uint *)(param_1 + 0x10)) & 0x3f);
    *(int *)(param_1 + 0x40) = (int)uVar7;
    *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 8) + (uVar7 & *(uint *)(param_1 + 0x14)) * 4;
    *puVar8 = uVar2 & 0xfc000000 | iVar3 - *(int *)(param_1 + 0x18) & 0x3ffffffU;
    lVar5 = lVar9;
  } while( true );
}


