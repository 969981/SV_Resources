/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a6a95c; name: FUN_00a6a95c
 */


void FUN_00a6a95c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined2 uVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  undefined *local_60;
  ushort local_58;
  undefined2 local_56;
  
  uVar5 = FUN_00cf44f4(*(undefined8 *)(param_2 + 0x70));
  uVar9 = FUN_00cf41a8(*(undefined8 *)(param_2 + 0x70));
  uVar3 = 0;
  if ((uVar5 & 0xfffe) != 0x298 && uVar5 != 0x2e8) {
    uVar3 = uVar9 & 0xffff;
  }
  uVar4 = (undefined2)uVar3;
  puVar1 = PTR_DAT_047d8ee0 + 0x10;
  local_60 = puVar1;
  local_58 = uVar5;
  local_56 = uVar4;
  sVar6 = FUN_01dd51e0(&local_60);
  local_60 = puVar1;
  local_58 = uVar5;
  local_56 = uVar4;
  sVar7 = FUN_01dd53ac(&local_60);
  local_60 = puVar1;
  local_58 = uVar5;
  local_56 = uVar4;
  sVar8 = FUN_01dd5578(&local_60);
  if (((sVar6 != 0) && ((uVar3 & 0xff) < 0x18)) && (uVar5 = sVar6 - 1, uVar5 < 0x352)) {
    lVar2 = param_1 + (ulong)uVar5 * 2 + (ulong)uVar5 + (ulong)(uVar3 >> 3 & 0x1f);
    *(byte *)(lVar2 + 0xcd0) = *(byte *)(lVar2 + 0xcd0) | (byte)(1 << (ulong)(uVar3 & 7));
  }
  if (((sVar7 != 0) && ((uVar3 & 0xff) < 0x18)) && (uVar5 = sVar7 + 399, uVar5 < 0x352)) {
    lVar2 = param_1 + (ulong)uVar5 * 2 + (ulong)uVar5 + (ulong)(uVar3 >> 3 & 0x1f);
    *(byte *)(lVar2 + 0xcd0) = *(byte *)(lVar2 + 0xcd0) | (byte)(1 << (ulong)(uVar3 & 7));
  }
  if (((sVar8 != 0) && ((uVar3 & 0xff) < 0x18)) && (uVar5 = sVar8 + 599, uVar5 < 0x352)) {
    param_1 = param_1 + (ulong)uVar5 * 2 + (ulong)uVar5 + (ulong)(uVar3 >> 3 & 0x1f);
    *(byte *)(param_1 + 0xcd0) = *(byte *)(param_1 + 0xcd0) | (byte)(1 << (ulong)(uVar3 & 7));
  }
  return;
}


