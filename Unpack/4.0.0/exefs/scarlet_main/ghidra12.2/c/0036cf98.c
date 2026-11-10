/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0036cf98; name: FUN_0036cf98
 */


void FUN_0036cf98(long param_1)

{
  undefined8 *puVar1;
  
                    /* try { // try from 0036cfa8 to 0036cfab has its CatchHandler @ 0036cfdc */
  free(*(void **)(param_1 + 0x5f8));
  puVar1 = *(undefined8 **)(param_1 + 0x800);
  *(undefined8 *)(param_1 + 0x800) = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 0036cfc0 to 0036cfc3 has its CatchHandler @ 0036cfd8 */
    (**(code **)*puVar1)();
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  FUN_00350404(param_1 + 0x10);
  return;
}


