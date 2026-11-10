/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001a4e04; name: FUN_001a4e04
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_001a4e04(long param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  uint uVar2;
  uint *__src;
  uint *__src_00;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 local_68;
  
  lVar5 = (long)param_3 - (long)param_2;
  *(long **)(param_1 + 0x18) = param_2;
  if (lVar5 == 0) {
    return;
  }
  if (*(code **)PTR_DAT_047cb878 == (code *)0x0) {
    local_68 = 0xffffffffffffffff;
  }
  else {
    local_68 = (**(code **)PTR_DAT_047cb878)("ctmf_preload",0);
  }
  if ((lVar5 < 1) &&
     (iVar4 = FUN_0015ed20("v:/devel/projects/oodle2/core/ctmf.h",0xd0,"set_base_and_preload",
                           "preload_len > 0"), iVar4 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  plVar1 = (long *)((long)param_3 - param_4);
  if (lVar5 <= param_4) {
    plVar1 = param_2;
    param_4 = lVar5;
  }
  *(long **)(param_1 + 0x20) = plVar1;
  lVar5 = param_4 >> 0x12;
  uVar6 = *plVar1 * *(long *)(param_1 + 0x38);
  if (lVar5 < 3) {
    lVar5 = 2;
  }
  if (param_4 < 0) {
    param_4 = param_4 + 1;
  }
  lVar8 = 0;
  if (lVar5 != 0) {
    lVar8 = (param_4 >> 1) / lVar5;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar6 = (ulong)(uint)((int)(uVar6 >> 0x20) << (ulong)(uVar2 & 0x1f)) |
          (uVar6 >> 0x20) >> ((ulong)(0x20 - uVar2) & 0x3f);
  *(int *)(param_1 + 0x40) = (int)uVar6;
  *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 8) + (uVar6 & *(uint *)(param_1 + 0x14)) * 4;
  *(ulong *)(param_1 + 0x30) =
       *(long *)(param_1 + 8) +
       ((ulong)(*plVar1 * -0x30e44323485a9b9d) >> ((ulong)-uVar2 & 0x3f) & 0x3ffffffffffffff0) * 4;
  do {
    lVar8 = lVar8 + -1;
    lVar9 = lVar5;
    if (lVar8 < 1) {
      if (param_3 <= plVar1) {
        if (*(code **)PTR_DAT_047cb880 == (code *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x001a5098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)PTR_DAT_047cb880)(local_68);
        return;
      }
      lVar9 = lVar5 >> 1;
      if (lVar5 < 2) {
        iVar4 = FUN_0015ed20("v:/devel/projects/oodle2/core/ctmf.h",0xe3,"set_base_and_preload",
                             "step >= 1");
        if (iVar4 != 0) {
          halt_baddata();
        }
        lVar8 = 0;
        if (lVar9 != 0) {
          lVar8 = ((long)param_3 - (long)plVar1) / lVar9;
        }
      }
      else {
        lVar8 = 0;
        if (lVar9 != 0) {
          lVar8 = ((long)param_3 - (long)plVar1) / lVar9;
        }
        if (3 < lVar5) {
          if (lVar8 < 0) {
            lVar8 = lVar8 + 1;
          }
          lVar8 = lVar8 >> 1;
        }
      }
    }
    iVar4 = *(int *)(param_1 + 0x18);
    uVar2 = *(uint *)(param_1 + 0x40);
    iVar7 = (int)plVar1;
    plVar1 = (long *)((long)plVar1 + lVar9);
    __src = *(uint **)(param_1 + 0x28);
    __src_00 = *(uint **)(param_1 + 0x30);
    *(long **)(param_1 + 0x20) = plVar1;
    uVar6 = *plVar1 * *(long *)(param_1 + 0x38);
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar6 = (ulong)(uint)((int)(uVar6 >> 0x20) << (ulong)(uVar3 & 0x1f)) |
            (uVar6 >> 0x20) >> ((ulong)(0x20 - uVar3) & 0x3f);
    *(int *)(param_1 + 0x40) = (int)uVar6;
    *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 8) + (uVar6 & *(uint *)(param_1 + 0x14)) * 4;
    *(ulong *)(param_1 + 0x30) =
         *(long *)(param_1 + 8) +
         ((ulong)(*plVar1 * -0x30e44323485a9b9d) >> ((ulong)-uVar3 & 0x3f) & 0x3ffffffffffffff0) * 4
    ;
    memmove(__src + 1,__src,0x3c);
    uVar2 = uVar2 & 0xfc000000 | iVar7 - iVar4 & 0x3ffffffU;
    *__src = uVar2;
    memmove(__src_00 + 1,__src_00,0x3c);
    *__src_00 = uVar2;
    lVar5 = lVar9;
  } while( true );
}


