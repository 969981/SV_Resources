/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a9ea04; name: FUN_00a9ea04
 */


void FUN_00a9ea04(undefined8 *param_1,undefined2 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  *(undefined2 *)*param_1 = *param_2;
  puVar3 = (undefined8 *)param_1[1];
  *puVar3 = *(undefined8 *)(param_2 + 4);
  puVar3[1] = *(undefined8 *)(param_2 + 8);
  puVar3[2] = *(undefined8 *)(param_2 + 0xc);
  plVar2 = *(long **)(param_2 + 0x10);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = (long *)puVar3[3];
  puVar3[3] = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  return;
}


