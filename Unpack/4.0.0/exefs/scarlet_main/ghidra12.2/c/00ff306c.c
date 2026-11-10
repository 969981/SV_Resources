/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ff306c; name: FUN_00ff306c
 */


void FUN_00ff306c(undefined8 *param_1,long *param_2)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  
  pvVar2 = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x148,4);
  if (pvVar2 == (void *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    pvVar2 = (void *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
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
    memset(pvVar2,0,0x148);
    *param_1 = pvVar2;
    param_1[1] = param_2;
    param_1[2] = 0x148;
    param_1[3] = 4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    pvVar2 = (void *)*param_1;
  }
  memset(pvVar2,0,0x148);
  return;
}


