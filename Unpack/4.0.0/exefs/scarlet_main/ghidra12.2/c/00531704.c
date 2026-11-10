/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00531704; name: FUN_00531704
 */


void FUN_00531704(uint *param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  uVar1 = param_1[1];
  if ((int)param_2 <= (int)uVar1) {
    return;
  }
  if ((int)uVar1 < 1) {
    plVar4 = (long *)0x0;
    if (uVar1 != 0) {
      lVar5 = *(long *)(*(long *)(param_1 + 2) + -8);
      goto joined_r0x00531754;
    }
    lVar5 = *(long *)(param_1 + 2);
    if (3 < (int)param_2) goto LAB_005317ac;
  }
  else {
    plVar4 = (long *)(*(long *)(param_1 + 2) + -8);
    lVar5 = *(long *)(*(long *)(param_1 + 2) + -8);
joined_r0x00531754:
    if (3 < (int)param_2) {
      if (0x3fffffff < (int)uVar1) {
        param_2 = 0x7fffffff;
        uVar3 = 0x3fffffff8;
        goto joined_r0x00531788;
      }
LAB_005317ac:
      if ((int)param_2 <= (int)(uVar1 * 2)) {
        param_2 = uVar1 * 2;
      }
      uVar3 = -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3;
      goto joined_r0x00531788;
    }
  }
  param_2 = 4;
  uVar3 = 0x20;
joined_r0x00531788:
  if (lVar5 == 0) {
    plVar2 = (long *)FUN_0049e6c0(uVar3 + 8);
  }
  else {
    if (*(long *)(lVar5 + 0x70) != 0) {
      FUN_00520d08(lVar5,0,uVar3 + 8);
    }
    plVar2 = (long *)FUN_00520c00(lVar5,uVar3 + 8);
  }
  *plVar2 = lVar5;
  param_1[1] = param_2;
  *(long **)(param_1 + 2) = plVar2 + 1;
  if (0 < (int)*param_1) {
    memcpy(plVar2 + 1,plVar4 + 1,(ulong)*param_1 << 3);
  }
  if ((plVar4 == (long *)0x0) || (*plVar4 != 0)) {
    return;
  }
  FUN_0049e700(plVar4);
  return;
}


