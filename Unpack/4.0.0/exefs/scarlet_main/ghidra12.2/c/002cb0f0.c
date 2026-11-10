/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002cb0f0; name: FUN_002cb0f0
 */


/* WARNING: Removing unreachable block (ram,0x002cb2d0) */

undefined8 FUN_002cb0f0(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *****extraout_x9;
  ulong uVar9;
  undefined8 *****pppppuVar10;
  undefined8 ***pppuVar11;
  undefined8 *****extraout_x11;
  undefined8 ****ppppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****local_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined8 ****ppppuStack_a8;
  ulong local_a0;
  undefined8 *****local_98;
  ulong local_90;
  ulong local_58;
  undefined8 *****local_50;
  ulong local_48;
  
  local_58 = 0;
  local_a0 = 0;
                    /* try { // try from 002cb110 to 002cb113 has its CatchHandler @ 002cb450 */
  plVar3 = (long *)FUN_002ed9b0();
  if (plVar3 == (long *)0x0) {
    uVar8 = 0;
    uVar7 = 0;
    ppppuVar12 = (undefined8 ****)0x0;
    pppppuVar10 = extraout_x9;
    pppppuVar4 = extraout_x11;
    goto LAB_002cb368;
  }
                    /* try { // try from 002cb120 to 002cb127 has its CatchHandler @ 002cb448 */
  (**(code **)(*plVar3 + 0x18))(&local_c0);
  ppppuVar12 = local_c0;
  if (local_c0 == (undefined8 ****)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002cb438 to 002cb43b has its CatchHandler @ 002cb43c */
    abort();
  }
  pppppuVar10 = &local_50;
  if ((local_58 & 1) == 0) {
    uVar8 = 1;
  }
  else {
    uVar8 = local_48;
    pppppuVar10 = local_50;
  }
  if (local_58 >> 1 == uVar8) {
    pppppuVar4 = (undefined8 *****)FUN_0049e770(PTR_FUN_047cba38,uVar8 << 4);
    pppppuVar4[uVar8] = (undefined8 ****)"grpc.channel_credentials";
    if (pppppuVar4 != (undefined8 *****)0x0) {
      if (uVar8 != 0) {
        uVar7 = uVar8 & 3;
        if (uVar8 - 1 < 3) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          pppppuVar5 = pppppuVar4 + 2;
          pppppuVar13 = pppppuVar10;
          do {
            pppppuVar10 = pppppuVar13 + 4;
            pppppuVar5[-2] = *pppppuVar13;
            pppppuVar5[-1] = pppppuVar13[1];
            *pppppuVar5 = pppppuVar13[2];
            uVar9 = uVar9 + 4;
            pppppuVar5[1] = pppppuVar13[3];
            pppppuVar5 = pppppuVar5 + 4;
            pppppuVar13 = pppppuVar10;
          } while ((uVar8 & 0xfffffffffffffffc) != uVar9);
        }
        if (uVar7 != 0) {
          pppppuVar5 = pppppuVar4 + uVar9;
          do {
            uVar7 = uVar7 - 1;
            *pppppuVar5 = *pppppuVar10;
            pppppuVar5 = pppppuVar5 + 1;
            pppppuVar10 = pppppuVar10 + 1;
          } while (uVar7 != 0);
        }
      }
      if ((local_58 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_50);
      }
      local_58 = local_58 | 1;
      local_50 = pppppuVar4;
      local_48 = uVar8 << 1;
    }
  }
  else {
    pppppuVar10[local_58 >> 1] = (undefined8 ****)"grpc.channel_credentials";
  }
  local_58 = local_58 + 2;
                    /* try { // try from 002cb260 to 002cb26b has its CatchHandler @ 002cb444 */
  FUN_002ed990(&local_c0,ppppuVar12);
  bVar2 = (local_a0 & 1) != 0;
  pppppuVar10 = &local_98;
  if (bVar2) {
    pppppuVar10 = local_98;
  }
  uVar8 = 2;
  if (bVar2) {
    uVar8 = local_90;
  }
  if (local_a0 >> 1 == uVar8) {
    pppppuVar5 = (undefined8 *****)FUN_0049e770(PTR_FUN_047cba38,uVar8 << 6);
    pppppuVar4 = pppppuVar5 + uVar8 * 4;
    pppppuVar4[1] = ppppuStack_b8;
    *pppppuVar4 = local_c0;
    pppppuVar4[3] = ppppuStack_a8;
    pppppuVar4[2] = ppppuStack_b0;
    if (pppppuVar5 != (undefined8 *****)0x0) {
      if (uVar8 != 0) {
        if (uVar8 == 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          pppppuVar4 = pppppuVar5 + 4;
          pppppuVar13 = pppppuVar10;
          do {
            pppppuVar10 = pppppuVar13 + 8;
            ppppuVar14 = *pppppuVar13;
            ppppuVar16 = pppppuVar13[3];
            ppppuVar15 = pppppuVar13[2];
            pppppuVar4[-3] = pppppuVar13[1];
            pppppuVar4[-4] = ppppuVar14;
            pppppuVar4[-1] = ppppuVar16;
            pppppuVar4[-2] = ppppuVar15;
            uVar7 = uVar7 + 2;
            ppppuVar14 = pppppuVar13[4];
            ppppuVar16 = pppppuVar13[7];
            ppppuVar15 = pppppuVar13[6];
            pppppuVar4[1] = pppppuVar13[5];
            *pppppuVar4 = ppppuVar14;
            pppppuVar4[3] = ppppuVar16;
            pppppuVar4[2] = ppppuVar15;
            pppppuVar4 = pppppuVar4 + 8;
            pppppuVar13 = pppppuVar10;
          } while ((uVar8 & 0xfffffffffffffffe) != uVar7);
          if ((uVar8 & 1) == 0) goto LAB_002cb32c;
        }
        ppppuVar14 = *pppppuVar10;
        ppppuVar16 = pppppuVar10[3];
        ppppuVar15 = pppppuVar10[2];
        pppppuVar4 = pppppuVar5 + uVar7 * 4;
        pppppuVar4[1] = pppppuVar10[1];
        *pppppuVar4 = ppppuVar14;
        pppppuVar4[3] = ppppuVar16;
        pppppuVar4[2] = ppppuVar15;
      }
LAB_002cb32c:
      if ((local_a0 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_98);
      }
      local_a0 = local_a0 | 1;
      local_98 = pppppuVar5;
      local_90 = uVar8 << 1;
    }
  }
  else {
    pppppuVar10 = pppppuVar10 + (local_a0 >> 1) * 4;
    pppppuVar10[1] = ppppuStack_b8;
    *pppppuVar10 = local_c0;
    pppppuVar10[3] = ppppuStack_a8;
    pppppuVar10[2] = ppppuStack_b0;
  }
  uVar8 = local_a0 + 2;
  pppppuVar10 = local_98;
  uVar7 = local_58;
  pppppuVar4 = local_50;
  local_a0 = uVar8;
LAB_002cb368:
  pppppuVar5 = &local_50;
  if ((uVar7 & 1) != 0) {
    pppppuVar5 = pppppuVar4;
  }
  pppppuVar4 = &local_98;
  if ((uVar8 & 1) != 0) {
    pppppuVar4 = pppppuVar10;
  }
                    /* try { // try from 002cb390 to 002cb3a3 has its CatchHandler @ 002cb458 */
  uVar6 = FUN_003435b0(param_1,pppppuVar5,uVar7 >> 1,pppppuVar4,uVar8 >> 1);
  FUN_00343d90(param_1);
  if (ppppuVar12 != (undefined8 ****)0x0) {
    ppppuVar14 = ppppuVar12 + 1;
    do {
      pppuVar11 = *ppppuVar14;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppuVar14,0x10);
      if (bVar2) {
        *ppppuVar14 = (undefined8 ***)((long)pppuVar11 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((undefined8 ***)((long)pppuVar11 + -1) == (undefined8 ***)0x0) {
      (*(code *)**ppppuVar12)(ppppuVar12);
      FUN_0049e790(PTR_LAB_047cba48,ppppuVar12);
    }
  }
  if ((local_a0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_98);
  }
  if ((local_58 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  return uVar6;
}


