/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01667760; name: FUN_01667760
 */


void FUN_01667760(undefined8 *param_1,long *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x50,0x10);
  if (puVar2 == (undefined8 *)0x0) {
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
    *puVar2 = &DAT_cbf29ce484222645;
    puVar2[1] = &DAT_03c886bc;
    puVar2[2] = 0;
    puVar2[3] = 0;
    FUN_01667884(puVar2 + 4);
    *param_1 = puVar2;
    param_1[1] = param_2;
    param_1[2] = 0x50;
    param_1[3] = 0x10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


