/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02901db8; name: FUN_02901db8
 */


void FUN_02901db8(long param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  param_3 = param_3 - (long)param_2;
  puVar5 = puVar4;
  if (param_3 != 0) {
    puVar5 = (undefined8 *)((long)puVar4 + param_3);
    lVar6 = (param_3 >> 3) << 3;
    do {
      uVar3 = **(undefined8 **)(param_1 + 0x20);
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar2 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar2 == 0) {
        *puVar4 = *param_2;
      }
      else {
        if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar3;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        *puVar4 = *param_2;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      }
      param_2 = param_2 + 1;
      lVar6 = lVar6 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar6 != 0);
  }
  *(undefined8 **)(param_1 + 0x10) = puVar5;
  return;
}


