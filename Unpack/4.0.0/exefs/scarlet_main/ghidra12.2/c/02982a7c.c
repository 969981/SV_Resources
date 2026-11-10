/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02982a7c; name: FUN_02982a7c
 */


int FUN_02982a7c(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(byte *)((long)param_1 + 0xa6);
  if (uVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    do {
      uVar1 = (**(code **)(*(long *)*param_1 + 0x200))();
      iVar2 = iVar2 + (~uVar1 & 1);
      uVar3 = uVar3 - 1;
      param_1 = param_1 + 1;
    } while (uVar3 != 0);
  }
  return iVar2;
}


