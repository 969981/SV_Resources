/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f96f0; name: FUN_001f96f0
 */


void FUN_001f96f0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0xd0);
  uVar7 = (ulong)uVar2;
  if (uVar2 != param_2) {
    lVar6 = *(long *)(param_1 + 0x70);
    *(uint *)(param_1 + 0xd0) = param_2;
    if (lVar6 != 0) {
      *(uint *)(lVar6 + 0xd8) = (param_2 - uVar2) + *(int *)(lVar6 + 0xd8);
      if (*(char *)(param_1 + 0xe6) != '\0') {
        FUN_001f9484(lVar6 + 0x18,param_1 + 0x10);
        lVar5 = *(long *)(param_1 + 0xb0);
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = (ulong)(lVar5 << 8) / uVar7;
        }
        uVar1 = *(uint *)(param_1 + 0xd0);
        uVar3 = (ulong)(*(int *)(param_1 + 0xd4) + uVar2) + uVar3 * uVar7 + lVar5 * -0x100;
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar3 / uVar7;
        }
        uVar3 = (uVar3 - uVar4 * uVar7) + lVar5 * 0x100;
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar3 / uVar7;
        }
        uVar7 = 0;
        if ((ulong)uVar1 != 0) {
          uVar7 = uVar3 / uVar1;
        }
        lVar5 = uVar7 + (*(long *)(param_1 + 0x58) - uVar4);
        *(long *)(param_1 + 0x58) = lVar5;
        *(uint *)(param_1 + 0xd4) = (int)uVar3 - (int)uVar7 * uVar1;
        if ((ulong)(*(long *)(lVar6 + 0x50) - lVar5) >> 0x20 == 0) {
          *(long *)(param_1 + 0x58) = *(long *)(lVar6 + 0x50);
        }
        FUN_001f927c(lVar6 + 0x18,param_1 + 0x10);
        return;
      }
    }
  }
  return;
}


