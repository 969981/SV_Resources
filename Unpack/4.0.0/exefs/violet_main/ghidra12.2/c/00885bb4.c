/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00885bb4; name: FUN_00885bb4
 */


void FUN_00885bb4(long param_1,undefined8 param_2,long param_3,uint param_4,undefined8 param_5,
                 long *param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  long lStack_68;
  
  uVar12 = (ulong)*(uint *)(param_3 + 0x80);
  local_70 = *param_6;
  lStack_68 = param_6[1];
  if (*(uint *)(param_3 + 0x80) != 0) {
    uVar7 = 1;
    if ((param_4 & 1) != 0) {
      uVar7 = 2;
    }
    lVar3 = 0x40;
    if ((param_4 & 4) != 0) {
      lVar3 = 0x60;
    }
    uVar4 = param_4 >> 1 & 1;
    puVar8 = (uint *)(param_3 + 8);
    uVar9 = 7;
    do {
      uVar6 = *puVar8;
      if (uVar6 != 0) {
        uVar1 = 3;
        if ((puVar8[1] & 2) != 0) {
          uVar1 = param_4 & 1 | 4;
        }
        uVar2 = uVar7 & (int)(puVar8[1] << 0x1e) >> 0x1f;
        if ((param_4 & 4) != 0) {
          uVar2 = uVar1;
        }
        uVar11 = (ulong)uVar2;
        if (uVar2 != (uint)uVar9) {
          lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
          FUN_00d8d140(param_2,*(undefined8 *)
                                (*(long *)(*(long *)(lVar5 + 0x20) + uVar11 * 0x40 +
                                          *(long *)(PTR_DAT_047d1f00 +
                                                   (ulong)*(uint *)(param_1 + 0x10) * 8)) + 0x68),
                       0x3f);
          FUN_008f0b48(param_2,param_1 + uVar11 * 0x20 + 0x90);
          local_80 = 0;
          uStack_78 = 0;
          FUN_008f0980(param_1 + 0x270,&local_80);
          lVar5 = param_1 + uVar11 * 4;
          FUN_008f0b9c(param_2,*(undefined4 *)(lVar5 + 0x14),&local_80,0x1c,0x70);
          FUN_008f1150(param_2,*(undefined4 *)(lVar5 + 0x14),0,param_5,0x80);
          FUN_008f1150(param_2,*(undefined4 *)(lVar5 + 0x44),4,param_5,0x80);
          uVar6 = *puVar8;
          uVar9 = uVar11;
        }
        lVar10 = lVar3 * (ulong)uVar6 << (ulong)uVar4;
        lVar5 = param_1 + (ulong)uVar2 * 4;
        FUN_008f11bc(param_2,*(undefined4 *)(lVar5 + 0x2c),0,&local_70,lVar10);
        local_70 = local_70 + lVar10;
        FUN_00c5afc0(param_2,*(undefined4 *)(lVar5 + 0x74),4,*(long *)(puVar8 + -2) + 0x20,
                     param_1 + 0x408);
        local_80 = 0;
        uStack_78 = 0;
        lVar10 = param_1 + 0x348;
        if ((puVar8[1] & 1) != 0) {
          lVar10 = param_1 + 0x300;
        }
        FUN_008f0980(lVar10,&local_80);
        FUN_008f1150(param_2,*(undefined4 *)(lVar5 + 0x5c),4,&local_80,4);
        local_80 = 0;
        uStack_78 = 0;
        FUN_008f0980(param_1 + 0x2b8,&local_80);
        FUN_008f0ab0(param_2,3,1,&local_80,6,0,*puVar8 << (ulong)uVar4,0);
      }
      puVar8 = puVar8 + 4;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}


