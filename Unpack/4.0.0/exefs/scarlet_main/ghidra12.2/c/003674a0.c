/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003674a0; name: FUN_003674a0
 */


void FUN_003674a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x40);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[5] = 1;
    *(undefined4 *)(puVar2 + 1) = 3;
    puVar1 = PTR_LAB_047cced8;
    *puVar2 = puVar2 + 5;
    puVar2[4] = puVar2;
    puVar2[2] = puVar2;
    puVar2[3] = puVar1;
    puVar2[6] = param_4;
    puVar2[7] = param_2;
  }
  param_1[1] = param_3;
  param_1[2] = param_2;
  *param_1 = puVar2;
  return;
}


