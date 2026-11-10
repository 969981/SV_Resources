/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fbc624; name: FUN_01fbc624
 */


void FUN_01fbc624(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long *__s;
  long lVar3;
  
  __s = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x110,8);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  memset(__s,0,0x110);
  FUN_00d5a934(__s);
  *(undefined8 *)((long)__s + 0xec) = 0xffffffffffffffff;
  puVar1 = PTR_DAT_047db4a8;
  *(undefined8 *)((long)__s + 0xf4) = 0xffffffffffffffff;
  *(undefined8 *)((long)__s + 0xfc) = 0xffffffffffffffff;
  *__s = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)__s + 0xe4) = 0xffffffffffffffff;
  *(undefined8 *)((long)__s + 0x104) = 0xffffffffffffffff;
  *(undefined4 *)((long)__s + 0x10c) = 0xffffffff;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  __s[0x1b] = (long)param_2;
  *param_1 = __s;
  param_1[1] = param_2;
  param_1[2] = 0x110;
  param_1[3] = 8;
  return;
}


