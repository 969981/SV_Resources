/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ebe67c; name: FUN_00ebe67c
 */


void FUN_00ebe67c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  lVar10 = param_2[3];
  lVar3 = param_2[4];
  lVar1 = param_2[5];
  lVar4 = param_2[6];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = lVar1;
  param_1[6] = lVar4;
  param_1[3] = lVar10;
  param_1[4] = lVar3;
  lVar10 = param_2[1] - *param_2;
  if (lVar10 != 0) {
    uVar11 = param_1[4];
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < (ulong)((lVar10 >> 2) * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar9 = (undefined8 *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar10,4);
    if (puVar9 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
    param_1[2] = (long)puVar9 + (lVar10 >> 2) * 4;
    *param_1 = puVar9;
    param_1[1] = puVar9;
    puVar7 = PTR_LAB_047d3900;
    puVar5 = (undefined8 *)param_2[1];
    for (puVar2 = (undefined8 *)*param_2; puVar2 != puVar5;
        puVar2 = (undefined8 *)((long)puVar2 + 0x14)) {
      uVar12 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar7,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar10 == 0) {
        uVar12 = *puVar2;
        uVar6 = puVar2[1];
        *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(puVar2 + 2);
        *puVar9 = uVar12;
        puVar9[1] = uVar6;
      }
      else {
        if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar12;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        uVar12 = *puVar2;
        uVar6 = puVar2[1];
        *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(puVar2 + 2);
        *puVar9 = uVar12;
        puVar9[1] = uVar6;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      }
      puVar9 = (undefined8 *)((long)puVar9 + 0x14);
    }
    param_1[1] = puVar9;
  }
  return;
}


