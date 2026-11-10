/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00531cd4; name: FUN_00531cd4
 */


void FUN_00531cd4(uint *param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = param_1[1];
  if ((int)param_2 <= (int)uVar1) {
    return;
  }
  if ((int)uVar1 < 1) {
    plVar3 = (long *)0x0;
    if (uVar1 != 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 2) + -8);
      goto joined_r0x00531d24;
    }
    lVar4 = *(long *)(param_1 + 2);
    if (3 < (int)param_2) goto LAB_00531d7c;
  }
  else {
    plVar3 = (long *)(*(long *)(param_1 + 2) + -8);
    lVar4 = *(long *)(*(long *)(param_1 + 2) + -8);
joined_r0x00531d24:
    if (3 < (int)param_2) {
      if (0x3fffffff < (int)uVar1) {
        param_2 = 0x7fffffff;
        uVar5 = 0x1fffffffc;
        goto joined_r0x00531d58;
      }
LAB_00531d7c:
      if ((int)param_2 <= (int)(uVar1 * 2)) {
        param_2 = uVar1 * 2;
      }
      uVar5 = -(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_2 << 2;
      goto joined_r0x00531d58;
    }
  }
  param_2 = 4;
  uVar5 = 0x10;
joined_r0x00531d58:
  if (lVar4 == 0) {
    plVar2 = (long *)FUN_0049e6c0(uVar5 + 8);
  }
  else {
    uVar5 = uVar5 + 0xf & 0xfffffffffffffff8;
    if (*(long *)(lVar4 + 0x70) != 0) {
      FUN_00520d08(lVar4,0,uVar5);
    }
    plVar2 = (long *)FUN_00520c00(lVar4,uVar5);
  }
  *plVar2 = lVar4;
  param_1[1] = param_2;
  *(long **)(param_1 + 2) = plVar2 + 1;
  if (0 < (int)*param_1) {
    memcpy(plVar2 + 1,plVar3 + 1,(ulong)*param_1 << 2);
  }
  if ((plVar3 == (long *)0x0) || (*plVar3 != 0)) {
    return;
  }
  FUN_0049e700(plVar3);
  return;
}


