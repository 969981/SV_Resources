/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00171dd8; name: FUN_00171dd8
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00171dd8(long param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_68;
  
  lVar7 = (long)param_3 - (long)param_2;
  *(long **)(param_1 + 0x18) = param_2;
  if (lVar7 == 0) {
    return;
  }
  if (*(code **)PTR_DAT_047cb878 == (code *)0x0) {
    local_68 = 0xffffffffffffffff;
  }
  else {
    local_68 = (**(code **)PTR_DAT_047cb878)("ctmf_preload",0);
  }
  if ((lVar7 < 1) &&
     (iVar6 = FUN_0015ed20("v:/devel/projects/oodle2/core/ctmf.h",0xd0,"set_base_and_preload",
                           "preload_len > 0"), iVar6 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  plVar1 = (long *)((long)param_3 - param_4);
  if (lVar7 <= param_4) {
    plVar1 = param_2;
  }
  *(long **)(param_1 + 0x20) = plVar1;
  if (lVar7 <= param_4) {
    param_4 = lVar7;
  }
  lVar7 = param_4 >> 0x12;
  uVar9 = *plVar1 * *(long *)(param_1 + 0x38);
  if (lVar7 < 3) {
    lVar7 = 2;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if (param_4 < 0) {
    param_4 = param_4 + 1;
  }
  lVar8 = 0;
  if (lVar7 != 0) {
    lVar8 = (param_4 >> 1) / lVar7;
  }
  uVar9 = (ulong)(uint)((int)(uVar9 >> 0x20) << (ulong)(uVar2 & 0x1f)) |
          (uVar9 >> 0x20) >> ((ulong)(0x20 - uVar2) & 0x3f);
  *(int *)(param_1 + 0x40) = (int)uVar9;
  *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 8) + (uVar9 & *(uint *)(param_1 + 0x14)) * 4;
  *(ulong *)(param_1 + 0x30) =
       *(long *)(param_1 + 8) +
       ((ulong)(*plVar1 * -0x30e44323485a9b9d) >> ((ulong)-uVar2 & 0x3f) & 0x3ffffffffffffffc) * 4;
  do {
    lVar8 = lVar8 + -1;
    lVar11 = lVar7;
    if (lVar8 < 1) {
      if (param_3 <= plVar1) {
        if (*(code **)PTR_DAT_047cb880 == (code *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00172074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)PTR_DAT_047cb880)(local_68);
        return;
      }
      lVar11 = lVar7 >> 1;
      if (lVar7 < 2) {
        iVar6 = FUN_0015ed20("v:/devel/projects/oodle2/core/ctmf.h",0xe3,"set_base_and_preload",
                             "step >= 1");
        if (iVar6 != 0) {
          halt_baddata();
        }
        lVar8 = 0;
        if (lVar11 != 0) {
          lVar8 = ((long)param_3 - (long)plVar1) / lVar11;
        }
      }
      else {
        lVar8 = 0;
        if (lVar11 != 0) {
          lVar8 = ((long)param_3 - (long)plVar1) / lVar11;
        }
        if (3 < lVar7) {
          if (lVar8 < 0) {
            lVar8 = lVar8 + 1;
          }
          lVar8 = lVar8 >> 1;
        }
      }
    }
    iVar6 = (int)plVar1;
    plVar1 = (long *)((long)plVar1 + lVar11);
    *(long **)(param_1 + 0x20) = plVar1;
    puVar3 = *(uint **)(param_1 + 0x28);
    puVar4 = *(uint **)(param_1 + 0x30);
    uVar2 = *(uint *)(param_1 + 0x40) & 0xfc000000 | iVar6 - *(int *)(param_1 + 0x18) & 0x3ffffffU;
    uVar9 = *plVar1 * *(long *)(param_1 + 0x38);
    uVar5 = *(uint *)(param_1 + 0x10);
    uVar9 = (ulong)(uint)((int)(uVar9 >> 0x20) << (ulong)(uVar5 & 0x1f)) |
            (uVar9 >> 0x20) >> ((ulong)(0x20 - uVar5) & 0x3f);
    *(int *)(param_1 + 0x40) = (int)uVar9;
    *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 8) + (uVar9 & *(uint *)(param_1 + 0x14)) * 4;
    *(ulong *)(param_1 + 0x30) =
         *(long *)(param_1 + 8) +
         ((ulong)(*plVar1 * -0x30e44323485a9b9d) >> ((ulong)-uVar5 & 0x3f) & 0x3ffffffffffffffc) * 4
    ;
    uVar10 = *(undefined8 *)(puVar3 + 1);
    *(undefined8 *)(puVar3 + 1) = *(undefined8 *)puVar3;
    *(undefined8 *)(puVar3 + 2) = uVar10;
    *puVar3 = uVar2;
    uVar10 = *(undefined8 *)(puVar4 + 1);
    *(undefined8 *)(puVar4 + 1) = *(undefined8 *)puVar4;
    *(undefined8 *)(puVar4 + 2) = uVar10;
    *puVar4 = uVar2;
    lVar7 = lVar11;
  } while( true );
}


