/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01077c04; name: FUN_01077c04
 */


void FUN_01077c04(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  FUN_01079fe4(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30));
  FUN_01077f08(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_2 + 0x50));
  memcpy((void *)(*(long *)(param_1 + 0x70) + 8),(void *)(*(long *)(param_2 + 0x70) + 8),0x420);
  FUN_01079be8(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_2 + 0x90));
  FUN_01079260(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_2 + 0xb0));
  FUN_01078964(*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_2 + 0xd0));
  FUN_0107842c(*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_2 + 0xf0));
  FUN_01078e88(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_2 + 0x110));
  lVar4 = *(long *)(param_2 + 0x130);
  lVar2 = *(long *)(param_1 + 0x130);
  *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(lVar4 + 8);
  memcpy((void *)(lVar2 + 0xc),(void *)(lVar4 + 0xc),0x12c0);
  lVar2 = *(long *)(param_1 + 0x150);
  uVar6 = *(undefined8 *)(*(long *)(param_2 + 0x150) + 8);
  *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(*(long *)(param_2 + 0x150) + 0x10);
  *(undefined8 *)(lVar2 + 8) = uVar6;
  FUN_01079060(*(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_2 + 0x170));
  *(undefined4 *)(*(long *)(param_1 + 400) + 8) = *(undefined4 *)(*(long *)(param_2 + 400) + 8);
  lVar4 = *(long *)(param_2 + 0x1b0);
  lVar2 = *(long *)(param_1 + 0x1b0);
  *(undefined2 *)(lVar2 + 8) = *(undefined2 *)(lVar4 + 8);
  uVar6 = *(undefined8 *)(lVar4 + 10);
  *(undefined2 *)(lVar2 + 0x12) = *(undefined2 *)(lVar4 + 0x12);
  *(undefined8 *)(lVar2 + 10) = uVar6;
  lVar4 = *(long *)(param_2 + 0x1d0);
  lVar2 = *(long *)(param_1 + 0x1d0);
  cVar1 = *(char *)(lVar4 + 0x48);
  *(char *)(lVar2 + 0x48) = cVar1;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  if (cVar1 != '\0') {
    FUN_00d7684c((long *)(lVar2 + 0x10),cVar1,0);
    if (*(char *)(lVar2 + 0x48) != '\0') {
      uVar3 = 0;
      do {
        uVar7 = uVar3 >> 6;
        uVar9 = 1L << (uVar3 & 0x3f);
        lVar8 = *(long *)(lVar2 + 0x10);
        if ((*(ulong *)(*(long *)(lVar4 + 0x10) + uVar7 * 8) & uVar9) == 0) {
          uVar9 = *(ulong *)(lVar8 + uVar7 * 8) & (uVar9 ^ 0xffffffffffffffff);
        }
        else {
          uVar9 = *(ulong *)(lVar8 + uVar7 * 8) | uVar9;
        }
        *(ulong *)(lVar8 + uVar7 * 8) = uVar9;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(byte *)(lVar2 + 0x48));
    }
  }
  *(undefined1 *)(*(long *)(param_1 + 0x1f0) + 8) = *(undefined1 *)(*(long *)(param_2 + 0x1f0) + 8);
  lVar2 = *(long *)(param_1 + 0x210);
  lVar4 = *(long *)(param_2 + 0x210);
  memcpy((void *)(lVar2 + 8),(void *)(lVar4 + 8),0x28);
  memcpy((void *)(lVar2 + 0x30),(void *)(lVar4 + 0x30),0xa0);
  uVar6 = *(undefined8 *)(lVar4 + 0xd8);
  *(undefined8 *)(lVar2 + 0xd0) = *(undefined8 *)(lVar4 + 0xd0);
  *(undefined8 *)(lVar2 + 0xd8) = uVar6;
  lVar2 = *(long *)(param_2 + 0x230);
  lVar4 = *(long *)(param_1 + 0x230);
  *(undefined4 *)(lVar4 + 8) = *(undefined4 *)(lVar2 + 8);
  *(undefined1 *)(lVar4 + 0xc) = *(undefined1 *)(lVar2 + 0xc);
  *(undefined1 *)(lVar4 + 0xd) = *(undefined1 *)(lVar2 + 0xd);
  *(undefined1 *)(lVar4 + 0xe) = *(undefined1 *)(lVar2 + 0xe);
  *(undefined1 *)(lVar4 + 0xf) = *(undefined1 *)(lVar2 + 0xf);
  *(undefined1 *)(lVar4 + 0x10) = *(undefined1 *)(lVar2 + 0x10);
  memcpy((void *)(*(long *)(param_1 + 0x250) + 0x10),(void *)(*(long *)(param_2 + 0x250) + 0x10),
         0x1e0);
  *(undefined8 *)(*(long *)(param_1 + 0x270) + 8) = *(undefined8 *)(*(long *)(param_2 + 0x270) + 8);
  uVar6 = *(undefined8 *)(param_2 + 0x358);
  uVar5 = *(undefined8 *)(param_2 + 0x350);
  *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_2 + 0x360);
  *(undefined8 *)(param_1 + 0x350) = uVar5;
  *(undefined8 *)(param_1 + 0x358) = uVar6;
  *(undefined2 *)(param_1 + 0x368) = *(undefined2 *)(param_2 + 0x368);
  *(undefined1 *)(param_1 + 0x36a) = *(undefined1 *)(param_2 + 0x36a);
  FUN_01078af4(*(undefined8 *)(param_1 + 0x2b0),*(undefined8 *)(param_2 + 0x2b0));
  FUN_01078cb8(*(undefined8 *)(param_1 + 0x2f0),*(undefined8 *)(param_2 + 0x2f0));
  lVar2 = *(long *)(param_1 + 0x310);
  lVar4 = *(long *)(param_2 + 0x310);
  memcpy((void *)(lVar2 + 0x1c),(void *)(lVar4 + 0x1c),0x4a);
  memcpy((void *)(lVar2 + 0x68),(void *)(lVar4 + 0x68),0x28);
  *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar4 + 0x18);
  *(undefined1 *)(param_1 + 0x370) = *(undefined1 *)(param_2 + 0x370);
  *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_2 + 0x36c);
  lVar4 = *(long *)(param_1 + 0x10);
  uVar3 = *(ulong *)(*(long *)(param_2 + 0x10) + 0x18);
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x20);
  *(ulong *)(lVar4 + 0x18) = uVar3;
  *(long *)(lVar4 + 0x20) = lVar2;
  *(ulong *)(lVar4 + 8) = uVar3;
  *(undefined8 *)(lVar4 + 0x10) = 0x82a2b175229d6a5b;
  if (lVar2 != 0) {
    uVar7 = uVar3 ^ 0x82a2b175229d6a5b;
    while( true ) {
      lVar2 = lVar2 + -1;
      uVar3 = uVar7 ^ (uVar3 >> 0x28 | uVar3 << 0x18) ^ uVar7 << 0x10;
      uVar7 = uVar7 >> 0x1b | uVar7 << 0x25;
      if (lVar2 == 0) break;
      uVar7 = uVar3 ^ uVar7;
    }
    *(ulong *)(lVar4 + 8) = uVar3;
    *(ulong *)(lVar4 + 0x10) = uVar7;
  }
  return;
}


