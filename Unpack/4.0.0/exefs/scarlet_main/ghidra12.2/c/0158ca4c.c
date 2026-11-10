/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0158ca4c; name: FUN_0158ca4c
 */


void FUN_0158ca4c(long param_1,long param_2)

{
  void *pvVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  void *__s;
  
  puVar2 = PTR_LAB_047d3900;
  param_2 = param_2 * 0xf8;
  __s = *(void **)(param_1 + 0x10);
  pvVar1 = (void *)((long)__s + param_2);
  do {
    uVar5 = **(undefined8 **)(param_1 + 0x20);
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(puVar2,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 == 0) {
      memset(__s,0,0xf8);
      FUN_0158cb84(__s);
    }
    else {
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar5;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      memset(__s,0,0xf8);
      FUN_0158cb84(__s);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    __s = (void *)((long)__s + 0xf8);
    param_2 = param_2 + -0xf8;
  } while (param_2 != 0);
  *(void **)(param_1 + 0x10) = pvVar1;
  return;
}


