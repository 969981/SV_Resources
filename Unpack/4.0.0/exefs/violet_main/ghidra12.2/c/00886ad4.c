/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00886ad4; name: FUN_00886ad4
 */


uint FUN_00886ad4(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  
  uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + 0x14);
  if (uVar4 == 0) {
    return 0xffff;
  }
  while( true ) {
    puVar5 = (uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar4);
    uVar4 = *puVar5;
    if ((uVar4 <= param_2) && (param_2 <= puVar5[1])) break;
    uVar4 = puVar5[3];
    if (uVar4 == 0) {
      return 0xffff;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x80);
  uVar7 = (ulong)uVar2;
  if (uVar2 != 0) {
    if ((int)uVar2 < 1) {
      return 0xffff;
    }
    puVar6 = (uint *)(param_1 + 0xc4);
    while ((param_2 < puVar6[-0x10] || (*puVar6 < param_2))) {
      uVar7 = uVar7 - 1;
      puVar6 = puVar6 + 1;
      if (uVar7 == 0) {
        return 0xffff;
      }
    }
  }
  sVar3 = (short)puVar5[2];
  if (sVar3 == 2) {
    puVar6 = puVar5 + 5;
    puVar5 = puVar6 + (ulong)(ushort)puVar5[4] * 2 + -2;
    if (puVar6 <= puVar5) {
      do {
        while( true ) {
          lVar8 = (long)puVar5 - (long)puVar6 >> 3;
          if (lVar8 < 0) {
            lVar8 = lVar8 + 1;
          }
          puVar1 = puVar6 + (lVar8 >> 1) * 2;
          if (*puVar1 < param_2) break;
          if (*puVar1 <= param_2) {
            return (uint)(ushort)puVar1[1];
          }
          puVar5 = puVar1 + -2;
          if (puVar5 < puVar6) {
            return 0xffff;
          }
        }
        puVar6 = puVar1 + 2;
      } while (puVar6 <= puVar5);
    }
  }
  else {
    if (sVar3 == 1) {
      return (uint)*(ushort *)((long)puVar5 + (long)(int)(param_2 - uVar4) * 2 + 0x10);
    }
    if (sVar3 == 0) {
      return (uint)(ushort)puVar5[4] + (param_2 - uVar4);
    }
  }
  return 0xffff;
}


