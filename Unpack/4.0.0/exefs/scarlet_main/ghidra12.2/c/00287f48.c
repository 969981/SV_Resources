/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00287f48; name: FUN_00287f48
 */


void FUN_00287f48(byte *param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_LAB_047cba48;
  lVar4 = *(long *)(param_1 + 0x50);
  if (lVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0x58);
    if (lVar5 == lVar4) {
      lVar5 = lVar4;
    }
    else {
      do {
        if (*(long *)(lVar5 + -0x18) != 0) {
          FUN_00289080((long *)(lVar5 + -0x18));
          FUN_0049e790(puVar2,*(undefined8 *)(lVar5 + -0x18));
        }
        lVar3 = lVar5 + -0x50;
        FUN_0025cef0(lVar5 + -0x30,*(undefined8 *)(lVar5 + -0x28));
        if ((*(byte *)(lVar5 + -0x48) & 1) != 0) {
          FUN_0049e790(puVar2,*(undefined8 *)(lVar5 + -0x38));
        }
        lVar5 = lVar3;
      } while (lVar4 != lVar3);
      lVar5 = *(long *)(param_1 + 0x50);
    }
    *(long *)(param_1 + 0x58) = lVar4;
    FUN_0049e790(PTR_LAB_047cba48,lVar5);
  }
  FUN_0025cef0(param_1 + 0x38,*(undefined8 *)(param_1 + 0x40));
  if ((param_1[0x20] & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x30));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x10));
  return;
}


