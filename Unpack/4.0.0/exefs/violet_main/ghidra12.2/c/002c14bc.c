/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c14bc; name: FUN_002c14bc
 */


void FUN_002c14bc(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  puVar3 = PTR_LAB_047cba48;
  lVar1 = *param_1;
  lVar2 = param_1[1];
  while (lVar2 != lVar1) {
    pbVar5 = *(byte **)(lVar2 + -0x18);
    if (pbVar5 != (byte *)0x0) {
      if (*(byte **)(lVar2 + -0x10) == pbVar5) {
        pbVar4 = pbVar5;
      }
      else {
        pbVar4 = *(byte **)(lVar2 + -0x10);
        do {
          pbVar6 = pbVar4 + -0x20;
          if ((*pbVar6 & 1) != 0) {
            FUN_0049e790(puVar3,*(undefined8 *)(pbVar4 + -0x10));
          }
          pbVar4 = pbVar6;
        } while (pbVar5 != pbVar6);
        pbVar4 = *(byte **)(lVar2 + -0x18);
      }
      *(byte **)(lVar2 + -0x10) = pbVar5;
      FUN_0049e790(puVar3,pbVar4);
    }
    if ((*(byte *)(lVar2 + -0x30) & 1) != 0) {
      FUN_0049e790(puVar3,*(undefined8 *)(lVar2 + -0x20));
    }
    FUN_002c13ac(lVar2 + -0x78);
    lVar2 = lVar2 + -0x78;
  }
  param_1[1] = lVar1;
  return;
}


