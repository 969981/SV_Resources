/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03169c10; name: FUN_03169c10
 */


undefined8 FUN_03169c10(long param_1,long param_2,int param_3,undefined4 param_4,ushort *param_5)

{
  ushort uVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  long lVar6;
  
  if ((int)(*(uint *)(param_1 + 300) & 0x7fffffff) <= *(int *)(param_1 + 0x128)) {
    FUN_03168fa0(param_1 + 0x120,PTR_PTR_047d1a50,(long)*(int *)(param_1 + 0x128) + 1);
  }
  uVar5 = *(ushort *)(param_2 + 2);
  lVar6 = *(long *)(param_1 + 0x120);
  if (*(int *)(param_1 + 0x138) != 0) {
    uVar4 = *(int *)(param_1 + 0x138) - 1;
    if (*(int *)(*(long *)(param_1 + 0x130) + (long)(int)uVar4 * 4) == param_3) goto LAB_03169c9c;
  }
  uVar4 = FUN_03168de8(param_1,param_3);
LAB_03169c9c:
  if ((uint)*(ushort *)(lVar6 + (ulong)uVar5 * 8) == (uVar4 & 0xffff)) {
    uVar5 = 0xffff;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x128);
    if ((int)(*(uint *)(param_1 + 300) & 0x7fffffff) <= iVar3) {
      FUN_03169f70(param_1 + 0x120,PTR_PTR_047d1a50,(long)iVar3 + 1);
    }
    lVar6 = lVar6 + (ulong)uVar5 * 8;
    uVar1 = (ushort)iVar3;
    puVar2 = (undefined2 *)(*(long *)(param_1 + 0x120) + (ulong)uVar1 * 8);
    *(int *)(param_1 + 0x128) = (int)((long)iVar3 + 1);
    *(ushort *)(lVar6 + 2) = uVar1;
    *(undefined4 *)(lVar6 + 4) = param_4;
    *puVar2 = (short)uVar4;
    *(undefined4 *)(puVar2 + 1) = 0x3ffff;
    *(ushort *)(param_2 + 2) = uVar1;
  }
  *param_5 = uVar5;
  return 1;
}


