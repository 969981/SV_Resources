/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00284bf0; name: FUN_00284bf0
 */


void FUN_00284bf0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 ****ppppuVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 ***pppuVar10;
  undefined8 uVar11;
  undefined8 ***pppuVar12;
  undefined8 ***pppuVar13;
  undefined8 ***pppuVar14;
  undefined8 ***pppuVar15;
  undefined8 ***pppuVar16;
  undefined8 ***pppuVar17;
  ulong local_188;
  undefined8 ****local_180;
  undefined8 uStack_178;
  ulong local_f0;
  undefined8 ****local_e8;
  undefined8 uStack_e0;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  long *local_48;
  
  local_188 = 0;
                    /* try { // try from 00284c18 to 00284c23 has its CatchHandler @ 002850b8 */
  uVar5 = FUN_00284830(*param_2,param_3,&local_188);
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,200);
    if (puVar6 != (undefined8 *)0x0) {
      local_f0 = 0;
      if ((local_188 & 1) == 0) {
        uVar5 = local_188 >> 1;
        if (uVar5 != 0) {
          ppppuVar7 = &local_180;
          puVar9 = &local_60;
          do {
            pppuVar12 = ppppuVar7[1];
            pppuVar10 = *ppppuVar7;
            pppuVar13 = ppppuVar7[2];
            puVar9[-0xe] = ppppuVar7[3];
            puVar9[-0xf] = pppuVar13;
            uVar2 = *(undefined4 *)(ppppuVar7 + 0x10);
            puVar9[-0x10] = pppuVar12;
            puVar9[-0x11] = pppuVar10;
            *(undefined4 *)(puVar9 + -1) = uVar2;
            pppuVar13 = ppppuVar7[9];
            pppuVar12 = ppppuVar7[8];
            pppuVar10 = ppppuVar7[10];
            puVar9[-6] = ppppuVar7[0xb];
            puVar9[-7] = pppuVar10;
            pppuVar10 = ppppuVar7[0x11];
            puVar9[-8] = pppuVar13;
            puVar9[-9] = pppuVar12;
            pppuVar12 = ppppuVar7[6];
            puVar9[-10] = ppppuVar7[7];
            puVar9[-0xb] = pppuVar12;
            pppuVar12 = ppppuVar7[4];
            puVar9[-0xc] = ppppuVar7[5];
            puVar9[-0xd] = pppuVar12;
            *puVar9 = pppuVar10;
            pppuVar12 = ppppuVar7[0xd];
            pppuVar10 = ppppuVar7[0xc];
            pppuVar13 = ppppuVar7[0xe];
            puVar9[-2] = ppppuVar7[0xf];
            puVar9[-3] = pppuVar13;
            uVar5 = uVar5 - 1;
            puVar9[-4] = pppuVar12;
            puVar9[-5] = pppuVar10;
            puVar9 = puVar9 + 0x12;
            ppppuVar7[0x11] = (undefined8 ***)0x0;
            ppppuVar7 = ppppuVar7 + 0x12;
          } while (uVar5 != 0);
        }
        local_f0 = local_188 & 0xfffffffffffffffe;
      }
      else {
        local_f0 = local_188 | 1;
        local_188 = 0;
        uStack_e0 = uStack_178;
        local_e8 = local_180;
      }
      local_50 = param_2[3];
      local_48 = (long *)param_2[4];
      local_58 = (undefined8 *)param_2[5];
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      uVar11 = param_2[1];
                    /* try { // try from 00284d00 to 00284d0f has its CatchHandler @ 00284fe0 */
      FUN_00330158(puVar6,&local_50,&local_58);
      puVar9 = local_58;
      local_58 = (undefined8 *)0x0;
      if (puVar9 != (undefined8 *)0x0) {
        (**(code **)*puVar9)(puVar9);
        FUN_0049e790(PTR_LAB_047cba48,puVar9);
      }
      if (local_48 != (long *)0x0) {
        plVar1 = local_48 + 1;
        do {
          lVar8 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
          std::__shared_weak_count::__release_weak();
        }
      }
      *puVar6 = &PTR_LAB_0448d2d0;
      puVar6[5] = 0;
      if ((local_f0 & 1) == 0) {
        uVar5 = local_f0 >> 1;
        if (uVar5 != 0) {
          ppppuVar7 = &local_e8;
          puVar9 = puVar6 + 0x17;
          do {
            pppuVar10 = *ppppuVar7;
            puVar9[-0x10] = ppppuVar7[1];
            puVar9[-0x11] = pppuVar10;
            pppuVar12 = ppppuVar7[3];
            pppuVar10 = ppppuVar7[2];
            pppuVar14 = ppppuVar7[5];
            pppuVar13 = ppppuVar7[4];
            pppuVar16 = ppppuVar7[7];
            pppuVar15 = ppppuVar7[6];
            pppuVar17 = ppppuVar7[8];
            puVar9[-8] = ppppuVar7[9];
            puVar9[-9] = pppuVar17;
            uVar5 = uVar5 - 1;
            puVar9[-10] = pppuVar16;
            puVar9[-0xb] = pppuVar15;
            puVar9[-0xc] = pppuVar14;
            puVar9[-0xd] = pppuVar13;
            puVar9[-0xe] = pppuVar12;
            puVar9[-0xf] = pppuVar10;
            pppuVar15 = ppppuVar7[0xf];
            pppuVar14 = ppppuVar7[0xe];
            pppuVar12 = ppppuVar7[0xb];
            pppuVar10 = ppppuVar7[10];
            pppuVar13 = ppppuVar7[0xc];
            uVar2 = *(undefined4 *)(ppppuVar7 + 0x10);
            puVar9[-4] = ppppuVar7[0xd];
            puVar9[-5] = pppuVar13;
            puVar9[-2] = pppuVar15;
            puVar9[-3] = pppuVar14;
            *(undefined4 *)(puVar9 + -1) = uVar2;
            puVar9[-6] = pppuVar12;
            puVar9[-7] = pppuVar10;
            *puVar9 = ppppuVar7[0x11];
            ppppuVar7[0x11] = (undefined8 ***)0x0;
            ppppuVar7 = ppppuVar7 + 0x12;
            puVar9 = puVar9 + 0x12;
          } while (uVar5 != 0);
        }
        puVar6[5] = local_f0 & 0xfffffffffffffffe;
      }
      else {
        puVar6[7] = uStack_e0;
        puVar6[6] = local_e8;
        puVar6[5] = local_f0 | 1;
        local_f0 = 0;
      }
                    /* try { // try from 00284e18 to 00284e1f has its CatchHandler @ 00284f10 */
      uVar5 = local_f0;
      uVar11 = FUN_003438f0(uVar11);
      puVar6[0x18] = uVar11;
      if ((uVar5 & 1) == 0) {
        ppppuVar7 = &local_e8;
LAB_00284e3c:
        ppppuVar7 = ppppuVar7 + (uVar5 >> 1) * 0x12 + -1;
        lVar8 = (uVar5 >> 1) + 1;
        while (lVar8 = lVar8 + -1, lVar8 != 0) {
          pppuVar10 = *ppppuVar7;
          ppppuVar7 = ppppuVar7 + -0x12;
                    /* try { // try from 00284e60 to 00284e63 has its CatchHandler @ 00285134 */
          FUN_00343d90(pppuVar10);
        }
        if ((uVar5 & 1) == 0) goto LAB_00284e88;
        ppppuVar7 = local_e8;
      }
      else {
        ppppuVar7 = local_e8;
        if (local_e8 != (undefined8 ****)0x0) goto LAB_00284e3c;
        ppppuVar7 = (undefined8 ****)0x0;
      }
      FUN_0049e790(PTR_LAB_047cba48,ppppuVar7);
    }
  }
LAB_00284e88:
  *param_1 = puVar6;
  if ((local_188 & 1) == 0) {
    ppppuVar7 = &local_180;
  }
  else {
    ppppuVar7 = local_180;
    if (local_180 == (undefined8 ****)0x0) {
      local_180 = (undefined8 ****)0x0;
      goto LAB_00284eec;
    }
  }
  ppppuVar7 = ppppuVar7 + (local_188 >> 1) * 0x12 + -1;
  lVar8 = (local_188 >> 1) + 1;
  while (lVar8 = lVar8 + -1, lVar8 != 0) {
    pppuVar10 = *ppppuVar7;
    ppppuVar7 = ppppuVar7 + -0x12;
                    /* try { // try from 00284ecc to 00284ecf has its CatchHandler @ 00285138 */
    FUN_00343d90(pppuVar10);
  }
  if ((local_188 & 1) == 0) {
    return;
  }
LAB_00284eec:
  FUN_0049e790(PTR_LAB_047cba48,local_180);
  return;
}


