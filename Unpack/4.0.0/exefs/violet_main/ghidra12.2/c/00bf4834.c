/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bf4834; name: FUN_00bf4834
 */


void FUN_00bf4834(uint *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  if ((int)param_1[1] < (int)param_2) {
    plVar5 = *(long **)(param_1 + 2);
    if (plVar5 == (long *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar5;
    }
    uVar3 = param_1[1] * 2;
    if ((int)param_2 <= (int)uVar3) {
      param_2 = uVar3;
    }
    if ((int)param_2 < 5) {
      param_2 = 4;
    }
    uVar1 = (ulong)param_2 * 4 + 8;
    if (lVar6 == 0) {
      plVar4 = operator_new__(uVar1);
    }
    else {
      plVar4 = (long *)FUN_00c0e238(lVar6,0,uVar1);
    }
    *(long **)(param_1 + 2) = plVar4;
    *plVar4 = lVar6;
    lVar6 = *(long *)(param_1 + 2);
    uVar2 = lVar6 + uVar1;
    if (lVar6 + uVar1 <= lVar6 + 0xcU) {
      uVar2 = lVar6 + 0xcU;
    }
    param_1[1] = param_2;
    memset((void *)(lVar6 + 8),0,(uVar2 - lVar6) - 5 & 0xfffffffffffffffc);
    if (0 < (int)*param_1) {
      memcpy((void *)(*(long *)(param_1 + 2) + 8),plVar5 + 1,(ulong)*param_1 << 2);
    }
    if ((plVar5 != (long *)0x0) && (*plVar5 == 0)) {
      operator_delete__(plVar5);
      return;
    }
  }
  return;
}


