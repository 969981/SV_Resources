/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01423c30; name: FUN_01423c30
 */


void FUN_01423c30(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar1 = PTR_LAB_047d3900;
  puVar5 = *(undefined8 **)(param_1 + 8);
  puVar6 = puVar5;
  if (param_2 != 0) {
    puVar6 = puVar5 + param_2 * 2;
    param_2 = param_2 << 4;
    do {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar1,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar3 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar3 == 0) {
        *puVar5 = 0;
        puVar5[1] = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar4;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        *puVar5 = 0;
        puVar5[1] = 0;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      }
      puVar5 = puVar5 + 2;
      param_2 = param_2 + -0x10;
    } while (param_2 != 0);
  }
  *(undefined8 **)(param_1 + 8) = puVar6;
  return;
}


