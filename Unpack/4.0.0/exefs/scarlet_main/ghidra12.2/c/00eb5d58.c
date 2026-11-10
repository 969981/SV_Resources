/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00eb5d58; name: FUN_00eb5d58
 */


undefined8 FUN_00eb5d58(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x30) + 0xd8);
  plVar6 = *(long **)(*(long *)(param_1 + 0x30) + 0xe0);
  plVar3 = plVar1;
  if ((plVar1 != plVar6) && (*plVar1 != *param_2)) {
    do {
      plVar3 = plVar3 + 0xc;
      if (plVar6 == plVar3) {
        plVar3 = plVar6;
        goto LAB_00eb5dac;
      }
    } while (*plVar3 != *param_2);
  }
LAB_00eb5dac:
  if (plVar6 != plVar3) {
    lVar9 = *param_3;
    plVar6 = (long *)param_3[3];
    lVar7 = (long)((int)((ulong)((long)plVar3 - (long)plVar1) >> 5) * -0x55555555);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    plVar3 = (long *)plVar1[lVar7 * 0xc + 4];
    plVar2 = (long *)plVar1[lVar7 * 0xc + 5];
    plVar5 = plVar3;
    if ((plVar3 != plVar2) && (*plVar3 != lVar9)) {
      do {
        plVar5 = plVar5 + 5;
        if (plVar2 == plVar5) {
          plVar5 = plVar2;
          goto LAB_00eb5e0c;
        }
      } while (*plVar5 != lVar9);
    }
LAB_00eb5e0c:
    if (plVar2 == plVar5) {
      iVar8 = 0;
    }
    else {
      iVar8 = (int)((ulong)((long)plVar5 - (long)plVar3) >> 3) * -0x33333333;
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    if (plVar2 != plVar5) {
      lVar9 = *(long *)(param_1 + 0x38);
      uVar4 = (ulong)*(byte *)((long)plVar1 + lVar7 * 0x60 + 0x5a);
      if ((ulong)(*(long *)(param_1 + 0x40) - lVar9 >> 2) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      *(uint *)(lVar9 + uVar4 * 4) =
           iVar8 << (ulong)(*(byte *)((long)plVar1 + lVar7 * 0x60 + 0x5b) & 0x1f) |
           *(uint *)(lVar9 + uVar4 * 4) &
           (*(uint *)((long)plVar1 + lVar7 * 0x60 + 0x5c) ^ 0xffffffff);
      return 1;
    }
  }
  return 0;
}


