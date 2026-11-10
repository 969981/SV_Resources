/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018c9dac; name: FUN_018c9dac
 */


undefined8 FUN_018c9dac(undefined8 param_1,undefined2 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined2 local_14 [2];
  
  pcVar2 = *(code **)(*(long *)PTR_DAT_047d90c8 + 0x2d0);
  if (pcVar2 == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    local_14[0] = param_2;
    uVar1 = (*pcVar2)(*(long *)PTR_DAT_047d90c8 + 0x2f0,local_14);
  }
  return uVar1;
}


