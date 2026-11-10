/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


