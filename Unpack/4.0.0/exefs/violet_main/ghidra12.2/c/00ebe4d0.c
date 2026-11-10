/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ebe4d0; name: FUN_00ebe4d0
 */


void FUN_00ebe4d0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  lVar9 = param_2[3];
  lVar3 = param_2[4];
  lVar1 = param_2[5];
  lVar4 = param_2[6];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = lVar1;
  param_1[6] = lVar4;
  param_1[3] = lVar9;
  param_1[4] = lVar3;
  lVar9 = param_2[1] - *param_2;
  if (lVar9 != 0) {
    uVar10 = param_1[4];
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    if (uVar10 < (ulong)(lVar9 >> 2)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar8 = (undefined4 *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar9,4);
    if (puVar8 == (undefined4 *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
    *param_1 = puVar8;
    param_1[1] = puVar8;
    param_1[2] = puVar8 + (lVar9 >> 2);
    puVar6 = PTR_LAB_047d3900;
    puVar5 = (undefined4 *)param_2[1];
    for (puVar2 = (undefined4 *)*param_2; puVar2 != puVar5; puVar2 = puVar2 + 1) {
      uVar11 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar6,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar9 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar9 == 0) {
        *puVar8 = *puVar2;
      }
      else {
        if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar11;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        *puVar8 = *puVar2;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      }
      puVar8 = puVar8 + 1;
    }
    param_1[1] = puVar8;
  }
  return;
}


