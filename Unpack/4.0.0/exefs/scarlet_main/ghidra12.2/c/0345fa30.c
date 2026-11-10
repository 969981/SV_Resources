/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0345fa30; name: FUN_0345fa30
 */


undefined8 FUN_0345fa30(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  
  *(long *)(param_1 + 0xd8) = param_3;
  if ((param_3 != 0) && (lVar5 = *(long *)(param_1 + 0x40), lVar5 != 0)) {
    uVar3 = *(uint *)(lVar5 + 0x30);
    if (uVar3 != 0) {
      plVar7 = *(long **)(lVar5 + 0x28);
      plVar2 = plVar7 + uVar3;
      if (*plVar7 != param_3) {
        lVar9 = (ulong)uVar3 * 8;
        do {
          lVar9 = lVar9 + -8;
          if (lVar9 == 0) {
            plVar7 = plVar2;
            break;
          }
          plVar1 = plVar7 + 1;
          plVar8 = plVar7 + 1;
          plVar7 = plVar1;
        } while (*plVar8 != param_3);
      }
      if (plVar2 != plVar7) {
        if (uVar3 < 2) {
          iVar6 = 0;
        }
        else {
          *plVar7 = plVar2[-1];
          iVar6 = *(int *)(lVar5 + 0x30) + -1;
        }
        *(int *)(lVar5 + 0x30) = iVar6;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (param_2 == 0) {
LAB_0345fb98:
    uVar4 = 1;
    *(long *)(param_1 + 0x40) = param_2;
  }
  else {
    plVar7 = *(long **)(param_2 + 0x28);
    uVar3 = *(uint *)(param_2 + 0x30);
    lVar5 = *(long *)(param_1 + 0xd8);
    plVar2 = plVar7;
    if ((uVar3 != 0) && (*plVar7 != lVar5)) {
      lVar9 = (ulong)uVar3 * 8;
      plVar8 = plVar7;
      do {
        lVar9 = lVar9 + -8;
        plVar2 = plVar7 + uVar3;
        if (lVar9 == 0) break;
        plVar2 = plVar8 + 1;
        plVar1 = plVar8 + 1;
        plVar8 = plVar2;
      } while (*plVar1 != lVar5);
    }
    if ((plVar2 == (long *)0x0) || (plVar7 + uVar3 == plVar2)) {
      uVar10 = *(uint *)(param_2 + 0x34);
      if (uVar10 <= uVar3) {
        iVar6 = uVar10 + (uVar10 >> 1);
        if (uVar10 == 0) {
          iVar6 = 1;
        }
        uVar10 = iVar6 + uVar10;
        plVar7 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,plVar7,(ulong)uVar10 << 3);
        if (plVar7 == (long *)0x0) goto LAB_0345fba4;
        *(long **)(param_2 + 0x28) = plVar7;
        *(uint *)(param_2 + 0x34) = uVar10;
      }
      if (uVar3 < uVar10) {
        uVar3 = *(uint *)(param_2 + 0x30);
        *(uint *)(param_2 + 0x30) = uVar3 + 1;
        if (plVar7 != (long *)0x0) {
          plVar7[uVar3] = lVar5;
          goto LAB_0345fb98;
        }
      }
    }
LAB_0345fba4:
    uVar4 = 2;
  }
  return uVar4;
}


