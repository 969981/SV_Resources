/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ee53dc; name: FUN_00ee53dc
 */


void FUN_00ee53dc(long *param_1,void *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  void *local_70;
  void *local_68;
  long local_60;
  long *local_58;
  
  plVar6 = param_1 + 3;
  lVar2 = FUN_0271c070(param_1,(param_1[1] - *param_1 >> 4) * -0x5555555555555555 + 1);
  lVar8 = *param_1;
  lVar4 = param_1[1];
  local_60 = 0;
  lVar3 = 0;
  local_58 = plVar6;
  if ((lVar2 != 0) &&
     (lVar3 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,lVar2 * 0x30,0x10), lVar3 == 0)
     ) {
    (**(code **)(*(long *)*plVar6 + 0xe8))((long *)*plVar6);
  }
  pvVar7 = (void *)(lVar3 + (lVar4 - lVar8 >> 4) * 0x10);
  local_60 = lVar3 + lVar2 * 0x30;
  lVar8 = *plVar6;
  local_70 = pvVar7;
  local_68 = pvVar7;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 == 0) {
    memcpy(pvVar7,param_2,0x30);
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    memcpy(pvVar7,param_2,0x30);
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    pvVar7 = local_68;
  }
  local_68 = (void *)((long)pvVar7 + 0x30);
  FUN_00eda840(plVar6,*param_1,param_1[1],&local_70);
  pvVar7 = (void *)*param_1;
  lVar8 = param_1[1];
  *param_1 = (long)local_70;
  param_1[1] = (long)local_68;
  lVar4 = param_1[2];
  param_1[2] = local_60;
  local_68 = (void *)lVar8;
  if (lVar8 - (long)pvVar7 != 0) {
    local_68 = (void *)(lVar8 + (((lVar8 - (long)pvVar7) - 0x30U) / 0x30 ^ 0xffffffffffffffff) *
                                0x30);
  }
  if (pvVar7 != (void *)0x0) {
    lVar8 = lVar4 - (long)pvVar7;
    plVar6 = (long *)*local_58;
    local_70 = pvVar7;
    local_60 = lVar4;
    uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar5 & 1) != 0) && (lVar4 = FUN_00c4e600(), 0 < *(int *)(lVar4 + 0x12c8))) {
      FUN_00c48fe8(plVar6,pvVar7,lVar8,0x10);
      return;
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,pvVar7,lVar8,0x10);
  }
  return;
}


