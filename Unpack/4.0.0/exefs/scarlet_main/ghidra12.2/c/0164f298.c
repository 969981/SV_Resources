/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0164f298; name: FUN_0164f298
 */


void FUN_0164f298(long param_1,long param_2)

{
  void *pvVar1;
  int iVar2;
  long lVar3;
  void *__s;
  undefined8 uVar4;
  
  param_2 = param_2 * 0x2850;
  __s = *(void **)(param_1 + 8);
  pvVar1 = (void *)((long)__s + param_2);
  do {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      memset(__s,0,0x2850);
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar4;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      memset(__s,0,0x2850);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    __s = (void *)((long)__s + 0x2850);
    param_2 = param_2 + -0x2850;
  } while (param_2 != 0);
  *(void **)(param_1 + 8) = pvVar1;
  return;
}


