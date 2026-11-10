/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027bdb80; name: FUN_027bdb80
 */


undefined8 * FUN_027bdb80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  
  if (param_1 != param_2) {
    puVar2 = param_3;
    do {
      local_18 = *puVar2;
      *puVar2 = 0;
      FUN_01e72cdc(&local_18);
      uVar1 = *param_1;
      puVar3 = param_1 + 1;
      *param_1 = 0;
      param_3 = puVar2 + 1;
      *puVar2 = uVar1;
      puVar2 = param_3;
      param_1 = puVar3;
    } while (param_2 != puVar3);
  }
  return param_3;
}


