/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0192f4bc; name: FUN_0192f4bc
 */


void FUN_0192f4bc(long param_1,long param_2,undefined4 param_3)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  puVar1 = (uint *)FUN_011e2dd4(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x290) + 8) + 0x50),
                                param_3);
  if (puVar1 == (uint *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    if (4 < (int)uVar3) {
      uVar3 = 0;
    }
  }
  if ((uint)*(byte *)(param_1 + 0x95) == (uVar3 & 0xff)) {
    lVar2 = FUN_011e2dd4(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x290) + 8) + 0x50),param_3);
    if (lVar2 == 0) {
      uVar4 = 6;
    }
    else {
      uVar4 = (ulong)*(byte *)(lVar2 + 4);
    }
    *(undefined1 *)(*(long *)(param_1 + 0x40) + uVar4 + 0x8a) = 1;
  }
  return;
}


