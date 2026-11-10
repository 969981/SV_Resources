/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01aacb30; name: FUN_01aacb30
 */


bool FUN_01aacb30(long param_1)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = FUN_01aacb90();
  if (uVar3 == 0) {
    bVar2 = true;
  }
  else {
    uVar5 = 0;
    uVar4 = (ulong)uVar3;
    do {
      sVar1 = *(short *)(param_1 + uVar5 * 2);
      if ((sVar1 != 0x3000) && (sVar1 != 0x20)) goto LAB_01aacb74;
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
    uVar5 = uVar4;
LAB_01aacb74:
    bVar2 = uVar5 == uVar4;
  }
  return bVar2;
}


