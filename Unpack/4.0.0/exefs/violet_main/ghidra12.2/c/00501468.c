/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00501468; name: FUN_00501468
 */


/* WARNING: Removing unreachable block (ram,0x005014dc) */

void FUN_00501468(long param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *local_50;
  undefined8 local_48;
  long lStack_40;
  undefined8 local_38;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    plVar1 = (long *)FUN_0049e6c0(0x20);
  }
  else {
    if (*(long *)(lVar3 + 0x70) != 0) {
      FUN_00520d08(lVar3,0,0x20);
    }
    plVar1 = (long *)FUN_00520c00(lVar3,0x20);
  }
  lStack_40 = *(long *)(param_1 + 0x28);
  local_50 = &local_48;
  *plVar1 = (long)local_50;
  plVar1[2] = lStack_40;
  plVar1[1] = 0;
  plVar1[3] = 0;
  *plVar1 = (long)(plVar1 + 1);
  local_38 = 0;
  local_48 = 0;
  FUN_00500864(&local_50,0);
  lVar3 = *(long *)(param_1 + 0x20);
  puVar4 = *(undefined8 **)(lVar3 + param_2 * 8);
  if (puVar4 != (undefined8 *)0x0) {
    do {
      local_50 = puVar4;
      FUN_005015a0(plVar1,&local_50,&local_50);
      puVar2 = (undefined8 *)puVar4[2];
      puVar4[2] = 0;
      puVar4 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
    lVar3 = *(long *)(param_1 + 0x20);
  }
  puVar4 = *(undefined8 **)(lVar3 + (param_2 ^ 1) * 8);
  if (puVar4 != (undefined8 *)0x0) {
    do {
      local_50 = puVar4;
      FUN_005015a0(plVar1,&local_50,&local_50);
      puVar2 = (undefined8 *)puVar4[2];
      puVar4[2] = 0;
      puVar4 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
    lVar3 = *(long *)(param_1 + 0x20);
  }
  *(long **)(lVar3 + (param_2 ^ 1) * 8) = plVar1;
  *(long **)(*(long *)(param_1 + 0x20) + param_2 * 8) = plVar1;
  return;
}


