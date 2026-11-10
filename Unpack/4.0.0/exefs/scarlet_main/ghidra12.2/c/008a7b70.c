/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a7b70; name: FUN_008a7b70
 */


void FUN_008a7b70(long param_1,void *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  iVar2 = param_3 + *(int *)(*(long *)(param_1 + 0xa8) + 4) + 0x14;
  puVar8 = (undefined8 *)FUN_00896e78(iVar2);
  uVar5 = *(undefined4 *)(*(undefined8 **)(param_1 + 0xa8) + 1);
  *puVar8 = **(undefined8 **)(param_1 + 0xa8);
  *(int *)((long)puVar8 + 4) = iVar2;
  *(undefined4 *)(puVar8 + 1) = uVar5;
  uVar1 = *(short *)(*(long *)(param_1 + 0xa8) + 8) + 1;
  *(ushort *)(puVar8 + 1) = uVar1;
  *(undefined4 *)((long)puVar8 + 0xc) = 0;
  *(uint *)(puVar8 + 2) = ((uint)uVar1 + (uint)uVar1 * 2) * 4;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x30001;
  lVar10 = *(long *)(param_1 + 0xa8);
  if (*(short *)(lVar10 + 8) == 0) {
    uVar13 = 0xc;
    uVar9 = 0x18;
  }
  else {
    uVar12 = 0;
    uVar9 = 0x18;
    uVar13 = 0xc;
    lVar11 = 0;
    do {
      lVar4 = lVar10 + lVar11;
      iVar2 = *(int *)(lVar4 + 0x10);
      uVar7 = *(undefined2 *)(lVar4 + 0x14);
      uVar6 = *(undefined1 *)(lVar4 + 0x16);
      *(int *)((long)puVar8 + lVar11 + 0x18) = *(int *)(lVar4 + 0xc) + param_3 + 8;
      *(int *)((long)puVar8 + lVar11 + 0x1c) = iVar2 + param_3 + 8;
      *(undefined2 *)((long)puVar8 + lVar11 + 0x20) = uVar7;
      *(undefined1 *)((long)puVar8 + lVar11 + 0x22) = uVar6;
      *(undefined1 *)((long)puVar8 + lVar11 + 0x23) = 0;
      uVar12 = uVar12 + 1;
      uVar13 = (ulong)((int)uVar13 + 0xc);
      uVar9 = (ulong)((int)uVar9 + 0xc);
      lVar11 = lVar11 + 0xc;
    } while (uVar12 < *(ushort *)(*(long *)(param_1 + 0xa8) + 8));
  }
  uVar3 = (int)uVar9 + 8;
  *(undefined4 *)((long)puVar8 + uVar9) = 0x10000;
  *(undefined4 *)((long)puVar8 + (ulong)((int)uVar9 + 4)) = 8;
  memcpy((void *)((long)puVar8 + (ulong)uVar3),param_2,(long)param_3);
  lVar10 = *(long *)(param_1 + 0xa8);
  memcpy((void *)((long)puVar8 + (ulong)(uVar3 + param_3)),(void *)(lVar10 + uVar13),
         (ulong)((*(int *)(lVar10 + 4) + (uint)*(ushort *)(lVar10 + 8) * -0xc) - 0xc));
  *(undefined8 **)(param_1 + 0xa8) = puVar8;
  return;
}


