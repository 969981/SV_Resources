/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e3e07c; name: FUN_00e3e07c
 */


void FUN_00e3e07c(long *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  lVar4 = param_1[2];
  puVar6 = (undefined8 *)*param_1;
  if (param_2 <= (ulong)((lVar4 - (long)puVar6 >> 3) * -0x5555555555555555)) {
    lVar4 = param_1[1] - (long)puVar6 >> 3;
    uVar5 = lVar4 * -0x5555555555555555;
    uVar3 = uVar5;
    if (param_2 <= uVar5) {
      uVar3 = param_2;
    }
    if (uVar3 != 0) {
      *puVar6 = *param_3;
      puVar6[1] = param_3[1];
      *(undefined1 *)(puVar6 + 2) = *(undefined1 *)(param_3 + 2);
      if (uVar3 != 1) {
        puVar6[3] = *param_3;
        puVar6[4] = param_3[1];
        lVar8 = uVar3 - 2;
        *(undefined1 *)(puVar6 + 5) = *(undefined1 *)(param_3 + 2);
        if (lVar8 != 0) {
          puVar6 = puVar6 + 6;
          do {
            *puVar6 = *param_3;
            puVar6[1] = param_3[1];
            *(undefined1 *)(puVar6 + 2) = *(undefined1 *)(param_3 + 2);
            lVar8 = lVar8 + -1;
            puVar6 = puVar6 + 3;
          } while (lVar8 != 0);
        }
      }
    }
    if (uVar5 < param_2) {
      puVar9 = (undefined8 *)param_1[1];
      lVar8 = param_2 + lVar4 * 0x5555555555555555;
      puVar6 = puVar9;
      if (lVar8 != 0) {
        puVar6 = puVar9 + lVar8 * 3;
        uVar10 = param_3[2];
        uVar1 = *param_3;
        puVar9[1] = param_3[1];
        puVar9[2] = uVar10;
        *puVar9 = uVar1;
        if (lVar8 != 1) {
          uVar1 = param_3[1];
          uVar10 = param_3[2];
          puVar9[3] = *param_3;
          puVar9[4] = uVar1;
          puVar9[5] = uVar10;
          if (lVar8 != 2) {
            lVar4 = param_2 * 0x18 + lVar4 * -8 + -0x30;
            puVar9 = puVar9 + 6;
            do {
              uVar1 = *param_3;
              lVar4 = lVar4 + -0x18;
              uVar10 = param_3[2];
              puVar9[1] = param_3[1];
              puVar9[2] = uVar10;
              *puVar9 = uVar1;
              puVar9 = puVar9 + 3;
            } while (lVar4 != 0);
          }
        }
      }
      param_1[1] = (long)puVar6;
      return;
    }
    puVar6 = (undefined8 *)(*param_1 + param_2 * 0x18);
LAB_00e3e130:
    param_1[1] = (long)puVar6;
    return;
  }
  lVar8 = tpidr_el0;
  if (puVar6 != (undefined8 *)0x0) {
    param_1[1] = (long)puVar6;
    plVar7 = *(long **)(lVar8 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar6,0,8);
    }
    else {
      FUN_00c48fe8(plVar7,puVar6,0,8);
    }
    param_1[1] = 0;
    param_1[2] = 0;
    lVar4 = 0;
    *param_1 = 0;
  }
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    uVar5 = (lVar4 >> 3) * 0x5555555555555556;
    uVar3 = param_2;
    if (param_2 <= uVar5) {
      uVar3 = uVar5;
    }
    if (0x555555555555554 < (ulong)((lVar4 >> 3) * -0x5555555555555555)) {
      uVar3 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar3 < 0xaaaaaaaaaaaaaab) {
      plVar7 = *(long **)(lVar8 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,uVar3 * 0x18,8);
      *param_1 = (long)puVar9;
      param_1[1] = (long)puVar9;
      param_1[2] = (long)(puVar9 + uVar3 * 3);
      uVar10 = param_3[2];
      uVar1 = param_3[1];
      *puVar9 = *param_3;
      puVar9[1] = uVar1;
      puVar9[2] = uVar10;
      puVar6 = puVar9 + param_2 * 3;
      if (param_2 * 0x18 != 0x18) {
        uVar1 = param_3[1];
        uVar10 = param_3[2];
        puVar9[3] = *param_3;
        puVar9[4] = uVar1;
        puVar9[5] = uVar10;
        if (puVar6 != puVar9 + 6) {
          lVar4 = param_2 * 0x18 + -0x30;
          puVar9 = puVar9 + 6;
          do {
            uVar1 = *param_3;
            lVar4 = lVar4 + -0x18;
            uVar10 = param_3[2];
            puVar9[1] = param_3[1];
            puVar9[2] = uVar10;
            *puVar9 = uVar1;
            puVar9 = puVar9 + 3;
          } while (lVar4 != 0);
        }
      }
      goto LAB_00e3e130;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_length_error();
}


