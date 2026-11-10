/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0342e924; name: FUN_0342e924
 */


void FUN_0342e924(long param_1,uint param_2,uint param_3,long param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long unaff_x23;
  
  puVar4 = PTR_DAT_047e2fd0;
  do {
    if (param_2 == param_3) {
      return;
    }
    uVar2 = *(uint *)(param_4 + 0x20);
    lVar10 = *(long *)(param_1 + (ulong)param_2 * 0x40);
    uVar3 = 0;
    uVar9 = (uint)lVar10;
    if (uVar2 != 0) {
      uVar3 = uVar9 / uVar2;
    }
    for (lVar6 = *(long *)(*(long *)(param_4 + 0x18) + (ulong)(uVar9 - uVar3 * uVar2) * 8);
        (lVar6 != 0 && (*(long *)(lVar6 + 0x68) != lVar10)); lVar6 = *(long *)(lVar6 + 0x70)) {
    }
    lVar10 = param_1 + (ulong)param_2 * 0x40;
    lVar5 = *(long *)(lVar10 + 8);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = (uint)lVar5 / uVar2;
    }
    plVar7 = (long *)(*(long *)(param_4 + 0x18) + (ulong)((uint)lVar5 - uVar3 * uVar2) * 8);
    do {
      lVar8 = *plVar7;
      plVar7 = (long *)(lVar8 + 0x70);
    } while (*(long *)(lVar8 + 0x68) != lVar5);
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0x58) == 0) || (*(uint *)(lVar8 + 0x58) == 0)) {
        unaff_x23 = 0;
      }
      else {
        plVar7 = *(long **)(lVar6 + 0x50);
        plVar1 = plVar7 + *(uint *)(lVar6 + 0x58);
        do {
          unaff_x23 = *plVar7;
          lVar11 = (ulong)*(uint *)(lVar8 + 0x58) << 3;
          plVar12 = *(long **)(lVar8 + 0x50);
          do {
            if (unaff_x23 == *plVar12) goto LAB_0342ea1c;
            lVar11 = lVar11 + -8;
            plVar12 = plVar12 + 1;
          } while (lVar11 != 0);
          plVar7 = plVar7 + 1;
          unaff_x23 = 0;
        } while (plVar7 != plVar1);
      }
    }
LAB_0342ea1c:
    FUN_03421d38(unaff_x23,*(undefined8 *)(lVar6 + 0x68),lVar5,lVar10 + 0x10);
    if (*(long *)(lVar10 + 0x30) != 0) {
      *(undefined4 *)(lVar10 + 0x38) = 0;
      (**(code **)(puVar4 + 0x30))(9);
      *(long *)(lVar10 + 0x30) = 0;
      *(undefined4 *)(lVar10 + 0x3c) = 0;
    }
    param_2 = param_2 + 1;
  } while( true );
}


