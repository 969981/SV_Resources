/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012f077c; name: FUN_012f077c
 */


void FUN_012f077c(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  code *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 auStack_80 [12];
  undefined8 local_20;
  undefined8 *puStack_18;
  
  if ((*PTR_DAT_047d4df8 & 1) == 0) {
    local_20 = param_1;
    puStack_18 = param_2;
    iVar2 = __cxa_guard_acquire(PTR_DAT_047d4df8);
    param_1 = local_20;
    param_2 = puStack_18;
    if (iVar2 != 0) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
      param_1 = local_20;
      param_2 = puStack_18;
    }
  }
  lVar3 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar3;
  auStack_80[0] = *param_2;
  local_a0 = FUN_01995afc;
  local_98 = FUN_02b5a65c;
  local_90 = &LAB_02b5aca4;
  local_88 = &LAB_02b5acb0;
  FUN_011c6eec(lVar3 + 0xb1c8,param_1,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    local_88 = (undefined1 *)0x0;
    local_a0 = (code *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(auStack_80);
  }
  return;
}


