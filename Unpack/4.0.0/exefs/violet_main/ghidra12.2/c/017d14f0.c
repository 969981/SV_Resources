/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017d14f0; name: FUN_017d14f0
 */


void FUN_017d14f0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *local_48;
  
  plVar6 = param_1 + 3;
  lVar1 = FUN_029f39b8(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar4 = *param_1;
  lVar7 = param_1[1];
  local_50 = 0;
  lVar2 = 0;
  local_48 = plVar6;
  if ((lVar1 != 0) &&
     (lVar2 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,lVar1 << 3,8), lVar2 == 0)) {
    (**(code **)(*(long *)*plVar6 + 0xe8))((long *)*plVar6);
  }
  puVar8 = (undefined8 *)(lVar2 + (lVar7 - lVar4 >> 3) * 8);
  local_50 = lVar2 + lVar1 * 8;
  lVar7 = *plVar6;
  local_60 = puVar8;
  local_58 = puVar8;
  puVar3 = (undefined4 *)FUN_01053840();
  lVar4 = nn::os::GetTlsValue(*puVar3);
  if (lVar4 == 0) {
    *puVar8 = *param_2;
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar7;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *puVar8 = *param_2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    puVar8 = local_58;
  }
  local_58 = puVar8 + 1;
  FUN_029f3908(plVar6,*param_1,param_1[1],&local_60);
  puVar8 = (undefined8 *)*param_1;
  lVar4 = param_1[1];
  *param_1 = (long)local_60;
  param_1[1] = (long)local_58;
  lVar7 = param_1[2];
  param_1[2] = local_50;
  local_58 = (undefined8 *)lVar4;
  if (lVar4 - (long)puVar8 != 0) {
    local_58 = (undefined8 *)(lVar4 + ((lVar4 - (long)puVar8) - 8U >> 3 ^ 0xffffffffffffffff) * 8);
  }
  if (puVar8 != (undefined8 *)0x0) {
    lVar4 = lVar7 - (long)puVar8;
    plVar6 = (long *)*local_48;
    local_60 = puVar8;
    local_50 = lVar7;
    uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar5 & 1) != 0) && (lVar7 = FUN_00c4e600(), 0 < *(int *)(lVar7 + 0x12c8))) {
      FUN_00c48fe8(plVar6,puVar8,lVar4,8);
      return;
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,puVar8,lVar4,8);
  }
  return;
}


