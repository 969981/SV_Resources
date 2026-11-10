/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01494f04; name: FUN_01494f04
 */


void FUN_01494f04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar2 = PTR_DAT_047d2268;
  puVar1 = PTR_DAT_047d2260;
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 == 0) goto LAB_01494f68;
  if (*(long *)(lVar3 + 8) == 0) {
LAB_01494f58:
    (**(code **)puVar1)(lVar3,*(undefined8 *)puVar2);
  }
  else {
    (**(code **)PTR_DAT_047d2260)(*(long *)(lVar3 + 8),*(undefined8 *)PTR_DAT_047d2268);
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 != 0) goto LAB_01494f58;
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
LAB_01494f68:
  plVar4 = *(long **)(param_1 + 0x50);
  while (plVar4 != (long *)(param_1 + 0x48)) {
    plVar6 = (long *)plVar4[1];
    lVar3 = *plVar6;
    *(long **)(*plVar4 + 8) = plVar6;
    *plVar6 = *plVar4;
    *(long **)(lVar3 + 8) = plVar4;
    *plVar4 = lVar3;
    plVar4 = *(long **)(param_1 + 0x50);
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    FUN_00894b08(lVar3);
    (**(code **)puVar1)(lVar3,*(undefined8 *)puVar2);
  }
  plVar4 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if ((plVar4 != (long *)0x0) && ((*(byte *)(plVar4 + 0xb) >> 3 & 1) == 0)) {
    (**(code **)(*plVar4 + 0x18))(plVar4,param_2);
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5);
      (**(code **)puVar1)(puVar5,*(undefined8 *)puVar2);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  plVar4 = *(long **)(param_1 + 0x10);
  while ((long *)(param_1 + 8) != plVar4) {
    plVar6 = (long *)plVar4[1];
    if ((long *)(param_1 + 8) != plVar4) {
      lVar3 = *plVar6;
      *(long **)(*plVar4 + 8) = plVar6;
      *plVar6 = *plVar4;
      *(long **)(lVar3 + 8) = plVar4;
      *plVar4 = lVar3;
    }
    plVar4 = plVar4 + -1;
    (**(code **)(*plVar4 + 8))(plVar4);
    (**(code **)puVar1)(plVar4,*(undefined8 *)puVar2);
    plVar4 = plVar6;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}


