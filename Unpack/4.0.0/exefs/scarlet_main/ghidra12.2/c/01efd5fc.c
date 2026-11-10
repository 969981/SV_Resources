/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01efd5fc; name: FUN_01efd5fc
 */


void FUN_01efd5fc(undefined8 param_1)

{
  code *pcVar1;
  code *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [96];
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_30 = 0;
  local_28 = (long *)0x0;
  local_40 = &DAT_cbf29ce484222645;
  puStack_38 = &DAT_03c886bc;
  local_c0 = FUN_01efd9cc;
  local_b8 = FUN_00b2cd00;
  local_b0 = &LAB_00b2cea4;
  puStack_a8 = &LAB_00b2cea8;
  FUN_01efd6a8(param_1,&local_40,&local_c0);
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar1)(auStack_a0);
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


