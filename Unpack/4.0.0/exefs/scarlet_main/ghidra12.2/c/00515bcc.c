/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00515bcc; name: FUN_00515bcc
 */


void FUN_00515bcc(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_LAB_047cba48;
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar2 = *param_1;
  if (lVar2 == param_1[1]) {
LAB_00515c80:
    if (lVar2 != 0) {
      param_1[1] = lVar2;
      FUN_0049e790(PTR_LAB_047cba48);
    }
    FUN_0049e790(PTR_LAB_047cba48,param_1);
    return;
  }
  lVar5 = (param_1[1] - lVar2) * 0x10000000 >> 0x20;
  lVar6 = lVar5 * 0x10;
  lVar2 = lVar2 + lVar6;
  iVar3 = *(int *)(lVar2 + -0xc);
  if (iVar3 == 4) goto LAB_00515c44;
  do {
    if ((iVar3 == 3) && (pbVar4 = *(byte **)(lVar2 + -8), pbVar4 != (byte *)0x0)) {
      if ((*pbVar4 & 1) != 0) {
        FUN_0049e790(puVar1,*(undefined8 *)(pbVar4 + 0x10));
      }
      FUN_0049e790(puVar1,pbVar4);
    }
    while( true ) {
      if (lVar5 < 2) {
        lVar2 = *param_1;
        param_1[1] = lVar2;
        goto LAB_00515c80;
      }
      lVar5 = lVar5 + -1;
      lVar6 = lVar6 + -0x10;
      lVar2 = *param_1 + lVar6;
      iVar3 = *(int *)(lVar2 + -0xc);
      if (iVar3 != 4) break;
LAB_00515c44:
      FUN_00515bcc(*(undefined8 *)(lVar2 + -8));
    }
  } while( true );
}


