/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d24d7c; name: FUN_01d24d7c
 */


void FUN_01d24d7c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  long local_50;
  long *plStack_48;
  
  if ((ulong)param_1[2] <= (ulong)param_1[1]) {
    plVar1 = param_1 + 3;
    lVar4 = FUN_01d24f40(param_1,(param_1[1] - *param_1 >> 3) + 1);
    lVar3 = *param_1;
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
    puVar5 = (undefined8 *)(local_68 + (lVar6 - lVar3 >> 3) * 8);
    local_50 = local_68 + lVar4 * 8;
    lVar6 = *plVar1;
    puStack_60 = puVar5;
    local_58 = puVar5;
    puVar2 = (undefined4 *)FUN_01053840();
    lVar3 = nn::os::GetTlsValue(*puVar2);
    if (lVar3 == 0) {
      *puVar5 = *param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar6;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      *puVar5 = *param_2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    local_58 = local_58 + 1;
    FUN_012afc8c(param_1,&local_68);
    FUN_012afcf4(&local_68);
    return;
  }
  puVar5 = (undefined8 *)param_1[1];
  lVar6 = param_1[3];
  puVar2 = (undefined4 *)FUN_01053840();
  lVar3 = nn::os::GetTlsValue(*puVar2);
  if (lVar3 == 0) {
    *puVar5 = *param_2;
  }
  else {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar6;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    *puVar5 = *param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  param_1[1] = (long)(puVar5 + 1);
  return;
}


