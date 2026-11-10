/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0104c68c; name: FUN_0104c68c
 */


void FUN_0104c68c(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  lVar10 = param_2[3];
  lVar2 = param_2[4];
  lVar7 = param_2[5];
  lVar3 = param_2[6];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = lVar7;
  param_1[6] = lVar3;
  param_1[3] = lVar10;
  param_1[4] = lVar2;
  lVar10 = param_2[1] - *param_2;
  if (lVar10 != 0) {
    uVar9 = param_1[4];
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < (ulong)((lVar10 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar6 = (undefined8 *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar10,8);
    if (puVar6 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
    param_1[2] = (long)(puVar6 + (lVar10 >> 3));
    *param_1 = (long)puVar6;
    param_1[1] = (long)puVar6;
    puVar4 = (undefined8 *)param_2[1];
    for (puVar1 = (undefined8 *)*param_2; puVar1 != puVar4; puVar1 = puVar1 + 0xd) {
      lVar10 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar7 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar7 != 0) {
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar10;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      }
      *puVar6 = *puVar1;
      puVar6[1] = puVar1[1];
      puVar6[2] = puVar1[2];
      plVar8 = (long *)puVar1[3];
      puVar6[3] = plVar8;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x18))();
      }
      memcpy(puVar6 + 4,puVar1 + 4,0x48);
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      }
      puVar6 = puVar6 + 0xd;
    }
    param_1[1] = (long)puVar6;
  }
  return;
}


