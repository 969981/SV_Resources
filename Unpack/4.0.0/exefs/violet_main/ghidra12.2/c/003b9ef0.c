/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b9ef0; name: FUN_003b9ef0
 */


undefined8 FUN_003b9ef0(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined1 auStack_48 [8];
  
  uVar1 = (param_2 >> 7 ^ 0xffffffff) & 2;
  if ((param_2 & 0x80) != 0) {
    uVar1 = 1;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x550) + 0x1e0);
  if (lVar4 != -0x1c) {
    uVar6 = 0;
    puVar7 = (undefined4 *)(param_3 + 0x18);
    puVar8 = &DAT_044a0ddc;
    do {
      if (puVar7[-2] != 0) {
        puVar5 = puVar8;
        if (0x1b < uVar6) {
          lVar3 = FUN_003bf550(*(long *)(param_1 + 0x550) + 0x1d8,uVar1,*puVar7,auStack_48);
          if (lVar3 == 0) {
            return 0;
          }
          puVar5 = (uint *)(lVar3 + 8);
        }
        uVar2 = *puVar5;
        if ((uVar2 & param_2) == 0) {
          return 0;
        }
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) == 0) {
          uVar2 = uVar2 >> 1;
        }
        if ((uVar2 & 1) != 0) {
          return 0;
        }
      }
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 10;
      puVar8 = puVar8 + 0xe;
    } while (lVar4 + 0x1cU != uVar6);
  }
  return 1;
}


