/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00885e44; name: FUN_00885e44
 */


undefined8
FUN_00885e44(long param_1,undefined8 param_2,long param_3,undefined4 param_4,long param_5,
            long param_6)

{
  uint6 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  void *__dest;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoWare_Font-13_3_13-Release");
  if (*(int *)(param_1 + 0x8c) != 0) {
    return 0;
  }
  *(long *)(param_1 + 0x410) = param_3;
  lVar5 = nn::util::BinaryFileHeader::GetAlignment();
  __dest = (void *)((param_3 + lVar5) - 1U & -lVar5);
  memcpy(__dest,&DAT_044eb000,0x7438);
  uVar6 = FUN_00ea28ec(__dest);
  *(undefined8 *)(param_1 + 8) = uVar6;
  lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
  FUN_00ea2920(lVar5,param_2,0,0,0);
  puVar2 = PTR_DAT_047d1f00;
  lVar12 = *(long *)(lVar5 + 0x20);
  lVar10 = *(long *)(lVar12 + *(long *)PTR_DAT_047d1f00);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((lVar10 == 0) || (iVar3 = FUN_00ea1db8(*(undefined8 *)(lVar10 + 0x68),param_2), iVar3 != 0)) {
    lVar10 = *(long *)(lVar12 + *(long *)(puVar2 + 8));
    if (lVar10 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 1;
      iVar3 = FUN_00ea1db8(*(undefined8 *)(lVar10 + 0x68),param_2);
      if (iVar3 == 0) goto LAB_00885f6c;
    }
    lVar10 = *(long *)(lVar12 + *(long *)(puVar2 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 2;
    FUN_00ea1db8(*(undefined8 *)(lVar10 + 0x68),param_2);
  }
LAB_00885f6c:
  FUN_00ea1db8(*(undefined8 *)
                (*(long *)(*(long *)(lVar5 + 0x20) +
                           *(long *)(puVar2 + (ulong)*(uint *)(param_1 + 0x10) * 8) + 0x40) + 0x68),
               param_2);
  FUN_00ea1db8(*(undefined8 *)
                (*(long *)(*(long *)(lVar5 + 0x20) +
                           *(long *)(puVar2 + (ulong)*(uint *)(param_1 + 0x10) * 8) + 0x80) + 0x68),
               param_2);
  FUN_00ea1db8(*(undefined8 *)
                (*(long *)(*(long *)(lVar5 + 0x20) +
                           *(long *)(puVar2 + (ulong)*(uint *)(param_1 + 0x10) * 8) + 0xc0) + 0x68),
               param_2);
  FUN_00ea1db8(*(undefined8 *)
                (*(long *)(*(long *)(lVar5 + 0x20) +
                           *(long *)(puVar2 + (ulong)*(uint *)(param_1 + 0x10) * 8) + 0x100) + 0x68)
               ,param_2);
  FUN_00ea1db8(*(undefined8 *)
                (*(long *)(*(long *)(lVar5 + 0x20) +
                           *(long *)(puVar2 + (ulong)*(uint *)(param_1 + 0x10) * 8) + 0x140) + 0x68)
               ,param_2);
  lVar5 = 0;
  puVar9 = (undefined4 *)(param_1 + 0x44);
  do {
    lVar10 = nn::util::BinaryFileHeader::GetFirstBlock();
    uVar6 = *(undefined8 *)
             (*(long *)(*(long *)(lVar10 + 0x20) +
                        *(long *)(puVar2 + (ulong)*(uint *)(param_1 + 0x10) * 8) + lVar5) + 0x68);
    lVar10 = nn::util::BinaryFileHeader::GetFirstBlock();
    uVar15 = *(undefined8 *)
              (*(long *)(*(long *)(lVar10 + 0x20) +
                         *(long *)(puVar2 + (ulong)*(uint *)(param_1 + 0x10) * 8) + lVar5) + 0x68);
    uVar4 = FUN_008f1cbc(uVar6,0,3,"ShaderParam");
    puVar9[-0xc] = uVar4;
    uVar4 = FUN_008f1cbc(uVar6,0,4,"PerCharacterParamBlock");
    puVar9[-6] = uVar4;
    uVar4 = FUN_008f1cbc(uVar15,4,3,"ShaderParam");
    *puVar9 = uVar4;
    uVar4 = FUN_008f1cbc(uVar15,4,3,"ShaderParamBlackWhiteInterpolation");
    puVar9[6] = uVar4;
    uVar4 = FUN_008f1cbc(uVar15,4,2,"uTextureSrc");
    lVar5 = lVar5 + 0x40;
    puVar9[0xc] = uVar4;
    puVar9 = puVar9 + 1;
  } while (lVar5 != 0x180);
  local_70 = 0;
  uStack_68 = 0;
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  local_90 = 0;
  local_88 = (undefined8 *)0x0;
  FUN_008f04e8(&local_90);
  local_a0 = 0;
  uStack_98 = 0;
  local_b8 = 0;
  local_b0 = 0;
  pcStack_a8 = (char *)0x0;
  FUN_008f04cc(&local_b8);
  local_b8._0_6_ = (uint6)(uint)local_b8;
  local_b0 = 0x180500000000;
  pcStack_a8 = "aVertex";
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_008f04e0(&local_c8);
  local_c8 = CONCAT44(local_c8._4_4_,0x1c);
  local_90 = CONCAT44(local_90._4_4_,0x10001);
  local_88 = &local_b8;
  local_80 = &local_c8;
  lVar10 = FUN_008f216c(&local_90);
  uVar11 = (long)__dest + 0x743fU & 0xfffffffffffffff8;
  FUN_008f21e8(param_1 + 0x90,uVar11,lVar10);
  lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
  FUN_008f21fc(param_1 + 0x90,param_2,&local_90,
               *(undefined8 *)
                (*(long *)(*(long *)(lVar5 + 0x20) +
                          *(long *)(puVar2 + (ulong)*(uint *)(param_1 + 0x10) * 8)) + 0x68));
  uVar11 = uVar11 + lVar10 + 7 & 0xfffffffffffffff8;
  FUN_008f21e8(param_1 + 0xb0,uVar11,lVar10);
  lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
  FUN_008f21fc(param_1 + 0xb0,param_2,&local_90,
               *(undefined8 *)
                (*(long *)(*(long *)(lVar5 + 0x20) +
                           *(long *)(puVar2 + (ulong)*(uint *)(param_1 + 0x10) * 8) + 0x40) + 0x68))
  ;
  uVar11 = uVar11 + lVar10 + 7 & 0xfffffffffffffff8;
  FUN_008f21e8(param_1 + 0xd0,uVar11,lVar10);
  lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
  FUN_008f21fc(param_1 + 0xd0,param_2,&local_90,
               *(undefined8 *)
                (*(long *)(*(long *)(lVar5 + 0x20) +
                           *(long *)(puVar2 + (ulong)*(uint *)(param_1 + 0x10) * 8) + 0x80) + 0x68))
  ;
  uVar11 = uVar11 + lVar10 + 7 & 0xfffffffffffffff8;
  FUN_008f21e8(param_1 + 0xf0,uVar11,lVar10);
  lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
  FUN_008f21fc(param_1 + 0xf0,param_2,&local_90,
               *(undefined8 *)
                (*(long *)(*(long *)(lVar5 + 0x20) +
                           *(long *)(puVar2 + (ulong)*(uint *)(param_1 + 0x10) * 8) + 0xc0) + 0x68))
  ;
  uVar11 = uVar11 + lVar10 + 7 & 0xfffffffffffffff8;
  FUN_008f21e8(param_1 + 0x110,uVar11,lVar10);
  lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
  FUN_008f21fc(param_1 + 0x110,param_2,&local_90,
               *(undefined8 *)
                (*(long *)(*(long *)(lVar5 + 0x20) +
                           *(long *)(puVar2 + (ulong)*(uint *)(param_1 + 0x10) * 8) + 0x100) + 0x68)
              );
  uVar11 = uVar11 + lVar10 + 7 & 0xfffffffffffffff8;
  FUN_008f21e8(param_1 + 0x130,uVar11,lVar10);
  lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
  FUN_008f21fc(param_1 + 0x130,param_2,&local_90,
               *(undefined8 *)
                (*(long *)(*(long *)(lVar5 + 0x20) +
                           *(long *)(puVar2 + (ulong)*(uint *)(param_1 + 0x10) * 8) + 0x140) + 0x68)
              );
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  local_90 = 0;
  local_88 = (undefined8 *)0x0;
  FUN_008f0478(&local_90);
  uVar1 = (uint6)local_90;
  local_90 = CONCAT26(0x29,uVar1 & 0xffffffff0000);
  FUN_008f1bd8(param_1 + 0x390,param_2,&local_90);
  *(undefined8 *)(param_1 + 0x408) = 0xffffffffffffffff;
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  local_90 = 0;
  local_88 = (undefined8 *)0x0;
  FUN_00fab560(&local_90);
  lVar12 = FUN_00fab558(param_2,&local_90);
  iVar3 = FUN_00fab550(param_2,&local_90);
  local_b8 = 0;
  local_b0 = 0;
  lVar5 = 0;
  if (param_5 != 0) {
    lVar5 = param_6;
  }
  FUN_008f0470(&local_b8);
  local_b8 = CONCAT44(8,(uint)local_b8);
  lVar7 = FUN_008f06e0(param_2,&local_b8);
  local_b8 = 0;
  local_b0 = 0;
  uVar16 = lVar5 + lVar7 + 0x6fU & -lVar7;
  FUN_008f0470(&local_b8);
  local_b8 = CONCAT44(0x10,(uint)local_b8);
  lVar7 = FUN_008f06e0(param_2,&local_b8);
  local_b8 = 0;
  local_b0 = 0;
  uVar14 = uVar16 + lVar7 + 0xb & -lVar7;
  FUN_008f0470(&local_b8);
  local_b8 = CONCAT44(0x10,(uint)local_b8);
  lVar7 = FUN_008f06e0(param_2,&local_b8);
  uVar13 = uVar14 + lVar7 + 3 & -lVar7;
  if (param_5 == 0) {
    param_5 = param_1 + 0x150;
    local_88 = (undefined8 *)((uVar11 + lVar10 + lVar12) - 1 & -lVar12);
    local_90 = CONCAT44(~(uint)param_6 + iVar3 + (int)uVar13 + 4 & -iVar3,0x22);
    FUN_00ddef7c(param_5,param_2,&local_90);
  }
  local_b8 = 0;
  local_b0 = 0;
  FUN_008f0470(&local_b8);
  lVar10 = param_1 + 0x270;
  local_b8 = 0x400000070;
  FUN_008f0810(lVar10,param_2,&local_b8,param_5,lVar5,0x70);
  puVar8 = (undefined8 *)FUN_008f0928(lVar10);
  *(undefined8 *)((long)puVar8 + 0x34) = 0;
  *puVar8 = 0;
  puVar8[1] = 0xffffffff00000000;
  *(undefined8 *)((long)puVar8 + 0x2c) = 0x3f8000003f800000;
  puVar8[4] = 0;
  *(undefined4 *)(puVar8 + 5) = 0xffffffff;
  *(undefined8 *)((long)puVar8 + 0x3c) = 0x3f800000;
  *(undefined4 *)((long)puVar8 + 0x44) = 0xffffffff;
  puVar8[0xb] = 0x3f800000;
  *(undefined4 *)(puVar8 + 0xc) = 0xffffffff;
  *(undefined8 *)((long)puVar8 + 100) = 0x3f800000;
  *(undefined4 *)((long)puVar8 + 0x6c) = 0;
  puVar8[2] = 0x3f80000000000000;
  puVar8[3] = 0x3f80000000000000;
  puVar8[9] = 0;
  puVar8[10] = 0x3f80000000000000;
  FUN_008f093c(lVar10);
  local_b8 = 0;
  local_b0 = 0;
  FUN_008f0470(&local_b8);
  lVar5 = param_1 + 0x2b8;
  local_b8 = 0x80000000c;
  FUN_008f0810(lVar5,param_2,&local_b8,param_5,uVar16,0xc);
  puVar8 = (undefined8 *)FUN_008f0928(lVar5);
  *(undefined4 *)(puVar8 + 1) = 1;
  *puVar8 = 0x3000300020000;
  FUN_008f093c(lVar5);
  local_b8 = 0;
  local_b0 = 0;
  FUN_008f0470(&local_b8);
  lVar5 = param_1 + 0x300;
  local_b8 = 0x1000000004;
  FUN_008f0810(lVar5,param_2,&local_b8,param_5,uVar14,4);
  puVar9 = (undefined4 *)FUN_008f0928(lVar5);
  FUN_008f0960(lVar5,0,local_b8 & 0xffffffff);
  *puVar9 = 1;
  FUN_008f093c(lVar5);
  local_b8 = 0;
  local_b0 = 0;
  FUN_008f0470(&local_b8);
  lVar5 = param_1 + 0x348;
  local_b8 = 0x1000000004;
  FUN_008f0810(lVar5,param_2,&local_b8,param_5,uVar13,4);
  puVar9 = (undefined4 *)FUN_008f0928(lVar5);
  FUN_008f0960(lVar5,0,local_b8 & 0xffffffff);
  *puVar9 = 0;
  FUN_008f093c(lVar5);
  *(undefined4 *)(param_1 + 0x8c) = param_4;
  return 1;
}


