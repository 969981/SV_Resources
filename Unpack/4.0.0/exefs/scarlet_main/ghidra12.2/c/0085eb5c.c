/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0085eb5c; name: FUN_0085eb5c
 */


void FUN_0085eb5c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  FUN_0085c61c(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  puVar1 = PTR_DAT_047d19b0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined2 *)(param_1 + 0x1fc) = 0;
  uVar3 = *(undefined8 *)(puVar1 + 0x238);
  uVar2 = *(undefined8 *)(puVar1 + 0x230);
  uVar5 = *(undefined8 *)(puVar1 + 0x248);
  lVar4 = *(long *)(puVar1 + 0x240);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  fVar7 = -(float)((ulong)lVar4 >> 0x20);
  fVar8 = -(float)((ulong)uVar5 >> 0x20);
  *(undefined8 *)(param_1 + 0x198) = uVar3;
  *(undefined8 *)(param_1 + 400) = uVar2;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  uVar3 = *(undefined8 *)(puVar1 + 0x228);
  uVar2 = *(undefined8 *)(puVar1 + 0x220);
  *(undefined1 *)(param_1 + 0x1fe) = 0;
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  *(long *)(param_1 + 0xd0) = lVar4;
  *(ulong *)(param_1 + 0xe8) = CONCAT44(fVar8,-(float)uVar5);
  *(ulong *)(param_1 + 0xe0) = CONCAT44(fVar7,-(float)lVar4);
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x188) = uVar3;
  *(undefined8 *)(param_1 + 0x180) = uVar2;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = uVar3;
  *(undefined8 *)(param_1 + 0x1d0) = uVar2;
  *(undefined8 *)(param_1 + 0xf8) = uVar5;
  *(long *)(param_1 + 0xf0) = lVar4;
  *(ulong *)(param_1 + 0x108) = CONCAT44(fVar8,-(float)uVar5);
  *(ulong *)(param_1 + 0x100) = CONCAT44(fVar7,-(float)lVar4);
  *(long *)(param_1 + 0xb8) = lVar4 << 0x20;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(long *)(param_1 + 200) = lVar4 << 0x20;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  uVar3 = *(undefined8 *)(puVar1 + 0x208);
  uVar2 = *(undefined8 *)(puVar1 + 0x200);
  uVar6 = *(undefined8 *)(puVar1 + 0x218);
  uVar5 = *(undefined8 *)(puVar1 + 0x210);
  *(undefined4 *)(param_1 + 0x1f0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x168) = uVar3;
  *(undefined8 *)(param_1 + 0x160) = uVar2;
  *(undefined8 *)(param_1 + 0x178) = uVar6;
  *(undefined8 *)(param_1 + 0x170) = uVar5;
  *(undefined8 *)(param_1 + 0x1b8) = uVar3;
  *(undefined8 *)(param_1 + 0x1b0) = uVar2;
  *(undefined8 *)(param_1 + 0x1c8) = uVar6;
  *(undefined8 *)(param_1 + 0x1c0) = uVar5;
  if ((-1 < (int)*(uint *)(param_1 + 0xac)) && (*(long *)(param_1 + 0xa0) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0xa0),(ulong)*(uint *)(param_1 + 0xac) * 0x30);
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0x80000000;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x9c)) && (*(long *)(param_1 + 0x90) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x90),(ulong)*(uint *)(param_1 + 0x9c) << 4);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x8c)) && (*(long *)(param_1 + 0x80) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x80),(ulong)*(uint *)(param_1 + 0x8c) << 6);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x80000000;
  FUN_0085e90c(param_1 + 0x38);
  return;
}


