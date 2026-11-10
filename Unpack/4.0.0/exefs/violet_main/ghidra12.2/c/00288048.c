/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00288048; name: FUN_00288048
 */


void FUN_00288048(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_LAB_047cba48;
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    if (lVar4 == lVar3) {
      lVar4 = lVar3;
    }
    else {
      do {
        if (*(long *)(lVar4 + -0x18) != 0) {
          FUN_00289080((long *)(lVar4 + -0x18));
          FUN_0049e790(puVar1,*(undefined8 *)(lVar4 + -0x18));
        }
        lVar2 = lVar4 + -0x50;
        FUN_0025cef0(lVar4 + -0x30,*(undefined8 *)(lVar4 + -0x28));
        if ((*(byte *)(lVar4 + -0x48) & 1) != 0) {
          FUN_0049e790(puVar1,*(undefined8 *)(lVar4 + -0x38));
        }
        lVar4 = lVar2;
      } while (lVar3 != lVar2);
      lVar4 = *(long *)(param_1 + 0x38);
    }
    *(long *)(param_1 + 0x40) = lVar3;
    FUN_0049e790(PTR_LAB_047cba48,lVar4);
  }
  FUN_0025cef0(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28));
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x18));
  return;
}


