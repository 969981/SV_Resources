/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002c5ba4; name: FUN_002c5ba4
 */


void FUN_002c5ba4(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_LAB_047cba48;
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  lVar3 = param_1[1];
  if (lVar3 == lVar2) {
    lVar3 = lVar2;
  }
  else {
    do {
      lVar4 = lVar3 + -0x50;
      FUN_002c5ba4(lVar3 + -0x18);
      FUN_0025cef0(lVar3 + -0x30,*(undefined8 *)(lVar3 + -0x28));
      if ((*(byte *)(lVar3 + -0x48) & 1) != 0) {
        FUN_0049e790(puVar1,*(undefined8 *)(lVar3 + -0x38));
      }
      lVar3 = lVar4;
    } while (lVar2 != lVar4);
    lVar3 = *param_1;
  }
  puVar1 = PTR_LAB_047cba48;
  param_1[1] = lVar2;
  FUN_0049e790(puVar1,lVar3);
  return;
}


