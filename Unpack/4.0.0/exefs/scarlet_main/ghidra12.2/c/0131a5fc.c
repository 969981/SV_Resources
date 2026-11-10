/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0131a5fc; name: FUN_0131a5fc
 */


void FUN_0131a5fc(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar10 = param_2[3];
  lVar2 = param_2[4];
  lVar8 = param_2[5];
  lVar3 = param_2[6];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = lVar8;
  param_1[6] = lVar3;
  param_1[3] = lVar10;
  param_1[4] = lVar2;
  lVar10 = param_2[1] - *param_2;
  if (lVar10 != 0) {
    uVar9 = param_1[4];
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < (ulong)(lVar10 >> 3)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar7 = (undefined8 *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar10,8);
    if (puVar7 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
    *param_1 = (long)puVar7;
    param_1[1] = (long)puVar7;
    param_1[2] = (long)(puVar7 + (lVar10 >> 3));
    puVar5 = PTR_LAB_047d3900;
    puVar4 = (undefined8 *)param_2[1];
    for (puVar1 = (undefined8 *)*param_2; puVar1 != puVar4; puVar1 = puVar1 + 1) {
      lVar10 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar5,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar8 == 0) {
        *puVar7 = *puVar1;
      }
      else {
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar10;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        *puVar7 = *puVar1;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      }
      puVar7 = puVar7 + 1;
    }
    param_1[1] = (long)puVar7;
  }
  return;
}


