/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015af348; name: FUN_015af348
 */


void FUN_015af348(long param_1)

{
  byte bVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  
  bVar1 = *(byte *)(param_1 + 0x210);
  uVar2 = (ulong)bVar1;
  bVar3 = *(byte *)(param_1 + 0x124);
  if (((uVar2 != 0) && (bVar3 = *(char *)(param_1 + 0x125) + bVar3, bVar1 != 1)) &&
     (bVar3 = *(char *)(param_1 + 0x126) + bVar3, bVar1 != 2)) {
    lVar6 = uVar2 - 2;
    pcVar7 = (char *)(param_1 + 0x127);
    do {
      bVar3 = *pcVar7 + bVar3;
      lVar6 = lVar6 + -1;
      pcVar7 = pcVar7 + 1;
    } while (lVar6 != 0);
  }
  uVar4 = (ulong)*(byte *)(param_1 + 0x11c);
  if ((uVar4 < 5) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x50) + 0x30),
     bVar1 < *(byte *)(lVar6 + uVar4 * 0x38 + 0x58))) {
    uVar5 = *(undefined8 *)(lVar6 + uVar4 * 0x38 + uVar2 * 8 + 0x28);
  }
  else {
    uVar5 = 0;
  }
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  lVar6 = param_1 + (uVar2 + bVar3) * 0x10;
  *(long *)(param_1 + 0x68) = lVar6 + 0x220;
  *(ulong *)(param_1 + 0xa0) = param_1 + uVar2 + 0x124;
  *(undefined1 *)(param_1 + uVar2 + 0x124) = 0;
  *(undefined8 *)(lVar6 + 0x220) = 0;
  return;
}


