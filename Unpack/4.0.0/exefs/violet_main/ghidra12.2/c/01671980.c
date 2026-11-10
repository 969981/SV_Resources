/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01671980; name: FUN_01671980
 */


void * FUN_01671980(long param_1,long param_2)

{
  void *__s;
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  pthread_mutexattr_t apStack_38 [2];
  
  uVar2 = 0;
  if ((param_1 + 0x10U & 0xf) != 0) {
    uVar2 = (ulong)(uint)-(int)(param_1 + 0x10U) & 0xf;
  }
  lVar1 = param_1 + uVar2;
  __s = (void *)(lVar1 + 0x10);
  memset(__s,0,0x3d0);
  iVar7 = pthread_mutexattr_init(apStack_38);
  if ((iVar7 == 0) &&
     (iVar7 = pthread_mutex_init((pthread_mutex_t *)(lVar1 + 0x388),apStack_38), iVar7 == 0)) {
    pthread_mutexattr_destroy(apStack_38);
  }
  *(long *)(lVar1 + 0x28) = param_1;
  *(long *)(lVar1 + 0x3a8) = param_1;
  *(long *)(lVar1 + 0x370) = param_2;
  *(long *)(lVar1 + 0x368) = param_2;
  *(long *)(lVar1 + 0x3b0) = param_2;
  *(undefined8 *)(lVar1 + 8) = 0x3d3;
  uVar6 = DAT_04859d40;
  *(undefined8 *)(lVar1 + 0x48) = 0xfff;
  *(undefined8 *)(lVar1 + 0x50) = uVar6;
  uVar5 = DAT_04859d68 | 4;
  *(undefined8 *)(lVar1 + 0x3d0) = 0;
  *(undefined8 *)(lVar1 + 0x3c8) = 0;
  *(long *)(lVar1 + 0x88) = lVar1 + 0x78;
  *(long *)(lVar1 + 0x90) = lVar1 + 0x78;
  *(uint *)(lVar1 + 0x380) = uVar5;
  *(long *)(lVar1 + 0xa8) = lVar1 + 0x98;
  *(long *)(lVar1 + 0xb0) = lVar1 + 0x98;
  *(long *)(lVar1 + 200) = lVar1 + 0xb8;
  *(long *)(lVar1 + 0xd0) = lVar1 + 0xb8;
  *(long *)(lVar1 + 0xe8) = lVar1 + 0xd8;
  *(long *)(lVar1 + 0xf0) = lVar1 + 0xd8;
  *(long *)(lVar1 + 0x68) = lVar1 + 0x58;
  *(long *)(lVar1 + 0x70) = lVar1 + 0x58;
  *(long *)(lVar1 + 0x98) = lVar1 + 0x88;
  *(long *)(lVar1 + 0xa0) = lVar1 + 0x88;
  *(long *)(lVar1 + 0x108) = lVar1 + 0xf8;
  *(long *)(lVar1 + 0x110) = lVar1 + 0xf8;
  *(long *)(lVar1 + 0xb8) = lVar1 + 0xa8;
  *(long *)(lVar1 + 0xc0) = lVar1 + 0xa8;
  *(long *)(lVar1 + 0x128) = lVar1 + 0x118;
  *(long *)(lVar1 + 0x130) = lVar1 + 0x118;
  *(long *)(lVar1 + 0xd8) = lVar1 + 200;
  *(long *)(lVar1 + 0xe0) = lVar1 + 200;
  *(long *)(lVar1 + 0x148) = lVar1 + 0x138;
  *(long *)(lVar1 + 0x150) = lVar1 + 0x138;
  *(long *)(lVar1 + 0xf8) = lVar1 + 0xe8;
  *(long *)(lVar1 + 0x100) = lVar1 + 0xe8;
  *(long *)(lVar1 + 0x168) = lVar1 + 0x158;
  *(long *)(lVar1 + 0x170) = lVar1 + 0x158;
  *(long *)(lVar1 + 0x118) = lVar1 + 0x108;
  *(long *)(lVar1 + 0x120) = lVar1 + 0x108;
  *(long *)(lVar1 + 0x188) = lVar1 + 0x178;
  *(long *)(lVar1 + 400) = lVar1 + 0x178;
  *(long *)(lVar1 + 0x138) = lVar1 + 0x128;
  *(long *)(lVar1 + 0x140) = lVar1 + 0x128;
  *(long *)(lVar1 + 0x1a8) = lVar1 + 0x198;
  *(long *)(lVar1 + 0x1b0) = lVar1 + 0x198;
  *(long *)(lVar1 + 0x158) = lVar1 + 0x148;
  *(long *)(lVar1 + 0x160) = lVar1 + 0x148;
  *(long *)(lVar1 + 0x1c8) = lVar1 + 0x1b8;
  *(long *)(lVar1 + 0x1d0) = lVar1 + 0x1b8;
  *(long *)(lVar1 + 0x178) = lVar1 + 0x168;
  *(long *)(lVar1 + 0x180) = lVar1 + 0x168;
  *(long *)(lVar1 + 0x1e8) = lVar1 + 0x1d8;
  *(long *)(lVar1 + 0x1f0) = lVar1 + 0x1d8;
  *(long *)(lVar1 + 0x210) = lVar1 + 0x1f8;
  *(long *)(lVar1 + 0x208) = lVar1 + 0x1f8;
  *(long *)(lVar1 + 0x230) = lVar1 + 0x218;
  *(long *)(lVar1 + 0x228) = lVar1 + 0x218;
  *(long *)(lVar1 + 0x250) = lVar1 + 0x238;
  *(long *)(lVar1 + 0x248) = lVar1 + 0x238;
  uVar2 = (long)__s + (*(ulong *)(lVar1 + 8) & 0xfffffffffffffff8);
  uVar4 = 0;
  if ((uVar2 & 0xf) != 0) {
    uVar4 = (ulong)(uint)-(int)uVar2 & 0xf;
  }
  *(long *)(lVar1 + 0x198) = lVar1 + 0x188;
  *(long *)(lVar1 + 0x1a0) = lVar1 + 0x188;
  *(long *)(lVar1 + 0x1b8) = lVar1 + 0x1a8;
  *(long *)(lVar1 + 0x1c0) = lVar1 + 0x1a8;
  *(long *)(lVar1 + 0x1d8) = lVar1 + 0x1c8;
  *(long *)(lVar1 + 0x1e0) = lVar1 + 0x1c8;
  *(long *)(lVar1 + 0x1f8) = lVar1 + 0x1e8;
  *(long *)(lVar1 + 0x200) = lVar1 + 0x1e8;
  *(long *)(lVar1 + 0x220) = lVar1 + 0x208;
  *(long *)(lVar1 + 0x218) = lVar1 + 0x208;
  *(long *)(lVar1 + 0x240) = lVar1 + 0x228;
  *(long *)(lVar1 + 0x238) = lVar1 + 0x228;
  *(long *)(lVar1 + 0x260) = lVar1 + 0x248;
  *(long *)(lVar1 + 600) = lVar1 + 0x248;
  *(long *)(lVar1 + 0x78) = lVar1 + 0x68;
  *(long *)(lVar1 + 0x80) = lVar1 + 0x68;
  uVar8 = (((param_1 + param_2) - (uVar2 - 0x10)) - uVar4) - 0x50;
  lVar3 = (uVar2 - 0x10) + uVar4;
  *(ulong *)(lVar1 + 0x20) = uVar8;
  *(long *)(lVar1 + 0x38) = lVar3;
  *(ulong *)(lVar3 + 8) = uVar8 | 1;
  *(undefined8 *)(param_1 + param_2 + -0x48) = 0x50;
  *(undefined8 *)(lVar1 + 0x40) = DAT_04859d60;
  return __s;
}


