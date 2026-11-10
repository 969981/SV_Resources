/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0028f660; name: FUN_0028f660
 */


void FUN_0028f660(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_LAB_047cba48;
  lVar1 = param_1[1];
  lVar5 = param_1[2];
  while (lVar5 != lVar1) {
    param_1[2] = lVar5 + -0x50;
    lVar6 = *(long *)(lVar5 + -0x18);
    if (lVar6 != 0) {
      lVar3 = *(long *)(lVar5 + -0x10);
      if (*(long *)(lVar5 + -0x10) == lVar6) {
        lVar3 = lVar6;
      }
      else {
        do {
          if (*(long *)(lVar3 + -0x18) != 0) {
            FUN_0028f240((long *)(lVar3 + -0x18));
            FUN_0049e790(puVar2,*(undefined8 *)(lVar3 + -0x18));
          }
          lVar4 = lVar3 + -0x50;
          FUN_0025cef0(lVar3 + -0x30,*(undefined8 *)(lVar3 + -0x28));
          if ((*(byte *)(lVar3 + -0x48) & 1) != 0) {
            FUN_0049e790(puVar2,*(undefined8 *)(lVar3 + -0x38));
          }
          lVar3 = lVar4;
        } while (lVar6 != lVar4);
        lVar3 = *(long *)(lVar5 + -0x18);
      }
      *(long *)(lVar5 + -0x10) = lVar6;
      FUN_0049e790(puVar2,lVar3);
    }
    FUN_0025cef0(lVar5 + -0x30,*(undefined8 *)(lVar5 + -0x28));
    if ((*(byte *)(lVar5 + -0x48) & 1) != 0) {
      FUN_0049e790(puVar2,*(undefined8 *)(lVar5 + -0x38));
    }
    lVar5 = param_1[2];
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48);
  return;
}


