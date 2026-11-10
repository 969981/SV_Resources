/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0154e790; name: FUN_0154e790
 */


undefined1 FUN_0154e790(long param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x36c);
  puVar2 = (uint *)FUN_011e2dd4(*(undefined8 *)(*(long *)(param_1 + 8) + 0x50));
  if (puVar2 == (uint *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2 & 0xff;
    if (4 < (int)*puVar2) {
      uVar3 = 0;
    }
  }
  if (iVar1 == 2) {
    if (4 < uVar3) {
      return 2;
    }
    puVar4 = &DAT_03d6a45a;
  }
  else if (iVar1 == 1) {
    if (4 < uVar3) {
      return 2;
    }
    puVar4 = &DAT_03d6a455;
  }
  else {
    if (iVar1 != 0) {
      return 2;
    }
    if (4 < uVar3) {
      return 2;
    }
    puVar4 = &DAT_03d6a450;
  }
  return puVar4[uVar3];
}


