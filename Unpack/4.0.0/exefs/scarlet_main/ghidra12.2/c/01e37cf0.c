/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e37cf0; name: FUN_01e37cf0
 */


void FUN_01e37cf0(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *local_50;
  
  uVar7 = param_1[4];
  lVar9 = param_1[1] - *param_1 >> 7;
  uVar1 = lVar9 + 1;
  if (0x7ffffffffffffffe < uVar7) {
    uVar7 = 0x7fffffffffffffff;
  }
  if (uVar7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1;
  uVar5 = lVar4 >> 6;
  if (uVar1 <= uVar5) {
    uVar1 = uVar5;
  }
  plVar8 = param_1 + 3;
  if (uVar7 >> 1 <= (ulong)(lVar4 >> 7)) {
    uVar1 = uVar7;
  }
  if (uVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,uVar1 << 7,0x10);
    if (lVar4 == 0) {
      (**(code **)(*(long *)*plVar8 + 0xe8))((long *)*plVar8);
    }
  }
  lVar10 = lVar4 + lVar9 * 0x80;
  FUN_01e37bec(plVar8,lVar10,param_2);
  puVar2 = (undefined8 *)*param_1;
  local_50 = (undefined8 *)param_1[1];
  lVar9 = lVar10 + 0x80;
  if (local_50 == puVar2) {
    puVar6 = puVar2;
  }
  else {
    lVar10 = lVar10 + -0x80;
    FUN_0109bf70(plVar8,lVar10,local_50 + -0x10);
    if (local_50 + -0x10 != puVar2) {
      do {
        lVar10 = lVar10 + -0x80;
        FUN_0109bf70(plVar8,lVar10,local_50 + -0x20);
        local_50 = local_50 + -0x10;
      } while (puVar2 + 0x10 != local_50);
    }
    puVar6 = (undefined8 *)*param_1;
    puVar2 = (undefined8 *)param_1[1];
  }
  lVar12 = param_1[2];
  param_1[2] = lVar4 + uVar1 * 0x80;
  *param_1 = lVar10;
  param_1[1] = lVar9;
  if (puVar2 != puVar6) {
    puVar11 = puVar2 + -0x10;
    pcVar3 = (code *)puVar2[-0xf];
    if (pcVar3 != (code *)0x0) {
      puVar2[-0xe] = 0;
      puVar2[-0xd] = 0;
      *puVar11 = 0;
      puVar2[-0xf] = 0;
      (*pcVar3)(puVar2 + -0xc);
    }
    while (puVar2 = puVar11, puVar2 != puVar6) {
      pcVar3 = (code *)puVar2[-0xf];
      puVar11 = puVar2 + -0x10;
      if (pcVar3 != (code *)0x0) {
        puVar2[-0xe] = 0;
        puVar2[-0xd] = 0;
        puVar2[-0x10] = 0;
        puVar2[-0xf] = 0;
        (*pcVar3)(puVar2 + -0xc);
      }
    }
  }
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  plVar8 = (long *)*plVar8;
  uVar1 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if (((uVar1 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01e37ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x18))(plVar8,puVar6,lVar12 - (long)puVar6,0x10);
    return;
  }
  FUN_00c48fe8(plVar8,puVar6,lVar12 - (long)puVar6,0x10);
  return;
}


