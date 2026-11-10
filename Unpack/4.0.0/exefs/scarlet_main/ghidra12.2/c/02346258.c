/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02346258; name: FUN_02346258
 */


void FUN_02346258(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  puVar3 = (undefined8 *)(param_1 + 8);
  *puVar3 = 0;
  uVar1 = *param_2;
  *param_1 = uVar1;
  switch(uVar1) {
  case 0:
    uVar2 = *(undefined8 *)(param_2 + 8);
    break;
  case 1:
    FUN_01d89d94(puVar3,0);
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    break;
  case 2:
    goto LAB_023462dc;
  case 3:
LAB_023462dc:
    FUN_02345e00(param_1 + 8,param_2 + 8);
    return;
  default:
    goto switchD_02346298_default;
  }
  *puVar3 = uVar2;
switchD_02346298_default:
  return;
}


