/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f4288; name: FUN_001f4288
 */


void FUN_001f4288(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    while (puVar2 != (undefined8 *)0x0) {
      uVar3 = param_1[2];
      puVar1 = (undefined8 *)*puVar2;
      FUN_001f45b0(uVar3,puVar2[1]);
      puVar2[1] = 0;
      FUN_001f45b0(uVar3,puVar2);
      puVar2 = puVar1;
    }
    *param_1 = 0;
  }
  return;
}


