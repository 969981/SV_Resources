/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f9658; name: FUN_001f9658
 */


void FUN_001f9658(long param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar5 = *(long *)(param_1 + 0x70);
    do {
      lVar4 = lVar5;
      FUN_001f9484(lVar4 + 0x18,param_1 + 0x10);
      uVar2 = *(uint *)(param_1 + 0xd0);
      uVar1 = (ulong)*(uint *)(param_1 + 0xd4) + *(long *)(param_1 + 0xb0) * 0x100;
      uVar3 = 0;
      if ((ulong)uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      *(ulong *)(param_1 + 0x58) = uVar3 + *(long *)(lVar4 + 0x50);
      *(uint *)(param_1 + 0xd4) = (int)uVar1 - (int)uVar3 * uVar2;
      lVar5 = *(long *)(lVar4 + 0x60);
      *(long *)(lVar4 + 0x60) = lVar5 + 1;
      *(long *)(param_1 + 0x68) = lVar5;
      FUN_001f927c(lVar4 + 0x18,param_1 + 0x10);
      *(undefined8 *)(lVar4 + 0xb0) = *(undefined8 *)(param_1 + 0xb0);
      lVar5 = *(long *)(lVar4 + 0x70);
      param_1 = lVar4;
    } while (*(long *)(lVar4 + 0x70) != 0);
  }
  return;
}


