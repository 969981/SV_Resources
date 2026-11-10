/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c36f4; name: FUN_031c36f4
 */


undefined8 * FUN_031c36f4(long *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  undefined8 *puVar6;
  
  lVar1 = *param_1;
  puVar6 = (undefined8 *)param_1[1];
  uVar2 = *(int *)(puVar6 + 0xb) - 1;
  if (*(int *)(puVar6 + 0xb) < 1) {
    lVar4 = puVar6[1];
    (**(code **)(*(long *)*puVar6 + 0x20))((long *)*puVar6,lVar4,6);
    *(undefined4 *)(puVar6 + 0xb) = 5;
    puVar6 = (undefined8 *)(lVar4 + 0x28);
  }
  else {
    *(uint *)(puVar6 + 0xb) = uVar2;
    puVar6 = (undefined8 *)(puVar6[1] + (ulong)uVar2 * 8);
  }
  puVar6 = (undefined8 *)*puVar6;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined4 *)((long)puVar6 + 4) = *(undefined4 *)(lVar1 + 0x18);
  iVar3 = *(int *)(lVar1 + 0x18);
  lVar4 = (long)iVar3;
  if ((int)(*(uint *)(lVar1 + 0x1c) & 0x7fffffff) <= iVar3) {
    FUN_031c25b4(lVar1 + 0x10,PTR_PTR_047d1a50,lVar4 + 1);
    iVar3 = *(int *)(lVar1 + 0x18);
  }
  *(undefined8 **)(*(long *)(lVar1 + 0x10) + (long)iVar3 * 8) = puVar6;
  *(int *)(lVar1 + 0x18) = (int)(lVar4 + 1);
  puVar5 = (uint *)param_1[2];
  lVar1 = param_1[3];
  uVar2 = *(uint *)((long)param_1 + 0x1c);
  *(undefined8 **)(puVar5 + 2) = puVar6;
  *puVar5 = *puVar5 & 0xffff0000 | uVar2 & 0xffff;
  *puVar5 = *puVar5 & 0xffff | (int)lVar1 << 0x10;
  *(uint *)(*param_1 + 8) = *(int *)(*param_1 + 8) + uVar2;
  param_1[2] = (long)puVar6;
  param_1[3] = 0;
  return puVar6 + 4;
}


