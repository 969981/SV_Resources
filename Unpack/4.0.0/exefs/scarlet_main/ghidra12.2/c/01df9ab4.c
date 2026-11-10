/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df9ab4; name: FUN_01df9ab4
 */


void FUN_01df9ab4(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined1 auStack_40 [24];
  long *local_28;
  
  switch(param_2) {
  case 1:
    puVar1 = &DAT_045435e0;
    break;
  case 2:
    puVar1 = &DAT_045435f8;
    break;
  case 3:
    puVar1 = &DAT_04543610;
    break;
  case 4:
    puVar1 = &DAT_04543628;
    break;
  default:
    goto switchD_01df9ae8_default;
  }
  FUN_00d8fb98(auStack_40,puVar1);
  FUN_01df9b54(param_1,auStack_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
switchD_01df9ae8_default:
  return;
}


