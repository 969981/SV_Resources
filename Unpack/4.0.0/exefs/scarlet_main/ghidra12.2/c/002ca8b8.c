/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002ca8b8; name: FUN_002ca8b8
 */


void FUN_002ca8b8(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  puVar1 = PTR_LAB_047cba48;
  uVar4 = *(ulong *)(param_3 + 0x18);
  uVar2 = uVar4 & 1;
  if ((uVar4 & 1) == 0) {
    pbVar3 = param_3 + 0x20;
  }
  else {
    pbVar3 = *(byte **)(param_3 + 0x20);
  }
  if ((uVar4 >> 1 != 0) && (uVar4 = uVar4 >> 1, pbVar3 != (byte *)0x0)) {
    pbVar3 = pbVar3 + uVar4 * 0x68;
    do {
      uVar4 = uVar4 - 1;
      FUN_00288048(pbVar3 + -0x50);
      if ((pbVar3[-0x68] & 1) != 0) {
        FUN_0049e790(puVar1,*(undefined8 *)(pbVar3 + -0x58));
      }
      pbVar3 = pbVar3 + -0x68;
    } while (uVar4 != 0);
    uVar2 = *(ulong *)(param_3 + 0x18) & 1;
  }
  if (uVar2 != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_3 + 0x20));
  }
  if ((*param_3 & 1) == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_3 + 0x10));
  return;
}


