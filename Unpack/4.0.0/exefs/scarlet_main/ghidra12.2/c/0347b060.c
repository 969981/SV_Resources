/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0347b060; name: FUN_0347b060
 */


int FUN_0347b060(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  
  iVar5 = FUN_034a2154();
  if (iVar5 != 1) {
    return iVar5;
  }
  lVar9 = param_1[0x46];
  if (lVar9 != 0) {
    puVar6 = *(undefined8 **)(lVar9 + 0x28);
    plVar2 = param_1 + 2;
    uVar4 = *(uint *)(lVar9 + 0x30);
    puVar3 = puVar6;
    if ((uVar4 != 0) && ((long *)*puVar6 != plVar2)) {
      lVar7 = (ulong)uVar4 * 8;
      puVar8 = puVar6;
      do {
        lVar7 = lVar7 + -8;
        puVar3 = puVar6 + uVar4;
        if (lVar7 == 0) break;
        puVar3 = puVar8 + 1;
        puVar1 = puVar8 + 1;
        puVar8 = puVar3;
      } while ((long *)*puVar1 != plVar2);
    }
    if ((puVar3 == (undefined8 *)0x0) || (puVar6 + uVar4 == puVar3)) {
      uVar10 = *(uint *)(lVar9 + 0x34);
      if (uVar10 <= uVar4) {
        iVar5 = uVar10 + (uVar10 >> 1);
        if (uVar10 == 0) {
          iVar5 = 1;
        }
        uVar10 = iVar5 + uVar10;
        puVar6 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,puVar6,(ulong)uVar10 << 3);
        if (puVar6 == (undefined8 *)0x0) goto LAB_0347b168;
        *(undefined8 **)(lVar9 + 0x28) = puVar6;
        *(uint *)(lVar9 + 0x34) = uVar10;
      }
      if (uVar4 < uVar10) {
        uVar4 = *(uint *)(lVar9 + 0x30);
        *(uint *)(lVar9 + 0x30) = uVar4 + 1;
        if (puVar6 != (undefined8 *)0x0) {
          puVar6[uVar4] = plVar2;
          (**(code **)(*param_1 + 0xb0))(param_1,0xe,0xffffffff);
          goto LAB_0347b17c;
        }
      }
    }
LAB_0347b168:
    *(byte *)((long)param_1 + 0x2ba) = *(byte *)((long)param_1 + 0x2ba) & 0xf8 | 2;
    param_1[0x46] = 0;
  }
LAB_0347b17c:
  lVar9 = param_1[0x47];
  if (lVar9 == 0) goto LAB_0347b260;
  puVar6 = *(undefined8 **)(lVar9 + 0x28);
  plVar2 = param_1 + 2;
  uVar4 = *(uint *)(lVar9 + 0x30);
  puVar3 = puVar6;
  if ((uVar4 != 0) && ((long *)*puVar6 != plVar2)) {
    lVar7 = (ulong)uVar4 * 8;
    puVar8 = puVar6;
    do {
      lVar7 = lVar7 + -8;
      puVar3 = puVar6 + uVar4;
      if (lVar7 == 0) break;
      puVar3 = puVar8 + 1;
      puVar1 = puVar8 + 1;
      puVar8 = puVar3;
    } while ((long *)*puVar1 != plVar2);
  }
  if ((puVar3 == (undefined8 *)0x0) || (puVar6 + uVar4 == puVar3)) {
    uVar10 = *(uint *)(lVar9 + 0x34);
    if (uVar10 <= uVar4) {
      iVar5 = uVar10 + (uVar10 >> 1);
      if (uVar10 == 0) {
        iVar5 = 1;
      }
      uVar10 = iVar5 + uVar10;
      puVar6 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,puVar6,(ulong)uVar10 << 3);
      if (puVar6 == (undefined8 *)0x0) goto LAB_0347b25c;
      *(undefined8 **)(lVar9 + 0x28) = puVar6;
      *(uint *)(lVar9 + 0x34) = uVar10;
    }
    if (uVar4 < uVar10) {
      uVar4 = *(uint *)(lVar9 + 0x30);
      *(uint *)(lVar9 + 0x30) = uVar4 + 1;
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[uVar4] = plVar2;
        (**(code **)(*param_1 + 0xb0))(param_1,0xe,0xffffffff);
        goto LAB_0347b260;
      }
    }
  }
LAB_0347b25c:
  param_1[0x47] = 0;
LAB_0347b260:
  if ((((*(byte *)((long)param_1 + 0x2ba) & 7) == 0) && (*(int *)((long)param_1 + 0x2d4) != 0)) &&
     (param_1[0x47] == 0)) {
    *(byte *)((long)param_1 + 0x2ba) = *(byte *)((long)param_1 + 0x2ba) & 0xf8 | 1;
  }
  return 1;
}


