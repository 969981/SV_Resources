/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0015ff40; name: FUN_0015ff40
 */


void FUN_0015ff40(long param_1,uint param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((int)(param_2 - 0xf) < 1) {
    iVar3 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    iVar3 = 0;
    do {
      puVar2 = (undefined8 *)(param_3 + iVar3);
      uVar9 = puVar2[1];
      uVar8 = *puVar2;
      puVar2 = (undefined8 *)(param_4 + iVar3);
      uVar11 = puVar2[1];
      uVar10 = *puVar2;
      puVar5 = (undefined1 *)(param_1 + (long)iVar3 * 2);
      iVar3 = iVar3 + 0x10;
      *puVar5 = (char)uVar8;
      puVar5[1] = (char)uVar10;
      puVar5[2] = (char)((ulong)uVar8 >> 8);
      puVar5[3] = (char)((ulong)uVar10 >> 8);
      puVar5[4] = (char)((ulong)uVar8 >> 0x10);
      puVar5[5] = (char)((ulong)uVar10 >> 0x10);
      puVar5[6] = (char)((ulong)uVar8 >> 0x18);
      puVar5[7] = (char)((ulong)uVar10 >> 0x18);
      puVar5[8] = (char)((ulong)uVar8 >> 0x20);
      puVar5[9] = (char)((ulong)uVar10 >> 0x20);
      puVar5[10] = (char)((ulong)uVar8 >> 0x28);
      puVar5[0xb] = (char)((ulong)uVar10 >> 0x28);
      puVar5[0xc] = (char)((ulong)uVar8 >> 0x30);
      puVar5[0xd] = (char)((ulong)uVar10 >> 0x30);
      puVar5[0xe] = (char)((ulong)uVar8 >> 0x38);
      puVar5[0xf] = (char)((ulong)uVar10 >> 0x38);
      puVar5[0x10] = (char)uVar9;
      puVar5[0x11] = (char)uVar11;
      puVar5[0x12] = (char)((ulong)uVar9 >> 8);
      puVar5[0x13] = (char)((ulong)uVar11 >> 8);
      puVar5[0x14] = (char)((ulong)uVar9 >> 0x10);
      puVar5[0x15] = (char)((ulong)uVar11 >> 0x10);
      puVar5[0x16] = (char)((ulong)uVar9 >> 0x18);
      puVar5[0x17] = (char)((ulong)uVar11 >> 0x18);
      puVar5[0x18] = (char)((ulong)uVar9 >> 0x20);
      puVar5[0x19] = (char)((ulong)uVar11 >> 0x20);
      puVar5[0x1a] = (char)((ulong)uVar9 >> 0x28);
      puVar5[0x1b] = (char)((ulong)uVar11 >> 0x28);
      puVar5[0x1c] = (char)((ulong)uVar9 >> 0x30);
      puVar5[0x1d] = (char)((ulong)uVar11 >> 0x30);
      puVar5[0x1e] = (char)((ulong)uVar9 >> 0x38);
      puVar5[0x1f] = (char)((ulong)uVar11 >> 0x38);
    } while (iVar3 < (int)(param_2 - 0xf));
    if ((int)param_2 <= iVar3) {
      return;
    }
  }
  lVar4 = (long)iVar3;
  lVar1 = lVar4;
  if ((param_2 & 1) != 0) {
    *(ushort *)(param_1 + lVar4 * 2) =
         CONCAT11(*(undefined1 *)(param_4 + lVar4),*(undefined1 *)(param_3 + lVar4));
    lVar1 = lVar4 + 1;
  }
  if ((long)(int)param_2 != lVar4 + 1) {
    lVar4 = (int)param_2 - lVar1;
    lVar1 = lVar1 + 1;
    puVar5 = (undefined1 *)(param_4 + lVar1);
    puVar6 = (undefined2 *)(param_1 + lVar1 * 2);
    puVar7 = (undefined1 *)(param_3 + lVar1);
    do {
      lVar4 = lVar4 + -2;
      puVar6[-1] = CONCAT11(puVar5[-1],puVar7[-1]);
      *puVar6 = CONCAT11(*puVar5,*puVar7);
      puVar5 = puVar5 + 2;
      puVar6 = puVar6 + 2;
      puVar7 = puVar7 + 2;
    } while (lVar4 != 0);
  }
  return;
}


