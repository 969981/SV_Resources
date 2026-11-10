/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f1415c; name: FUN_00f1415c
 */


ulong FUN_00f1415c(long param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined *local_50;
  undefined2 local_48;
  undefined2 local_46;
  
  if (*(long *)(*(long *)(param_1 + 0x70) + 8) == 0) {
    uVar7 = FUN_00cf44f4();
    uVar8 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
    uVar9 = FUN_00f14b64(*(undefined8 *)(param_1 + 0x70));
    uVar2 = FUN_00f13da0(uVar7,uVar8,uVar9);
    uVar2 = uVar2 & 0xff;
  }
  else {
    uVar2 = FUN_00e9987c();
  }
  uVar1 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  local_46 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
  local_50 = PTR_DAT_047d8ee0 + 0x10;
  local_48 = uVar1;
  uVar3 = FUN_00dedda8(&local_50);
  uVar4 = FUN_00d1eb6c(*(undefined8 *)(param_1 + 0x70));
  if ((uVar4 >> 1 & 1) == 0) {
    uVar4 = FUN_00e982bc(*(undefined8 *)(param_1 + 0x70));
    uVar4 = uVar4 & 0xffff;
  }
  else {
    uVar4 = 0x1f;
  }
  uVar5 = FUN_00e8fe2c(*(undefined8 *)(param_1 + 0x70));
  uVar6 = FUN_00d4ea44(*(undefined8 *)(param_1 + 0x70));
  uVar2 = ((uVar4 + (uVar3 & 0xff) * 2 + (uVar5 >> 2 & 0x3fff)) * (uVar2 & 0xff)) / 100 + 5;
  if ((&DAT_03d62e98)[(ulong)(uVar6 & 0xffff) * 5] == -1) {
    iVar10 = 0x5a;
  }
  else {
    if ((&DAT_03d62e98)[(ulong)(uVar6 & 0xffff) * 5] != '\x01') {
      return (ulong)uVar2;
    }
    iVar10 = 0x6e;
  }
  return (ulong)(uVar2 * iVar10 & 0xfffe) / 100;
}


