/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031a35f8; name: FUN_031a35f8
 */


long FUN_031a35f8(long param_1,long param_2)

{
  int iVar1;
  void *__src;
  
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_2 + 0x16c);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_2 + 0x174);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x184);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_2 + 0x18c);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_2 + 0x194);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  if (param_2 != param_1) {
    iVar1 = *(int *)(param_2 + 0x1a8);
    __src = *(void **)(param_2 + 0x1a0);
    if ((int)(*(uint *)(param_1 + 0x1ac) & 0x7fffffff) < iVar1) {
      FUN_03081534(param_1 + 0x1a0,PTR_PTR_047d1a50,(long)iVar1);
    }
    memcpy(*(void **)(param_1 + 0x1a0),__src,(long)iVar1);
    *(int *)(param_1 + 0x1a8) = iVar1;
  }
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined1 *)(param_1 + 0x1e4) = *(undefined1 *)(param_2 + 0x1e4);
  *(undefined1 *)(param_1 + 0x1e5) = *(undefined1 *)(param_2 + 0x1e5);
  return param_1;
}


