/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0220b074; name: FUN_0220b074
 */


void FUN_0220b074(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  
  uVar5 = param_1[4];
  lVar9 = param_1[1] - *param_1 >> 7;
  uVar1 = lVar9 + 1;
  if (0x7ffffffffffffffe < uVar5) {
    uVar5 = 0x7fffffffffffffff;
  }
  if (uVar5 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - *param_1;
  uVar4 = lVar3 >> 6;
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  plVar6 = param_1 + 3;
  if (uVar5 >> 1 <= (ulong)(lVar3 >> 7)) {
    uVar1 = uVar5;
  }
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,uVar1 << 7,0x10);
    if (lVar3 == 0) {
      (**(code **)(*(long *)*plVar6 + 0xe8))();
    }
  }
  lVar10 = lVar3 + lVar9 * 0x80;
  FUN_0220af74(plVar6,lVar10,param_2);
  puVar8 = (undefined8 *)*param_1;
  puVar11 = (undefined8 *)param_1[1];
  lVar9 = lVar10 + 0x80;
  if (puVar11 == puVar8) {
    puVar11 = puVar8;
  }
  else {
    lVar10 = lVar10 + -0x80;
    FUN_015385dc(plVar6,lVar10,puVar11 + -0x10);
    if (puVar11 + -0x10 != puVar8) {
      do {
        lVar10 = lVar10 + -0x80;
        FUN_015385dc(plVar6,lVar10,puVar11 + -0x20);
        puVar11 = puVar11 + -0x10;
      } while (puVar8 + 0x10 != puVar11);
    }
    puVar8 = (undefined8 *)*param_1;
    puVar11 = (undefined8 *)param_1[1];
  }
  *param_1 = lVar10;
  param_1[1] = lVar9;
  lVar9 = param_1[2];
  param_1[2] = lVar3 + uVar1 * 0x80;
  if (puVar11 != puVar8) {
    pcVar2 = (code *)puVar11[-0xf];
    puVar7 = puVar11 + -0x10;
    if (pcVar2 != (code *)0x0) {
      puVar11[-0xe] = 0;
      puVar11[-0xd] = 0;
      *puVar7 = 0;
      puVar11[-0xf] = 0;
      (*pcVar2)(puVar11 + -0xc);
    }
    while (puVar11 = puVar7, puVar11 != puVar8) {
      pcVar2 = (code *)puVar11[-0xf];
      puVar7 = puVar11 + -0x10;
      if (pcVar2 != (code *)0x0) {
        puVar11[-0xe] = 0;
        puVar11[-0xd] = 0;
        puVar11[-0x10] = 0;
        puVar11[-0xf] = 0;
        (*pcVar2)(puVar11 + -0xc);
      }
    }
  }
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
  plVar6 = (long *)*plVar6;
  uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if (((uVar1 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x0220b228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x18))(plVar6,puVar8,lVar9 - (long)puVar8,0x10);
    return;
  }
  FUN_00c48fe8(plVar6,puVar8,lVar9 - (long)puVar8,0x10);
  return;
}


