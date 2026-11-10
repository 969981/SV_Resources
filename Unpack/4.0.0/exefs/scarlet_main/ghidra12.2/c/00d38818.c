/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d38818; name: FUN_00d38818
 */


long FUN_00d38818(long param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  size_t sVar5;
  long *plVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined4 uVar13;
  
  *(int **)(param_1 + 8) = param_2;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar9 == 0)) {
    lVar12 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar9);
    lVar12 = (long)puVar1 + (ulong)*puVar1;
  }
  puVar11 = &DAT_cbf29ce484222645;
  sVar5 = strlen((char *)(lVar12 + 4));
  bVar3 = *(byte *)(lVar12 + 4);
  if (bVar3 != 0) {
    pbVar10 = (byte *)(lVar12 + 5);
    do {
      puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar3 != 0);
  }
  *(size_t *)(param_1 + 0x20) = sVar5;
  plVar6 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 **)(param_1 + 0x10) = puVar11;
  *(char **)(param_1 + 0x18) = (char *)(lVar12 + 4);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 7) {
    bVar4 = false;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
    bVar4 = false;
    if (uVar9 != 0) {
      bVar4 = *(char *)((long)param_2 + uVar9) != '\0';
    }
  }
  *(bool *)(param_1 + 0x30) = bVar4;
  uVar13 = 0;
  if ((8 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar9 != 0)) {
    uVar13 = *(undefined4 *)((long)param_2 + uVar9);
  }
  *(undefined4 *)(param_1 + 0x34) = uVar13;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x21) {
    uVar13 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x10];
    uVar13 = 0;
    if (uVar9 != 0) {
      uVar13 = *(undefined4 *)((long)param_2 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x38) = uVar13;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x13) {
    iVar7 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[9];
    iVar7 = 0;
    if ((uVar9 != 0) &&
       (iVar2 = *(int *)((long)param_2 + uVar9), iVar7 = (uint)(iVar2 == 2) << 1, iVar2 == 1)) {
      iVar7 = 1;
    }
  }
  *(int *)(param_1 + 0x3c) = iVar7;
  uVar13 = 0;
  if ((10 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5], uVar9 != 0)) {
    uVar13 = *(undefined4 *)((long)param_2 + uVar9);
  }
  *(undefined4 *)(param_1 + 0x40) = uVar13;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x15) {
    uVar8 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[10];
    uVar8 = 0;
    if (uVar9 != 0) {
      uVar8 = (uint)(*(int *)((long)param_2 + uVar9) == 1);
    }
  }
  *(uint *)(param_1 + 0x44) = uVar8;
  uVar13 = 0;
  if ((0xc < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6], uVar9 != 0)) {
    uVar13 = *(undefined4 *)((long)param_2 + uVar9);
  }
  *(undefined4 *)(param_1 + 0x48) = uVar13;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xf) {
    bVar4 = false;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[7];
    bVar4 = false;
    if (uVar9 != 0) {
      bVar4 = *(char *)((long)param_2 + uVar9) != '\0';
    }
  }
  *(bool *)(param_1 + 0x4c) = bVar4;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x17) {
    bVar4 = false;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xb];
    bVar4 = false;
    if (uVar9 != 0) {
      bVar4 = *(char *)((long)param_2 + uVar9) != '\0';
    }
  }
  *(bool *)(param_1 + 0x4d) = bVar4;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x1f) {
    uVar13 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xf];
    uVar13 = 0;
    if (uVar9 != 0) {
      uVar13 = *(undefined4 *)((long)param_2 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x50) = uVar13;
  return param_1;
}


