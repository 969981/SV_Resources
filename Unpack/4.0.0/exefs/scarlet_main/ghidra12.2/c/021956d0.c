/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021956d0; name: FUN_021956d0
 */


void FUN_021956d0(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 1) == '\0') {
    if (param_2 == 0) {
      return;
    }
    goto LAB_0219570c;
  }
  lVar4 = *(long *)(param_2 + 0x68);
  if (lVar4 != 0) {
    plVar3 = *(long **)(param_2 + 0x80);
    *(long *)(param_2 + 0x70) = lVar4;
    lVar5 = *(long *)(param_2 + 0x78) - lVar4;
    uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
    if ((uVar1 & 1) != 0) {
      lVar2 = FUN_00c4e600();
      if (0 < *(int *)(lVar2 + 0x12c8)) {
        FUN_00c48fe8(plVar3,lVar4,lVar5,8);
        goto LAB_021956fc;
      }
    }
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,lVar5,8);
  }
LAB_021956fc:
  FUN_01816968(param_2 + 0x38);
  if (*(long **)(param_2 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x28) + 0x20))();
  }
LAB_0219570c:
  plVar3 = *(long **)*param_1;
  uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
  if ((uVar1 & 1) != 0) {
    lVar4 = FUN_00c4e600();
    if (0 < *(int *)(lVar4 + 0x12c8)) {
      FUN_00c48fe8(plVar3,param_2,0xa0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02195750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3,param_2,0xa0,8);
  return;
}


