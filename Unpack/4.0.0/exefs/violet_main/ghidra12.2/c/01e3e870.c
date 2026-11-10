/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e3e870; name: FUN_01e3e870
 */


void FUN_01e3e870(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  
  lVar11 = param_2[3];
  lVar2 = param_2[4];
  lVar8 = param_2[5];
  lVar3 = param_2[6];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = lVar8;
  param_1[6] = lVar3;
  param_1[3] = lVar11;
  param_1[4] = lVar2;
  lVar11 = param_2[1] - *param_2;
  if (lVar11 != 0) {
    uVar10 = param_1[4];
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    if (uVar10 < (ulong)((lVar11 >> 3) * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar7 = (undefined8 *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar11,8);
    if (puVar7 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
    param_1[2] = (long)(puVar7 + (lVar11 >> 3));
    *param_1 = (long)puVar7;
    param_1[1] = (long)puVar7;
    puVar5 = PTR_LAB_047d3900;
    puVar4 = (undefined8 *)param_2[1];
    for (puVar1 = (undefined8 *)*param_2; puVar1 != puVar4; puVar1 = puVar1 + 5) {
      lVar11 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar5,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar8 != 0) {
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar11;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      }
      *puVar7 = *puVar1;
      puVar7[1] = puVar1[1];
      puVar7[2] = puVar1[2];
      plVar9 = (long *)puVar1[3];
      puVar7[3] = plVar9;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))();
      }
      *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(puVar1 + 4);
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      }
      puVar7 = puVar7 + 5;
    }
    param_1[1] = (long)puVar7;
  }
  return;
}


