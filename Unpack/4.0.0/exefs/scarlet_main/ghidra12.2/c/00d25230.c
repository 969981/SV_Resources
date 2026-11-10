/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d25230; name: FUN_00d25230
 */


void FUN_00d25230(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 8);
  lVar4 = lVar7;
  if (param_2 != 0) {
    lVar4 = lVar7 + param_2 * 0x110;
    lVar5 = 0;
    do {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
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
        *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar6;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      }
      puVar1 = (undefined8 *)(lVar7 + lVar5);
      memset(puVar1 + 0xe,0,0xa0);
      *puVar1 = &DAT_cbf29ce484222645;
      puVar1[1] = &DAT_03c886bc;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = &DAT_cbf29ce484222645;
      puVar1[5] = &DAT_03c886bc;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = &DAT_cbf29ce484222645;
      puVar1[9] = &DAT_03c886bc;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      FUN_00d2435c(puVar1 + 0xe);
      puVar1[0x13] = 0;
      puVar1[0x14] = 0;
      FUN_00d2435c(puVar1 + 0x15);
      puVar1[0x1a] = 0;
      puVar1[0x1b] = 0;
      FUN_00d2435c(puVar1 + 0x1c);
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      }
      lVar5 = lVar5 + 0x110;
    } while (param_2 * 0x110 != lVar5);
  }
  *(long *)(param_1 + 8) = lVar4;
  return;
}


