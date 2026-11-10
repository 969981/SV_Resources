/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011906cc; name: FUN_011906cc
 */


void FUN_011906cc(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar3 = *param_1;
  if (param_1[1] == lVar3) {
    lVar5 = param_2[1];
  }
  else {
    lVar5 = param_2[1];
    lVar8 = param_1[1];
    do {
      lVar4 = param_1[3];
      puVar7 = (undefined8 *)(lVar5 + -0x18);
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = lVar8 + -0x18;
      lVar2 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar2 == 0) {
        *puVar7 = 0;
        *(undefined8 *)(lVar5 + -0x10) = 0;
        FUN_00d48230(puVar7,lVar6);
        *(undefined1 *)(lVar5 + -8) = *(undefined1 *)(lVar8 + -8);
      }
      else {
        if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar4;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        *puVar7 = 0;
        *(undefined8 *)(lVar5 + -0x10) = 0;
        FUN_00d48230(puVar7,lVar6);
        *(undefined1 *)(lVar5 + -8) = *(undefined1 *)(lVar8 + -8);
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      }
      lVar5 = param_2[1] + -0x18;
      param_2[1] = lVar5;
      lVar8 = lVar6;
    } while (lVar3 != lVar6);
    lVar3 = *param_1;
  }
  *param_1 = lVar5;
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}


