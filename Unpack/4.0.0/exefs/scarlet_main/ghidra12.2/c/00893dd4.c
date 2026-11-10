/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00893dd4; name: FUN_00893dd4
 */


void FUN_00893dd4(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 long param_5,long param_6,undefined8 param_7,uint param_8)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  char acStack_80 [32];
  
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xffffff0f | param_8 << 4;
  uVar4 = FUN_00ea28ec(param_3);
  *param_1 = uVar4;
  lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
  uVar6 = FUN_008b4d90();
  if ((uVar6 & 1) == 0) {
    if (param_5 == 0) {
      param_5 = 0;
      lVar7 = 0;
      param_7 = 0;
    }
    else {
      lVar7 = (param_6 - param_3) + lVar5;
    }
    FUN_00ea2920(lVar5,param_2,param_5,lVar7,param_7);
  }
  uVar2 = FUN_008b4ec0(param_2,*(undefined8 *)(lVar5 + 0x20));
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xfffffff8 | uVar2;
  lVar7 = nn::util::BinaryFileHeader::GetFirstBlock();
  puVar1 = PTR_DAT_047d1f00;
  if (1 < (int)*(uint *)(lVar7 + 0x1c)) {
    lVar8 = (ulong)*(uint *)(lVar7 + 0x1c) - 1;
    lVar7 = 0x40;
    do {
      lVar10 = *(long *)(lVar5 + 0x20);
      uVar6 = FUN_008b4dc0(*(undefined8 *)(lVar10 + *(long *)(puVar1 + (ulong)uVar2 * 8) + lVar7));
      if ((uVar6 & 1) == 0) {
        FUN_00ea1db8(*(undefined8 *)
                      (*(long *)(lVar10 + *(long *)(puVar1 + (ulong)uVar2 * 8) + lVar7) + 0x68),
                     param_2);
      }
      lVar7 = lVar7 + 0x40;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
  uVar2 = *(uint *)(lVar5 + 0x1c);
  lVar5 = FUN_00896e78((long)(int)uVar2 << 5);
  if ((lVar5 != 0) && (0 < (int)uVar2)) {
    uVar6 = (ulong)uVar2;
    lVar7 = lVar5;
    do {
      FUN_008f21d8(lVar7);
      uVar6 = uVar6 - 1;
      lVar7 = lVar7 + 0x20;
    } while (uVar6 != 0);
  }
  param_1[2] = lVar5;
  lVar5 = (long)(int)uVar2 * 4;
  uVar4 = FUN_00896e78(lVar5);
  param_1[3] = uVar4;
  uVar4 = FUN_00896e78(lVar5);
  param_1[4] = uVar4;
  uVar4 = FUN_00896e78(lVar5);
  param_1[5] = uVar4;
  uVar4 = FUN_00896e78(lVar5 * (int)param_8);
  param_1[6] = uVar4;
  lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
  puVar1 = PTR_DAT_047d1f00;
  uVar2 = *(uint *)(lVar5 + 0x1c);
  if (0 < (int)uVar2) {
    if ((int)param_8 < 1) {
      uVar6 = 0;
      do {
        lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
        lVar7 = uVar6 * 0x40;
        uVar4 = *(undefined8 *)
                 (*(long *)(*(long *)(lVar5 + 0x20) + lVar7 +
                           *(long *)(puVar1 + ((ulong)*(uint *)(param_1 + 1) & 7) * 8)) + 0x68);
        lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
        uVar11 = *(undefined8 *)
                  (*(long *)(*(long *)(lVar5 + 0x20) + lVar7 +
                            *(long *)(puVar1 + ((ulong)*(uint *)(param_1 + 1) & 7) * 8)) + 0x68);
        lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
        uVar12 = *(undefined8 *)
                  (*(long *)(*(long *)(lVar5 + 0x20) + lVar7 +
                            *(long *)(puVar1 + ((ulong)*(uint *)(param_1 + 1) & 7) * 8)) + 0x68);
        uVar3 = FUN_008f1cbc(uVar4,0,3,"uConstantBufferForVertexShader");
        lVar5 = uVar6 * 4;
        *(undefined4 *)(param_1[3] + lVar5) = uVar3;
        uVar3 = FUN_008f1cbc(uVar11,3,3,"uConstantBufferForGeometryShader");
        *(undefined4 *)(param_1[4] + lVar5) = uVar3;
        uVar3 = FUN_008f1cbc(uVar12,4,3,"uConstantBufferForPixelShader");
        uVar6 = uVar6 + 1;
        *(undefined4 *)(param_1[5] + lVar5) = uVar3;
      } while (uVar6 != uVar2);
    }
    else {
      uVar9 = 0;
      uVar6 = 0;
      do {
        lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
        puVar1 = PTR_DAT_047d1f00;
        lVar7 = uVar6 * 0x40;
        uVar12 = *(undefined8 *)
                  (*(long *)(*(long *)(lVar5 + 0x20) + lVar7 +
                            *(long *)(PTR_DAT_047d1f00 + ((ulong)*(uint *)(param_1 + 1) & 7) * 8)) +
                  0x68);
        lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
        uVar4 = *(undefined8 *)
                 (*(long *)(*(long *)(lVar5 + 0x20) + lVar7 +
                           *(long *)(puVar1 + ((ulong)*(uint *)(param_1 + 1) & 7) * 8)) + 0x68);
        lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
        uVar11 = *(undefined8 *)
                  (*(long *)(*(long *)(lVar5 + 0x20) + lVar7 +
                            *(long *)(puVar1 + ((ulong)*(uint *)(param_1 + 1) & 7) * 8)) + 0x68);
        uVar3 = FUN_008f1cbc(uVar12,0,3,"uConstantBufferForVertexShader");
        lVar5 = uVar6 * 4;
        *(undefined4 *)(param_1[3] + lVar5) = uVar3;
        uVar3 = FUN_008f1cbc(uVar4,3,3,"uConstantBufferForGeometryShader");
        *(undefined4 *)(param_1[4] + lVar5) = uVar3;
        uVar3 = FUN_008f1cbc(uVar11,4,3,"uConstantBufferForPixelShader");
        uVar13 = 0;
        *(undefined4 *)(param_1[5] + lVar5) = uVar3;
        do {
          nn::util::SNPrintf(acStack_80,0x20,"uTexture%d",uVar13 & 0xffffffff);
          uVar3 = FUN_008f1cbc(uVar11,4,2,acStack_80);
          *(undefined4 *)
           (param_1[6] + (-(uVar9 >> 0x1f) & 0xfffffffc00000000 | uVar9 << 2) + uVar13 * 4) = uVar3;
          uVar13 = uVar13 + 1;
        } while (param_8 != uVar13);
        uVar6 = uVar6 + 1;
        uVar9 = (ulong)((int)uVar9 + param_8);
      } while (uVar6 != uVar2);
    }
  }
  FUN_008942fc(param_1,param_2);
  param_1[7] = param_4;
  return;
}


