/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d566e8; name: FUN_00d566e8
 */


void FUN_00d566e8(long *param_1,ulong param_2,long *param_3)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar7 = *param_3;
  lVar4 = param_3[1];
  lVar1 = param_3[3];
  param_1[5] = param_3[2];
  param_1[6] = lVar1;
  param_1[3] = lVar7;
  param_1[4] = lVar4;
  if (param_2 != 0) {
    uVar6 = param_1[4];
    if (0x7ffffffffffffffe < uVar6) {
      uVar6 = 0x7fffffffffffffff;
    }
    if (uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = param_2 * 0x18;
    lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar7,8);
    if (lVar4 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
    lVar1 = lVar4 + param_2 * 0x18;
    *param_1 = lVar4;
    param_1[1] = lVar4;
    puVar8 = (undefined1 *)(lVar4 + 0x10);
    param_1[2] = lVar1;
    puVar2 = PTR_LAB_047d3900;
    do {
      lVar4 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar2,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar5 == 0) {
        puVar8[-0x10] = 0;
        *puVar8 = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar4;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        puVar8[-0x10] = 0;
        *puVar8 = 0;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      lVar7 = lVar7 + -0x18;
      puVar8 = puVar8 + 0x18;
    } while (lVar7 != 0);
    param_1[1] = lVar1;
  }
  return;
}


