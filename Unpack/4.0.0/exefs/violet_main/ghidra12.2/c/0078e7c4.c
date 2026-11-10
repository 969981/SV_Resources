/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078e7c4; name: FUN_0078e7c4
 */


void FUN_0078e7c4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  
  puVar7 = (ulong *)(param_1 + 0x58);
  *puVar7 = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  (**(code **)(param_1 + 0x10))(puVar7,puVar7,*(undefined8 *)(param_1 + 8));
  uVar3 = (*puVar7 & 0xff00ff00ff00ff00) >> 8 | (*puVar7 & 0xff00ff00ff00ff) << 8;
  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
  uVar6 = uVar3 >> 0x20;
  uVar3 = uVar6 | uVar3 << 0x20;
  uVar4 = (*(ulong *)(param_1 + 0x60) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_1 + 0x60) & 0xff00ff00ff00ff) << 8;
  uVar2 = (uVar4 & 0xffff0000ffff0000) >> 0x10;
  uVar4 = uVar2 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
  uVar6 = uVar4 >> 1 | uVar6 << 0x3f;
  *(ulong *)(param_1 + 0x60) = uVar4;
  *(ulong *)(param_1 + 0x108) = uVar3;
  *(ulong *)(param_1 + 0x110) = uVar4;
  uVar3 = uVar3 >> 1;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  if ((uVar2 & 0x100000000) != 0) {
    uVar3 = uVar3 ^ 0xe100000000000000;
  }
  *(ulong *)(param_1 + 200) = uVar3;
  *(ulong *)(param_1 + 0xd0) = uVar6;
  uVar6 = uVar6 >> 1 | uVar3 << 0x3f;
  uVar4 = uVar3 >> 1;
  if ((uVar2 & 0x200000000) != 0) {
    uVar4 = uVar3 >> 1 ^ 0xe100000000000000;
  }
  *puVar7 = uVar4;
  *(ulong *)(param_1 + 0x60) = uVar6;
  *(ulong *)(param_1 + 0xa8) = uVar4;
  *(ulong *)(param_1 + 0xb0) = uVar6;
  uVar6 = uVar6 >> 1 | uVar4 << 0x3f;
  uVar3 = uVar4 >> 1;
  if ((uVar2 & 0x400000000) != 0) {
    uVar3 = uVar4 >> 1 ^ 0xe100000000000000;
  }
  *(ulong *)(param_1 + 0x98) = uVar3;
  *(ulong *)(param_1 + 0xa0) = uVar6;
  uVar4 = *(ulong *)(param_1 + 200);
  uVar1 = *(ulong *)(param_1 + 0xd0);
  *puVar7 = uVar3;
  *(ulong *)(param_1 + 0x60) = uVar6;
  uVar3 = uVar3 ^ *(ulong *)(param_1 + 0xa8);
  *puVar7 = *(ulong *)(param_1 + 0xa8);
  *(ulong *)(param_1 + 0x60) = *(ulong *)(param_1 + 0xb0);
  uVar5 = uVar6 ^ *(ulong *)(param_1 + 0xb0);
  *(ulong *)(param_1 + 0xb8) = uVar3;
  *(ulong *)(param_1 + 0xc0) = uVar5;
  *puVar7 = uVar4;
  *(ulong *)(param_1 + 0x60) = uVar1;
  *(ulong *)(param_1 + 0xd8) = *(ulong *)(param_1 + 0x98) ^ uVar4;
  *(ulong *)(param_1 + 0xe0) = uVar6 ^ uVar1;
  *(ulong *)(param_1 + 0xe8) = *(ulong *)(param_1 + 0xa8) ^ uVar4;
  *(ulong *)(param_1 + 0xf0) = *(ulong *)(param_1 + 0xb0) ^ uVar1;
  uVar2 = *(ulong *)(param_1 + 0x108);
  uVar6 = *(ulong *)(param_1 + 0x110);
  *(ulong *)(param_1 + 0xf8) = uVar3 ^ uVar4;
  *(ulong *)(param_1 + 0x100) = uVar5 ^ uVar1;
  *puVar7 = uVar2;
  *(ulong *)(param_1 + 0x60) = uVar6;
  *(ulong *)(param_1 + 0x118) = *(ulong *)(param_1 + 0x98) ^ uVar2;
  *(ulong *)(param_1 + 0x120) = *(ulong *)(param_1 + 0xa0) ^ uVar6;
  *(ulong *)(param_1 + 0x128) = *(ulong *)(param_1 + 0xa8) ^ uVar2;
  *(ulong *)(param_1 + 0x130) = *(ulong *)(param_1 + 0xb0) ^ uVar6;
  *(ulong *)(param_1 + 0x138) = *(ulong *)(param_1 + 0xb8) ^ uVar2;
  *(ulong *)(param_1 + 0x140) = *(ulong *)(param_1 + 0xc0) ^ uVar6;
  *(ulong *)(param_1 + 0x148) = *(ulong *)(param_1 + 200) ^ uVar2;
  *(ulong *)(param_1 + 0x150) = *(ulong *)(param_1 + 0xd0) ^ uVar6;
  *(ulong *)(param_1 + 0x158) = *(ulong *)(param_1 + 0xd8) ^ uVar2;
  *(ulong *)(param_1 + 0x160) = *(ulong *)(param_1 + 0xe0) ^ uVar6;
  *(ulong *)(param_1 + 0x168) = *(ulong *)(param_1 + 0xe8) ^ uVar2;
  *(ulong *)(param_1 + 0x170) = *(ulong *)(param_1 + 0xf0) ^ uVar6;
  *(ulong *)(param_1 + 0x178) = *(ulong *)(param_1 + 0xf8) ^ uVar2;
  *(ulong *)(param_1 + 0x180) = *(ulong *)(param_1 + 0x100) ^ uVar6;
  return;
}


