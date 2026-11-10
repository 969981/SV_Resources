/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02706b30; name: FUN_02706b30
 */


void FUN_02706b30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_2[2];
  if ((undefined8 *)param_2[2] == (undefined8 *)0x0) {
    puVar1 = param_2;
    do {
      puVar2 = puVar1;
      puVar1 = (undefined8 *)*puVar2;
    } while (puVar2 == (undefined8 *)puVar1[2]);
    if ((undefined8 *)puVar2[2] != puVar1) {
      puVar2 = puVar1;
    }
  }
  else {
    do {
      puVar2 = puVar1;
      puVar1 = (undefined8 *)puVar2[1];
    } while ((undefined8 *)puVar2[1] != (undefined8 *)0x0);
  }
  FUN_02706bb8(param_2);
  DAT_04859d80 = DAT_04859d80 + -1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *param_1 = puVar2;
  return;
}


