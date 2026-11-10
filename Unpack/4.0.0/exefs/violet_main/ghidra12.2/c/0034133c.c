/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034133c; name: FUN_0034133c
 */


void FUN_0034133c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_LAB_047cba48;
  lVar3 = *(long *)(param_1 + 8);
  while (lVar1 = lVar3, lVar1 != param_2) {
    if (*(long *)(lVar1 + -0x18) != 0) {
      FUN_0034133c((long *)(lVar1 + -0x18));
      FUN_0049e790(puVar2,*(undefined8 *)(lVar1 + -0x18));
    }
    FUN_0025cef0(lVar1 + -0x30,*(undefined8 *)(lVar1 + -0x28));
    lVar3 = lVar1 + -0x50;
    if ((*(byte *)(lVar1 + -0x48) & 1) != 0) {
      FUN_0049e790(puVar2,*(undefined8 *)(lVar1 + -0x38));
    }
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


