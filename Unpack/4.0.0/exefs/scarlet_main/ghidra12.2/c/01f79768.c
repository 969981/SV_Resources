/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f79768; name: FUN_01f79768
 */


void FUN_01f79768(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 == puVar2) {
    puVar1 = puVar2;
  }
  else {
    do {
      puVar1 = puVar1 + -0x3c;
      (**(code **)*puVar1)(puVar1);
    } while (puVar2 != puVar1);
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[1] = (long)puVar2;
                    /* WARNING: Could not recover jumptable at 0x01f797d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar1,param_1[2] - (long)puVar1,8);
  return;
}


