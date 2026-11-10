/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e396cc; name: FUN_01e396cc
 */


void FUN_01e396cc(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *local_58;
  
  uVar6 = param_1[4];
  lVar10 = param_1[1] - *param_1 >> 6;
  uVar1 = lVar10 + 1;
  if (0x7ffffffffffffffe < uVar6) {
    uVar6 = 0x7fffffffffffffff;
  }
  if (uVar6 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - *param_1;
  uVar4 = lVar3 >> 5;
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  plVar7 = param_1 + 3;
  if (uVar6 >> 1 <= (ulong)(lVar3 >> 6)) {
    uVar1 = uVar6;
  }
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,uVar1 << 6,0x10);
    if (lVar3 == 0) {
      (**(code **)(*(long *)*plVar7 + 0xe8))((long *)*plVar7);
    }
  }
  lVar11 = lVar3 + lVar10 * 0x40;
  FUN_01e395cc(plVar7,lVar11,param_2);
  puVar2 = (undefined8 *)*param_1;
  local_58 = (undefined8 *)param_1[1];
  lVar10 = lVar11 + 0x40;
  if (local_58 == puVar2) {
    puVar9 = puVar2;
  }
  else {
    lVar11 = lVar11 + -0x40;
    FUN_011c4044(plVar7,lVar11,local_58 + -8);
    if (local_58 + -8 != puVar2) {
      do {
        lVar11 = lVar11 + -0x40;
        FUN_011c4044(plVar7,lVar11,local_58 + -0x10);
        local_58 = local_58 + -8;
      } while (puVar2 + 8 != local_58);
    }
    puVar9 = (undefined8 *)*param_1;
    puVar2 = (undefined8 *)param_1[1];
  }
  *param_1 = lVar11;
  param_1[1] = lVar10;
  lVar10 = param_1[2];
  param_1[2] = lVar3 + uVar1 * 0x40;
  if (puVar2 != puVar9) {
    pcVar5 = (code *)puVar2[-7];
    puVar8 = puVar2 + -8;
    if (pcVar5 != (code *)0x0) {
      puVar2[-6] = 0;
      puVar2[-5] = 0;
      *puVar8 = 0;
      puVar2[-7] = 0;
      (*pcVar5)(puVar2 + -4);
    }
    while (puVar2 = puVar8, puVar2 != puVar9) {
      pcVar5 = (code *)puVar2[-7];
      puVar8 = puVar2 + -8;
      if (pcVar5 != (code *)0x0) {
        puVar2[-6] = 0;
        puVar2[-5] = 0;
        puVar2[-8] = 0;
        puVar2[-7] = 0;
        (*pcVar5)(puVar2 + -4);
      }
    }
  }
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
  plVar7 = (long *)*plVar7;
  uVar1 = (**(code **)(*plVar7 + 0xf8))(plVar7);
  if (((uVar1 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01e3988c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x18))(plVar7,puVar9,lVar10 - (long)puVar9,0x10);
    return;
  }
  FUN_00c48fe8(plVar7,puVar9,lVar10 - (long)puVar9,0x10);
  return;
}


