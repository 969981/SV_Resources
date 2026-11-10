/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f2f64c; name: FUN_00f2f64c
 */


void FUN_00f2f64c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  void *__s;
  undefined8 uVar3;
  void *pvVar4;
  
  __s = *(void **)(param_1 + 8);
  pvVar4 = __s;
  if (param_2 != 0) {
    pvVar4 = (void *)((long)__s + param_2 * 0x1b0);
    param_2 = param_2 * 0x1b0;
    do {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar2 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar2 == 0) {
        memset(__s,0,0x1b0);
        FUN_00f2cbb4(__s);
      }
      else {
        if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar3;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        memset(__s,0,0x1b0);
        FUN_00f2cbb4(__s);
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      }
      __s = (void *)((long)__s + 0x1b0);
      param_2 = param_2 + -0x1b0;
    } while (param_2 != 0);
  }
  *(void **)(param_1 + 8) = pvVar4;
  return;
}


