/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d02424; name: FUN_00d02424
 */


void FUN_00d02424(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  lVar4 = *param_1;
  lVar5 = param_1[1];
  if (lVar5 == lVar4) {
    lVar3 = param_2[1];
  }
  else {
    lVar3 = param_2[1];
    do {
      puVar7 = (undefined8 *)(lVar3 + -0x10);
      lVar6 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = lVar5 + -0x10;
      lVar2 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar2 == 0) {
        *puVar7 = 0;
        *(undefined8 *)(lVar3 + -8) = 0;
        FUN_00c96b7c(puVar7,lVar5);
      }
      else {
        if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar6;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        *puVar7 = 0;
        *(undefined8 *)(lVar3 + -8) = 0;
        FUN_00c96b7c(puVar7,lVar5);
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      }
      lVar3 = param_2[1] + -0x10;
      param_2[1] = lVar3;
    } while (lVar4 != lVar5);
    lVar4 = *param_1;
  }
  *param_1 = lVar3;
  param_2[1] = lVar4;
  lVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}


