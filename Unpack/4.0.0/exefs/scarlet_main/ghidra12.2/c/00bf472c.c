/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bf472c; name: FUN_00bf472c
 */


void FUN_00bf472c(uint *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  if ((int)param_1[1] < (int)param_2) {
    plVar6 = *(long **)(param_1 + 2);
    if (plVar6 == (long *)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar6;
    }
    uVar3 = param_1[1] * 2;
    if ((int)param_2 <= (int)uVar3) {
      param_2 = uVar3;
    }
    if ((int)param_2 < 5) {
      param_2 = 4;
    }
    uVar1 = (ulong)param_2 * 8 + 8;
    if (lVar7 == 0) {
      plVar4 = operator_new__(uVar1);
    }
    else {
      plVar4 = (long *)FUN_00c0e238(lVar7,0,uVar1);
    }
    *(long **)(param_1 + 2) = plVar4;
    *plVar4 = lVar7;
    uVar5 = *(ulong *)(param_1 + 2);
    uVar2 = uVar5 + uVar1;
    if (uVar5 + uVar1 <= uVar5 + 0x10) {
      uVar2 = uVar5 + 0x10;
    }
    param_1[1] = param_2;
    memset((void *)(uVar5 + 8),0,~uVar5 + uVar2 & 0xfffffffffffffff8);
    if (0 < (int)*param_1) {
      memcpy((void *)(*(long *)(param_1 + 2) + 8),plVar6 + 1,(ulong)*param_1 << 3);
    }
    if ((plVar6 != (long *)0x0) && (*plVar6 == 0)) {
      operator_delete__(plVar6);
      return;
    }
  }
  return;
}


