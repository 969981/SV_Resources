/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a1788; name: FUN_028a1788
 */


void FUN_028a1788(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 400) != '\0') {
    nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x168));
  }
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x140));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x130));
  FUN_028a1818(param_1 + 0x120);
  pcVar1 = *(code **)(param_1 + 0xa8);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    (*pcVar1)(param_1 + 0xc0);
  }
  if (*(long **)(param_1 + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x90) + 0x20))();
  }
  if (*(long **)(param_1 + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x70) + 0x20))();
  }
  FUN_028a1890(param_1 + 8);
  return;
}


