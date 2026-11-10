/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034f01d0; name: FUN_034f01d0
 */


void FUN_034f01d0(void)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  puVar2 = PTR_DAT_047e2fd0;
  if (DAT_048b0870 != 0) {
    uVar5 = (ulong)DAT_048b0810;
    if (DAT_048b0810 != 0) {
      puVar12 = DAT_048b0808;
      do {
        plVar11 = (long *)*puVar12;
        if (DAT_048b0870 == 1) {
          FUN_034f0418(plVar11);
          lVar6 = plVar11[5];
          if (lVar6 == 0) {
            if (((plVar11[0xc] == 0) || (*(long *)(plVar11[0xc] + 0xa0) == 0)) &&
               (lVar6 = FUN_0349fff0(plVar11 + 0xc), lVar6 != 0)) {
              uVar4 = *(uint *)(lVar6 + 100);
              if ((uVar4 & 0xf00) == 0x300) {
                uVar3 = *(uint *)(plVar11 + 0x2b);
              }
              else {
                uVar3 = (**(code **)(*plVar11 + 0x68))(plVar11);
              }
              if (uVar3 == uVar4) goto LAB_034f0264;
            }
LAB_034f0274:
            if (plVar11[5] == 0) {
              if (plVar11[0xc] == 0) {
                if (plVar11[0xd] != -1) goto LAB_034f035c;
              }
              else if (*(long *)(plVar11[0xc] + 0xa0) == 0) {
LAB_034f035c:
                lVar6 = FUN_0349fff0(plVar11 + 0xc);
                if ((lVar6 != 0) &&
                   ((*(long **)(lVar6 + 0x460) == plVar11 ||
                    (*(long **)(lVar6 + 0x460) == (long *)0x0)))) {
                  *(undefined1 *)(lVar6 + 0x46c) = 0;
                  *(undefined8 *)(lVar6 + 0x460) = 0;
                }
              }
            }
            FUN_03504ca4(plVar11);
            (**(code **)(puVar2 + 0x30))(5,plVar11);
            uVar5 = (ulong)DAT_048b0810;
            goto LAB_034f029c;
          }
          iVar8 = 0;
          do {
            piVar1 = (int *)(lVar6 + 0x1d4);
            lVar6 = *(long *)(lVar6 + 0x20);
            if (*piVar1 == 0) {
              iVar8 = iVar8 + 1;
            }
          } while (lVar6 != 0);
          if (iVar8 == 0) goto LAB_034f0274;
LAB_034f0264:
          puVar12 = puVar12 + 1;
        }
        else {
          if (plVar11 != (long *)0x0) goto LAB_034f0274;
LAB_034f029c:
          puVar9 = DAT_048b0808 + (uVar5 - 1);
          puVar13 = puVar12;
          uVar4 = (uint)uVar5;
          if (puVar12 < puVar9) {
            do {
              puVar7 = puVar13 + 1;
              *puVar13 = *puVar7;
              puVar13 = puVar7;
            } while (puVar7 < puVar9);
            uVar4 = DAT_048b0810;
          }
          DAT_048b0810 = uVar4 - 1;
          DAT_048b084c = 1;
        }
        uVar5 = (ulong)DAT_048b0810;
      } while (DAT_048b0808 + uVar5 != puVar12);
    }
    if (DAT_048b0840 != 0) {
      puVar12 = DAT_048b0838;
      do {
        puVar13 = puVar12 + 1;
        uVar10 = *puVar12;
        FUN_034f0418(uVar10);
        FUN_034ee1f0(uVar10);
        puVar12 = puVar13;
      } while (puVar13 != DAT_048b0838 + DAT_048b0840);
    }
    DAT_048b0870 = 0;
  }
  return;
}


