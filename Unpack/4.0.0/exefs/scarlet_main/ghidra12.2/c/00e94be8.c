/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e94be8; name: FUN_00e94be8
 */


void FUN_00e94be8(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar3 = *param_1;
  lVar8 = param_1[1];
  if (lVar8 == lVar3) {
    lVar9 = param_2[1];
  }
  else {
    lVar9 = param_2[1];
    do {
      lVar10 = param_1[3];
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
        *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar10;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      }
      *(undefined8 *)(lVar9 + -0x70) = 0;
      *(undefined8 *)(lVar9 + -0x68) = 0;
      *(undefined8 *)(lVar9 + -0x80) = 0;
      *(undefined8 *)(lVar9 + -0x78) = 0;
      if (*(code **)(lVar8 + -0x68) != (code *)0x0) {
        (**(code **)(lVar8 + -0x68))(lVar8 + -0x60,lVar9 + -0x60);
        uVar4 = *(undefined8 *)(lVar8 + -0x80);
        uVar6 = *(undefined8 *)(lVar8 + -0x78);
        *(undefined8 *)(lVar9 + -0x68) = *(undefined8 *)(lVar8 + -0x68);
        uVar7 = *(undefined8 *)(lVar8 + -0x70);
        *(undefined8 *)(lVar9 + -0x78) = uVar6;
        *(undefined8 *)(lVar9 + -0x70) = uVar7;
        *(undefined8 *)(lVar9 + -0x80) = uVar4;
        pcVar5 = *(code **)(lVar8 + -0x78);
        if (pcVar5 != (code *)0x0) {
          *(undefined8 *)(lVar8 + -0x70) = 0;
          *(undefined8 *)(lVar8 + -0x68) = 0;
          *(undefined8 *)(lVar8 + -0x80) = 0;
          *(undefined8 *)(lVar8 + -0x78) = 0;
          (*pcVar5)(lVar8 + -0x60);
        }
      }
      lVar8 = lVar8 + -0x80;
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      }
      lVar9 = param_2[1] + -0x80;
      param_2[1] = lVar9;
    } while (lVar3 != lVar8);
    lVar3 = *param_1;
  }
  *param_1 = lVar9;
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


