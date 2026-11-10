/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03169a70; name: FUN_03169a70
 */


undefined8
FUN_03169a70(long param_1,ushort *param_2,int param_3,undefined4 param_4,undefined4 param_5,
            ushort *param_6,ushort *param_7)

{
  undefined2 *puVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  ushort uVar8;
  ulong uVar9;
  
  if ((int)(*(uint *)(param_1 + 300) & 0x7fffffff) <= *(int *)(param_1 + 0x128)) {
    FUN_03168fa0(param_1 + 0x120,PTR_PTR_047d1a50,(long)*(int *)(param_1 + 0x128) + 1);
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    uVar4 = *(int *)(param_1 + 0x138) - 1;
    if (*(int *)(*(long *)(param_1 + 0x130) + (long)(int)uVar4 * 4) == param_3) goto LAB_03169b00;
  }
  uVar4 = FUN_03168de8(param_1,param_3);
LAB_03169b00:
  uVar2 = *param_2;
  lVar7 = *(long *)(param_1 + 0x120);
  uVar8 = param_2[1];
  uVar9 = (ulong)uVar8;
  uVar5 = uVar8;
  if ((uint)*(ushort *)(lVar7 + (ulong)uVar2 * 8) == (uVar4 & 0xffff)) {
    lVar7 = lVar7 + uVar9 * 8;
    *(ushort *)(lVar7 + 2) = uVar2;
    *(undefined4 *)(lVar7 + 4) = param_4;
    param_2[1] = uVar2;
    uVar8 = 0xffff;
  }
  else if ((uint)*(ushort *)(lVar7 + uVar9 * 8) == (uVar4 & 0xffff)) {
    lVar7 = lVar7 + uVar9 * 8;
    *(ushort *)(lVar7 + 2) = uVar2;
    *(undefined4 *)(lVar7 + 4) = param_5;
    *param_2 = uVar8;
    uVar5 = 0xffff;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x128);
    lVar6 = lVar7;
    if ((int)(*(uint *)(param_1 + 300) & 0x7fffffff) <= iVar3) {
      FUN_03169f70(param_1 + 0x120,PTR_PTR_047d1a50,(long)iVar3 + 1);
      lVar6 = *(long *)(param_1 + 0x120);
    }
    lVar7 = lVar7 + uVar9 * 8;
    *(int *)(param_1 + 0x128) = (int)((long)iVar3 + 1);
    uVar8 = (ushort)iVar3;
    *(ushort *)(lVar7 + 2) = uVar8;
    *(undefined4 *)(lVar7 + 4) = param_4;
    puVar1 = (undefined2 *)(lVar6 + (ulong)uVar8 * 8);
    *puVar1 = (short)uVar4;
    puVar1[1] = uVar2;
    *(undefined4 *)(puVar1 + 2) = param_5;
    *param_2 = uVar8;
    param_2[1] = uVar8;
  }
  *param_6 = uVar5;
  *param_7 = uVar8;
  return 1;
}


