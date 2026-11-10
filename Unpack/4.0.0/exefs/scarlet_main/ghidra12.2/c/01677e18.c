/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01677e18; name: FUN_01677e18
 */


void FUN_01677e18(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *param_1;
  lVar7 = param_1[1];
  if (lVar7 == lVar10) {
    lVar8 = param_2[1];
  }
  else {
    lVar8 = param_2[1];
    do {
      lVar9 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar2 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar2 != 0) {
        if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar9;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      }
      *(undefined8 *)(lVar8 + -0x30) = 0;
      *(undefined8 *)(lVar8 + -0x28) = 0;
      *(undefined8 *)(lVar8 + -0x40) = 0;
      *(undefined8 *)(lVar8 + -0x38) = 0;
      if (*(code **)(lVar7 + -0x28) != (code *)0x0) {
        (**(code **)(lVar7 + -0x28))(lVar7 + -0x20,lVar8 + -0x20);
        uVar3 = *(undefined8 *)(lVar7 + -0x40);
        uVar5 = *(undefined8 *)(lVar7 + -0x38);
        *(undefined8 *)(lVar8 + -0x28) = *(undefined8 *)(lVar7 + -0x28);
        uVar6 = *(undefined8 *)(lVar7 + -0x30);
        *(undefined8 *)(lVar8 + -0x38) = uVar5;
        *(undefined8 *)(lVar8 + -0x30) = uVar6;
        *(undefined8 *)(lVar8 + -0x40) = uVar3;
        pcVar4 = *(code **)(lVar7 + -0x38);
        if (pcVar4 != (code *)0x0) {
          *(undefined8 *)(lVar7 + -0x30) = 0;
          *(undefined8 *)(lVar7 + -0x28) = 0;
          *(undefined8 *)(lVar7 + -0x40) = 0;
          *(undefined8 *)(lVar7 + -0x38) = 0;
          (*pcVar4)(lVar7 + -0x20);
        }
      }
      lVar7 = lVar7 + -0x40;
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      }
      lVar8 = param_2[1] + -0x40;
      param_2[1] = lVar8;
    } while (lVar10 != lVar7);
    lVar10 = *param_1;
  }
  *param_1 = lVar8;
  param_2[1] = lVar10;
  lVar10 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar10;
  lVar10 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar10;
  *param_2 = param_2[1];
  return;
}


