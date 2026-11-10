/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017d5c90; name: FUN_017d5c90
 */


void FUN_017d5c90(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long *__s;
  long lVar2;
  
  __s = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xe8,8);
  if (__s == (long *)0x0) {
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
    memset(__s,0,0xe8);
    FUN_00d5a934(__s);
    *__s = (long)(PTR_DAT_047db928 + 0x10);
    *(undefined4 *)((long)__s + 0xe4) = 0xffffffff;
    *param_1 = __s;
    param_1[1] = param_2;
    param_1[2] = 0xe8;
    param_1[3] = 8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}


