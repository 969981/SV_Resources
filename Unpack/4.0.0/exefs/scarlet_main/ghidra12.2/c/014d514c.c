/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014d514c; name: FUN_014d514c
 */


void FUN_014d514c(undefined8 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  size_t __n;
  undefined *puVar2;
  int iVar3;
  undefined2 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  void *__dest;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined2 *puVar12;
  
  uVar11 = (long)param_3 - (long)param_2 >> 1;
  uVar6 = param_1[2];
  __dest = (void *)*param_1;
  lVar8 = uVar6 - (long)__dest;
  if (uVar11 <= (ulong)(lVar8 >> 1)) {
    puVar4 = (undefined2 *)((long)param_2 + (param_1[1] - (long)__dest));
    uVar6 = param_1[1] - (long)__dest >> 1;
    puVar1 = puVar4;
    if (uVar11 <= uVar6) {
      puVar1 = param_3;
    }
    __n = (long)puVar1 - (long)param_2;
    if (__n != 0) {
      memmove(__dest,param_2,__n);
    }
    puVar2 = PTR_LAB_047d3900;
    if (uVar6 < uVar11) {
      puVar12 = (undefined2 *)param_1[1];
      while (puVar1 != param_3) {
        uVar10 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar2,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 == 0) {
          *puVar12 = *puVar4;
        }
        else {
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_014d5470;
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar10;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          *puVar12 = *puVar4;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        puVar12 = puVar12 + 1;
        puVar4 = puVar4 + 1;
        puVar1 = puVar4;
      }
      param_1[1] = puVar12;
    }
    else {
      param_1[1] = (long)__dest + __n;
    }
    return;
  }
  if (__dest != (void *)0x0) {
    plVar9 = (long *)param_1[3];
    param_1[1] = __dest;
    uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,__dest,lVar8,1);
    }
    else {
      FUN_00c48fe8(plVar9,__dest,lVar8,1);
    }
    uVar6 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  uVar7 = param_1[4];
  if (0x7ffffffffffffffe < uVar7) {
    uVar7 = 0x7fffffffffffffff;
  }
  if (uVar11 <= uVar7) {
    if (uVar11 <= uVar6) {
      uVar11 = uVar6;
    }
    if (uVar7 >> 1 <= (ulong)((long)uVar6 >> 1)) {
      uVar11 = uVar7;
    }
    if (uVar11 <= uVar7) {
      puVar4 = (undefined2 *)
               (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar11 << 1,1);
      if (puVar4 == (undefined2 *)0x0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
      param_1[2] = puVar4 + uVar11;
      *param_1 = puVar4;
      param_1[1] = puVar4;
      puVar2 = PTR_LAB_047d3900;
      do {
        if (param_2 == param_3) {
          param_1[1] = puVar4;
          return;
        }
        uVar10 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar2,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 == 0) {
          *puVar4 = *param_2;
        }
        else {
          if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_014d5470:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar10;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          *puVar4 = *param_2;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_length_error();
}


