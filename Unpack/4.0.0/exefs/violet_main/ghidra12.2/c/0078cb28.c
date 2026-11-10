/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078cb28; name: FUN_0078cb28
 */


void FUN_0078cb28(undefined4 *param_1)

{
  code *pcVar1;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  FUN_00cbd7c0(auStack_40);
  FUN_018ff39c(param_1 + 1,auStack_40);
  *param_1 = 2;
  FUN_00cbd7c0(auStack_50,param_1 + 1);
  pcVar1 = *(code **)(param_1 + 6);
  if (pcVar1 != (code *)0x0) {
    FUN_00cbd7c0(auStack_30,auStack_50);
    (*pcVar1)(auStack_30,*(undefined8 *)(param_1 + 8));
  }
  return;
}


