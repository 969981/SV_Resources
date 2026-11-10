/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016be090; name: FUN_016be090
 */


void FUN_016be090(undefined8 *param_1,long param_2,long param_3,long *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_3 != param_2) {
    lVar5 = *param_4;
    do {
      uVar4 = *param_1;
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar3 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar3 != 0) {
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar4;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      }
      *(undefined1 *)(lVar5 + -0x20) = 0;
      if (*(char *)(param_3 + -0x20) != '\0') {
        *(undefined8 *)(lVar5 + -0x18) = 0;
        *(undefined8 *)(lVar5 + -0x10) = 0;
        FUN_016be1d4((undefined8 *)(lVar5 + -0x18),param_3 + -0x18);
        *(undefined1 *)(lVar5 + -0x20) = 1;
      }
      puVar1 = (undefined1 *)(param_3 + -8);
      param_3 = param_3 + -0x20;
      *(undefined1 *)(lVar5 + -8) = *puVar1;
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      }
      lVar5 = *param_4 + -0x20;
      *param_4 = lVar5;
    } while (param_2 != param_3);
  }
  return;
}


