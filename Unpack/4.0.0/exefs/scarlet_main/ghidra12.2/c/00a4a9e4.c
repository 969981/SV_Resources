/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a4a9e4; name: FUN_00a4a9e4
 */


void FUN_00a4a9e4(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  size_t __n;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  void *__dest;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 *puVar11;
  
  uVar10 = (long)param_3 - (long)param_2 >> 2;
  lVar5 = param_1[2];
  __dest = (void *)*param_1;
  lVar7 = lVar5 - (long)__dest;
  if (uVar10 <= (ulong)(lVar7 >> 2)) {
    puVar4 = (undefined4 *)((long)param_2 + (param_1[1] - (long)__dest));
    uVar6 = param_1[1] - (long)__dest >> 2;
    puVar1 = puVar4;
    if (uVar10 <= uVar6) {
      puVar1 = param_3;
    }
    __n = (long)puVar1 - (long)param_2;
    if (__n != 0) {
      memmove(__dest,param_2,__n);
    }
    puVar2 = PTR_LAB_047d3900;
    if (uVar6 < uVar10) {
      puVar11 = (undefined4 *)param_1[1];
      while (puVar1 != param_3) {
        uVar8 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar2,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 == 0) {
          *puVar11 = *puVar4;
        }
        else {
          if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00a4ad24;
          *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar8;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          *puVar11 = *puVar4;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        puVar11 = puVar11 + 1;
        puVar4 = puVar4 + 1;
        puVar1 = puVar4;
      }
      param_1[1] = puVar11;
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
      (**(code **)(*plVar9 + 0x18))(plVar9,__dest,lVar7,4);
    }
    else {
      FUN_00c48fe8(plVar9,__dest,lVar7,4);
    }
    lVar5 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  uVar6 = param_1[4];
  if (0x7ffffffffffffffe < uVar6) {
    uVar6 = 0x7fffffffffffffff;
  }
  if (uVar10 <= uVar6) {
    if (uVar10 <= (ulong)(lVar5 >> 1)) {
      uVar10 = lVar5 >> 1;
    }
    if (uVar6 >> 1 <= (ulong)(lVar5 >> 2)) {
      uVar10 = uVar6;
    }
    if (uVar10 <= uVar6) {
      puVar4 = (undefined4 *)
               (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar10 << 2,4);
      if (puVar4 == (undefined4 *)0x0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
      param_1[2] = puVar4 + uVar10;
      *param_1 = puVar4;
      param_1[1] = puVar4;
      puVar2 = PTR_LAB_047d3900;
      do {
        if (param_2 == param_3) {
          param_1[1] = puVar4;
          return;
        }
        uVar8 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar2,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 == 0) {
          *puVar4 = *param_2;
        }
        else {
          if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00a4ad24:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar8;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          *puVar4 = *param_2;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_length_error();
}


