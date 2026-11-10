/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00305510; name: FUN_00305510
 */


void FUN_00305510(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if ((puVar1 == (undefined4 *)0x0) &&
     (puVar1 = (undefined4 *)FUN_0038ad50(PTR_DAT_047cca80,param_2), puVar1 != (undefined4 *)0x0)) {
    *param_1 = puVar1;
  }
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1 = (undefined4 *)param_1[1];
  if ((puVar1 == (undefined4 *)0x0) &&
     (puVar1 = (undefined4 *)FUN_0038ad50(PTR_DAT_047cca80,param_2), puVar1 != (undefined4 *)0x0)) {
    param_1[1] = puVar1;
  }
  *puVar1 = param_3[2];
  puVar1[1] = param_3[3];
  return;
}


