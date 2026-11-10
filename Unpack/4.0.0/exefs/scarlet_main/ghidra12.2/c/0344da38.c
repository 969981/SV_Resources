/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0344da38; name: FUN_0344da38
 */


void FUN_0344da38(long param_1,undefined8 *param_2,byte *param_3,undefined4 param_4,uint param_5,
                 uint param_6,uint param_7)

{
  undefined4 uVar1;
  byte bVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  bVar2 = *param_3;
  if (bVar2 != 0xfe && (((bVar2 ^ 0xff) & 0xf0) != 0 & bVar2 >> 7) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x50) != '\0') {
    return;
  }
  plVar3 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x28);
  if (plVar3 == (long *)0x0) {
    return;
  }
  *plVar3 = param_1;
  uVar1 = *(undefined4 *)(param_3 + 8);
  plVar3[1] = *(long *)param_3;
  uVar4 = 0x40000000;
  if ((param_6 & 1) == 0) {
    uVar4 = 0;
  }
  *(undefined4 *)(plVar3 + 2) = uVar1;
  *(undefined4 *)((long)plVar3 + 0x14) = param_4;
  uVar6 = 0x80000000;
  if ((param_7 & 1) == 0) {
    uVar6 = 0;
  }
  *(uint *)(plVar3 + 3) = uVar4 | param_5 & 0x3fffffff | uVar6;
  plVar3[4] = 0;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  plVar5 = param_2 + 1;
  lVar7 = *plVar5;
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  else {
    uVar4 = *(uint *)((long)plVar3 + 0x14);
    uVar6 = *(uint *)(lVar7 + 0x14);
    lVar8 = lVar7;
    if (uVar6 <= uVar4) {
      lVar9 = 0;
      do {
        if (uVar6 == uVar4) {
          lVar8 = lVar7;
          if ((((*(uint *)(lVar7 + 0x18) >> 0x1e & 1) != 0) &&
              ((*(byte *)((long)plVar3 + 0x1b) >> 6 & 1) == 0)) ||
             ((-1 < (int)*(uint *)(lVar7 + 0x18) && ((int)plVar3[3] < 0)))) break;
        }
        lVar8 = *(long *)(lVar7 + 0x20);
        lVar9 = lVar7;
        if (lVar8 == 0) break;
        uVar6 = *(uint *)(lVar8 + 0x14);
        lVar7 = lVar8;
      } while (uVar6 <= uVar4);
      plVar3[4] = lVar8;
      if (lVar9 != 0) {
        plVar5 = (long *)(lVar9 + 0x20);
      }
      goto LAB_0344db98;
    }
  }
  plVar3[4] = lVar7;
LAB_0344db98:
  *plVar5 = (long)plVar3;
  if (lVar8 == 0) {
    *param_2 = plVar3;
  }
  return;
}


