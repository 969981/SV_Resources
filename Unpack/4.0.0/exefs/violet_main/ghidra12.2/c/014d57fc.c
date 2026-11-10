/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014d57fc; name: FUN_014d57fc
 */


void FUN_014d57fc(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar1 = param_2[3];
  lVar2 = param_2[4];
  lVar5 = param_2[5];
  lVar8 = param_2[6];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = lVar5;
  param_1[6] = lVar8;
  param_1[3] = lVar1;
  param_1[4] = lVar2;
  lVar1 = param_2[1] - *param_2;
  if (lVar1 != 0) {
    uVar7 = param_1[4];
    if (0x7ffffffffffffffe < uVar7) {
      uVar7 = 0x7fffffffffffffff;
    }
    if (uVar7 < (ulong)(lVar1 >> 6)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar1,8);
    if (lVar5 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
    *param_1 = lVar5;
    param_1[1] = lVar5;
    param_1[2] = lVar5 + (lVar1 >> 6) * 0x40;
    puVar3 = PTR_LAB_047d3900;
    lVar2 = param_2[1];
    for (lVar1 = *param_2; lVar1 != lVar2; lVar1 = lVar1 + 0x40) {
      lVar8 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar3,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar6 == 0) {
        FUN_014dbcf8(lVar5,lVar1);
        *(undefined4 *)(lVar5 + 0x38) = *(undefined4 *)(lVar1 + 0x38);
      }
      else {
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar8;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        FUN_014dbcf8(lVar5,lVar1);
        *(undefined4 *)(lVar5 + 0x38) = *(undefined4 *)(lVar1 + 0x38);
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      }
      lVar5 = lVar5 + 0x40;
    }
    param_1[1] = lVar5;
  }
  return;
}


