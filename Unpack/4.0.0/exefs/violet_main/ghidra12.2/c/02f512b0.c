/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f512b0; name: FUN_02f512b0
 */


void FUN_02f512b0(long param_1,long param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  long lVar8;
  undefined2 *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  
  if (param_2 != param_1) {
    uVar4 = *(uint *)(param_2 + 0x10);
    lVar12 = *(long *)(param_2 + 8);
    if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < (int)uVar4) {
      FUN_02f5181c((long *)(param_1 + 8),(long)(int)uVar4);
    }
    uVar5 = *(uint *)(param_1 + 0x10);
    lVar8 = *(long *)(param_1 + 8);
    uVar3 = uVar5;
    if ((int)uVar4 <= (int)uVar5) {
      uVar3 = uVar4;
    }
    if ((lVar8 != lVar12) && (0 < (int)uVar3)) {
      if (uVar3 == 1) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        do {
          puVar1 = (undefined2 *)(lVar12 + uVar11 * 2);
          puVar2 = (undefined2 *)(lVar8 + uVar11 * 2);
          uVar11 = uVar11 + 2;
          *puVar2 = *puVar1;
          puVar2[1] = puVar1[1];
        } while (((ulong)uVar3 & 0xfffffffe) != uVar11);
      }
      if ((uVar3 & 1) != 0) {
        *(undefined2 *)(lVar8 + uVar11 * 2) = *(undefined2 *)(lVar12 + uVar11 * 2);
      }
      lVar8 = *(long *)(param_1 + 8);
    }
    if ((int)uVar5 < (int)uVar4) {
      puVar1 = (undefined2 *)(lVar12 + (long)(int)uVar3 * 2);
      puVar2 = (undefined2 *)(lVar8 + (long)(int)uVar3 * 2);
      uVar5 = uVar4 - uVar3 & 3;
      if (2 < uVar4 + ~uVar3) {
        iVar10 = -(uVar4 - uVar3 & 0xfffffffc);
        puVar7 = puVar1;
        puVar9 = puVar2;
        do {
          *puVar9 = *puVar7;
          puVar9[1] = puVar7[1];
          puVar9[2] = puVar7[2];
          puVar1 = puVar7 + 4;
          puVar2 = puVar9 + 4;
          iVar10 = iVar10 + 4;
          puVar9[3] = puVar7[3];
          puVar7 = puVar1;
          puVar9 = puVar2;
        } while (iVar10 != 0);
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar2 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
    }
    *(uint *)(param_1 + 0x10) = uVar4;
  }
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  memcpy((void *)(param_1 + 0x24),(void *)(param_2 + 0x24),0x84);
  uVar6 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x100) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x110) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x150) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x160) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
  *(undefined8 *)(param_1 + 0x170) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  *(undefined8 *)(param_1 + 0x180) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 400) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a0) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b0) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c0) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_2 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d0) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_2 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1e0) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_2 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f0) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x200);
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_2 + 0x208);
  *(undefined8 *)(param_1 + 0x200) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x210);
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  *(undefined8 *)(param_1 + 0x210) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x220);
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_2 + 0x228);
  *(undefined8 *)(param_1 + 0x220) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x230);
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_2 + 0x238);
  *(undefined8 *)(param_1 + 0x230) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x240);
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_2 + 0x248);
  *(undefined8 *)(param_1 + 0x240) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x250);
  *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_2 + 600);
  *(undefined8 *)(param_1 + 0x250) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x260);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  *(undefined8 *)(param_1 + 0x260) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x270);
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x278);
  *(undefined8 *)(param_1 + 0x270) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x280);
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_2 + 0x288);
  *(undefined8 *)(param_1 + 0x280) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x290);
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_2 + 0x298);
  *(undefined8 *)(param_1 + 0x290) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x2a0);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_2 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2a0) = uVar6;
  return;
}


