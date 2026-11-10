/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c10df8; name: FUN_00c10df8
 */


void FUN_00c10df8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar7;
  undefined8 *puVar6;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  long local_30;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar3 = param_2[1];
    uVar8 = param_2[2];
    *puVar2 = *param_2;
    puVar2[1] = uVar3;
    puVar2[2] = uVar8;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_1[1] = (long)(puVar2 + 3);
  }
  else {
    lVar4 = ((long)puVar2 - *param_1 >> 3) * -0x5555555555555555;
    uVar1 = lVar4 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar9 = lVar5 * 0x5555555555555556;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar1 = 0xaaaaaaaaaaaaaaa;
    }
    FUN_01f6e248(&local_48,uVar1,lVar4,param_1 + 2);
    uVar3 = *param_2;
    uVar8 = param_2[2];
    local_38[1] = param_2[1];
    local_38[2] = uVar8;
    *local_38 = uVar3;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar2 = local_38 + 3;
    local_38 = (undefined8 *)*param_1;
    if ((undefined8 *)param_1[1] == local_38) {
      local_48 = local_38;
    }
    else {
      puVar6 = (undefined8 *)param_1[1];
      do {
        puVar7 = puVar6 + -3;
        uVar3 = puVar6[-2];
        uVar8 = puVar6[-1];
        *(undefined8 *)((long)local_40 + -0x18) = *puVar7;
        *(undefined8 *)((long)local_40 + -0x10) = uVar3;
        *(undefined8 *)((long)local_40 + -8) = uVar8;
        *puVar7 = 0;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        local_40 = (undefined8 *)((long)local_40 + -0x18);
        puVar6 = puVar7;
      } while (local_38 != puVar7);
      local_38 = (undefined8 *)param_1[1];
      local_48 = (undefined8 *)*param_1;
    }
    *param_1 = (long)local_40;
    param_1[1] = (long)puVar2;
    lVar4 = param_1[2];
    param_1[2] = local_30;
    local_40 = local_48;
    local_30 = lVar4;
    FUN_01f6e36c(&local_48);
  }
  return;
}


