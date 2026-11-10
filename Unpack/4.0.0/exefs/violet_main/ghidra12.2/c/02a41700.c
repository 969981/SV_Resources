/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a41700; name: FUN_02a41700
 */


void FUN_02a41700(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *param_1;
  if (param_1[1] == lVar9) {
    lVar6 = param_2[1];
  }
  else {
    lVar6 = param_2[1];
    lVar8 = param_1[1];
    do {
      lVar7 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar5 != 0) {
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar7;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      }
      lVar7 = lVar8 + -0x48;
      *(undefined8 *)(lVar6 + -0x48) = 0;
      *(undefined8 *)(lVar6 + -0x40) = 0;
      FUN_00dbd160((undefined8 *)(lVar6 + -0x48),lVar7);
      *(undefined8 *)(lVar6 + -0x30) = 0;
      *(undefined8 *)(lVar6 + -0x28) = 0;
      *(undefined8 *)(lVar6 + -0x38) = 0;
      uVar1 = *(undefined8 *)(lVar8 + -0x20);
      uVar2 = *(undefined8 *)(lVar8 + -0x18);
      uVar3 = *(undefined8 *)(lVar8 + -8);
      *(undefined8 *)(lVar6 + -0x10) = *(undefined8 *)(lVar8 + -0x10);
      *(undefined8 *)(lVar6 + -8) = uVar3;
      *(undefined8 *)(lVar6 + -0x20) = uVar1;
      *(undefined8 *)(lVar6 + -0x18) = uVar2;
      *(undefined8 *)(lVar6 + -0x38) = *(undefined8 *)(lVar8 + -0x38);
      *(undefined8 *)(lVar6 + -0x30) = *(undefined8 *)(lVar8 + -0x30);
      *(undefined8 *)(lVar6 + -0x28) = *(undefined8 *)(lVar8 + -0x28);
      *(undefined8 *)(lVar8 + -0x38) = 0;
      *(undefined8 *)(lVar8 + -0x30) = 0;
      *(undefined8 *)(lVar8 + -0x28) = 0;
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      lVar6 = param_2[1] + -0x48;
      param_2[1] = lVar6;
      lVar8 = lVar7;
    } while (lVar9 != lVar7);
    lVar9 = *param_1;
  }
  *param_1 = lVar6;
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


