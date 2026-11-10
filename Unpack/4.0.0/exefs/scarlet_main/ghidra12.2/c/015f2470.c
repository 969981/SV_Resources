/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015f2470; name: FUN_015f2470
 */


void FUN_015f2470(long *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *param_1;
  lVar7 = param_1[1];
  if (lVar7 == lVar9) {
    lVar10 = param_2[1];
  }
  else {
    lVar10 = param_2[1];
    do {
      lVar8 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar6 != 0) {
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar8;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      }
      uVar2 = *(undefined8 *)(lVar7 + -0x30);
      uVar3 = *(undefined8 *)(lVar7 + -0x28);
      uVar4 = *(undefined8 *)(lVar7 + -0x18);
      *(undefined8 *)(lVar10 + -0x20) = *(undefined8 *)(lVar7 + -0x20);
      *(undefined8 *)(lVar10 + -0x18) = uVar4;
      *(undefined8 *)(lVar10 + -0x30) = uVar2;
      *(undefined8 *)(lVar10 + -0x28) = uVar3;
      *(undefined1 *)(lVar10 + -0x10) = 0;
      if (*(char *)(lVar7 + -0x10) != '\0') {
        *(undefined8 *)(lVar10 + -0xc) = *(undefined8 *)(lVar7 + -0xc);
        *(undefined1 *)(lVar10 + -0x10) = 1;
      }
      puVar1 = (undefined1 *)(lVar7 + -4);
      lVar7 = lVar7 + -0x30;
      *(undefined1 *)(lVar10 + -4) = *puVar1;
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      }
      lVar10 = param_2[1] + -0x30;
      param_2[1] = lVar10;
    } while (lVar9 != lVar7);
    lVar9 = *param_1;
  }
  *param_1 = lVar10;
  param_2[1] = lVar9;
  lVar9 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar9;
  lVar9 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar9;
  *param_2 = param_2[1];
  return;
}


