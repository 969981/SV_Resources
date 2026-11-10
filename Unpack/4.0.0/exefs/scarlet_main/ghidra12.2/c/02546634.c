/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02546634; name: FUN_02546634
 */


void FUN_02546634(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar2 = 0;
  uVar1 = *param_2;
  *param_1 = uVar1;
  switch(uVar1) {
  case 0:
    uVar3 = *(undefined8 *)(param_2 + 8);
    break;
  case 1:
    *puVar2 = 0;
    uVar3 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    break;
  case 2:
    FUN_02545848(param_1 + 8,param_2 + 8);
    return;
  case 3:
    FUN_02545848(puVar2,param_2 + 8);
    return;
  default:
    goto switchD_02546664_default;
  }
  *puVar2 = uVar3;
switchD_02546664_default:
  return;
}


