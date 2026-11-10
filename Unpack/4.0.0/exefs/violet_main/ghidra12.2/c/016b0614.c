/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016b0614; name: FUN_016b0614
 */


void FUN_016b0614(long *param_1,ulong param_2)

{
  void *pvVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  void *__s;
  long *plVar5;
  long lVar6;
  long lVar7;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long *local_68;
  
  __s = (void *)param_1[1];
  if ((ulong)((param_1[2] - (long)__s >> 4) * -0x2c8590b21642c859) < param_2) {
    plVar5 = param_1 + 3;
    lVar3 = FUN_016b0930(param_1,param_2 + ((long)__s - *param_1 >> 4) * -0x2c8590b21642c859);
    lVar7 = *param_1;
    lVar6 = param_1[1];
    local_70 = 0;
    local_68 = plVar5;
    if (lVar3 == 0) {
      local_88 = 0;
    }
    else {
      local_88 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,lVar3 * 0x170,8);
      if (local_88 == 0) {
        (**(code **)(*(long *)*plVar5 + 0xe8))();
      }
    }
    local_80 = local_88 + (lVar6 - lVar7 >> 4) * 0x10;
    local_70 = local_88 + lVar3 * 0x170;
    local_78 = local_80;
    FUN_016b0994(&local_88,param_2);
    lVar7 = *param_1;
    lVar6 = param_1[1];
    if (lVar6 == lVar7) {
      lVar3 = local_80;
      lVar6 = lVar7;
    }
    else {
      lVar3 = local_80 + -0x170;
      FUN_01547480(plVar5,lVar3,lVar6 + -0x170);
      if (lVar6 + -0x170 != lVar7) {
        do {
          lVar3 = lVar3 + -0x170;
          FUN_01547480(plVar5,lVar3,lVar6 + -0x2e0);
          lVar6 = lVar6 + -0x170;
        } while (lVar7 + 0x170 != lVar6);
      }
      lVar7 = *param_1;
      lVar6 = param_1[1];
    }
    *param_1 = lVar3;
    param_1[1] = local_78;
    lVar3 = param_1[2];
    param_1[2] = local_70;
    local_78 = lVar6;
    if (lVar6 - lVar7 != 0) {
      local_78 = lVar6 + (((lVar6 - lVar7) - 0x170U) / 0x170 ^ 0xffffffffffffffff) * 0x170;
    }
    if (lVar7 != 0) {
      lVar6 = lVar3 - lVar7;
      plVar5 = (long *)*local_68;
      local_88 = lVar7;
      local_80 = lVar7;
      local_70 = lVar3;
      uVar4 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar4 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar7,lVar6,8);
      }
      else {
        FUN_00c48fe8(plVar5,lVar7,lVar6,8);
      }
    }
  }
  else {
    lVar7 = param_2 * 0x170;
    pvVar1 = (void *)((long)__s + lVar7);
    do {
      lVar6 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar3 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar3 == 0) {
        memset(__s,0,0x170);
      }
      else {
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar6;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        memset(__s,0,0x170);
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      }
      __s = (void *)((long)__s + 0x170);
      lVar7 = lVar7 + -0x170;
    } while (lVar7 != 0);
    param_1[1] = (long)pvVar1;
  }
  return;
}


