/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d8408; name: FUN_002d8408
 */


void FUN_002d8408(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar5 = *(long *)(param_1 + 0xc0);
  if (lVar5 != 0) {
    FUN_0049e800(lVar5);
    FUN_0049e7e0(PTR_LAB_047cba48,lVar5);
  }
  puVar3 = PTR_LAB_047cba48;
  lVar5 = *(long *)(param_1 + 0x90);
  if (*(long *)(param_1 + 0x98) != lVar5) {
    uVar2 = *(ulong *)(param_1 + 0xa8);
    uVar1 = *(long *)(param_1 + 0xb0) + uVar2;
    plVar7 = (long *)(lVar5 + (uVar2 >> 5 & 0x7fffffffffffff8));
    lVar4 = *(long *)(lVar5 + (uVar1 >> 5 & 0x7fffffffffffff8));
    lVar5 = *plVar7 + (uVar2 & 0xff) * 0x10;
    while (lVar4 + (uVar1 & 0xff) * 0x10 != lVar5) {
      lVar6 = *(long *)(lVar5 + 8);
      if (lVar6 != 0) {
        FUN_0049e800(lVar6);
        FUN_0049e7e0(puVar3,lVar6);
      }
      lVar5 = lVar5 + 0x10;
      if (lVar5 - *plVar7 == 0x1000) {
        plVar7 = plVar7 + 1;
        lVar5 = *plVar7;
      }
    }
  }
  FUN_002d82ac(param_1 + 0x88);
  lVar5 = *(long *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (lVar5 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  lVar5 = *(long *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (lVar5 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  lVar5 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (lVar5 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  lVar5 = *(long *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (lVar5 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  lVar5 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar5 == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48);
  return;
}


