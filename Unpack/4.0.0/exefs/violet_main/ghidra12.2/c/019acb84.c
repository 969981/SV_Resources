/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019acb84; name: FUN_019acb84
 */


void FUN_019acb84(long *param_1,undefined8 *param_2)

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
      *(undefined8 *)(lVar9 + -0x30) = 0;
      *(undefined8 *)(lVar9 + -0x28) = 0;
      *(undefined8 *)(lVar9 + -0x40) = 0;
      *(undefined8 *)(lVar9 + -0x38) = 0;
      if (*(code **)(lVar8 + -0x28) != (code *)0x0) {
        (**(code **)(lVar8 + -0x28))(lVar8 + -0x20,lVar9 + -0x20);
        uVar4 = *(undefined8 *)(lVar8 + -0x40);
        uVar6 = *(undefined8 *)(lVar8 + -0x38);
        *(undefined8 *)(lVar9 + -0x28) = *(undefined8 *)(lVar8 + -0x28);
        uVar7 = *(undefined8 *)(lVar8 + -0x30);
        *(undefined8 *)(lVar9 + -0x38) = uVar6;
        *(undefined8 *)(lVar9 + -0x30) = uVar7;
        *(undefined8 *)(lVar9 + -0x40) = uVar4;
        pcVar5 = *(code **)(lVar8 + -0x38);
        if (pcVar5 != (code *)0x0) {
          *(undefined8 *)(lVar8 + -0x30) = 0;
          *(undefined8 *)(lVar8 + -0x28) = 0;
          *(undefined8 *)(lVar8 + -0x40) = 0;
          *(undefined8 *)(lVar8 + -0x38) = 0;
          (*pcVar5)(lVar8 + -0x20);
        }
      }
      lVar8 = lVar8 + -0x40;
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      }
      lVar9 = param_2[1] + -0x40;
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


