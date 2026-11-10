/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013223fc; name: FUN_013223fc
 */


void FUN_013223fc(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_LAB_047d3900;
  lVar4 = *param_1;
  if (param_1[1] == lVar4) {
    lVar8 = param_2[1];
  }
  else {
    lVar8 = param_2[1];
    lVar6 = param_1[1];
    do {
      lVar7 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar1,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar3 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar3 != 0) {
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar7;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      }
      *(undefined8 *)(lVar8 + -0x38) = *(undefined8 *)(lVar6 + -0x38);
      *(undefined8 *)(lVar8 + -0x30) = *(undefined8 *)(lVar6 + -0x30);
      *(undefined8 *)(lVar8 + -0x28) = *(undefined8 *)(lVar6 + -0x28);
      *(undefined8 *)(lVar8 + -0x20) = *(undefined8 *)(lVar6 + -0x20);
      uVar5 = *(undefined8 *)(lVar6 + -0x18);
      *(undefined8 *)(lVar6 + -0x18) = 0;
      *(undefined8 *)(lVar8 + -0x18) = uVar5;
      lVar7 = lVar6 + -0x38;
      uVar5 = *(undefined8 *)(lVar6 + -8);
      *(undefined8 *)(lVar8 + -0x10) = *(undefined8 *)(lVar6 + -0x10);
      *(undefined8 *)(lVar8 + -8) = uVar5;
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      }
      lVar8 = param_2[1] + -0x38;
      param_2[1] = lVar8;
      lVar6 = lVar7;
    } while (lVar4 != lVar7);
    lVar4 = *param_1;
  }
  *param_1 = lVar8;
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


