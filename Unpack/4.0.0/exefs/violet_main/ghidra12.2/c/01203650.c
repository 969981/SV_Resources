/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01203650; name: FUN_01203650
 */


void FUN_01203650(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar2 = PTR_LAB_047d3900;
  lVar5 = *param_1;
  lVar7 = param_1[1];
  if (lVar7 == lVar5) {
    lVar9 = param_2[1];
  }
  else {
    lVar9 = param_2[1];
    do {
      lVar8 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar2,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar4 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar4 != 0) {
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar8;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      }
      *(undefined8 *)(lVar9 + -0x30) = *(undefined8 *)(lVar7 + -0x30);
      *(undefined8 *)(lVar9 + -0x28) = *(undefined8 *)(lVar7 + -0x28);
      *(undefined8 *)(lVar9 + -0x20) = *(undefined8 *)(lVar7 + -0x20);
      uVar6 = *(undefined8 *)(lVar7 + -0x18);
      *(undefined8 *)(lVar7 + -0x18) = 0;
      *(undefined8 *)(lVar9 + -0x18) = uVar6;
      uVar6 = *(undefined8 *)(lVar7 + -0x10);
      puVar1 = (undefined4 *)(lVar7 + -8);
      lVar7 = lVar7 + -0x30;
      *(undefined4 *)(lVar9 + -8) = *puVar1;
      *(undefined8 *)(lVar9 + -0x10) = uVar6;
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      }
      lVar9 = param_2[1] + -0x30;
      param_2[1] = lVar9;
    } while (lVar5 != lVar7);
    lVar5 = *param_1;
  }
  *param_1 = lVar9;
  param_2[1] = lVar5;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}


