/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02163a04; name: FUN_02163a04
 */


void FUN_02163a04(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  void *__src;
  void *pvVar7;
  long lVar8;
  long *plVar9;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long *local_48;
  
  __src = (void *)param_1[1];
  if (__src != (void *)*param_1) goto LAB_02163a30;
  uVar4 = param_1[2];
  uVar1 = param_1[3];
  if (uVar4 < uVar1) {
    lVar3 = (long)(uVar1 - uVar4) >> 3;
    lVar8 = lVar3 + 2;
    if (-1 < lVar3 + 1) {
      lVar8 = lVar3 + 1;
    }
    __n = uVar4 - (long)__src;
    pvVar7 = (void *)(uVar4 + (lVar8 >> 1) * 8);
    if (__n == 0) {
      __src = pvVar7;
    }
    else {
      pvVar7 = (void *)((long)pvVar7 - __n);
      memmove(pvVar7,__src,__n);
      uVar4 = param_1[2];
      __src = pvVar7;
    }
    param_1[1] = (long)__src;
    param_1[2] = uVar4 + (lVar8 >> 1) * 8;
    goto LAB_02163a30;
  }
  local_50 = 0;
  lVar3 = uVar1 - *param_1;
  lVar8 = lVar3 >> 2;
  if (lVar3 == 0) {
    lVar8 = 1;
  }
  local_48 = param_1 + 4;
  local_68 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],lVar8 << 3,8);
  if (local_68 == 0) {
    (**(code **)(*(long *)param_1[4] + 0xe8))();
  }
  local_60 = local_68 + (lVar8 + 3U >> 2) * 8;
  local_50 = local_68 + lVar8 * 8;
  local_58 = local_60;
  FUN_02163c98(&local_68,param_1[1],param_1[2]);
  lVar8 = *param_1;
  lVar3 = param_1[1];
  lVar6 = param_1[2];
  *param_1 = local_68;
  param_1[1] = local_60;
  param_1[2] = local_58;
  lVar5 = param_1[3];
  param_1[3] = local_50;
  local_58 = lVar6;
  if (lVar6 - lVar3 != 0) {
    local_58 = lVar6 + ((lVar6 - lVar3) - 8U >> 3 ^ 0xffffffffffffffff) * 8;
  }
  local_68 = lVar8;
  local_60 = lVar3;
  local_50 = lVar5;
  if (lVar8 != 0) {
    plVar9 = (long *)*local_48;
    uVar4 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if ((uVar4 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar9,lVar8,lVar5 - lVar8,8);
        goto LAB_02163b94;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,lVar5 - lVar8,8);
  }
LAB_02163b94:
  __src = (void *)param_1[1];
LAB_02163a30:
  lVar8 = param_1[4];
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 == 0) {
    *(undefined8 *)((long)__src + -8) = *param_2;
  }
  else {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    *(undefined8 *)((long)__src + -8) = *param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  param_1[1] = param_1[1] + -8;
  return;
}


