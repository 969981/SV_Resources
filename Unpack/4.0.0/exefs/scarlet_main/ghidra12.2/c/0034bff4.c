/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034bff4; name: FUN_0034bff4
 */


void FUN_0034bff4(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong *puVar10;
  
  lVar2 = DAT_047ef590;
  if (DAT_047ef590 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar3 = FUN_0049e800(DAT_047ef590);
  puVar1 = PTR_LAB_047cba48;
  if (0x17 < uVar3) {
    uVar9 = 0;
    do {
      puVar10 = (ulong *)(lVar2 + uVar9 * 0x18);
      uVar6 = *puVar10;
      lVar7 = lVar2 + uVar9 * 0x18;
      uVar4 = uVar6 & 1;
      if ((uVar6 & 1) == 0) {
        lVar7 = lVar7 + 8;
        if (uVar6 >> 1 != 0 && lVar7 != 0) {
LAB_0034c0c8:
          uVar6 = uVar6 >> 1;
          do {
            lVar5 = uVar6 * 8;
            uVar6 = uVar6 - 1;
            plVar8 = *(long **)(lVar7 + -8 + lVar5);
            *(undefined8 *)(lVar7 + -8 + lVar5) = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 8))(plVar8);
              FUN_0049e790(puVar1,plVar8);
            }
          } while (uVar6 != 0);
          uVar4 = *puVar10 & 1;
        }
      }
      else {
        lVar7 = *(long *)(lVar7 + 8);
        if (uVar6 >> 1 != 0 && lVar7 != 0) goto LAB_0034c0c8;
      }
      if (uVar4 != 0) {
        FUN_0049e790(puVar1,*(undefined8 *)(lVar2 + uVar9 * 0x18 + 8));
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar3 / 0x18);
  }
  FUN_0049e7e0(PTR_LAB_047cba48,lVar2);
  DAT_047ef590 = 0;
  return;
}


