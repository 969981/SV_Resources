/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e40f58; name: FUN_00e40f58
 */


void FUN_00e40f58(long *param_1,ulong param_2,undefined8 *param_3)

{
  void *__src;
  undefined8 uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  long lVar4;
  ulong uVar5;
  size_t __n;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *unaff_x26;
  long local_58;
  
  puVar7 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)((param_1[2] - (long)puVar7 >> 3) * -0x5555555555555555)) {
    puVar8 = puVar7;
    if (param_2 != 0) {
      puVar8 = puVar7 + param_2 * 3;
      uVar12 = param_3[2];
      uVar1 = *param_3;
      puVar7[1] = param_3[1];
      puVar7[2] = uVar12;
      *puVar7 = uVar1;
      if (param_2 != 1) {
        uVar1 = param_3[1];
        uVar12 = param_3[2];
        puVar7[3] = *param_3;
        puVar7[4] = uVar1;
        puVar7[5] = uVar12;
        if (param_2 != 2) {
          lVar6 = param_2 * 0x18 + -0x30;
          puVar7 = puVar7 + 6;
          do {
            uVar1 = *param_3;
            lVar6 = lVar6 + -0x18;
            uVar12 = param_3[2];
            puVar7[1] = param_3[1];
            puVar7[2] = uVar12;
            *puVar7 = uVar1;
            puVar7 = puVar7 + 3;
          } while (lVar6 != 0);
        }
      }
    }
    param_1[1] = (long)puVar8;
    return;
  }
  lVar6 = (long)puVar7 - *param_1 >> 3;
  uVar5 = lVar6 * -0x5555555555555555 + param_2;
  if (0xaaaaaaaaaaaaaaa < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar10 = param_1[2] - *param_1 >> 3;
  uVar11 = lVar10 * 0x5555555555555556;
  if (uVar5 <= uVar11) {
    uVar5 = uVar11;
  }
  if (0x555555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
    uVar5 = 0xaaaaaaaaaaaaaaa;
  }
  lVar10 = tpidr_el0;
  if (uVar5 == 0) {
    lVar4 = 0;
    goto LAB_00e41034;
  }
  if (uVar5 < 0xaaaaaaaaaaaaaab) {
    local_58 = uVar5 * 0x18;
    plVar9 = *(long **)(lVar10 + 0x30);
    if (plVar9 == (long *)0x0) {
      unaff_x26 = &DAT_04859000;
      if ((DAT_04859438 & 1) == 0) goto LAB_00e41280;
      goto LAB_00e41224;
    }
  }
  else {
    FUN_028a5f50();
LAB_00e41280:
    iVar3 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar3 != 0) {
      unaff_x26[0x86] = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
LAB_00e41224:
    plVar9 = (long *)unaff_x26[0x86];
    *(long **)(lVar10 + 0x30) = plVar9;
  }
  lVar4 = (**(code **)(*plVar9 + 0x10))(plVar9,local_58,8);
LAB_00e41034:
  uVar11 = param_2 * 0x18 - 0x18;
  puVar7 = (undefined8 *)(lVar4 + lVar6 * 8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar11;
  if ((SUB164(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 4 & 1) == 0) {
    uVar1 = param_3[1];
    uVar12 = param_3[2];
    *puVar7 = *param_3;
    puVar7[1] = uVar1;
    puVar7[2] = uVar12;
    puVar8 = puVar7 + 3;
  }
  else {
    puVar8 = puVar7;
  }
  if (0x17 < uVar11) {
    do {
      uVar1 = *param_3;
      uVar12 = param_3[2];
      puVar8[1] = param_3[1];
      puVar8[2] = uVar12;
      *puVar8 = uVar1;
      uVar1 = *param_3;
      uVar12 = param_3[2];
      puVar8[4] = param_3[1];
      puVar8[5] = uVar12;
      puVar8[3] = uVar1;
      puVar8 = puVar8 + 6;
    } while (puVar7 + param_2 * 3 != puVar8);
  }
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar7 - __n),__src,__n);
  }
  *param_1 = (long)((long)puVar7 - __n);
  param_1[1] = (long)(puVar7 + param_2 * 3);
  param_1[2] = lVar4 + uVar5 * 0x18;
  if (__src == (void *)0x0) {
    return;
  }
  plVar9 = *(long **)(lVar10 + 0x30);
  if (plVar9 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar9 = DAT_04859430;
    *(long **)(lVar10 + 0x30) = DAT_04859430;
  }
  uVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00e41198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x18))(plVar9,__src,0,8);
    return;
  }
  FUN_00c48fe8(plVar9,__src,0,8);
  return;
}


