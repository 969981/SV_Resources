/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001a2b0c; name: FUN_001a2b0c
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_001a2b0c(long param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  short *psVar8;
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
  *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 8) + (uVar7 & *(uint *)(param_1 + 0x14)) * 2;
  do {
    lVar6 = lVar6 + -1;
    lVar9 = lVar5;
    if (lVar6 < 1) {
      if (param_3 <= plVar1) {
        if (*(code **)PTR_DAT_047cb880 == (code *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x001a2d28. Too many branches */
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
    sVar2 = (short)plVar1;
    plVar1 = (long *)((long)plVar1 + lVar9);
    *(long **)(param_1 + 0x20) = plVar1;
    uVar7 = *plVar1 * *(long *)(param_1 + 0x38);
    psVar8 = *(short **)(param_1 + 0x28);
    uVar7 = (ulong)(uint)((int)(uVar7 >> 0x20) << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f)) |
            (uVar7 >> 0x20) >> ((ulong)(0x20 - *(uint *)(param_1 + 0x10)) & 0x3f);
    *(int *)(param_1 + 0x40) = (int)uVar7;
    *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 8) + (uVar7 & *(uint *)(param_1 + 0x14)) * 2;
    *psVar8 = sVar2 - (short)*(undefined4 *)(param_1 + 0x18);
    lVar5 = lVar9;
  } while( true );
}


