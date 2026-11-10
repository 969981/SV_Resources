/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004aa6cc; name: FUN_004aa6cc
 */


void FUN_004aa6cc(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 0xb0) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0xc0));
  }
  if ((*(byte *)(param_1 + 0x98) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0xa8));
  }
  FUN_004c47e4(param_1 + 0x78,*(undefined8 *)(param_1 + 0x80));
  FUN_004c47e4(param_1 + 0x60,*(undefined8 *)(param_1 + 0x68));
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x48));
  }
  puVar2 = PTR_LAB_047cba48;
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == lVar3) {
    lVar4 = lVar3;
  }
  else {
    do {
      if (*(long *)(lVar4 + -0x28) != 0) {
        *(long *)(lVar4 + -0x20) = *(long *)(lVar4 + -0x28);
        FUN_0049e790(puVar2);
      }
      if ((*(byte *)(lVar4 + -0x40) & 1) == 0) {
        bVar1 = *(byte *)(lVar4 + -0x58);
      }
      else {
        FUN_0049e790(puVar2,*(undefined8 *)(lVar4 + -0x30));
        bVar1 = *(byte *)(lVar4 + -0x58);
      }
      if ((bVar1 & 1) != 0) {
        FUN_0049e790(puVar2,*(undefined8 *)(lVar4 + -0x48));
      }
      lVar4 = lVar4 + -0x58;
    } while (lVar3 != lVar4);
    lVar4 = *(long *)(param_1 + 0x18);
  }
  puVar2 = PTR_LAB_047cba48;
  *(long *)(param_1 + 0x20) = lVar3;
  FUN_0049e790(puVar2,lVar4);
  return;
}


