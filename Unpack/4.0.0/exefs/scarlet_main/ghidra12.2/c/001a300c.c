/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001a300c; name: FUN_001a300c
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_001a300c(long param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  short *psVar9;
  long lVar10;
  
  lVar6 = (long)param_3 - (long)param_2;
  *(long **)(param_1 + 0x18) = param_2;
  if (lVar6 == 0) {
    return;
  }
  if (*(code **)PTR_DAT_047cb878 == (code *)0x0) {
    uVar5 = 0xffffffffffffffff;
  }
  else {
    uVar5 = (**(code **)PTR_DAT_047cb878)("ctmf_preload",0);
  }
  if ((lVar6 < 1) &&
     (iVar4 = FUN_0015ed20("v:/devel/projects/oodle2/core/ctmf.h",0xd0,"set_base_and_preload",
                           "preload_len > 0"), iVar4 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  plVar1 = (long *)((long)param_3 - param_4);
  if (lVar6 <= param_4) {
    param_4 = lVar6;
    plVar1 = param_2;
  }
  *(long **)(param_1 + 0x20) = plVar1;
  lVar6 = param_4 >> 0x12;
  if (lVar6 < 3) {
    lVar6 = 2;
  }
  if (param_4 < 0) {
    param_4 = param_4 + 1;
  }
  lVar7 = 0;
  if (lVar6 != 0) {
    lVar7 = (param_4 >> 1) / lVar6;
  }
  uVar8 = *plVar1 * *(long *)(param_1 + 0x38);
  uVar8 = (ulong)(uint)((int)(uVar8 >> 0x20) << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f)) |
          (uVar8 >> 0x20) >> ((ulong)(0x20 - *(uint *)(param_1 + 0x10)) & 0x3f);
  *(int *)(param_1 + 0x40) = (int)uVar8;
  *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 8) + (uVar8 & *(uint *)(param_1 + 0x14)) * 2;
  do {
    lVar7 = lVar7 + -1;
    lVar10 = lVar6;
    if (lVar7 < 1) {
      if (param_3 <= plVar1) {
        if (*(code **)PTR_DAT_047cb880 == (code *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x001a3230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)PTR_DAT_047cb880)(uVar5);
        return;
      }
      lVar10 = lVar6 >> 1;
      if (lVar6 < 2) {
        iVar4 = FUN_0015ed20("v:/devel/projects/oodle2/core/ctmf.h",0xe3,"set_base_and_preload",
                             "step >= 1");
        if (iVar4 != 0) {
          halt_baddata();
        }
        lVar7 = 0;
        if (lVar10 != 0) {
          lVar7 = ((long)param_3 - (long)plVar1) / lVar10;
        }
      }
      else {
        lVar7 = 0;
        if (lVar10 != 0) {
          lVar7 = ((long)param_3 - (long)plVar1) / lVar10;
        }
        if (3 < lVar6) {
          if (lVar7 < 0) {
            lVar7 = lVar7 + 1;
          }
          lVar7 = lVar7 >> 1;
        }
      }
    }
    sVar3 = (short)plVar1;
    plVar1 = (long *)((long)plVar1 + lVar10);
    *(long **)(param_1 + 0x20) = plVar1;
    uVar8 = *plVar1 * *(long *)(param_1 + 0x38);
    psVar9 = *(short **)(param_1 + 0x28);
    uVar8 = (ulong)(uint)((int)(uVar8 >> 0x20) << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f)) |
            (uVar8 >> 0x20) >> ((ulong)(0x20 - *(uint *)(param_1 + 0x10)) & 0x3f);
    *(int *)(param_1 + 0x40) = (int)uVar8;
    *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 8) + (uVar8 & *(uint *)(param_1 + 0x14)) * 2;
    sVar2 = *psVar9;
    *psVar9 = sVar3 - (short)*(undefined4 *)(param_1 + 0x18);
    psVar9[1] = sVar2;
    lVar6 = lVar10;
  } while( true );
}


