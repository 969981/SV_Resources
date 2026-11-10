/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a9a38; name: FUN_034a9a38
 */


float FUN_034a9a38(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ushort *puVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  
  plVar10 = (long *)(param_1 + 0x20);
  uVar4 = (**(code **)(*plVar10 + 0x20))(plVar10);
  fVar12 = 0.0;
  uVar9 = (uint)param_2;
  if (((((uVar4 & 1) != 0) && (*(char *)(param_1 + 0x28) != '\0')) &&
      (uVar4 = (**(code **)(*plVar10 + 0x28))(plVar10,param_2 & 0xffffffff), (uVar4 & 1) != 0)) &&
     ((plVar10 = (long *)(**(code **)(*plVar10 + 0x80))(plVar10), plVar10 != (long *)0x0 &&
      (lVar5 = *plVar10, lVar5 != 0)))) {
    fVar12 = 0.0;
    do {
      puVar6 = *(ushort **)(lVar5 + 0x20);
      if (puVar6 != (ushort *)0x0) {
        uVar2 = *puVar6;
        uVar8 = (uint)uVar2;
        if (uVar2 < 2) {
          uVar8 = 1;
        }
        uVar4 = (ulong)uVar8;
        pfVar7 = (float *)((long)puVar6 + ((ulong)((uint)uVar2 * 2 + 5) & 0x3fffc));
        do {
          puVar6 = puVar6 + 1;
          if ((uint)*puVar6 == (uVar9 & 0xffff)) {
            fVar12 = *pfVar7 + fVar12;
            break;
          }
          pfVar7 = pfVar7 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
    } while (lVar5 != 0);
  }
  if ((*(ulong **)(param_1 + 0x40) != (ulong *)0x0) &&
     ((**(ulong **)(param_1 + 0x40) >> (param_2 & 0x3f) & 1) != 0)) {
    lVar5 = *(long *)PTR_DAT_047e6fd8;
    uVar8 = *(uint *)(lVar5 + 0x20);
    fVar11 = 0.0;
    if (uVar8 != 0) {
      uVar1 = (int)(param_1 + 0x38) + uVar9;
      uVar3 = 0;
      if (uVar8 != 0) {
        uVar3 = uVar1 / uVar8;
      }
      for (plVar10 = *(long **)(*(long *)(lVar5 + 0x18) + (ulong)(uVar1 - uVar3 * uVar8) * 8);
          plVar10 != (long *)0x0; plVar10 = (long *)plVar10[2]) {
        if ((*plVar10 == param_1 + 0x38) && (*(uint *)(plVar10 + 1) == uVar9)) {
          if (*(int *)((long)plVar10 + 0x4c) == 3) {
            fVar11 = (float)FUN_0348209c();
          }
          else {
            fVar11 = (float)FUN_03482338(lVar5,plVar10,param_3);
          }
          break;
        }
      }
    }
    fVar12 = fVar11 + fVar12;
  }
  return fVar12;
}


