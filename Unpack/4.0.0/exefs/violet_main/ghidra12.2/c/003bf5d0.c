/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003bf5d0; name: FUN_003bf5d0
 */


void FUN_003bf5d0(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    lVar5 = *param_1;
    if (uVar1 < 4) {
      uVar2 = 0;
      lVar3 = lVar5;
    }
    else {
      uVar2 = uVar1 & 0xfffffffffffffffc;
      lVar3 = lVar5 + uVar2 * 0x38;
      puVar4 = (undefined4 *)(lVar5 + 0x7c);
      uVar7 = uVar2;
      do {
        puVar4[-0x1c] = 0;
        uVar7 = uVar7 - 4;
        puVar4[-0xe] = 0;
        *puVar4 = 0;
        puVar4[0xe] = 0;
        puVar4 = puVar4 + 0x38;
      } while (uVar7 != 0);
      if (uVar1 == uVar2) {
        return;
      }
    }
    uVar6 = ~uVar2;
    for (uVar7 = uVar1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)(lVar3 + 0xc) = 0;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x38;
    }
    if (2 < uVar1 + uVar6) {
      puVar4 = (undefined4 *)(lVar3 + 0x7c);
      lVar5 = uVar1 - uVar2;
      do {
        puVar4[-0x1c] = 0;
        lVar5 = lVar5 + -4;
        puVar4[-0xe] = 0;
        *puVar4 = 0;
        puVar4[0xe] = 0;
        puVar4 = puVar4 + 0x38;
      } while (lVar5 != 0);
    }
  }
  return;
}


