/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f9a90; name: FUN_001f9a90
 */


undefined8 FUN_001f9a90(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 != 0) {
    do {
      lVar6 = param_1;
      if (*(char *)(param_2 + 0xe6) != '\0') {
        return 0;
      }
      uVar2 = *(uint *)(param_2 + 0xd0);
      uVar1 = (ulong)*(uint *)(param_2 + 0xd4) + *(long *)(param_2 + 0xb0) * 0x100;
      uVar3 = 0;
      if ((ulong)uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      *(ulong *)(param_2 + 0x58) = uVar3 + *(long *)(lVar6 + 0x50);
      *(uint *)(param_2 + 0xd4) = (int)uVar1 - (int)uVar3 * uVar2;
      lVar5 = *(long *)(lVar6 + 0x60);
      *(long *)(lVar6 + 0x60) = lVar5 + 1;
      *(long *)(param_2 + 0x68) = lVar5;
      uVar4 = FUN_001f927c(lVar6 + 0x18,param_2 + 0x10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      *(undefined1 *)(param_2 + 0xe6) = 1;
      param_1 = *(long *)(lVar6 + 0x70);
      param_2 = lVar6;
    } while (*(long *)(lVar6 + 0x70) != 0);
  }
  return 0;
}


