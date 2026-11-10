/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002a5024; name: FUN_002a5024
 */


void FUN_002a5024(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_LAB_047cba48;
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  lVar5 = param_1[1];
  if (lVar5 == lVar4) {
    lVar5 = lVar4;
  }
  else {
    do {
      lVar3 = *(long *)(lVar5 + -0x10);
      *(undefined8 *)(lVar5 + -0x10) = 0;
      if (lVar3 != 0) {
        FUN_002ccc4c(lVar3);
        FUN_0049e790(puVar2,lVar3);
      }
      if ((*(byte *)(lVar5 + -0x28) & 1) == 0) {
        bVar1 = *(byte *)(lVar5 + -0x58);
      }
      else {
        FUN_0049e790(puVar2,*(undefined8 *)(lVar5 + -0x18));
        bVar1 = *(byte *)(lVar5 + -0x58);
      }
      if ((bVar1 & 1) != 0) {
        FUN_0049e790(puVar2,*(undefined8 *)(lVar5 + -0x48));
      }
      lVar5 = lVar5 + -0x58;
    } while (lVar4 != lVar5);
    lVar5 = *param_1;
  }
  puVar2 = PTR_LAB_047cba48;
  param_1[1] = lVar4;
  FUN_0049e790(puVar2,lVar5);
  return;
}


