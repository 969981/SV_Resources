/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0037b1c0; name: FUN_0037b1c0
 */


void FUN_0037b1c0(undefined8 *param_1,undefined8 **param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  undefined8 ***pppuVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 ***pppuVar9;
  ulong uVar10;
  undefined8 ***pppuVar11;
  undefined8 **ppuVar12;
  ulong uVar13;
  ulong local_f8;
  undefined8 ***local_f0;
  ulong uStack_e8;
  
  if ((*(byte *)(param_1 + 2) >> 2 & 1) != 0) {
    puVar4 = *(undefined8 **)(param_1[1] + 0x28);
    *(undefined8 *)(param_1[1] + 0x28) = 0;
    if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 0037b208 to 0037b20b has its CatchHandler @ 0037b794 */
      (**(code **)*puVar4)();
    }
  }
  uVar7 = (uint)*(byte *)(param_1 + 2);
  if (((*(byte *)(param_1 + 2) >> 6 & 1) != 0) && (4 < *(ulong *)(param_1[1] + 0x88))) {
    FUN_00350fd0();
    uVar7 = (uint)*(byte *)(param_1 + 2);
  }
  local_f8 = 0;
  if ((uVar7 >> 3 & 1) != 0) {
    ppuVar12 = *(undefined8 ***)(param_1[1] + 0x48);
    if (param_2 < (undefined8 **)0x5) {
      ppuVar5 = param_2;
    }
    else {
                    /* try { // try from 0037b248 to 0037b75b has its CatchHandler @ 0037b798 */
      ppuVar5 = (undefined8 **)FUN_00350fb0(param_2);
    }
    uVar2 = local_f8;
    bVar3 = (local_f8 & 1) != 0;
    pppuVar11 = &local_f0;
    if (bVar3) {
      pppuVar11 = local_f0;
    }
    uVar8 = 6;
    if (bVar3) {
      uVar8 = uStack_e8;
    }
    uVar13 = local_f8 >> 1;
    if (uVar13 == uVar8) {
      uVar10 = uVar8 * 2;
      pppuVar6 = (undefined8 ***)FUN_0049e770(PTR_FUN_047cba38,uVar8 * 0x30);
      pppuVar9 = pppuVar6;
    }
    else {
      pppuVar6 = (undefined8 ***)0x0;
      uVar10 = 0;
      pppuVar9 = pppuVar11;
    }
    pppuVar9 = pppuVar9 + uVar13 * 3;
    *pppuVar9 = ppuVar12;
    pppuVar9[1] = ppuVar5;
    pppuVar9[2] = (undefined8 **)"failing recv_initial_metadata_ready";
    if (pppuVar6 != (undefined8 ***)0x0) {
      if (uVar13 != 0) {
        if (uVar13 == 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          pppuVar9 = pppuVar6;
          do {
            ppuVar5 = pppuVar11[1];
            ppuVar12 = *pppuVar11;
            uVar8 = uVar8 + 2;
            pppuVar9[2] = pppuVar11[2];
            pppuVar9[1] = ppuVar5;
            *pppuVar9 = ppuVar12;
            ppuVar5 = pppuVar11[4];
            ppuVar12 = pppuVar11[3];
            pppuVar1 = pppuVar11 + 5;
            pppuVar11 = pppuVar11 + 6;
            pppuVar9[5] = *pppuVar1;
            pppuVar9[4] = ppuVar5;
            pppuVar9[3] = ppuVar12;
            pppuVar9 = pppuVar9 + 6;
          } while ((uVar13 & 0x7ffffffffffffffe) != uVar8);
        }
        if (((uint)uVar2 >> 1 & 1) != 0) {
          ppuVar5 = pppuVar11[1];
          ppuVar12 = *pppuVar11;
          pppuVar9 = pppuVar6 + uVar8 * 3;
          pppuVar9[2] = pppuVar11[2];
          pppuVar9[1] = ppuVar5;
          *pppuVar9 = ppuVar12;
        }
      }
      if ((local_f8 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_f0);
      }
      local_f8 = local_f8 | 1;
      local_f0 = pppuVar6;
      uStack_e8 = uVar10;
    }
    local_f8 = local_f8 + 2;
    uVar7 = (uint)*(byte *)(param_1 + 2);
  }
  if ((uVar7 >> 4 & 1) != 0) {
    ppuVar5 = *(undefined8 ***)(param_1[1] + 0x68);
    ppuVar12 = param_2;
    if ((undefined8 **)0x4 < param_2) {
      ppuVar12 = (undefined8 **)FUN_00350fb0(param_2);
    }
    uVar2 = local_f8;
    bVar3 = (local_f8 & 1) != 0;
    pppuVar11 = &local_f0;
    if (bVar3) {
      pppuVar11 = local_f0;
    }
    uVar8 = 6;
    if (bVar3) {
      uVar8 = uStack_e8;
    }
    uVar13 = local_f8 >> 1;
    if (uVar13 == uVar8) {
      uVar10 = uVar8 * 2;
      pppuVar6 = (undefined8 ***)FUN_0049e770(PTR_FUN_047cba38,uVar8 * 0x30);
      pppuVar9 = pppuVar6;
    }
    else {
      pppuVar6 = (undefined8 ***)0x0;
      uVar10 = 0;
      pppuVar9 = pppuVar11;
    }
    pppuVar9 = pppuVar9 + uVar13 * 3;
    *pppuVar9 = ppuVar5;
    pppuVar9[1] = ppuVar12;
    pppuVar9[2] = (undefined8 **)"failing recv_message_ready";
    if (pppuVar6 != (undefined8 ***)0x0) {
      if (uVar13 != 0) {
        if (uVar13 == 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          pppuVar9 = pppuVar6;
          do {
            ppuVar5 = pppuVar11[1];
            ppuVar12 = *pppuVar11;
            uVar8 = uVar8 + 2;
            pppuVar9[2] = pppuVar11[2];
            pppuVar9[1] = ppuVar5;
            *pppuVar9 = ppuVar12;
            ppuVar5 = pppuVar11[4];
            ppuVar12 = pppuVar11[3];
            pppuVar1 = pppuVar11 + 5;
            pppuVar11 = pppuVar11 + 6;
            pppuVar9[5] = *pppuVar1;
            pppuVar9[4] = ppuVar5;
            pppuVar9[3] = ppuVar12;
            pppuVar9 = pppuVar9 + 6;
          } while ((uVar13 & 0x7ffffffffffffffe) != uVar8);
        }
        if (((uint)uVar2 >> 1 & 1) != 0) {
          ppuVar5 = pppuVar11[1];
          ppuVar12 = *pppuVar11;
          pppuVar9 = pppuVar6 + uVar8 * 3;
          pppuVar9[2] = pppuVar11[2];
          pppuVar9[1] = ppuVar5;
          *pppuVar9 = ppuVar12;
        }
      }
      if ((local_f8 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_f0);
      }
      local_f8 = local_f8 | 1;
      local_f0 = pppuVar6;
      uStack_e8 = uVar10;
    }
    local_f8 = local_f8 + 2;
    uVar7 = (uint)*(byte *)(param_1 + 2);
  }
  if ((uVar7 >> 5 & 1) != 0) {
    ppuVar5 = *(undefined8 ***)(param_1[1] + 0x80);
    ppuVar12 = param_2;
    if ((undefined8 **)0x4 < param_2) {
      ppuVar12 = (undefined8 **)FUN_00350fb0(param_2);
    }
    uVar2 = local_f8;
    bVar3 = (local_f8 & 1) != 0;
    pppuVar11 = &local_f0;
    if (bVar3) {
      pppuVar11 = local_f0;
    }
    uVar8 = 6;
    if (bVar3) {
      uVar8 = uStack_e8;
    }
    uVar13 = local_f8 >> 1;
    if (uVar13 == uVar8) {
      uVar10 = uVar8 * 2;
      pppuVar6 = (undefined8 ***)FUN_0049e770(PTR_FUN_047cba38,uVar8 * 0x30);
      pppuVar9 = pppuVar6;
    }
    else {
      pppuVar6 = (undefined8 ***)0x0;
      uVar10 = 0;
      pppuVar9 = pppuVar11;
    }
    pppuVar9 = pppuVar9 + uVar13 * 3;
    *pppuVar9 = ppuVar5;
    pppuVar9[1] = ppuVar12;
    pppuVar9[2] = (undefined8 **)"failing recv_trailing_metadata_ready";
    if (pppuVar6 != (undefined8 ***)0x0) {
      if (uVar13 != 0) {
        if (uVar13 == 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          pppuVar9 = pppuVar6;
          do {
            ppuVar5 = pppuVar11[1];
            ppuVar12 = *pppuVar11;
            uVar8 = uVar8 + 2;
            pppuVar9[2] = pppuVar11[2];
            pppuVar9[1] = ppuVar5;
            *pppuVar9 = ppuVar12;
            ppuVar5 = pppuVar11[4];
            ppuVar12 = pppuVar11[3];
            pppuVar1 = pppuVar11 + 5;
            pppuVar11 = pppuVar11 + 6;
            pppuVar9[5] = *pppuVar1;
            pppuVar9[4] = ppuVar5;
            pppuVar9[3] = ppuVar12;
            pppuVar9 = pppuVar9 + 6;
          } while ((uVar13 & 0x7ffffffffffffffe) != uVar8);
        }
        if (((uint)uVar2 >> 1 & 1) != 0) {
          ppuVar5 = pppuVar11[1];
          ppuVar12 = *pppuVar11;
          pppuVar9 = pppuVar6 + uVar8 * 3;
          pppuVar9[2] = pppuVar11[2];
          pppuVar9[1] = ppuVar5;
          *pppuVar9 = ppuVar12;
        }
      }
      if ((local_f8 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_f0);
      }
      local_f8 = local_f8 | 1;
      local_f0 = pppuVar6;
      uStack_e8 = uVar10;
    }
    local_f8 = local_f8 + 2;
  }
  ppuVar12 = (undefined8 **)*param_1;
  if (ppuVar12 != (undefined8 **)0x0) {
    ppuVar5 = param_2;
    if ((undefined8 **)0x4 < param_2) {
      ppuVar5 = (undefined8 **)FUN_00350fb0(param_2);
    }
    uVar2 = local_f8;
    bVar3 = (local_f8 & 1) != 0;
    pppuVar11 = &local_f0;
    if (bVar3) {
      pppuVar11 = local_f0;
    }
    uVar8 = 6;
    if (bVar3) {
      uVar8 = uStack_e8;
    }
    uVar13 = local_f8 >> 1;
    if (uVar13 == uVar8) {
      uVar10 = uVar8 * 2;
      pppuVar6 = (undefined8 ***)FUN_0049e770(PTR_FUN_047cba38,uVar8 * 0x30);
      pppuVar9 = pppuVar6;
    }
    else {
      pppuVar6 = (undefined8 ***)0x0;
      uVar10 = 0;
      pppuVar9 = pppuVar11;
    }
    pppuVar9 = pppuVar9 + uVar13 * 3;
    *pppuVar9 = ppuVar12;
    pppuVar9[1] = ppuVar5;
    pppuVar9[2] = (undefined8 **)"failing on_complete";
    if (pppuVar6 != (undefined8 ***)0x0) {
      if (uVar13 != 0) {
        if (uVar13 == 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          pppuVar9 = pppuVar6;
          do {
            ppuVar5 = pppuVar11[1];
            ppuVar12 = *pppuVar11;
            uVar8 = uVar8 + 2;
            pppuVar9[2] = pppuVar11[2];
            pppuVar9[1] = ppuVar5;
            *pppuVar9 = ppuVar12;
            ppuVar5 = pppuVar11[4];
            ppuVar12 = pppuVar11[3];
            pppuVar1 = pppuVar11 + 5;
            pppuVar11 = pppuVar11 + 6;
            pppuVar9[5] = *pppuVar1;
            pppuVar9[4] = ppuVar5;
            pppuVar9[3] = ppuVar12;
            pppuVar9 = pppuVar9 + 6;
          } while ((uVar13 & 0x7ffffffffffffffe) != uVar8);
        }
        if (((uint)uVar2 >> 1 & 1) != 0) {
          ppuVar5 = pppuVar11[1];
          ppuVar12 = *pppuVar11;
          pppuVar9 = pppuVar6 + uVar8 * 3;
          pppuVar9[2] = pppuVar11[2];
          pppuVar9[1] = ppuVar5;
          *pppuVar9 = ppuVar12;
        }
      }
      if ((local_f8 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_f0);
      }
      local_f8 = local_f8 | 1;
      local_f0 = pppuVar6;
      uStack_e8 = uVar10;
    }
    local_f8 = local_f8 + 2;
  }
  FUN_0032226c(&local_f8,param_3);
  if ((undefined8 **)0x4 < param_2) {
    FUN_00350fd0(param_2);
  }
  if ((local_f8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_f0);
  }
  return;
}


