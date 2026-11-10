/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0039b364; name: FUN_0039b364
 */


long * FUN_0039b364(long *param_1,long *param_2)

{
  long *plVar1;
  size_t sVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_60;
  long *plStack_58;
  long *local_50;
  long local_48;
  long *plStack_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined2 local_34;
  undefined1 local_32;
  
  lVar4 = *param_1;
  plVar1 = (long *)param_1[1];
  lVar5 = (long)param_2 - lVar4 >> 4;
  if (plVar1 < (long *)param_1[2]) {
    plVar10 = param_2;
    if (param_2 == plVar1) {
      lVar4 = lVar4 + lVar5 * 0x10;
      param_2[3] = 0;
      param_2[2] = 0;
      param_2[5] = 0;
      param_2[4] = 0;
      param_2[1] = 0;
      *param_2 = 0;
      *(undefined8 *)(lVar4 + 0x10) = 0x7b2;
      *(undefined4 *)(lVar4 + 0x18) = 0x101;
      *(undefined1 *)(lVar4 + 0x1c) = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0x7b2;
      *(undefined4 *)(lVar4 + 0x28) = 0x101;
      *(undefined1 *)(lVar4 + 0x2c) = 0;
      param_1[1] = (long)(param_2 + 6);
    }
    else {
      sVar2 = (long)plVar1 + (-0x30 - (long)param_2);
      plVar6 = plVar1 + -6;
      local_60 = 0;
      plStack_58 = (long *)0x0;
      local_34 = 0;
      local_32 = 0;
      local_38 = 0;
      local_36 = 0;
      plVar8 = plVar1;
      if (plVar6 < plVar1) {
        plVar7 = plVar1;
        do {
          lVar12 = plVar6[1];
          lVar11 = *plVar6;
          plVar8 = plVar6 + 3;
          lVar13 = plVar6[2];
          lVar15 = plVar6[5];
          lVar14 = plVar6[4];
          plVar6 = plVar6 + 6;
          plVar7[3] = *plVar8;
          plVar7[2] = lVar13;
          plVar7[5] = lVar15;
          plVar7[4] = lVar14;
          plVar8 = plVar7 + 6;
          plVar7[1] = lVar12;
          *plVar7 = lVar11;
          plVar7 = plVar8;
        } while (plVar6 < plVar1);
      }
      param_1[1] = (long)plVar8;
      if (sVar2 != 0) {
        memmove((void *)((long)plVar1 - sVar2),param_2,sVar2);
      }
      lVar4 = lVar4 + lVar5 * 0x10;
      param_2[1] = (long)plStack_58;
      *param_2 = local_60;
      *(undefined8 *)(lVar4 + 0x10) = 0x7b2;
      *(undefined4 *)(lVar4 + 0x18) = 0x101;
      *(undefined1 *)(lVar4 + 0x1c) = 0;
      *(undefined1 *)(lVar4 + 0x1f) = local_32;
      *(undefined2 *)(lVar4 + 0x1d) = local_34;
      *(undefined8 *)(lVar4 + 0x20) = 0x7b2;
      *(undefined4 *)(lVar4 + 0x28) = 0x101;
      *(undefined1 *)(lVar4 + 0x2c) = 0;
      *(undefined1 *)(lVar4 + 0x2f) = local_36;
      *(undefined2 *)(lVar4 + 0x2d) = local_38;
    }
  }
  else {
    uVar3 = ((long)plVar1 - lVar4 >> 4) * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_1[2] - lVar4 >> 4;
    uVar9 = lVar4 * 0x5555555555555556;
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    plStack_40 = param_1 + 2;
    local_48 = 0;
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar3 = 0x555555555555555;
    }
    if (uVar3 == 0) {
      local_60 = 0;
    }
    else {
      local_60 = FUN_0049e770(PTR_FUN_047cba38,uVar3 * 0x30);
    }
    plStack_58 = (long *)(local_60 + lVar5 * 0x10);
    local_48 = local_60 + uVar3 * 0x30;
    local_50 = plStack_58;
                    /* try { // try from 0039b524 to 0039b52b has its CatchHandler @ 0039b608 */
    FUN_0039ef30(&local_60);
    plVar10 = plStack_58;
    sVar2 = (long)param_2 - *param_1;
    plStack_58 = (long *)((long)plStack_58 - sVar2);
    if (0 < (long)sVar2) {
      memcpy(plStack_58,(void *)*param_1,sVar2);
    }
    lVar4 = param_1[1];
    sVar2 = lVar4 - (long)param_2;
    if (0 < (long)sVar2) {
      memcpy(local_50,param_2,sVar2);
      local_50 = local_50 + (sVar2 / 0x30) * 6;
      lVar4 = param_1[1];
    }
    local_60 = *param_1;
    *param_1 = (long)plStack_58;
    param_1[1] = (long)local_50;
    lVar5 = param_1[2];
    param_1[2] = local_48;
    local_50 = (long *)lVar4;
    if (lVar4 - local_60 != 0) {
      local_50 = (long *)(lVar4 + (((lVar4 - local_60) - 0x30U) / 0x30 ^ 0xffffffffffffffff) * 0x30)
      ;
    }
    if (local_60 != 0) {
      plStack_58 = (long *)local_60;
      local_48 = lVar5;
      FUN_0049e790(PTR_LAB_047cba48);
    }
  }
  return plVar10;
}


