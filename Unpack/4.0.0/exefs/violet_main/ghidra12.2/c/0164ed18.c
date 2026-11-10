/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0164ed18; name: FUN_0164ed18
 */


void FUN_0164ed18(long param_1,long param_2)

{
  void *pvVar1;
  int iVar2;
  long lVar3;
  void *__s;
  undefined8 uVar4;
  
  param_2 = param_2 * 0x844;
  pvVar1 = (void *)((long)*(void **)(param_1 + 0x10) + param_2);
  __s = *(void **)(param_1 + 0x10);
  do {
    uVar4 = **(undefined8 **)(param_1 + 0x20);
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      memset(__s,0,0x844);
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar4;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      memset(__s,0,0x844);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    param_2 = param_2 + -0x844;
    __s = (void *)((long)__s + 0x844);
  } while (param_2 != 0);
  *(void **)(param_1 + 0x10) = pvVar1;
  return;
}


