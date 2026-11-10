/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013e9970; name: FUN_013e9970
 */


void FUN_013e9970(undefined8 *param_1,long *param_2)

{
  int iVar1;
  void *__s;
  long lVar2;
  
  __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x70,8);
  if (__s == (void *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
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
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    memset(__s,0,0x70);
    *(undefined1 *)((long)__s + 100) = 0;
    *(undefined8 *)((long)__s + 0x20) = 0x100000001;
    *(undefined8 *)((long)__s + 0x28) = 0;
    *(undefined8 *)((long)__s + 0x30) = 0x3f800000;
    *(undefined8 *)((long)__s + 0x38) = 0x447a0000;
    *(undefined8 *)((long)__s + 0x40) = 0x700000000;
    *(undefined8 *)((long)__s + 0x48) = 0x700000007;
    *(undefined4 *)((long)__s + 0x68) = 0xffffffff;
    *(undefined4 *)((long)__s + 0x60) = 8;
    *(undefined1 *)((long)__s + 0x6c) = 1;
    *(undefined8 *)((long)__s + 0x50) = 0;
    *(undefined8 *)((long)__s + 0x58) = 0;
    *param_1 = __s;
    param_1[1] = param_2;
    param_1[2] = 0x70;
    param_1[3] = 8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}


