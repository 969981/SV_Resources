/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002b0bc8; name: FUN_002b0bc8
 */


void FUN_002b0bc8(long param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar1 = PTR_LAB_047cba48;
  pbVar4 = *(byte **)(param_1 + 0x60);
  if (pbVar4 != (byte *)0x0) {
    if (*(byte **)(param_1 + 0x68) == pbVar4) {
      pbVar2 = pbVar4;
    }
    else {
      pbVar2 = *(byte **)(param_1 + 0x68);
      do {
        pbVar5 = pbVar2 + -0x20;
        if ((*pbVar5 & 1) != 0) {
          FUN_0049e790(puVar1,*(undefined8 *)(pbVar2 + -0x10));
        }
        pbVar2 = pbVar5;
      } while (pbVar4 != pbVar5);
      pbVar2 = *(byte **)(param_1 + 0x60);
    }
    *(byte **)(param_1 + 0x68) = pbVar4;
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  }
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x58));
  }
  FUN_002a5024(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar3 != 0) {
    FUN_002ccc4c(lVar3);
    FUN_0049e790(PTR_LAB_047cba48,lVar3);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x18));
  return;
}


