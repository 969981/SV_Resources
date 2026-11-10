/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f8529c; name: FUN_02f8529c
 */


void FUN_02f8529c(ushort *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint uVar13;
  
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar9 = (uint)(byte)uVar5;
  if ((uVar4 & 5) != 0) {
    uVar9 = 4;
  }
  uVar3 = *param_1;
  *(uint *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) + uVar9 * 4 + 4;
  if ((uVar4 & 1) == 0) {
    uVar12 = (ulong)*(byte *)((long)param_1 + 5);
    iVar10 = (uint)(byte)uVar5 * 0x20 + 0x40;
    iVar8 = 0;
    if ((uVar3 & 0x30) != 0) {
      iVar8 = 0x90;
    }
    bVar6 = (uVar4 & 4) != 0;
    if (bVar6) {
      iVar10 = 0xc0;
    }
    if (bVar6) {
      uVar12 = 0xff;
    }
    uVar13 = iVar10 + iVar8 + (uint)(byte)PTR_DAT_047e4900[uVar12];
  }
  else {
    uVar13 = (uint)*(byte *)((long)param_1 + 3) << 4;
  }
  if ((int)(*(int *)(param_3 + 0x18) + uVar13) < 0xfa1) {
    puVar7 = (undefined8 *)(*(long *)(param_3 + 0x10) + (long)*(int *)(param_3 + 0x18) + 0x20);
  }
  else {
    puVar7 = (undefined8 *)FUN_031c36f4(param_3);
  }
  iVar10 = (uVar13 >> 4) + 1;
  puVar11 = puVar7;
  do {
    iVar10 = iVar10 + -1;
    uVar1 = *(undefined4 *)(param_1 + 4);
    uVar2 = *(undefined4 *)(param_1 + 6);
    *puVar11 = *(undefined8 *)param_1;
    *(undefined4 *)(puVar11 + 1) = uVar1;
    *(undefined4 *)((long)puVar11 + 0xc) = uVar2;
    param_1 = param_1 + 8;
    puVar11 = puVar11 + 2;
  } while (1 < iVar10);
  *(char *)((long)puVar7 + 3) = (char)(uVar13 >> 4);
  puVar7[4] = param_2;
  *(byte *)((long)puVar7 + 6) = *(byte *)((long)puVar7 + 6) & 0xf8 | (byte)uVar9 & 7;
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_3 + 0x10);
  }
  *(uint *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + uVar13;
  *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
  return;
}


