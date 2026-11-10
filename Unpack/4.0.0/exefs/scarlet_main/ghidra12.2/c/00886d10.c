/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00886d10; name: FUN_00886d10
 */


void FUN_00886d10(long param_1,long *param_2,ushort param_3)

{
  ushort *puVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  
  pbVar2 = (byte *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0xc));
  uVar3 = (uint)param_3;
  uVar8 = 0;
  if ((uint)*(ushort *)(pbVar2 + 0xe) * (uint)*(ushort *)(pbVar2 + 0xc) != 0) {
    uVar8 = uVar3 / ((uint)*(ushort *)(pbVar2 + 0xe) * (uint)*(ushort *)(pbVar2 + 0xc));
  }
  if (*(uint *)(pbVar2 + 0x14) == 0) {
    *param_2 = 0;
    lVar10 = *(long *)(param_1 + 0x20);
    uVar11 = *(uint *)(lVar10 + 0x10);
  }
  else {
    *param_2 = *(long *)(param_1 + 0x18) + (ulong)*(uint *)(pbVar2 + 0x14) +
               (ulong)(*(int *)(pbVar2 + 4) * uVar8);
    lVar10 = *(long *)(param_1 + 0x20);
    uVar11 = *(uint *)(lVar10 + 0x10);
  }
  if (uVar11 != 0) {
    do {
      puVar1 = (ushort *)(*(long *)(param_1 + 0x18) + (ulong)uVar11);
      if ((*puVar1 <= param_3) && (param_3 <= puVar1[1])) {
        lVar10 = (long)puVar1 + ((ulong)param_3 - (ulong)*puVar1) * 3;
        break;
      }
      uVar11 = *(uint *)(puVar1 + 2);
    } while (uVar11 != 0);
  }
  *(short *)(param_2 + 1) = (short)*(char *)(lVar10 + 8);
  *(ushort *)((long)param_2 + 10) = (ushort)*(byte *)(lVar10 + 9);
  *(ushort *)((long)param_2 + 0xc) = (ushort)*(byte *)(lVar10 + 10);
  *(ushort *)((long)param_2 + 0xe) = (ushort)*(byte *)(lVar10 + 9);
  param_2[4] = param_1 + 0x28;
  *(char *)((long)param_2 + 0x1f) = (char)uVar8;
  *(undefined1 *)((long)param_2 + 0x1e) = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  uVar6 = *(ushort *)(pbVar2 + 0xc);
  uVar9 = (uint)uVar6;
  uVar8 = *(ushort *)(pbVar2 + 0xe) * uVar9;
  uVar11 = 0;
  if (uVar8 != 0) {
    uVar11 = uVar3 / uVar8;
  }
  uVar3 = uVar3 - uVar11 * uVar8;
  sVar7 = 0;
  if (uVar9 != 0) {
    sVar7 = (short)((uVar3 & 0xffff) / uVar9);
  }
  bVar4 = pbVar2[1];
  bVar5 = *pbVar2;
  *(ushort *)(param_2 + 2) = (ushort)bVar4;
  *(ushort *)((long)param_2 + 0x12) = (ushort)pbVar2[1];
  *(ushort *)((long)param_2 + 0x1c) = *(ushort *)(pbVar2 + 10) & 0x3fff;
  *(undefined2 *)((long)param_2 + 0x14) = *(undefined2 *)(pbVar2 + 0x10);
  *(undefined2 *)((long)param_2 + 0x16) = *(undefined2 *)(pbVar2 + 0x12);
  *(ushort *)(param_2 + 3) = (bVar5 + 1) * ((short)uVar3 - sVar7 * uVar6) + 1;
  *(ushort *)((long)param_2 + 0x1a) = (bVar4 + 1) * sVar7 + 1;
  return;
}


