/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018c4010; name: FUN_018c4010
 */


void FUN_018c4010(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  void *__s;
  long lVar3;
  
  __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,0xd0,8);
  if (__s == (void *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
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
    memset(__s,0,0xd0);
    puVar1 = PTR_DAT_047d8e88;
    *(undefined8 *)((long)__s + 0xa8) = 0;
    *(undefined8 *)((long)__s + 0x68) = 0;
    *(undefined8 *)((long)__s + 0x70) = 0;
    *(undefined8 *)((long)__s + 0x78) = 0;
    *(undefined8 *)((long)__s + 0x80) = 0;
    *(undefined8 *)((long)__s + 0x88) = 0;
    *(undefined8 *)((long)__s + 0x90) = 0;
    *(undefined **)((long)__s + 0x18) = puVar1 + 0x10;
    *(undefined **)((long)__s + 0x58) = puVar1 + 0x10;
    *(undefined8 *)((long)__s + 0x60) = 0;
    *(undefined8 *)((long)__s + 0x98) = 0;
    *(undefined8 *)((long)__s + 0xa0) = 0;
    FUN_018c4294((long)__s + 0xb0);
    *param_1 = __s;
    param_1[1] = param_2;
    param_1[2] = 0xd0;
    param_1[3] = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


