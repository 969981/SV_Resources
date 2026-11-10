/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034c6aa8; name: FUN_034c6aa8
 */


void FUN_034c6aa8(undefined8 param_1,long param_2,int param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar10;
  undefined8 *puVar9;
  
  if ((param_3 != 2) && (*(int *)(param_2 + 0x18) != 0)) {
    puVar9 = *(undefined8 **)(param_2 + 0x10);
    do {
      puVar10 = puVar9 + 1;
      FUN_034c70dc(param_1,*puVar9);
      puVar9 = puVar10;
    } while (puVar10 !=
             (undefined8 *)(*(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_2 + 0x18) * 8));
  }
  puVar3 = PTR_DAT_047e6cb8;
  plVar8 = *(long **)PTR_DAT_047e6cb8;
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
    if (plVar8 == (long *)0x0) {
      *(undefined8 *)puVar3 = 0;
      return;
    }
    *plVar8 = (long)(PTR_DAT_047e6e40 + 0x10);
    plVar8[1] = 0;
    puVar1 = PTR_DAT_047e6958;
    lVar7 = *(long *)(PTR_DAT_047e6958 + 8);
    plVar8[2] = 0;
    plVar8[3] = lVar7;
    plVar2 = (long *)(puVar1 + 0x10);
    if (*(long *)(puVar1 + 0x10) != 0) {
      plVar2 = (long *)(lVar7 + 0x10);
    }
    *plVar2 = (long)plVar8;
    *(long **)(puVar1 + 8) = plVar8;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    puVar1 = PTR_DAT_047e6e48 + 0x10;
    plVar8[8] = 0;
    plVar8[9] = 0;
    plVar8[0xc] = 0;
    plVar8[0xd] = 0;
    *plVar8 = (long)puVar1;
    plVar8[0x12] = 0;
    plVar8[0x13] = 0;
    plVar8[0x16] = 0;
    plVar8[0x17] = 0;
    plVar8[0x1a] = 0;
    plVar8[0x1b] = 0;
    *(long **)puVar3 = plVar8;
    *(undefined2 *)(plVar8 + 0x1c) = 0x101;
  }
  if (param_3 == 2) {
    lVar7 = plVar8[0x1c];
    uVar4 = FUN_03477304(plVar8);
    uVar5 = FUN_0347702c(plVar8 + 4,param_2);
    if (((uVar4 & 1) == 0) && ((uVar5 & 1) == 0)) {
      if ((char)lVar7 != '\0') goto LAB_034c6c24;
      *(undefined1 *)(plVar8 + 0x1c) = 0;
      *(undefined4 *)(plVar8 + 9) = 0;
      *(undefined4 *)(plVar8 + 0xd) = 0;
    }
  }
  else {
    if (param_3 == 1) {
      FUN_03477e10(plVar8,param_2);
      goto LAB_034c6c24;
    }
    if (param_3 != 0) goto LAB_034c6c24;
    lVar7 = plVar8[0x1c];
    *(undefined1 *)(plVar8 + 0x1c) = 1;
    uVar4 = FUN_03476db8(plVar8 + 4,param_2);
    if (((char)lVar7 != '\0') && ((uVar4 & 1) == 0)) goto LAB_034c6c24;
  }
  FUN_03477638(plVar8);
LAB_034c6c24:
  if (*(int *)PTR_DAT_047e7008 != 2) {
    *(undefined4 *)PTR_DAT_047e7008 = 1;
  }
  lVar7 = *(long *)(PTR_DAT_047e6f98 + 0x10);
  if (lVar7 != 0) {
    do {
      lVar6 = *(long *)(*(long *)(lVar7 + 8) + 0x30);
      if ((lVar6 == 0) || (*(char *)(lVar6 + 0xe0) == '\0')) {
        *(byte *)(lVar7 + 0x54) = *(byte *)(lVar7 + 0x54) | 1;
        FUN_034c696c(lVar7 + 0x20,plVar8 + 0x18);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
    } while (lVar7 != 0);
  }
  return;
}


