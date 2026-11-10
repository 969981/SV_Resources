/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014e6294; name: FUN_014e6294
 */


void FUN_014e6294(undefined8 param_1,long param_2,ulong param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long *local_d0;
  undefined1 auStack_c8 [144];
  long *local_38;
  
  FUN_014e5ac0(auStack_c8,
               param_2 + (ulong)*(byte *)(param_2 + (param_3 & 0xffffffff) + 0x68bc) * 0x98 + 0x30);
  plVar3 = *(long **)(param_2 + 0x6cd0);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x58))(plVar3);
  }
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 6;
  }
  local_e8 = *plVar1;
  plVar1 = (long *)PTR_PTR_047d4508;
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 7;
  }
  lStack_e0 = *plVar1;
  if (local_38 == (long *)0x0) {
    local_d8 = 0;
  }
  else {
    local_d8 = local_38[8];
  }
  local_d0 = (long *)0x0;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))(local_38);
  }
  local_d0 = local_38;
  if ((plVar3 != (long *)0x0) &&
     (puVar2 = (undefined8 *)FUN_00e895f4(plVar3[0x2e],&local_e8), puVar2 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)*puVar2 + 0x20))((long *)*puVar2,1);
    (**(code **)(*(long *)*puVar2 + 0xd0))(param_1);
    *(undefined1 *)((long)puVar2 + 0x31) = 0;
    if ((undefined1 *)puVar2[7] != (undefined1 *)0x0) {
      *(undefined1 *)puVar2[7] = 1;
    }
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x60))(plVar3);
  }
  FUN_014e58d8(auStack_c8);
  return;
}


