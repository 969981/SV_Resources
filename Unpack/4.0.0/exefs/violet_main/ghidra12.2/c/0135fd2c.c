/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0135fd2c; name: FUN_0135fd2c
 */


void FUN_0135fd2c(long *param_1,void *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  void *pvVar12;
  long lVar13;
  
  pvVar12 = (void *)param_1[1];
  if (pvVar12 < (void *)param_1[2]) {
    lVar9 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 != 0) {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01360214;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar9;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    memcpy(pvVar12,param_2,0x3d);
    *(undefined8 *)((long)pvVar12 + 0x40) = *(undefined8 *)((long)param_2 + 0x40);
    *(undefined8 *)((long)pvVar12 + 0x48) = *(undefined8 *)((long)param_2 + 0x48);
    *(undefined8 *)((long)pvVar12 + 0x50) = *(undefined8 *)((long)param_2 + 0x50);
    plVar4 = *(long **)((long)param_2 + 0x58);
    *(long **)((long)pvVar12 + 0x58) = plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))();
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    param_1[1] = (long)pvVar12 + 0x60;
  }
  else {
    uVar10 = param_1[4];
    lVar9 = (long)pvVar12 - *param_1 >> 5;
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    uVar1 = lVar9 * -0x5555555555555555 + 1;
    if (uVar10 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = param_1[2] - *param_1 >> 5;
    uVar8 = lVar6 * 0x5555555555555556;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (uVar10 >> 1 <= (ulong)(lVar6 * -0x5555555555555555)) {
      uVar1 = uVar10;
    }
    if (uVar1 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 * 0x60,0x10);
      if (lVar6 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    lVar11 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_01360214:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar11;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    }
    pvVar12 = (void *)(lVar6 + lVar9 * 0x20);
    memcpy(pvVar12,param_2,0x3d);
    lVar9 = lVar6 + lVar9 * 0x20;
    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)((long)param_2 + 0x40);
    *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)((long)param_2 + 0x48);
    *(undefined8 *)(lVar9 + 0x50) = *(undefined8 *)((long)param_2 + 0x50);
    plVar4 = *(long **)((long)param_2 + 0x58);
    *(long **)(lVar9 + 0x58) = plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))();
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    lVar9 = *param_1;
    lVar11 = param_1[1];
    if (lVar11 == lVar9) {
      pvVar7 = pvVar12;
      lVar11 = lVar9;
    }
    else {
      lVar3 = 0;
      do {
        lVar13 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 != 0) {
          if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_01360214;
          *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar13;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        }
        lVar13 = lVar11 + lVar3;
        memcpy((void *)((long)pvVar12 + lVar3 + -0x60),(void *)(lVar13 + -0x60),0x3d);
        *(undefined8 *)((long)pvVar12 + lVar3 + -0x20) = *(undefined8 *)(lVar13 + -0x20);
        *(undefined8 *)((long)pvVar12 + lVar3 + -0x18) = *(undefined8 *)(lVar13 + -0x18);
        *(undefined8 *)((long)pvVar12 + lVar3 + -0x10) = *(undefined8 *)(lVar13 + -0x10);
        plVar4 = *(long **)(lVar13 + -8);
        *(long **)((long)pvVar12 + lVar3 + -8) = plVar4;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x18))();
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        lVar3 = lVar3 + -0x60;
      } while (lVar9 - lVar11 != lVar3);
      lVar9 = *param_1;
      lVar11 = param_1[1];
      pvVar7 = (void *)((long)pvVar12 + lVar3);
    }
    lVar3 = param_1[2];
    *param_1 = (long)pvVar7;
    param_1[1] = (long)pvVar12 + 0x60;
    param_1[2] = lVar6 + uVar1 * 0x60;
    if (lVar11 != lVar9) {
      if (*(long **)(lVar11 + -8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar11 + -8) + 0x20))();
      }
      if (lVar11 + -0x60 != lVar9) {
        if (*(long **)(lVar11 + -0x68) != (long *)0x0) {
          (**(code **)(**(long **)(lVar11 + -0x68) + 0x20))();
        }
        if (lVar11 + -0xc0 != lVar9) {
          do {
            if (*(long **)(lVar11 + -200) != (long *)0x0) {
              (**(code **)(**(long **)(lVar11 + -200) + 0x20))();
            }
            lVar11 = lVar11 + -0x60;
          } while (lVar9 + 0xc0 != lVar11);
        }
      }
    }
    if (lVar9 != 0) {
      plVar4 = (long *)param_1[3];
      uVar10 = (**(code **)(*plVar4 + 0xf8))(plVar4);
      if (((uVar10 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar4 + 0x18))(plVar4,lVar9,lVar3 - lVar9,0x10);
      }
      else {
        FUN_00c48fe8(plVar4,lVar9,lVar3 - lVar9,0x10);
      }
    }
  }
  return;
}


