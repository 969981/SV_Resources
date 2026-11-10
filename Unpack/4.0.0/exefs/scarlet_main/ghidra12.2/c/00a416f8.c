/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a416f8; name: FUN_00a416f8
 */


void * FUN_00a416f8(long *param_1,void *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  ulong uVar2;
  size_t __n;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  long local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  long local_70;
  long *local_68;
  
  if (0 < (long)param_4 - (long)param_3) {
    lVar12 = (long)param_4 - (long)param_3 >> 2;
    puVar11 = (undefined4 *)param_1[1];
    if (param_1[2] - (long)puVar11 >> 2 < lVar12) {
      lVar5 = *param_1;
      uVar6 = param_1[4];
      uVar2 = lVar12 + ((long)puVar11 - lVar5 >> 2);
      if (0x7ffffffffffffffe < uVar6) {
        uVar6 = 0x7fffffffffffffff;
      }
      if (uVar6 < uVar2) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar3 = param_1[2] - lVar5;
      uVar4 = lVar3 >> 1;
      if (uVar2 <= uVar4) {
        uVar2 = uVar4;
      }
      plVar8 = param_1 + 3;
      local_70 = 0;
      if (uVar6 >> 1 <= (ulong)(lVar3 >> 2)) {
        uVar2 = uVar6;
      }
      local_68 = plVar8;
      if (uVar2 == 0) {
        local_88 = 0;
      }
      else {
        local_88 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,uVar2 << 2,4);
        if (local_88 == 0) {
          (**(code **)(*(long *)*plVar8 + 0xe8))();
        }
      }
      puVar11 = (undefined4 *)(local_88 + ((long)param_2 - lVar5 >> 2) * 4);
      local_70 = local_88 + uVar2 * 4;
      puVar10 = puVar11 + lVar12;
      lVar12 = lVar12 * 4;
      local_80 = puVar11;
      local_78 = puVar11;
      while( true ) {
        lVar12 = lVar12 + -4;
        lVar5 = *plVar8;
        if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar3 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar3 == 0) {
          *puVar11 = *param_3;
        }
        else {
          if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00a41b98;
          *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar5;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          *puVar11 = *param_3;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        }
        if (lVar12 == 0) break;
        puVar11 = puVar11 + 1;
        param_3 = param_3 + 1;
        plVar8 = local_68;
      }
      local_78 = puVar10;
      param_2 = (void *)FUN_00a41ba4(param_1,&local_88,param_2);
      lVar12 = local_88;
      if ((long)local_78 - (long)local_80 != 0) {
        local_78 = local_78 + (((long)local_78 - (long)local_80) - 4U >> 2 ^ 0xffffffffffffffff);
      }
      if (local_88 != 0) {
        lVar5 = local_70 - local_88;
        plVar8 = (long *)*local_68;
        uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
        if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar8 + 0x18))(plVar8,lVar12,lVar5,4);
        }
        else {
          FUN_00c48fe8(plVar8,lVar12,lVar5,4);
        }
      }
    }
    else {
      lVar5 = (long)puVar11 - (long)param_2 >> 2;
      puVar10 = puVar11;
      if (lVar5 < lVar12) {
        puVar9 = param_3 + lVar5;
        if (puVar9 != param_4) {
          puVar7 = puVar9;
          do {
            lVar5 = param_1[3];
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar3 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar3 == 0) {
              *puVar10 = *puVar7;
            }
            else {
              if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00a41b98;
              *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar5;
              *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
              *puVar10 = *puVar7;
              *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
            }
            puVar7 = puVar7 + 1;
            puVar10 = puVar10 + 1;
          } while (param_4 != puVar7);
        }
        param_1[1] = (long)puVar10;
        param_4 = puVar9;
        if ((long)puVar11 - (long)param_2 < 1) {
          return param_2;
        }
      }
      puVar9 = puVar10 + -lVar12;
      puVar7 = puVar10;
      if (puVar9 < puVar11) {
        do {
          lVar5 = param_1[3];
          if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar3 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar3 == 0) {
            *puVar7 = *puVar9;
          }
          else {
            if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_00a41b98:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar5;
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
            *puVar7 = *puVar9;
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
          }
          puVar9 = puVar9 + 1;
          puVar7 = puVar7 + 1;
        } while (puVar9 < puVar11);
      }
      __n = (long)puVar10 - (long)((long)param_2 + lVar12 * 4);
      param_1[1] = (long)puVar7;
      if (__n != 0) {
        memmove(puVar10 + -((long)__n >> 2),param_2,__n);
      }
      if ((long)param_4 - (long)param_3 != 0) {
        memmove(param_2,param_3,(long)param_4 - (long)param_3);
      }
    }
  }
  return param_2;
}


