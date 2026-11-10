/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024dab80; name: FUN_024dab80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_024dab80(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  void *__s;
  long lVar6;
  undefined1 auVar7 [16];
  
  __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x230,0x10);
  if (__s == (void *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    memset(__s,0,0x230);
    uVar4 = _UNK_03cabe58;
    uVar3 = _DAT_03cabe50;
    *(undefined8 *)((long)__s + 400) = 0;
    *(undefined8 *)((long)__s + 0x198) = 0;
    uVar2 = _UNK_03caa5b8;
    uVar1 = _DAT_03caa5b0;
    *(undefined1 *)((long)__s + 0x1e0) = 0;
    *(undefined8 *)((long)__s + 0x1a0) = 0;
    *(undefined8 *)((long)__s + 0x1a8) = 0;
    *(undefined8 *)((long)__s + 0x18) = uVar4;
    *(undefined8 *)((long)__s + 0x10) = uVar3;
    *(undefined8 *)((long)__s + 0x28) = uVar2;
    *(undefined8 *)((long)__s + 0x20) = uVar1;
    *(undefined8 *)((long)__s + 0xf8) = 0x3f3333333f333333;
    *(undefined8 *)((long)__s + 0xf0) = 0x3f3333333f333333;
    *(undefined4 *)((long)__s + 0x108) = 0x3fe38e39;
    *(undefined4 *)((long)__s + 0x10c) = 0x3fe38e39;
    *(undefined8 *)((long)__s + 0x100) = 0x3fe38e393fe38e39;
    *(undefined8 *)((long)__s + 0x118) = 0x3f428f5c3f428f5c;
    *(undefined8 *)((long)__s + 0x110) = 0x3f428f5c3f428f5c;
    *(undefined4 *)((long)__s + 0x128) = 0x3f13dd98;
    *(undefined4 *)((long)__s + 300) = 0x3f13dd98;
    *(undefined8 *)((long)__s + 0x120) = 0x3f13dd983f13dd98;
    auVar7 = NEON_fmov(0x3fc80000,4);
    *(undefined8 *)((long)__s + 0x138) = 0x3f23d70a3f23d70a;
    *(undefined8 *)((long)__s + 0x130) = 0x3f23d70a3f23d70a;
    *(long *)((long)__s + 0x148) = auVar7._8_8_;
    *(long *)((long)__s + 0x140) = auVar7._0_8_;
    *(undefined8 *)((long)__s + 0x158) = 0x3f23d70a3f23d70a;
    *(undefined8 *)((long)__s + 0x150) = 0x3f23d70a3f23d70a;
    *(undefined4 *)((long)__s + 0x168) = 0x3dcccccd;
    *(undefined4 *)((long)__s + 0x16c) = 0x3dcccccd;
    *(undefined8 *)((long)__s + 0x160) = 0x3dcccccd3dcccccd;
    *(undefined8 *)((long)__s + 0x178) = 0x45bb800045bb8000;
    *(undefined8 *)((long)__s + 0x170) = 0x45bb800045bb8000;
    *(undefined4 *)((long)__s + 0x188) = 0x4c095440;
    *(undefined4 *)((long)__s + 0x18c) = 0x4c095440;
    *(undefined8 *)((long)__s + 0x180) = 0x4c0954404c095440;
    *param_1 = __s;
    param_1[1] = param_2;
    param_1[2] = 0x230;
    param_1[3] = 0x10;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  return;
}


