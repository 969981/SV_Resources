/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00894590; name: FUN_00894590
 */


void FUN_00894590(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar3 = nn::util::BinaryFileHeader::GetFirstBlock();
  puVar2 = PTR_DAT_047d1f00;
  uVar1 = *(uint *)(lVar3 + 0x1c);
  if (0 < (int)uVar1) {
    uVar7 = 0;
    if ((param_3 & 1) == 0) {
      do {
        uVar4 = FUN_008f21f4(*(long *)(param_1 + 0x10) + uVar7 * 0x20);
        FUN_008f2540(*(long *)(param_1 + 0x10) + uVar7 * 0x20,param_2);
        FUN_00896e98(uVar4);
        lVar3 = nn::util::BinaryFileHeader::GetFirstBlock();
        lVar3 = *(long *)(lVar3 + 0x20) + uVar7 * 0x40;
        uVar5 = FUN_008b4dc0(*(undefined8 *)
                              (lVar3 + *(long *)(puVar2 + ((ulong)*(uint *)(param_1 + 8) & 7) * 8)))
        ;
        if ((uVar5 & 1) != 0) {
          FUN_0271ab74(*(undefined8 *)
                        (*(long *)(lVar3 + *(long *)(puVar2 + ((ulong)*(uint *)(param_1 + 8) & 7) *
                                                              8)) + 0x68),param_2);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar1);
    }
    else {
      do {
        uVar4 = FUN_008f21f4(*(long *)(param_1 + 0x10) + uVar7);
        FUN_008f2540(*(long *)(param_1 + 0x10) + uVar7,param_2);
        FUN_00896e98(uVar4);
        uVar7 = uVar7 + 0x20;
      } while ((ulong)uVar1 * 0x20 != uVar7);
    }
  }
  if ((param_3 & 1) == 0) {
    uVar4 = nn::util::BinaryFileHeader::GetFirstBlock();
    uVar7 = FUN_008b4d90();
    if ((uVar7 & 1) != 0) {
      FUN_0271ab30(uVar4,param_2);
    }
    uVar7 = nn::util::BinaryFileHeader::IsRelocated();
    if ((uVar7 & 1) != 0) {
      nn::util::BinaryFileHeader::GetRelocationTable();
      nn::util::RelocationTable::Unrelocate();
    }
  }
  lVar6 = *(long *)(param_1 + 0x10);
  lVar3 = nn::util::BinaryFileHeader::GetFirstBlock();
  if (lVar6 != 0) {
    uVar7 = (ulong)*(uint *)(lVar3 + 0x1c);
    if (0 < (int)*(uint *)(lVar3 + 0x1c)) {
      lVar3 = lVar6;
      do {
        FUN_008f21e4(lVar3);
        uVar7 = uVar7 - 1;
        lVar3 = lVar3 + 0x20;
      } while (uVar7 != 0);
    }
    FUN_00896e98(lVar6);
  }
  FUN_00896e98(*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00896e98();
  }
  FUN_00896e98(*(undefined8 *)(param_1 + 0x28));
  FUN_00896e98(*(undefined8 *)(param_1 + 0x30));
  return;
}


