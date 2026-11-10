/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021eaa90; name: FUN_021eaa90
 */


void FUN_021eaa90(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_045a5110;
  puVar2 = param_1 + 10;
  puVar1 = puVar2;
  if (param_1[0xe] != 0) {
    puVar1 = puVar2 + param_1[0xe];
  }
  if (puVar1 != puVar2) {
    (**(code **)(*(long *)param_1[10] + 8))((long *)param_1[10],param_1);
    for (puVar2 = param_1 + 0xb; puVar1 != puVar2; puVar2 = puVar2 + 1) {
      (**(code **)(*(long *)*puVar2 + 8))((long *)*puVar2,param_1);
    }
  }
  if ((long *)param_1[4] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x021eaaf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x20))();
  return;
}


