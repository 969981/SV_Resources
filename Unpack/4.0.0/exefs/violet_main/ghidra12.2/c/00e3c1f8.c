/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e3c1f8; name: FUN_00e3c1f8
 */


void FUN_00e3c1f8(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar10 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[3];
  param_1[5] = param_3[2];
  param_1[6] = uVar3;
  param_1[3] = uVar10;
  param_1[4] = uVar2;
  if (param_2 != 0) {
    uVar8 = param_1[4];
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    if (uVar8 < param_2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = param_2 << 3;
    puVar6 = (undefined8 *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar9,8);
    if (puVar6 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
    puVar1 = puVar6 + param_2;
    *param_1 = puVar6;
    param_1[1] = puVar6;
    param_1[2] = puVar1;
    puVar4 = PTR_LAB_047d3900;
    do {
      uVar10 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar4,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar7 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar7 == 0) {
        *puVar6 = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar10;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        *puVar6 = 0;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      }
      puVar6 = puVar6 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
    param_1[1] = puVar1;
  }
  return;
}


