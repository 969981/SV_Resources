/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dd3980; name: FUN_00dd3980
 */


void FUN_00dd3980(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  void *__src;
  void *pvVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined8 *local_48;
  
  __src = (void *)param_1[1];
  if (__src != (void *)*param_1) goto LAB_00dd39ac;
  uVar4 = param_1[2];
  uVar1 = param_1[3];
  if (uVar4 < uVar1) {
    lVar6 = (long)(uVar1 - uVar4) >> 3;
    lVar3 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      lVar3 = lVar6 + 1;
    }
    __n = uVar4 - (long)__src;
    pvVar8 = (void *)(uVar4 + (lVar3 >> 1) * 8);
    if (__n == 0) {
      __src = pvVar8;
    }
    else {
      pvVar8 = (void *)((long)pvVar8 - __n);
      memmove(pvVar8,__src,__n);
      uVar4 = param_1[2];
      __src = pvVar8;
    }
    param_1[1] = (long)__src;
    param_1[2] = uVar4 + (lVar3 >> 1) * 8;
    goto LAB_00dd39ac;
  }
  puVar11 = (undefined8 *)param_1[4];
  local_50 = 0;
  lVar6 = uVar1 - *param_1;
  lVar3 = lVar6 >> 2;
  if (lVar6 == 0) {
    lVar3 = 1;
  }
  local_48 = puVar11;
  local_68 = (**(code **)(*(long *)*puVar11 + 0x10))((long *)*puVar11,lVar3 << 3,0x10);
  if (local_68 == 0) {
    (**(code **)(*(long *)*puVar11 + 0xe8))();
  }
  local_60 = local_68 + (lVar3 + 3U >> 2) * 8;
  local_50 = local_68 + lVar3 * 8;
  local_58 = local_60;
  FUN_00dd443c(&local_68,param_1[1],param_1[2]);
  lVar3 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  *param_1 = local_68;
  param_1[1] = local_60;
  param_1[2] = local_58;
  lVar5 = param_1[3];
  param_1[3] = local_50;
  local_58 = lVar7;
  if (lVar7 - lVar6 != 0) {
    local_58 = lVar7 + ((lVar7 - lVar6) - 8U >> 3 ^ 0xffffffffffffffff) * 8;
  }
  local_68 = lVar3;
  local_60 = lVar6;
  local_50 = lVar5;
  if (lVar3 != 0) {
    plVar10 = (long *)*local_48;
    uVar4 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if ((uVar4 & 1) != 0) {
      lVar6 = FUN_00c4e600();
      if (0 < *(int *)(lVar6 + 0x12c8)) {
        FUN_00c48fe8(plVar10,lVar3,lVar5 - lVar3,0x10);
        goto LAB_00dd3b28;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar3,lVar5 - lVar3,0x10);
  }
LAB_00dd3b28:
  __src = (void *)param_1[1];
LAB_00dd39ac:
  uVar9 = *(undefined8 *)param_1[4];
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
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar9;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    *(undefined8 *)((long)__src + -8) = *param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  param_1[1] = param_1[1] + -8;
  return;
}


