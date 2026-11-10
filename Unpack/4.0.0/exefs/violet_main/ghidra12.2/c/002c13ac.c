/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c13ac; name: FUN_002c13ac
 */


void FUN_002c13ac(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_LAB_047cba48;
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0x30);
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
      lVar5 = *(long *)(param_1 + 0x28);
    }
    *(long *)(param_1 + 0x30) = lVar4;
    FUN_0049e790(PTR_LAB_047cba48,lVar5);
  }
  lVar4 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar4 != 0) {
    FUN_002ccc4c(lVar4);
    FUN_0049e790(PTR_LAB_047cba48,lVar4);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x18));
  return;
}


