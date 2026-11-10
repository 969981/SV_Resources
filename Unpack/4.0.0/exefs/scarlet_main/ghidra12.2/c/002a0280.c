/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002a0280; name: FUN_002a0280
 */


void FUN_002a0280(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_002a0280(param_1,*param_2);
  FUN_002a0280(param_1,param_2[1]);
  puVar1 = (undefined8 *)param_2[7];
  param_2[7] = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 002a02bc to 002a02bf has its CatchHandler @ 002a02fc */
    (**(code **)*puVar1)();
  }
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_2[6]);
  }
  FUN_0049e790(PTR_LAB_047cba48,param_2);
  return;
}


