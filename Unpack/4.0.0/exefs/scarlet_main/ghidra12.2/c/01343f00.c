/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01343f00; name: FUN_01343f00
 */


void FUN_01343f00(long param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  void *__s;
  undefined8 uVar5;
  
  if (param_3 != 0) {
    __s = *(void **)(param_1 + 0x220);
    if (__s == (void *)0x0) {
      plVar4 = *(long **)(param_1 + 8);
      __s = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,0x508,8);
      if (__s == (void *)0x0) {
        plVar4 = (long *)0x0;
        uVar3 = 0;
        uVar5 = 0;
      }
      else {
        if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar2 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        memset(__s,0,0x480);
        *(undefined4 *)((long)__s + 0x200) = 0xffffffff;
        memset((void *)((long)__s + 0x204),0,0x7d);
        *(undefined1 *)((long)__s + 0x290) = 0;
        *(undefined1 *)((long)__s + 0x2a0) = 0;
        *(undefined1 *)((long)__s + 0x2b0) = 0;
        *(undefined1 *)((long)__s + 0x2c0) = 0;
        *(undefined1 *)((long)__s + 0x2d0) = 0;
        *(undefined1 *)((long)__s + 0x2e0) = 0;
        *(undefined1 *)((long)__s + 0x2f0) = 0;
        *(undefined1 *)((long)__s + 0x300) = 0;
        *(undefined1 *)((long)__s + 0x310) = 0;
        *(undefined1 *)((long)__s + 800) = 0;
        *(undefined1 *)((long)__s + 0x330) = 0;
        *(undefined1 *)((long)__s + 0x340) = 0;
        *(undefined1 *)((long)__s + 0x350) = 0;
        *(undefined1 *)((long)__s + 0x360) = 0;
        *(undefined1 *)((long)__s + 0x370) = 0;
        *(undefined1 *)((long)__s + 0x380) = 0;
        *(undefined1 *)((long)__s + 0x390) = 0;
        *(undefined1 *)((long)__s + 0x3a0) = 0;
        *(undefined1 *)((long)__s + 0x3b0) = 0;
        *(undefined1 *)((long)__s + 0x3c0) = 0;
        *(undefined1 *)((long)__s + 0x3d0) = 0;
        *(undefined1 *)((long)__s + 0x3e0) = 0;
        *(undefined1 *)((long)__s + 0x3f0) = 0;
        *(undefined1 *)((long)__s + 0x400) = 0;
        *(undefined1 *)((long)__s + 0x410) = 0;
        *(undefined1 *)((long)__s + 0x420) = 0;
        *(undefined1 *)((long)__s + 0x430) = 0;
        *(undefined1 *)((long)__s + 0x440) = 0;
        *(undefined1 *)((long)__s + 0x450) = 0;
        *(undefined1 *)((long)__s + 0x460) = 0;
        *(undefined4 *)((long)__s + 0x480) = 0xffffffff;
        *(undefined1 *)((long)__s + 0x470) = 0;
        memset((void *)((long)__s + 0x484),0,0x7c);
        *(undefined8 *)((long)__s + 0x500) = 0x800000008;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
        uVar5 = 8;
        uVar3 = 0x508;
      }
      lVar2 = *(long *)(param_1 + 0x220);
      *(void **)(param_1 + 0x220) = __s;
      if (lVar2 == 0) {
        *(long **)(param_1 + 0x228) = plVar4;
        *(undefined8 *)(param_1 + 0x230) = uVar3;
      }
      else {
        FUN_0270a220(param_1 + 0x228);
        *(undefined8 *)(param_1 + 0x230) = uVar3;
        __s = *(void **)(param_1 + 0x220);
        *(long **)(param_1 + 0x228) = plVar4;
      }
      *(undefined8 *)(param_1 + 0x238) = uVar5;
    }
    *(undefined4 *)((long)__s + 0x500) = param_2;
    *(int *)(*(long *)(param_1 + 0x220) + 0x504) = param_3;
  }
  return;
}


