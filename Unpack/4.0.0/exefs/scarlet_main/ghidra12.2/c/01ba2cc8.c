/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ba2cc8; name: FUN_01ba2cc8
 */


void FUN_01ba2cc8(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar2 = 0;
  uVar1 = *param_2;
  *param_1 = uVar1;
  switch(uVar1) {
  case 0:
    *puVar2 = *(undefined8 *)(param_2 + 8);
    break;
  case 1:
    FUN_01ba2d70(puVar2,param_2 + 8);
    break;
  case 2:
    goto LAB_01ba2d30;
  case 3:
LAB_01ba2d30:
    FUN_01ba1eb4(param_1 + 8,param_2 + 8);
    return;
  }
  return;
}


