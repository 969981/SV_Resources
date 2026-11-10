/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f00f8; name: FUN_008f00f8
 */


void FUN_008f00f8(long *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  
  param_1[2] = 0;
  *(uint *)(param_1 + 3) = param_2;
  *(undefined4 *)((long)param_1 + 0x1c) = 2;
  *(undefined4 *)(param_1 + 5) = 0;
  puVar3 = PTR_DAT_047d2718;
  lVar2 = 0;
  if ((param_2 & 1) != 0) {
    lVar2 = 0xc;
  }
  if ((param_2 & 2) != 0) {
    lVar2 = lVar2 + 0xc;
  }
  *(int *)(param_1 + 8) = param_4;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = 0;
  uVar1 = param_4 + 1;
  if ((param_2 & 4) != 0) {
    lVar2 = lVar2 + 8;
  }
  *(int *)(param_1 + 4) = param_3;
  *(uint *)((long)param_1 + 0x24) = uVar1;
  param_1[6] = lVar2 * (int)uVar1;
  param_1[7] = 0;
  if (param_3 != 2) {
    uVar4 = 0;
    if (param_3 != 3) goto LAB_008f0174;
    uVar1 = param_4 * 3;
  }
  uVar4 = (ulong)uVar1;
  if (0xffff < (int)uVar1) {
    *(undefined4 *)((long)param_1 + 0x1c) = 2;
    param_1[7] = uVar4 << 2;
    *(uint *)(param_1 + 5) = uVar1;
    return;
  }
LAB_008f0174:
  *(undefined4 *)((long)param_1 + 0x1c) = 1;
  param_1[7] = -(uVar4 >> 0x1f) & 0xfffffffe00000000 | uVar4 << 1;
  *(int *)(param_1 + 5) = (int)uVar4;
  return;
}


