/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c35ac; name: FUN_031c35ac
 */


void FUN_031c35ac(long *param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  *param_1 = param_2;
  puVar4 = (uint *)*param_3;
  *puVar4 = *puVar4 & 0xffff | (uint)*(ushort *)(param_3 + 1) << 0x10;
  *puVar4 = *puVar4 & 0xffff0000 | *puVar4 - (uint)*(ushort *)((long)param_3 + 10) & 0xffff;
  if (*(long *)(puVar4 + 2) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    lVar7 = *(long *)(puVar4 + 2);
    do {
      puVar8 = (undefined8 *)param_1[1];
      lVar6 = *(long *)(lVar7 + 8);
      *(long *)(puVar8[1] + (long)*(int *)(puVar8 + 0xb) * 8) = lVar7;
      iVar1 = *(int *)(puVar8 + 0xb);
      iVar3 = iVar1 + 1;
      *(int *)(puVar8 + 0xb) = iVar3;
      if (*(int *)((long)puVar8 + 0x5c) <= iVar3) {
        iVar1 = iVar1 + -5;
        (**(code **)(*(long *)*puVar8 + 0x28))((long *)*puVar8,puVar8[1] + (long)iVar1 * 8,6);
        *(int *)(puVar8 + 0xb) = iVar1;
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar6;
    } while (lVar6 != 0);
  }
  lVar7 = *param_1;
  iVar3 = *(int *)(lVar7 + 0x18);
  iVar5 = iVar3 - iVar5;
  if ((int)(*(uint *)(lVar7 + 0x1c) & 0x7fffffff) < iVar5) {
    FUN_031c2ad4(lVar7 + 0x10,PTR_PTR_047d1a50,(long)iVar5);
    iVar3 = *(int *)(lVar7 + 0x18);
  }
  if (iVar3 != iVar5) {
    *(int *)(lVar7 + 0x18) = iVar5;
  }
  *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) - *(int *)((long)param_3 + 0xc);
  *(uint *)(param_1 + 3) = (uint)*(ushort *)(param_3 + 1);
  uVar2 = *puVar4;
  *(uint *)((long)param_1 + 0x1c) = uVar2 & 0xffff;
  *(uint *)(*param_1 + 8) = *(int *)(*param_1 + 8) - (uVar2 & 0xffff);
  param_1[2] = (long)puVar4;
  return;
}


