/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01792ce0; name: FUN_01792ce0
 */


void FUN_01792ce0(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  code *pcVar1;
  undefined2 local_14 [2];
  
  pcVar1 = *(code **)(*(long *)PTR_DAT_047d90c8 + 0x350);
  if (pcVar1 == (code *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
  }
  else {
    local_14[0] = param_3;
    (*pcVar1)(*(long *)PTR_DAT_047d90c8 + 0x370,local_14);
  }
  return;
}


