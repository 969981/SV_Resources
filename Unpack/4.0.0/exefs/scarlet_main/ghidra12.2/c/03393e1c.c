/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03393e1c; name: FUN_03393e1c
 */


undefined1  [16] FUN_03393e1c(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  byte *pbVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar2 = *param_2;
  uVar7 = (ulong)uVar2;
  if (uVar2 >> 0x1c == 0) {
    pbVar4 = (byte *)0x0;
  }
  else {
    uVar1 = uVar2 & 0xf0000000;
    if (uVar1 == 0x50000000) {
      plVar8 = (long *)(*(long *)(param_1 + 8) + (uVar7 & 0xffffff) * 8);
      do {
        puVar6 = (undefined8 *)*plVar8;
        plVar8 = puVar6 + 1;
      } while (((uint)*puVar6 >> 0x17 & 1) == 0);
      uVar2 = (uint)*puVar6 & 0x7fffff;
      pbVar4 = *(byte **)(puVar6[(ulong)(byte)(POPCOUNT((char)uVar2) + POPCOUNT((char)(uVar2 >> 8))
                                              + POPCOUNT((char)(uVar2 >> 0x10))) + 2] +
                          (long)(int)param_2[2] * 8 + 8);
      if (pbVar4 != (byte *)0x0) {
        pbVar5 = pbVar4;
        if ((*pbVar4 & 1) == 0) {
          do {
            pbVar5 = *(byte **)(pbVar5 + 8);
          } while ((*pbVar5 & 1) == 0);
        }
        switch(*(uint *)(pbVar5 + 0x10) & 0x1f) {
        case 0:
          goto switchD_03393ed4_caseD_0;
        case 1:
          goto switchD_03393ed4_caseD_1;
        case 2:
          goto switchD_03393ed4_caseD_2;
        case 3:
          goto switchD_03393ed4_caseD_3;
        case 4:
          goto switchD_03393ed4_caseD_4;
        case 5:
          goto switchD_03393ed4_caseD_5;
        case 6:
          goto switchD_03393ed4_caseD_6;
        case 7:
          goto switchD_03393ed4_caseD_7;
        case 8:
          goto switchD_03393ed4_caseD_8;
        }
      }
    }
    else {
      if (uVar1 != 0x40000000) {
        if ((uVar1 == 0x20000000) && (param_2[2] == 0)) {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = *(ulong *)(*(long *)(param_1 + 8) + (uVar7 & 0xffffff) * 8);
          return auVar3 << 0x40;
        }
        auVar10._8_8_ = *(undefined8 *)(*(long *)(param_1 + 8) + (ulong)(uVar2 & 0xffffff) * 8);
        auVar10._0_8_ = *(long *)(param_1 + 0x38) + (ulong)param_2[1];
        return auVar10;
      }
      pbVar4 = *(byte **)(*(long *)(param_1 + 8) + (uVar7 & 0xffffff) * 8);
      if (pbVar4 != (byte *)0x0) {
        pbVar5 = pbVar4;
        if ((*pbVar4 & 1) == 0) {
          do {
            pbVar5 = *(byte **)(pbVar5 + 8);
          } while ((*pbVar5 & 1) == 0);
        }
        switch(*(uint *)(pbVar5 + 0x10) & 0x1f) {
        case 0:
switchD_03393ed4_caseD_0:
          auVar11._8_8_ = PTR_DAT_047e5c40;
          auVar11._0_8_ = pbVar4;
          return auVar11;
        case 1:
switchD_03393ed4_caseD_1:
          auVar12._8_8_ = PTR_DAT_047e5b88;
          auVar12._0_8_ = pbVar4;
          return auVar12;
        case 2:
switchD_03393ed4_caseD_2:
          auVar13._8_8_ = PTR_DAT_047e5c48;
          auVar13._0_8_ = pbVar4;
          return auVar13;
        case 3:
switchD_03393ed4_caseD_3:
          auVar14._8_8_ = PTR_DAT_047e5c50;
          auVar14._0_8_ = pbVar4;
          return auVar14;
        case 4:
switchD_03393ed4_caseD_4:
          auVar15._8_8_ = PTR_DAT_047e5c58;
          auVar15._0_8_ = pbVar4;
          return auVar15;
        case 5:
switchD_03393ed4_caseD_5:
          auVar16._8_8_ = PTR_DAT_047e5c60;
          auVar16._0_8_ = pbVar4;
          return auVar16;
        case 6:
switchD_03393ed4_caseD_6:
          auVar17._8_8_ = PTR_DAT_047e5c68;
          auVar17._0_8_ = pbVar4;
          return auVar17;
        case 7:
switchD_03393ed4_caseD_7:
          auVar18._8_8_ = PTR_DAT_047e5c70;
          auVar18._0_8_ = pbVar4;
          return auVar18;
        case 8:
switchD_03393ed4_caseD_8:
          auVar19._8_8_ = PTR_DAT_047e5c78;
          auVar19._0_8_ = pbVar4;
          return auVar19;
        }
      }
    }
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = pbVar4;
  return auVar9;
}


