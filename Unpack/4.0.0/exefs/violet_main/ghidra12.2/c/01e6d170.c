/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e6d170; name: FUN_01e6d170
 */


void FUN_01e6d170(long *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 != 0) {
    uVar4 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x60))(param_1,uVar4);
      uVar2 = FUN_00d75438(*(undefined8 *)(lVar3 + 0x70));
      FUN_00f14810(*(undefined8 *)(lVar3 + 0x70),uVar2);
      FUN_00deb388(*(undefined8 *)(lVar3 + 0x70),0);
      FUN_00deb1b4(lVar3);
      uVar4 = uVar4 + 1;
    } while (bVar1 != uVar4);
  }
  return;
}


