/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e11bb8; name: FUN_01e11bb8
 */


uint FUN_01e11bb8(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (param_2 == 3) {
    pcStack_28 = "0632_directionattack03";
    local_30 = 0x24221915db57611;
  }
  else if (param_2 == 2) {
    pcStack_28 = "0631_directionattack02";
    local_30 = 0xf22b118fc2fff857;
  }
  else {
    if (param_2 != 1) {
      uVar1 = 0;
      goto LAB_01e11c40;
    }
    pcStack_28 = "0630_directionattack01";
    local_30 = 0xd95095471110e169;
  }
  local_20 = 0x16;
  uStack_18 = 0;
  uVar1 = FUN_00c738f0(param_1,&local_30);
LAB_01e11c40:
  return uVar1 & 1;
}


