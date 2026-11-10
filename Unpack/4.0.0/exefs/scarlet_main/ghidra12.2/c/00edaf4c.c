/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00edaf4c; name: FUN_00edaf4c
 */


void FUN_00edaf4c(long *param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  void *__src;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  
  puVar1 = PTR_LAB_047d3900;
  puVar9 = (undefined8 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar9 >> 6) < param_2) {
    uVar7 = param_1[4];
    lVar12 = (long)puVar9 - *param_1 >> 6;
    uVar4 = param_2 + lVar12;
    if (0x7ffffffffffffffe < uVar7) {
      uVar7 = 0x7fffffffffffffff;
    }
    if (uVar7 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = param_1[2] - *param_1;
    uVar6 = lVar5 >> 5;
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    if (uVar7 >> 1 <= (ulong)(lVar5 >> 6)) {
      uVar4 = uVar7;
    }
    if (uVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar4 << 6,0x10);
      if (lVar5 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    puVar9 = (undefined8 *)(lVar5 + lVar12 * 0x40);
    lVar12 = param_2 << 6;
    puVar14 = puVar9 + param_2 * 8;
    puVar11 = puVar9;
    do {
      lVar13 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar3 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar3 == 0) {
        puVar11[6] = 0;
        puVar11[7] = 0;
        puVar11[4] = 0;
        puVar11[5] = 0;
        puVar11[2] = 0;
        puVar11[3] = 0;
        *puVar11 = 0;
        puVar11[1] = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00edb304;
        *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar13;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        puVar11[6] = 0;
        puVar11[7] = 0;
        puVar11[4] = 0;
        puVar11[5] = 0;
        puVar11[2] = 0;
        puVar11[3] = 0;
        *puVar11 = 0;
        puVar11[1] = 0;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      }
      lVar12 = lVar12 + -0x40;
      puVar11 = puVar11 + 8;
    } while (lVar12 != 0);
    pvVar10 = (void *)*param_1;
    __src = (void *)param_1[1];
    if (__src != pvVar10) {
      do {
        lVar12 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        puVar9 = puVar9 + -8;
        __src = (void *)((long)__src + -0x40);
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar13 == 0) {
          memcpy(puVar9,__src,0x40);
        }
        else {
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00edb304;
          *(long *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = lVar12;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          memcpy(puVar9,__src,0x40);
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
      } while (pvVar10 != __src);
      pvVar10 = (void *)*param_1;
    }
    lVar12 = param_1[2];
    *param_1 = (long)puVar9;
    param_1[1] = (long)puVar14;
    param_1[2] = lVar5 + uVar4 * 0x40;
    if (pvVar10 != (void *)0x0) {
      plVar8 = (long *)param_1[3];
      uVar4 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00edb0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x18))(plVar8,pvVar10,lVar12 - (long)pvVar10,0x10);
        return;
      }
      FUN_00c48fe8(plVar8,pvVar10,lVar12 - (long)pvVar10,0x10);
      return;
    }
  }
  else {
    puVar14 = puVar9;
    if (param_2 != 0) {
      puVar14 = puVar9 + param_2 * 8;
      lVar12 = param_2 << 6;
      do {
        lVar5 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar1,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar13 == 0) {
          puVar9[6] = 0;
          puVar9[7] = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          *puVar9 = 0;
          puVar9[1] = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_00edb304:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = lVar5;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          puVar9[6] = 0;
          puVar9[7] = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          *puVar9 = 0;
          puVar9[1] = 0;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
        puVar9 = puVar9 + 8;
        lVar12 = lVar12 + -0x40;
      } while (lVar12 != 0);
    }
    param_1[1] = (long)puVar14;
  }
  return;
}


