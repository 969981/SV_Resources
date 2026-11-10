/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006ef200; name: FUN_006ef200
 */


/* WARNING: Removing unreachable block (ram,0x006ef274) */

void FUN_006ef200(long param_1,ulong param_2)

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
  FUN_0025a28c(&local_50,0);
  lVar3 = *(long *)(param_1 + 0x20);
  puVar4 = *(undefined8 **)(lVar3 + param_2 * 8);
  if (puVar4 != (undefined8 *)0x0) {
    do {
      local_50 = puVar4;
      FUN_0025a410(plVar1,&local_50,&local_50);
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
      FUN_0025a410(plVar1,&local_50,&local_50);
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


