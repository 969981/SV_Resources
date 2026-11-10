/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0114c7bc; name: FUN_0114c7bc
 */


void FUN_0114c7bc(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar4 = PTR_LAB_047d3900;
  lVar7 = *param_1;
  if (param_1[1] == lVar7) {
    lVar10 = param_2[1];
  }
  else {
    lVar10 = param_2[1];
    lVar8 = param_1[1];
    do {
      lVar9 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar4,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar6 != 0) {
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar9;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      }
      *(undefined8 *)(lVar10 + -0x38) = 0;
      *(undefined8 *)(lVar10 + -0x30) = 0;
      lVar9 = lVar8 + -0x40;
      *(undefined8 *)(lVar10 + -0x40) = 0;
      uVar1 = *(undefined8 *)(lVar8 + -0x28);
      uVar2 = *(undefined8 *)(lVar8 + -0x20);
      uVar3 = *(undefined8 *)(lVar8 + -0x10);
      *(undefined8 *)(lVar10 + -0x18) = *(undefined8 *)(lVar8 + -0x18);
      *(undefined8 *)(lVar10 + -0x10) = uVar3;
      *(undefined8 *)(lVar10 + -0x28) = uVar1;
      *(undefined8 *)(lVar10 + -0x20) = uVar2;
      *(undefined8 *)(lVar10 + -0x40) = *(undefined8 *)(lVar8 + -0x40);
      *(undefined8 *)(lVar10 + -0x38) = *(undefined8 *)(lVar8 + -0x38);
      *(undefined8 *)(lVar10 + -0x30) = *(undefined8 *)(lVar8 + -0x30);
      *(undefined8 *)(lVar8 + -0x38) = 0;
      *(undefined8 *)(lVar8 + -0x30) = 0;
      *(undefined8 *)(lVar8 + -0x40) = 0;
      *(undefined8 *)(lVar10 + -8) = *(undefined8 *)(lVar8 + -8);
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      }
      lVar10 = param_2[1] + -0x40;
      param_2[1] = lVar10;
      lVar8 = lVar9;
    } while (lVar7 != lVar9);
    lVar7 = *param_1;
  }
  *param_1 = lVar10;
  param_2[1] = lVar7;
  lVar7 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar7;
  lVar7 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar7;
  *param_2 = param_2[1];
  return;
}


