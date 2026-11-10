/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002a4e44; name: FUN_002a4e44
 */


void FUN_002a4e44(long *param_1)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  
  puVar3 = PTR_LAB_047cba48;
  lVar1 = param_1[1];
  lVar5 = param_1[2];
  while (lVar5 != lVar1) {
    pbVar6 = (byte *)(lVar5 + -0x58);
    param_1[2] = (long)pbVar6;
    lVar4 = *(long *)(lVar5 + -0x10);
    *(undefined8 *)(lVar5 + -0x10) = 0;
    if (lVar4 != 0) {
      FUN_002ccc4c(lVar4);
      FUN_0049e790(puVar3,lVar4);
    }
    if ((*(byte *)(lVar5 + -0x28) & 1) == 0) {
      bVar2 = *pbVar6;
    }
    else {
      FUN_0049e790(puVar3,*(undefined8 *)(lVar5 + -0x18));
      bVar2 = *pbVar6;
    }
    if ((bVar2 & 1) != 0) {
      FUN_0049e790(puVar3,*(undefined8 *)(lVar5 + -0x48));
    }
    lVar5 = param_1[2];
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48);
  return;
}


