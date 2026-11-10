/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01aad338; name: FUN_01aad338
 */


void FUN_01aad338(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar5 = lVar3;
  if (param_2 != 0) {
    lVar5 = lVar3 + param_2 * 0x70;
    puVar6 = (undefined8 *)(lVar3 + 0x20);
    param_2 = param_2 * 0x70;
    puVar1 = PTR_DAT_047e2ff8 + 0x10;
    do {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
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
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[-4] = &DAT_cbf29ce484222645;
      puVar6[-3] = &DAT_03c886bc;
      puVar6[-2] = 0;
      puVar6[-1] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[2] = puVar1;
      puVar6[3] = 0;
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      }
      param_2 = param_2 + -0x70;
      puVar6 = puVar6 + 0xe;
    } while (param_2 != 0);
  }
  *(long *)(param_1 + 8) = lVar5;
  return;
}


