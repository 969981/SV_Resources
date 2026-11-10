/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029d5a74; name: FUN_029d5a74
 */


void FUN_029d5a74(long *param_1,undefined2 *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined2 *puVar8;
  undefined2 *local_60;
  undefined2 *local_58;
  long local_50;
  long *local_48;
  
  plVar6 = param_1 + 3;
  lVar1 = FUN_029d5c30(param_1,(param_1[1] - *param_1 >> 1) + 1);
  lVar4 = *param_1;
  lVar7 = param_1[1];
  local_50 = 0;
  lVar2 = 0;
  local_48 = plVar6;
  if ((lVar1 != 0) &&
     (lVar2 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,lVar1 << 1,2), lVar2 == 0)) {
    (**(code **)(*(long *)*plVar6 + 0xe8))((long *)*plVar6);
  }
  puVar8 = (undefined2 *)(lVar2 + (lVar7 - lVar4 >> 1) * 2);
  local_50 = lVar2 + lVar1 * 2;
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
  FUN_029d5c7c(plVar6,*param_1,param_1[1],&local_60);
  puVar8 = (undefined2 *)*param_1;
  lVar4 = param_1[1];
  *param_1 = (long)local_60;
  param_1[1] = (long)local_58;
  lVar7 = param_1[2];
  param_1[2] = local_50;
  local_58 = (undefined2 *)lVar4;
  if (lVar4 - (long)puVar8 != 0) {
    local_58 = (undefined2 *)(lVar4 + ((lVar4 - (long)puVar8) - 2U >> 1 ^ 0xffffffffffffffff) * 2);
  }
  if (puVar8 != (undefined2 *)0x0) {
    lVar4 = lVar7 - (long)puVar8;
    plVar6 = (long *)*local_48;
    local_60 = puVar8;
    local_50 = lVar7;
    uVar5 = FUN_00c4e564(plVar6);
    if ((uVar5 & 1) == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6,puVar8,lVar4,2);
    }
    else {
      FUN_00c48fe8(plVar6,puVar8,lVar4,2);
    }
  }
  return;
}


