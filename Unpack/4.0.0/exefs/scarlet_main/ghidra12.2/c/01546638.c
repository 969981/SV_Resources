/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01546638; name: FUN_01546638
 */


long FUN_01546638(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar4 = (long *)(param_1 + 0x78);
  lVar5 = *(long *)(param_1 + 0x80);
  lVar1 = lVar5 - *plVar4;
  lVar3 = lVar1 >> 3;
  if ((ulong)(lVar3 * 0x6db6db6db6db6db7) < 10) {
    FUN_01546d30(plVar4,lVar3 * -0x6db6db6db6db6db7 + 10);
  }
  else if (lVar1 != 0x230) {
    lVar1 = *plVar4 + 0x230;
    while (lVar1 != lVar5) {
      lVar5 = lVar5 + -0x38;
      FUN_015469d0(lVar5);
    }
    *(long *)(param_1 + 0x80) = lVar1;
  }
  plVar6 = (long *)(param_1 + 0xb0);
  lVar1 = *(long *)(param_1 + 0xb8) - *plVar6;
  uVar2 = lVar1 >> 3;
  if (uVar2 < 10) {
    FUN_01546a70(plVar6,10 - uVar2);
  }
  else if (lVar1 != 0x50) {
    *(long *)(param_1 + 0xb8) = *plVar6 + 0x50;
  }
  FUN_01546824(*plVar4);
  *(undefined8 *)*plVar6 = *(undefined8 *)*plVar4;
  FUN_01546824(*plVar4 + 0x38);
  *(undefined8 *)(*plVar6 + 8) = *(undefined8 *)(*plVar4 + 0x38);
  FUN_01546824(*plVar4 + 0x70);
  *(undefined8 *)(*plVar6 + 0x10) = *(undefined8 *)(*plVar4 + 0x70);
  FUN_01546824(*plVar4 + 0xa8);
  *(undefined8 *)(*plVar6 + 0x18) = *(undefined8 *)(*plVar4 + 0xa8);
  FUN_01546824(*plVar4 + 0xe0);
  *(undefined8 *)(*plVar6 + 0x20) = *(undefined8 *)(*plVar4 + 0xe0);
  FUN_01546824(*plVar4 + 0x118);
  *(undefined8 *)(*plVar6 + 0x28) = *(undefined8 *)(*plVar4 + 0x118);
  FUN_01546824(*plVar4 + 0x150);
  *(undefined8 *)(*plVar6 + 0x30) = *(undefined8 *)(*plVar4 + 0x150);
  FUN_01546824(*plVar4 + 0x188);
  *(undefined8 *)(*plVar6 + 0x38) = *(undefined8 *)(*plVar4 + 0x188);
  FUN_01546824(*plVar4 + 0x1c0);
  *(undefined8 *)(*plVar6 + 0x40) = *(undefined8 *)(*plVar4 + 0x1c0);
  FUN_01546824(*plVar4 + 0x1f8);
  *(undefined8 *)(*plVar6 + 0x48) = *(undefined8 *)(*plVar4 + 0x1f8);
  return *plVar6;
}


