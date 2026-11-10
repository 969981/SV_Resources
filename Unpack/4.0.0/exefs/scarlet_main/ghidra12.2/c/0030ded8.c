/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0030ded8; name: FUN_0030ded8
 */


void FUN_0030ded8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (DAT_047ef3f8 != (code *)0x0 && DAT_047ef400 != 0) {
    puVar1 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    uVar2 = (*DAT_047ef3f8)(*param_2);
    *puVar1 = uVar2;
    puVar1[2] = param_2[0x15a];
    puVar1[1] = *param_1;
    *param_1 = puVar1;
  }
  return;
}


