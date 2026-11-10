/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0188b3dc; name: FUN_0188b3dc
 */


void FUN_0188b3dc(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  lVar5 = param_1[1] - *param_1;
  if (lVar5 != 0) {
    if ((ulong)(lVar5 >> 3) < 2) {
      return;
    }
    FUN_021b9240(param_1,*param_1 + 8);
    return;
  }
  puVar2 = (undefined8 *)param_1[1];
  if ((undefined8 *)param_1[2] == puVar2) {
    plVar1 = param_1 + 3;
    lVar4 = FUN_0188b618(param_1,(param_1[2] - *param_1 >> 3) + 1);
    lVar5 = *param_1;
    lVar6 = param_1[1];
    local_50 = 0;
    plStack_48 = plVar1;
    if (lVar4 == 0) {
      local_68 = 0;
    }
    else {
      local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar4 << 3,8);
      if (local_68 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xe8))();
      }
    }
    local_60 = local_68 + (lVar6 - lVar5 >> 3) * 8;
    local_50 = local_68 + lVar4 * 8;
    local_58 = local_60;
    FUN_0188b668(&local_68);
    lVar5 = *param_1;
    lVar6 = param_1[1];
    if (lVar6 == lVar5) {
      lVar4 = local_60;
      lVar6 = lVar5;
    }
    else {
      lVar4 = local_60 + -8;
      FUN_01366a9c(plVar1,lVar4,lVar6 + -8);
      if (lVar6 + -8 != lVar5) {
        do {
          lVar4 = lVar4 + -8;
          FUN_01366a9c(plVar1,lVar4,lVar6 + -0x10);
          lVar6 = lVar6 + -8;
        } while (lVar5 + 8 != lVar6);
      }
      lVar5 = *param_1;
      lVar6 = param_1[1];
    }
    *param_1 = lVar4;
    param_1[1] = local_58;
    lVar4 = param_1[2];
    param_1[2] = local_50;
    local_68 = lVar5;
    local_60 = lVar5;
    local_58 = lVar6;
    local_50 = lVar4;
    FUN_0136442c(&local_68);
  }
  else {
    lVar5 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 == 0) {
      *puVar2 = 0;
    }
    else {
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar5;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar2 = 0;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar2 + 1);
  }
  return;
}


