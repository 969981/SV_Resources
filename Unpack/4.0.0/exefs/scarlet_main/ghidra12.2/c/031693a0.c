/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031693a0; name: FUN_031693a0
 */


int FUN_031693a0(long param_1,int param_2,ushort param_3)

{
  ushort uVar1;
  undefined2 *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x138) != 0) {
    iVar5 = *(int *)(param_1 + 0x138) + -1;
    if (*(int *)(*(long *)(param_1 + 0x130) + (long)iVar5 * 4) == param_2) goto LAB_031693e8;
  }
  iVar5 = FUN_03168de8(param_1,param_2);
LAB_031693e8:
  iVar4 = *(int *)(param_1 + 0x128);
  if ((int)(*(uint *)(param_1 + 300) & 0x7fffffff) <= iVar4) {
    FUN_03169f70(param_1 + 0x120,PTR_PTR_047d1a50,(long)iVar4 + 1);
  }
  uVar1 = (ushort)iVar4;
  puVar2 = (undefined2 *)(*(long *)(param_1 + 0x120) + (ulong)uVar1 * 8);
  *(int *)(param_1 + 0x128) = (int)((long)iVar4 + 1);
  *puVar2 = (short)iVar5;
  *(undefined4 *)(puVar2 + 1) = 0x3ffff;
  iVar5 = *(int *)(param_1 + 0x118);
  if ((int)(*(uint *)(param_1 + 0x11c) & 0x7fffffff) <= iVar5) {
    FUN_0316a080(param_1 + 0x110,PTR_PTR_047d1a50,(long)iVar5 + 1);
  }
  puVar3 = (ushort *)(*(long *)(param_1 + 0x110) + (ulong)(ushort)iVar5 * 8);
  *(int *)(param_1 + 0x118) = (int)((long)iVar5 + 1);
  *puVar3 = uVar1;
  puVar3[1] = uVar1;
  puVar3[2] = param_3;
  return iVar5;
}


