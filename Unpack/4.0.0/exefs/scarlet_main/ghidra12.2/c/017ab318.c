/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017ab318; name: FUN_017ab318
 */


void FUN_017ab318(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x358);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x368) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined8 *)(param_1 + 0x358) = 0;
    *(undefined8 *)(param_1 + 0x350) = 0;
    (*pcVar1)(param_1 + 0x370);
  }
  pcVar1 = *(code **)(param_1 + 0x2d8);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x2e8) = 0;
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    (*pcVar1)(param_1 + 0x2f0);
  }
  pcVar1 = *(code **)(param_1 + 600);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 600) = 0;
    *(undefined8 *)(param_1 + 0x250) = 0;
    (*pcVar1)(param_1 + 0x270);
  }
  if (*(long **)(param_1 + 0x228) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x228) + 0x20))();
  }
  if (*(long **)(param_1 + 0x208) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x208) + 0x20))();
  }
  if (*(long **)(param_1 + 0x1f8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1f8) + 0x20))();
  }
  if (*(long **)(param_1 + 0x1d8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1d8) + 0x20))();
  }
  if (*(long **)(param_1 + 0x1c8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1c8) + 0x20))();
  }
  if (*(long **)(param_1 + 0x1a8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1a8) + 0x20))();
  }
  if (*(long **)(param_1 + 0x198) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x198) + 0x20))();
  }
  if (*(long **)(param_1 + 0x178) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x178) + 0x20))();
  }
  if (*(long **)(param_1 + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x168) + 0x20))();
  }
  if (*(long **)(param_1 + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x148) + 0x20))();
  }
  if (*(long **)(param_1 + 0x138) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x138) + 0x20))();
  }
  if (*(long **)(param_1 + 0x118) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x118) + 0x20))();
  }
  if (*(long **)(param_1 + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x108) + 0x20))();
  }
  if (*(long **)(param_1 + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x20))();
  }
  if (*(long **)(param_1 + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xd8) + 0x20))();
  }
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))();
  }
  if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x20))();
  }
  if (*(long **)(param_1 + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x88) + 0x20))();
  }
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x20))();
  }
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x20))();
  }
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x20))();
  }
  if (*(long **)(param_1 + 0x28) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x017ab5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
  return;
}


