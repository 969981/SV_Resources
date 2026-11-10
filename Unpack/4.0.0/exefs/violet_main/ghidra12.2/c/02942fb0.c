/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02942fb0; name: FUN_02942fb0
 */


void FUN_02942fb0(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar4 = FUN_014813e4(*(undefined8 *)(param_1 + 8));
  uVar3 = FUN_01481420(uVar4,param_3);
  FUN_02943028(*(undefined8 *)(param_1 + 0x30));
  lVar5 = FUN_02943030();
  bVar2 = *(byte *)(lVar5 + 0x58);
  uVar6 = (ulong)bVar2;
  if (uVar6 < 0xb) {
    lVar1 = lVar5 + 0x58 + uVar6 * 4;
    *(undefined4 *)(lVar1 + 4) = param_2;
    *(undefined4 *)(lVar1 + 0x3c) = param_3;
    *(undefined1 *)(lVar5 + 0x58 + uVar6 + 0x30) = uVar3;
    *(byte *)(lVar5 + 0x58) = bVar2 + 1;
  }
  return;
}


