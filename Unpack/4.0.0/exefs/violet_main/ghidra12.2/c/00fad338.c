/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fad338; name: FUN_00fad338
 */


void FUN_00fad338(long *param_1,undefined8 param_2,byte *param_3)

{
  long *plVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  plVar1 = param_1 + 1;
  lVar12 = *(long *)(param_3 + 0x18);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x10);
  lVar10 = *param_1;
  (**(code **)PTR_DAT_047d3110)(plVar1);
  (**(code **)PTR_DAT_047d3140)((long)param_1 + 0xc);
  *(byte *)((long)param_1 + 0x25) = *param_3;
  uVar5 = *(ushort *)(param_3 + 2);
  if (*param_3 != 0) {
    uVar11 = 0;
    do {
      uVar3 = 0;
      if ((uVar5 & 4) != 0) {
        uVar3 = uVar11;
      }
      pbVar2 = (byte *)(lVar12 + uVar3 * 0x20);
      (**(code **)PTR_DAT_047d3118)(plVar1,uVar11 & 0xffffffff,*pbVar2 & 1);
      (**(code **)PTR_DAT_047d3098)(lVar10);
      (**(code **)PTR_DAT_047d30a0)(lVar10,uVar11 & 0xffffffff);
      uVar6 = FUN_008f1348(pbVar2[1]);
      uVar7 = FUN_008f1348(pbVar2[2]);
      uVar8 = FUN_008f1348(pbVar2[4]);
      uVar9 = FUN_008f1348(pbVar2[5]);
      (**(code **)PTR_DAT_047d30a8)(lVar10,uVar6,uVar7,uVar8,uVar9);
      uVar6 = FUN_008f1338(pbVar2[3]);
      uVar7 = FUN_008f1338(pbVar2[6]);
      (**(code **)PTR_DAT_047d30b0)(lVar10,uVar6,uVar7);
      bVar4 = pbVar2[7];
      (**(code **)PTR_DAT_047d3148)
                ((long)param_1 + 0xc,uVar11 & 0xffffffff,bVar4 & 1,bVar4 >> 1 & 1,bVar4 >> 2 & 1,
                 bVar4 >> 3 & 1);
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 8;
      uVar5 = *(ushort *)(param_3 + 2);
    } while (uVar11 < *param_3);
  }
  if ((uVar5 >> 3 & 1) != 0) {
    uVar6 = FUN_008f1358(param_3[1]);
    (**(code **)PTR_DAT_047d3120)(plVar1,uVar6);
  }
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  return;
}


