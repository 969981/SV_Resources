/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ad4f2c; name: FUN_01ad4f2c
 */


uint FUN_01ad4f2c(undefined8 param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((param_2 & 0xff) == 5) {
    *(long *)(param_3 + 0x20) = *(long *)(param_3 + 0x20) + 1;
    uVar7 = *(ulong *)(param_3 + 8);
    uVar6 = uVar7 ^ *(ulong *)(param_3 + 0x10);
    uVar4 = uVar6 >> 0x1b | uVar6 << 0x25;
    uVar6 = uVar6 ^ (uVar7 >> 0x28 | uVar7 << 0x18) ^ uVar6 << 0x10;
    uVar1 = (int)uVar7 + (int)*(ulong *)(param_3 + 0x10);
    while (uVar1 = uVar1 & 0x7f, 99 < uVar1) {
      uVar7 = uVar6 ^ uVar4;
      iVar3 = (int)uVar4;
      iVar5 = (int)uVar6;
      uVar4 = uVar7 >> 0x1b | uVar7 << 0x25;
      uVar6 = uVar7 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar7 << 0x10;
      uVar1 = iVar5 + iVar3;
    }
    *(ulong *)(param_3 + 8) = uVar6;
    *(ulong *)(param_3 + 0x10) = uVar4;
    if (uVar1 < 0x23) {
      param_2 = 2;
    }
    else {
      if (0x45 < uVar1) {
        uVar2 = 4;
        if (0x54 < uVar1) {
          uVar2 = 5;
        }
        return uVar2;
      }
      param_2 = 3;
    }
  }
  return param_2;
}


