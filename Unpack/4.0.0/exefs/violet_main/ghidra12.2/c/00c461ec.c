/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c461ec; name: FUN_00c461ec
 */


void FUN_00c461ec(ulong *param_1)

{
  size_t __n;
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *__src;
  long *plVar12;
  long *plVar13;
  ulong *puVar14;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  ulong *local_68;
  
  if (param_1[8] < 0x200) {
    uVar9 = (long)(param_1[2] - param_1[1]) >> 3;
    lVar8 = param_1[3] - *param_1;
    if ((ulong)(lVar8 >> 3) <= uVar9) {
      uVar7 = lVar8 >> 2;
      puVar14 = param_1 + 4;
      if (lVar8 == 0) {
        uVar7 = 1;
      }
      plVar2 = (long *)(**(code **)(*(long *)*puVar14 + 0x10))((long *)*puVar14,uVar7 << 3,8);
      if (plVar2 == (long *)0x0) {
        (**(code **)(*(long *)*puVar14 + 0xe8))();
      }
      plVar5 = plVar2 + uVar9;
      plVar11 = plVar2 + uVar7;
      lVar8 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,8);
      if (lVar8 == 0) {
        (**(code **)(*(long *)param_1[10] + 0xe8))();
      }
      plVar10 = plVar2;
      plVar13 = plVar11;
      if (uVar9 == uVar7) {
        if (plVar5 < plVar2 || (long)plVar5 - (long)plVar2 == 0) {
          local_70 = (long *)0x0;
          lVar3 = (long)plVar11 - (long)plVar2;
          uVar9 = lVar3 >> 2;
          if (lVar3 == 0) {
            uVar9 = 1;
          }
          local_68 = puVar14;
          local_88 = (long *)(**(code **)(*(long *)*puVar14 + 0x10))((long *)*puVar14,uVar9 << 3,8);
          if (local_88 == (long *)0x0) {
            (**(code **)(*(long *)*puVar14 + 0xe8))();
          }
          local_80 = local_88 + (uVar9 >> 2);
          local_70 = local_88 + uVar9;
          local_78 = local_80;
          FUN_00c46ac8(&local_88,plVar5,plVar5);
          plVar13 = local_70;
          plVar12 = local_78;
          __src = local_80;
          plVar10 = local_88;
          local_88 = plVar2;
          local_80 = plVar5;
          local_78 = plVar5;
          local_70 = plVar11;
          if (plVar2 != (long *)0x0) {
            plVar5 = (long *)*local_68;
            uVar9 = (**(code **)(*plVar5 + 0xf8))(plVar5);
            if (((uVar9 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
              (**(code **)(*plVar5 + 0x18))(plVar5,plVar2,lVar3,8);
            }
            else {
              FUN_00c48fe8(plVar5,plVar2,lVar3,8);
            }
          }
        }
        else {
          lVar3 = (long)plVar5 - (long)plVar2 >> 3;
          uVar9 = lVar3 + 2;
          if (-1 < lVar3 + 1) {
            uVar9 = lVar3 + 1;
          }
          __src = (long *)((long)plVar5 + (uVar9 & 0x3ffffffffffffffe) * -4);
          plVar12 = __src;
        }
      }
      else {
        __src = plVar5;
        plVar12 = plVar5;
      }
      uVar9 = *puVar14;
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar3 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar3 == 0) {
        *plVar12 = lVar8;
      }
      else {
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_00c46838:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(ulong *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar9;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        *plVar12 = lVar8;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      }
      uVar9 = param_1[2];
      plVar2 = plVar12 + 1;
      do {
        if (uVar9 == param_1[1]) {
          uVar7 = *param_1;
          *param_1 = (ulong)plVar10;
          param_1[1] = (ulong)__src;
          uVar9 = param_1[3];
          param_1[2] = (ulong)plVar2;
          param_1[3] = (ulong)plVar13;
          if (uVar7 == 0) {
            return;
          }
          plVar2 = (long *)*puVar14;
          uVar4 = (**(code **)(*plVar2 + 0xf8))(plVar2);
          if (((uVar4 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00c46408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar2 + 0x18))(plVar2,uVar7,uVar9 - uVar7,8);
            return;
          }
          FUN_00c48fe8(plVar2,uVar7,uVar9 - uVar7,8);
          return;
        }
        plVar11 = plVar10;
        local_90 = __src;
        plVar12 = plVar13;
        plVar5 = plVar2;
        if (__src == plVar10) {
          if (plVar2 < plVar13) {
            lVar8 = (long)plVar13 - (long)plVar2 >> 3;
            uVar7 = lVar8 + 2;
            if (-1 < lVar8 + 1) {
              uVar7 = lVar8 + 1;
            }
            __n = (long)plVar2 - (long)__src;
            plVar5 = (long *)((long)plVar2 + (uVar7 & 0x3ffffffffffffffe) * 4);
            local_90 = plVar5;
            if (__n != 0) {
              local_90 = (long *)((long)plVar5 - __n);
              memmove(local_90,__src,__n);
            }
          }
          else {
            lVar3 = (long)plVar13 - (long)plVar10;
            local_70 = (long *)0x0;
            lVar8 = lVar3 >> 2;
            if (lVar3 == 0) {
              lVar8 = 1;
            }
            local_68 = puVar14;
            plVar5 = (long *)(**(code **)(*(long *)*puVar14 + 0x10))((long *)*puVar14,lVar8 << 3,8);
            if (plVar5 == (long *)0x0) {
              (**(code **)(*(long *)*puVar14 + 0xe8))();
            }
            local_80 = plVar5 + (lVar8 + 3U >> 2);
            local_70 = plVar5 + lVar8;
            local_88 = plVar5;
            local_78 = local_80;
            FUN_00c46ac8(&local_88,__src,plVar2);
            plVar12 = local_70;
            plVar5 = local_78;
            plVar11 = local_88;
            local_90 = local_80;
            local_78 = plVar2;
            if ((long)plVar2 - (long)__src != 0) {
              local_78 = plVar2 + (((long)plVar2 - (long)__src) - 8U >> 3 ^ 0xffffffffffffffff);
            }
            local_88 = plVar10;
            local_80 = __src;
            local_70 = plVar13;
            if (plVar10 != (long *)0x0) {
              plVar2 = (long *)*local_68;
              uVar7 = (**(code **)(*plVar2 + 0xf8))(plVar2);
              if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
                (**(code **)(*plVar2 + 0x18))(plVar2,plVar10,lVar3,8);
              }
              else {
                FUN_00c48fe8(plVar2,plVar10,lVar3,8);
              }
            }
          }
        }
        uVar7 = *puVar14;
        __src = local_90 + -1;
        if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 == 0) {
          *__src = *(long *)(uVar9 - 8);
        }
        else {
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00c46838;
          *(ulong *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar7;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          *__src = *(long *)(uVar9 - 8);
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        uVar9 = uVar9 - 8;
        plVar10 = plVar11;
        plVar13 = plVar12;
        plVar2 = plVar5;
      } while( true );
    }
    if (param_1[3] != param_1[2]) {
      local_88 = (long *)(**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,8);
      if (local_88 == (long *)0x0) {
        (**(code **)(*(long *)param_1[10] + 0xe8))();
      }
      FUN_028fa5b0(param_1,&local_88);
      return;
    }
    local_88 = (long *)(**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,8);
    if (local_88 == (long *)0x0) {
      (**(code **)(*(long *)param_1[10] + 0xe8))();
    }
    FUN_028fa834(param_1,&local_88);
  }
  else {
    param_1[8] = param_1[8] - 0x200;
  }
  local_88 = *(long **)param_1[1];
  param_1[1] = (ulong)((undefined8 *)param_1[1] + 1);
  FUN_00c46850(param_1,&local_88);
  return;
}


