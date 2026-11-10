/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c7a44; name: FUN_001c7a44
 */


undefined8 FUN_001c7a44(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  
  lVar3 = *param_1;
  puVar4 = *(undefined8 **)(lVar3 + 0x1288);
  auVar5 = FUN_001e0dfc();
  uVar1 = FUN_001e0e28(auVar5._0_8_,auVar5._8_8_,*puVar4,puVar4[1]);
  if ((int)uVar1 < 3) {
    uVar2 = 0;
  }
  else if ((int)uVar1 < 0x33) {
    uVar2 = (ulong)(uVar1 & 0xff) / 3;
  }
  else {
    uVar2 = 0x32;
    if (0xfa < (int)uVar1) {
      uVar2 = 200;
    }
  }
  FUN_001cea34(lVar3,uVar2,1);
  return 0;
}


