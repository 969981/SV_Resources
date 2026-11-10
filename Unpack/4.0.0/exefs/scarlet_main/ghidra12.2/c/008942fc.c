/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008942fc; name: FUN_008942fc
 */


void FUN_008942fc(long param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  short sVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong local_120 [2];
  undefined1 local_110 [4];
  undefined2 auStack_10c [2];
  uint local_108 [2];
  char *apcStack_100 [13];
  undefined8 local_98;
  undefined1 *local_90;
  ulong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar4 = nn::util::BinaryFileHeader::GetFirstBlock();
  uVar1 = *(uint *)(lVar4 + 0x1c);
  if (0 < (int)uVar1) {
    uVar12 = 0;
    do {
      lVar4 = nn::util::BinaryFileHeader::GetFirstBlock();
      uVar11 = *(undefined8 *)
                (*(long *)(*(long *)(lVar4 + 0x20) + uVar12 * 0x40 +
                          *(long *)(PTR_DAT_047d1f00 + ((ulong)*(uint *)(param_1 + 8) & 7) * 8)) +
                0x68);
      local_78 = 0;
      uStack_70 = 0;
      local_88 = (ulong *)0x0;
      uStack_80 = 0;
      local_98 = 0;
      local_90 = (undefined1 *)0x0;
      FUN_008f04e8(&local_98);
      _local_110 = 0;
      apcStack_100[0xb] = (char *)0x0;
      apcStack_100[0xc] = (char *)0x0;
      apcStack_100[9] = (char *)0x0;
      apcStack_100[10] = (char *)0x0;
      apcStack_100[7] = (char *)0x0;
      apcStack_100[8] = (char *)0x0;
      apcStack_100[5] = (char *)0x0;
      apcStack_100[6] = (char *)0x0;
      apcStack_100[3] = (char *)0x0;
      apcStack_100[4] = (char *)0x0;
      apcStack_100[1] = (char *)0x0;
      apcStack_100[2] = (char *)0x0;
      local_108[0] = 0;
      local_108[1] = 0;
      apcStack_100[0] = (char *)0x0;
      iVar3 = FUN_008f1cbc(uVar11,0,0,"aVertexIndex");
      if (iVar3 < 0) {
        uVar10 = 0;
      }
      else {
        FUN_008f04cc(local_110);
        uVar10 = 8;
        _local_110 = (uint6)(uint)local_110;
        local_108[0] = 0;
        local_108[1] = 0x1705;
        apcStack_100[0] = "aVertexIndex";
      }
      bVar2 = iVar3 >= 0;
      uVar8 = (ulong)bVar2;
      iVar3 = FUN_008f1cbc(uVar11,0,0,"aPosition");
      uVar9 = uVar8;
      if (-1 < iVar3) {
        FUN_008f04cc(local_110 + uVar8 * 0x28);
        apcStack_100[uVar8 * 5] = "aPosition";
        local_108[uVar8 * 10] = uVar10;
        local_108[uVar8 * 10 + 1] = 0x1805;
        uVar9 = (ulong)(bVar2 + 1);
        uVar10 = uVar10 + 0xc;
        auStack_10c[uVar8 * 0x14] = 0;
      }
      iVar3 = FUN_008f1cbc(uVar11,0,0,"aPositionVg");
      if (-1 < iVar3) {
        FUN_008f04cc(local_110 + uVar9 * 0x28);
        local_108[uVar9 * 10] = uVar10;
        local_108[uVar9 * 10 + 1] = 0x1705;
        uVar10 = uVar10 + 8;
        apcStack_100[uVar9 * 5] = "aPositionVg";
        auStack_10c[uVar9 * 0x14] = 0;
        uVar9 = (ulong)((int)uVar9 + 1);
      }
      sVar7 = (short)uVar9;
      iVar3 = FUN_008f1cbc(uVar11,0,0,"aTexCoord");
      if (-1 < iVar3) {
        FUN_008f04cc(local_110 + uVar9 * 0x28);
        local_108[uVar9 * 10] = uVar10;
        local_108[uVar9 * 10 + 1] = 0x1705;
        sVar7 = sVar7 + 1;
        uVar10 = uVar10 + 8;
        apcStack_100[uVar9 * 5] = "aTexCoord";
        auStack_10c[uVar9 * 0x14] = 0;
      }
      local_120[0] = 0;
      local_120[1] = 0;
      FUN_008f04e0(local_120);
      local_88 = local_120;
      local_120[0] = (ulong)uVar10;
      local_98._0_4_ = CONCAT22(1,sVar7);
      local_90 = local_110;
      uVar5 = FUN_008f216c(&local_98);
      lVar4 = *(long *)(param_1 + 0x10);
      uVar6 = FUN_00896e5c(uVar5,8);
      FUN_008f21e8(lVar4 + uVar12 * 0x20,uVar6,uVar5);
      FUN_008f21fc(*(long *)(param_1 + 0x10) + uVar12 * 0x20,param_2,&local_98,uVar11);
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar1);
  }
  return;
}


