/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028ace78; name: FUN_028ace78
 */


void FUN_028ace78(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *__src;
  long lVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  size_t sVar9;
  
  lVar7 = param_1[2];
  sVar9 = (long)param_3 - (long)param_2;
  puVar5 = (undefined8 *)*param_1;
  uVar4 = ((long)sVar9 >> 3) * -0x5555555555555555;
  if (uVar4 <= (ulong)((lVar7 - (long)puVar5 >> 3) * -0x5555555555555555)) {
    uVar8 = (param_1[1] - (long)puVar5 >> 3) * -0x5555555555555555;
    __src = (undefined8 *)((long)param_2 + (param_1[1] - (long)puVar5));
    if (uVar4 <= uVar8) {
      __src = param_3;
    }
    for (; __src != param_2; param_2 = param_2 + 3) {
      *puVar5 = *param_2;
      puVar5[1] = param_2[1];
      *(undefined1 *)(puVar5 + 2) = *(undefined1 *)(param_2 + 2);
      puVar5 = puVar5 + 3;
    }
    if (uVar8 < uVar4) {
      pvVar3 = (void *)param_1[1];
      sVar9 = (long)param_3 - (long)__src;
      if (0 < (long)sVar9) {
        memcpy(pvVar3,__src,sVar9);
        pvVar3 = (void *)((long)pvVar3 + (sVar9 / 0x18) * 0x18);
      }
      param_1[1] = (long)pvVar3;
    }
    else {
      param_1[1] = (long)puVar5;
    }
    return;
  }
  lVar1 = tpidr_el0;
  if (puVar5 != (undefined8 *)0x0) {
    param_1[1] = (long)puVar5;
    plVar6 = *(long **)(lVar1 + 0x30);
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar8 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,puVar5,0,8);
    }
    else {
      FUN_00c48fe8(plVar6,puVar5,0,8);
    }
    param_1[1] = 0;
    param_1[2] = 0;
    lVar7 = 0;
    *param_1 = 0;
  }
  if (uVar4 < 0xaaaaaaaaaaaaaab) {
    uVar8 = (lVar7 >> 3) * 0x5555555555555556;
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    if (0x555555555555554 < (ulong)((lVar7 >> 3) * -0x5555555555555555)) {
      uVar4 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar4 < 0xaaaaaaaaaaaaaab) {
      plVar6 = *(long **)(lVar1 + 0x30);
      if (plVar6 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar6 = DAT_04859430;
        *(long **)(lVar1 + 0x30) = DAT_04859430;
      }
      pvVar3 = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar4 * 0x18,8);
      *param_1 = (long)pvVar3;
      param_1[1] = (long)pvVar3;
      param_1[2] = (long)((long)pvVar3 + uVar4 * 0x18);
      if (0 < (long)sVar9) {
        memcpy(pvVar3,param_2,sVar9);
        pvVar3 = (void *)((long)pvVar3 + (sVar9 / 0x18) * 0x18);
      }
      param_1[1] = (long)pvVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_length_error();
}


