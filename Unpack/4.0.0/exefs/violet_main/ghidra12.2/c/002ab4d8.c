/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002ab4d8; name: FUN_002ab4d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002ab4d8(undefined8 param_1,long param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  size_t sVar7;
  undefined1 (*pauVar8) [12];
  undefined8 uVar9;
  ulong *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  char *pcVar18;
  long *plVar19;
  long lVar20;
  undefined1 auVar21 [12];
  long *local_68;
  
  lVar3 = FUN_0038bc70(0,0,PTR_PTR_047cc630);
                    /* try { // try from 002ab514 to 002ab523 has its CatchHandler @ 002abaf0 */
  lVar4 = FUN_0038ad50(PTR_PTR_047cc740,lVar3);
  puVar2 = PTR_DAT_047cc748;
  if ((long *)*param_3 != param_3 + 1) {
    plVar19 = (long *)*param_3;
    do {
                    /* try { // try from 002ab55c to 002ab59b has its CatchHandler @ 002abafc */
      local_68 = (long *)FUN_0038ad50(PTR_PTR_047cc750,lVar3);
      puVar10 = *(ulong **)(lVar4 + 8);
      if ((puVar10 == (ulong *)0x0) || (puVar10[1] == puVar10[2])) {
        uVar5 = FUN_0038afc0((long *)(lVar4 + 8),&local_68,6,lVar3);
        if ((uVar5 & 1) != 0) goto LAB_002ab5ec;
        bVar1 = *(byte *)(plVar19 + 4);
        plVar13 = (long *)0x0;
        if ((bVar1 & 1) != 0) goto LAB_002ab5b4;
LAB_002ab600:
        plVar13[1] = (long)plVar19 + 0x21;
        plVar13[2] = (ulong)(bVar1 >> 1);
        bVar1 = *(byte *)(plVar19 + 7);
        if ((bVar1 & 1) != 0) goto LAB_002ab5c4;
LAB_002ab614:
        if (1 < bVar1) {
          lVar14 = (long)plVar19 + 0x39;
          uVar5 = (ulong)(bVar1 >> 1);
          goto LAB_002ab624;
        }
      }
      else {
        *(long **)((*puVar10 & 0xfffffffffffffff8) + puVar10[1] * 8) = local_68;
        puVar10[1] = puVar10[1] + 1;
LAB_002ab5ec:
        bVar1 = *(byte *)(plVar19 + 4);
        plVar13 = local_68;
        if ((bVar1 & 1) == 0) goto LAB_002ab600;
LAB_002ab5b4:
        lVar14 = plVar19[5];
        plVar13[1] = plVar19[6];
        plVar13[2] = lVar14;
        bVar1 = *(byte *)(plVar19 + 7);
        if ((bVar1 & 1) == 0) goto LAB_002ab614;
LAB_002ab5c4:
        uVar5 = plVar19[8];
        if (uVar5 != 0) {
          lVar14 = plVar19[9];
LAB_002ab624:
          plVar13[3] = lVar14;
          plVar13[4] = uVar5;
        }
      }
      if ((long *)plVar19[0xd] != plVar19 + 0xe) {
        plVar17 = (long *)plVar19[0xd];
        do {
          lVar14 = plVar17[4];
                    /* try { // try from 002ab650 to 002ab6d3 has its CatchHandler @ 002abb04 */
          local_68 = (long *)FUN_0038ad50(PTR_PTR_047cc758,lVar3);
          puVar10 = (ulong *)plVar13[6];
          if ((puVar10 == (ulong *)0x0) || (puVar10[1] == puVar10[2])) {
            uVar5 = FUN_0038afc0(plVar13 + 6,&local_68,6,lVar3);
            if ((uVar5 & 1) != 0) goto LAB_002ab6b8;
            plVar12 = (long *)0x0;
            puVar6 = _DAT_00000028;
          }
          else {
            *(long **)((*puVar10 & 0xfffffffffffffff8) + puVar10[1] * 8) = local_68;
            puVar10[1] = puVar10[1] + 1;
LAB_002ab6b8:
            puVar6 = (undefined8 *)local_68[5];
            plVar12 = local_68;
          }
          if ((puVar6 == (undefined8 *)0x0) &&
             (puVar6 = (undefined8 *)FUN_0038ad50(PTR_DAT_047cc6e0,lVar3),
             puVar6 != (undefined8 *)0x0)) {
            plVar12[5] = (long)puVar6;
          }
          if ((*(byte *)(lVar14 + 0x10) & 1) == 0) {
            if (1 < *(byte *)(lVar14 + 0x10)) {
              pcVar18 = (char *)(lVar14 + 0x11);
              goto LAB_002ab708;
            }
          }
          else if (*(long *)(lVar14 + 0x18) != 0) {
            pcVar18 = *(char **)(lVar14 + 0x20);
LAB_002ab708:
            sVar7 = strlen(pcVar18);
            *puVar6 = pcVar18;
            puVar6[1] = sVar7;
          }
          if ((*(byte *)(lVar14 + 0x28) & 1) == 0) {
            if (1 < *(byte *)(lVar14 + 0x28)) {
              pcVar18 = (char *)(lVar14 + 0x29);
              goto LAB_002ab73c;
            }
          }
          else if (*(long *)(lVar14 + 0x30) != 0) {
            pcVar18 = *(char **)(lVar14 + 0x38);
LAB_002ab73c:
            sVar7 = strlen(pcVar18);
            puVar6[2] = pcVar18;
            puVar6[3] = sVar7;
          }
          if ((*(byte *)(lVar14 + 0x40) & 1) == 0) {
            if (1 < *(byte *)(lVar14 + 0x40)) {
              pcVar18 = (char *)(lVar14 + 0x41);
              goto LAB_002ab770;
            }
          }
          else if (*(long *)(lVar14 + 0x48) != 0) {
            pcVar18 = *(char **)(lVar14 + 0x50);
LAB_002ab770:
            sVar7 = strlen(pcVar18);
            puVar6[4] = pcVar18;
            puVar6[5] = sVar7;
          }
          *plVar12 = plVar17[5];
          plVar12[1] = plVar17[6];
          plVar12[2] = plVar17[7];
          plVar12[3] = plVar17[8];
          if ((long *)plVar17[9] != plVar17 + 10) {
            plVar16 = (long *)plVar17[9];
            do {
                    /* try { // try from 002ab7c0 to 002ab7f7 has its CatchHandler @ 002abb08 */
              local_68 = (long *)FUN_0038ad50(puVar2,lVar3);
              puVar10 = (ulong *)plVar12[6];
              if ((puVar10 == (ulong *)0x0) || (puVar10[1] == puVar10[2])) {
                uVar5 = FUN_0038afc0(plVar12 + 6,&local_68,6,lVar3);
                if ((uVar5 & 1) != 0) goto LAB_002ab82c;
                bVar1 = *(byte *)(plVar16 + 4);
                plVar11 = (long *)0x0;
                if ((bVar1 & 1) != 0) goto LAB_002ab80c;
LAB_002ab83c:
                lVar14 = (long)plVar16 + 0x21;
                uVar5 = (ulong)(bVar1 >> 1);
              }
              else {
                *(long **)((*puVar10 & 0xfffffffffffffff8) + puVar10[1] * 8) = local_68;
                puVar10[1] = puVar10[1] + 1;
LAB_002ab82c:
                bVar1 = *(byte *)(plVar16 + 4);
                plVar11 = local_68;
                if ((bVar1 & 1) == 0) goto LAB_002ab83c;
LAB_002ab80c:
                uVar5 = plVar16[5];
                lVar14 = plVar16[6];
              }
              plVar11[2] = lVar14;
              plVar11[3] = uVar5;
              lVar14 = plVar16[7];
              plVar11[1] = plVar16[8];
              *plVar11 = lVar14;
              plVar11 = (long *)plVar16[1];
              if ((long *)plVar16[1] == (long *)0x0) {
                plVar11 = plVar16 + 2;
                plVar15 = (long *)*plVar11;
                if ((long *)*plVar15 != plVar16) {
                  do {
                    lVar14 = *plVar11;
                    plVar11 = (long *)(lVar14 + 0x10);
                    plVar15 = (long *)*plVar11;
                  } while (*plVar15 != lVar14);
                }
              }
              else {
                do {
                  plVar15 = plVar11;
                  plVar11 = (long *)*plVar15;
                } while ((long *)*plVar15 != (long *)0x0);
              }
              plVar16 = plVar15;
            } while (plVar15 != plVar17 + 10);
          }
          plVar12 = (long *)plVar17[1];
          if ((long *)plVar17[1] == (long *)0x0) {
            plVar12 = plVar17 + 2;
            plVar16 = (long *)*plVar12;
            if ((long *)*plVar16 != plVar17) {
              do {
                lVar14 = *plVar12;
                plVar12 = (long *)(lVar14 + 0x10);
                plVar16 = (long *)*plVar12;
              } while (*plVar16 != lVar14);
            }
          }
          else {
            do {
              plVar16 = plVar12;
              plVar12 = (long *)*plVar16;
            } while ((long *)*plVar16 != (long *)0x0);
          }
          plVar17 = plVar16;
        } while (plVar16 != plVar19 + 0xe);
      }
      if ((long *)plVar19[10] == plVar19 + 0xb) {
        lVar14 = 0;
      }
      else {
        lVar14 = 0;
        plVar17 = (long *)plVar19[10];
        do {
          if ((*(byte *)(plVar17 + 4) & 1) == 0) {
            pcVar18 = (char *)((long)plVar17 + 0x21);
          }
          else {
            pcVar18 = (char *)plVar17[6];
          }
          lVar20 = plVar17[7];
                    /* try { // try from 002ab928 to 002ab963 has its CatchHandler @ 002abb00 */
          local_68 = (long *)FUN_0038ad50(PTR_DAT_047cc760,lVar3);
          puVar10 = (ulong *)plVar13[7];
          if ((puVar10 == (ulong *)0x0) || (puVar10[1] == puVar10[2])) {
            uVar5 = FUN_0038afc0(plVar13 + 7,&local_68,6,lVar3);
            if ((uVar5 & 1) != 0) goto LAB_002ab988;
            plVar12 = (long *)0x0;
          }
          else {
            *(long **)((*puVar10 & 0xfffffffffffffff8) + puVar10[1] * 8) = local_68;
            puVar10[1] = puVar10[1] + 1;
LAB_002ab988:
            plVar12 = local_68;
          }
          sVar7 = strlen(pcVar18);
          plVar12[1] = (long)pcVar18;
          plVar12[2] = sVar7;
          lVar14 = lVar20 + lVar14;
          *plVar12 = lVar20;
          plVar12 = (long *)plVar17[1];
          if ((long *)plVar17[1] == (long *)0x0) {
            plVar12 = plVar17 + 2;
            plVar16 = (long *)*plVar12;
            if ((long *)*plVar16 != plVar17) {
              do {
                lVar20 = *plVar12;
                plVar12 = (long *)(lVar20 + 0x10);
                plVar16 = (long *)*plVar12;
              } while (*plVar16 != lVar20);
            }
          }
          else {
            do {
              plVar16 = plVar12;
              plVar12 = (long *)*plVar16;
            } while ((long *)*plVar16 != (long *)0x0);
          }
          plVar17 = plVar16;
        } while (plVar16 != plVar19 + 0xb);
      }
      *plVar13 = lVar14;
                    /* try { // try from 002aba00 to 002aba07 has its CatchHandler @ 002abaf8 */
      auVar21 = FUN_00353180(plVar19[0x10],3);
      pauVar8 = (undefined1 (*) [12])plVar13[5];
                    /* try { // try from 002aba18 to 002aba27 has its CatchHandler @ 002abaf4 */
      if ((pauVar8 == (undefined1 (*) [12])0x0) &&
         (pauVar8 = (undefined1 (*) [12])FUN_0038ad50(PTR_DAT_047cc768,lVar3),
         pauVar8 != (undefined1 (*) [12])0x0)) {
        plVar13[5] = (long)pauVar8;
      }
      *pauVar8 = auVar21;
      plVar13 = (long *)plVar19[1];
      if ((long *)plVar19[1] == (long *)0x0) {
        plVar13 = plVar19 + 2;
        plVar17 = (long *)*plVar13;
        if ((long *)*plVar17 != plVar19) {
          do {
            lVar14 = *plVar13;
            plVar13 = (long *)(lVar14 + 0x10);
            plVar17 = (long *)*plVar13;
          } while (*plVar17 != lVar14);
        }
      }
      else {
        do {
          plVar17 = plVar13;
          plVar13 = (long *)*plVar17;
        } while ((long *)*plVar17 != (long *)0x0);
      }
      plVar19 = plVar17;
    } while (plVar17 != param_3 + 1);
  }
                    /* try { // try from 002aba94 to 002ababf has its CatchHandler @ 002abaf0 */
  FUN_002aadd0(*(undefined1 *)(*(long *)(param_2 + 8) + 0x10),lVar4);
  uVar9 = FUN_0038ace0(lVar4,PTR_PTR_047cc740,lVar3,&local_68);
  FUN_003676d0(param_1,uVar9,local_68);
  if (lVar3 != 0) {
                    /* try { // try from 002abac4 to 002abacb has its CatchHandler @ 002abaec */
    FUN_0038bd40(lVar3);
  }
  return;
}


