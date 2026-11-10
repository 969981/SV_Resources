/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c91f60; name: FUN_01c91f60
 */


void FUN_01c91f60(undefined8 *param_1,long *param_2,char *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  
  puVar2 = (undefined1 *)(**(code **)(*param_2 + 0x10))(param_2,0xc,4);
  if (puVar2 == (undefined1 *)0x0) {
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
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    *puVar2 = 0;
    if (*param_3 != '\0') {
      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_3 + 4);
      *puVar2 = 1;
    }
    *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_3 + 8);
    *param_1 = puVar2;
    param_1[1] = param_2;
    param_1[2] = 0xc;
    param_1[3] = 4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


