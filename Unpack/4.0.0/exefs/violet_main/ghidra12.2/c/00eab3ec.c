/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eab3ec; name: FUN_00eab3ec
 */


void FUN_00eab3ec(long *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  puVar2 = PTR_LAB_047d3900;
  lVar5 = *param_1;
  lVar6 = param_1[1];
  if (lVar6 == lVar5) {
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
      uVar7 = *(undefined8 *)(lVar6 + -0x38);
      *(undefined8 *)(lVar6 + -0x38) = 0;
      *(undefined8 *)(lVar9 + -0x38) = uVar7;
      *(undefined4 *)(lVar9 + -0x30) = *(undefined4 *)(lVar6 + -0x30);
      *(undefined8 *)(lVar9 + -0x28) = *(undefined8 *)(lVar6 + -0x28);
      *(undefined8 *)(lVar9 + -0x20) = *(undefined8 *)(lVar6 + -0x20);
      *(undefined8 *)(lVar9 + -0x18) = *(undefined8 *)(lVar6 + -0x18);
      uVar7 = *(undefined8 *)(lVar6 + -0x10);
      *(undefined8 *)(lVar6 + -0x10) = 0;
      *(undefined8 *)(lVar9 + -0x10) = uVar7;
      puVar1 = (undefined1 *)(lVar6 + -8);
      lVar6 = lVar6 + -0x38;
      *(undefined1 *)(lVar9 + -8) = *puVar1;
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      }
      lVar9 = param_2[1] + -0x38;
      param_2[1] = lVar9;
    } while (lVar5 != lVar6);
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


