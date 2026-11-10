/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010c3210; name: FUN_010c3210
 */


void FUN_010c3210(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  size_t __n;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  void *__src;
  long lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  
  if (param_1[2] == param_1[3]) {
    pvVar7 = (void *)*param_1;
    __src = (void *)param_1[1];
    if (__src < pvVar7 || (long)__src - (long)pvVar7 == 0) {
      lVar5 = param_1[3] - (long)pvVar7;
      uVar10 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar10 = 1;
      }
      uVar3 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],uVar10 << 3,8);
      if (uVar3 == 0) {
        (**(code **)(*(long *)param_1[4] + 0xe8))();
      }
      puVar1 = (undefined8 *)(uVar3 + (uVar10 >> 2) * 8);
      puVar8 = (undefined8 *)param_1[1];
      lVar5 = param_1[2] - (long)puVar8;
      if (lVar5 == 0) {
        puVar8 = puVar1;
      }
      else {
        lVar6 = (lVar5 >> 3) << 3;
        puVar11 = puVar1;
        do {
          uVar13 = param_1[4];
          if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar4 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar4 == 0) {
            *puVar11 = *puVar8;
          }
          else {
            if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_010c3518;
            *(ulong *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar13;
            *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
            *puVar11 = *puVar8;
            *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
          }
          puVar8 = puVar8 + 1;
          lVar6 = lVar6 + -8;
          puVar11 = puVar11 + 1;
        } while (lVar6 != 0);
        puVar8 = (undefined8 *)((long)puVar1 + lVar5);
      }
      uVar9 = *param_1;
      param_1[2] = (ulong)puVar8;
      uVar13 = param_1[3];
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[3] = uVar3 + uVar10 * 8;
      if (uVar9 != 0) {
        plVar12 = (long *)param_1[4];
        uVar10 = (**(code **)(*plVar12 + 0xf8))(plVar12);
        if ((uVar10 & 1) != 0) {
          lVar5 = FUN_00c4e600();
          if (0 < *(int *)(lVar5 + 0x12c8)) {
            FUN_00c48fe8(plVar12,uVar9,uVar13 - uVar9,8);
            goto LAB_010c3428;
          }
        }
        (**(code **)(*plVar12 + 0x18))(plVar12,uVar9,uVar13 - uVar9,8);
      }
    }
    else {
      lVar6 = (long)__src - (long)pvVar7 >> 3;
      lVar5 = lVar6 + 2;
      if (-1 < lVar6 + 1) {
        lVar5 = lVar6 + 1;
      }
      __n = param_1[2] - (long)__src;
      pvVar7 = (void *)((long)__src + (lVar5 >> 1) * -8);
      if (__n != 0) {
        memmove(pvVar7,__src,__n);
        __src = (void *)param_1[1];
      }
      param_1[1] = (ulong)((long)__src + (lVar5 >> 1) * -8);
      param_1[2] = (long)pvVar7 + __n;
    }
  }
LAB_010c3428:
  puVar8 = (undefined8 *)param_1[2];
  uVar10 = param_1[4];
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    *puVar8 = *param_2;
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_010c3518:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(ulong *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *puVar8 = *param_2;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  param_1[2] = param_1[2] + 8;
  return;
}


