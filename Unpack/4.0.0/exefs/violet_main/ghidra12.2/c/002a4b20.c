/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002a4b20; name: FUN_002a4b20
 */


void FUN_002a4b20(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_LAB_047cba48;
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  lVar4 = param_1[1];
  if (lVar4 == lVar3) {
    lVar4 = lVar3;
  }
  else {
    do {
      if ((*(byte *)(lVar4 + -0x18) & 1) != 0) {
        FUN_0049e790(puVar1,*(undefined8 *)(lVar4 + -8));
      }
      FUN_002a5024(lVar4 + -0x38);
      lVar2 = *(long *)(lVar4 + -0x40);
      *(undefined8 *)(lVar4 + -0x40) = 0;
      if (lVar2 != 0) {
        FUN_002ccc4c(lVar2);
        FUN_0049e790(puVar1,lVar2);
      }
      lVar2 = lVar4 + -0x60;
      if ((*(byte *)(lVar4 + -0x58) & 1) != 0) {
        FUN_0049e790(puVar1,*(undefined8 *)(lVar4 + -0x48));
      }
      lVar4 = lVar2;
    } while (lVar3 != lVar2);
    lVar4 = *param_1;
  }
  puVar1 = PTR_LAB_047cba48;
  param_1[1] = lVar3;
  FUN_0049e790(puVar1,lVar4);
  return;
}


