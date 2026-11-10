/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00276878; name: FUN_00276878
 */


void FUN_00276878(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  uVar3 = param_1[4];
  *param_1 = &PTR_LAB_0448c950;
  uVar1 = uVar3 & 1;
  if ((uVar3 & 1) == 0) {
    puVar2 = param_1 + 5;
  }
  else {
    puVar2 = (undefined8 *)param_1[5];
  }
  if ((uVar3 >> 1 != 0) && (uVar3 = uVar3 >> 1, puVar2 != (undefined8 *)0x0)) {
    puVar2 = puVar2 + uVar3 * 5;
    do {
      puVar2 = puVar2 + -5;
      uVar3 = uVar3 - 1;
      (**(code **)*puVar2)(puVar2);
    } while (uVar3 != 0);
    uVar1 = param_1[4] & 1;
  }
  if (uVar1 != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_1[5]);
  }
  operator_delete(param_1);
  return;
}


