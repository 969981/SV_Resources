/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031cee84; name: FUN_031cee84
 */


long FUN_031cee84(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_18;
  
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 == 0) {
      uVar6 = *(ulong *)(param_1 + 8);
      uVar3 = 0;
      if (uVar6 != 0) {
        uVar3 = 0x100 / uVar6;
      }
      if (0x100 < uVar6) {
        uVar3 = 1;
      }
      lVar5 = 0x20;
      if (0x10 < *(ulong *)(param_1 + 0x30)) {
        lVar5 = *(ulong *)(param_1 + 0x30) + 0x10;
      }
      lVar5 = lVar5 + uVar3 * uVar6;
      *(long *)(param_1 + 0x28) = lVar5;
    }
    plVar2 = *(long **)(param_1 + 0x58);
    if (plVar2 == (long *)0x0) {
      puVar4 = (undefined8 *)
               (**(code **)(**(long **)(param_1 + 0x50) + 0x18))(*(long **)(param_1 + 0x50),lVar5);
      if (puVar4 == (undefined8 *)0x0) {
        return 0;
      }
      lVar1 = *(long *)(param_1 + 0x30);
      puVar4[1] = 0;
      uVar6 = (long)puVar4 + lVar1 + 0x1f & -lVar1;
      uVar3 = 0;
      if (*(ulong *)(param_1 + 8) != 0) {
        uVar3 = ((long)puVar4 + (lVar5 - uVar6)) / *(ulong *)(param_1 + 8);
      }
      puVar4[2] = uVar6;
      puVar4[3] = uVar3;
    }
    else {
      local_18 = 0;
      puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,0x20,&local_18);
      if (puVar4 == (undefined8 *)0x0) {
        return 0;
      }
      lVar5 = *(long *)(param_1 + 0x28);
      uVar3 = (**(code **)(**(long **)(param_1 + 0x50) + 0x18))(*(long **)(param_1 + 0x50),lVar5);
      if (uVar3 == 0) {
        (**(code **)(**(long **)(param_1 + 0x58) + 0x20))(*(long **)(param_1 + 0x58),puVar4,0x20);
        return 0;
      }
      puVar4[1] = uVar3;
      uVar6 = (uVar3 + *(long *)(param_1 + 0x30)) - 1 & -*(long *)(param_1 + 0x30);
      if ((uVar3 == uVar6) && (lVar5 == *(long *)(param_1 + 0x28))) {
        uVar7 = *(ulong *)(param_1 + 0x38);
        uVar6 = uVar3;
      }
      else {
        uVar7 = 0;
        if (*(ulong *)(param_1 + 8) != 0) {
          uVar7 = ((uVar3 + lVar5) - uVar6) / *(ulong *)(param_1 + 8);
        }
      }
      puVar4[2] = uVar6;
      puVar4[3] = uVar7;
    }
    *(undefined8 *)(param_1 + 0x40) = puVar4[2];
    *(long *)(param_1 + 0x48) = puVar4[2] + *(long *)(param_1 + 8) * puVar4[3];
    *puVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 **)(param_1 + 0x18) = puVar4;
    lVar1 = *(long *)(param_1 + 0x40);
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + puVar4[3];
    lVar5 = puVar4[3] + *(long *)(param_1 + 0x68);
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = *puVar4;
    *(undefined8 *)(param_1 + 0x40) = puVar4[2];
    *(long *)(param_1 + 0x48) = puVar4[2] + *(long *)(param_1 + 8) * puVar4[3];
    *puVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 **)(param_1 + 0x18) = puVar4;
    lVar5 = *(long *)(param_1 + 0x68);
    lVar1 = *(long *)(param_1 + 0x40);
  }
  *(long *)(param_1 + 0x68) = lVar5 + -1;
  *(long *)(param_1 + 0x40) = lVar1 + *(long *)(param_1 + 8);
  return lVar1;
}


