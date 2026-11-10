/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0219a458; name: FUN_0219a458
 */


void FUN_0219a458(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  code *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 auStack_80 [12];
  
  if ((*PTR_DAT_047d4df8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047d4df8);
    if (iVar2 != 0) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d4e00;
  local_90 = &LAB_02b4d5ec;
  local_a0 = FUN_0219b23c;
  local_98 = FUN_02b4d5e8;
  *(undefined8 *)PTR_DAT_047d4e08 = uVar3;
  local_88 = &LAB_02b4d5f8;
  auStack_80[0] = param_2;
  FUN_0219a54c(uVar3,param_1,&local_a0);
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


