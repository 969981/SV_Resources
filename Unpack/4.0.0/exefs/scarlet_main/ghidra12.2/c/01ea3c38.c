/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea3c38; name: FUN_01ea3c38
 */


void FUN_01ea3c38(undefined8 *param_1,long param_2,short *param_3)

{
  short *psVar1;
  short *psVar2;
  
  psVar1 = *(short **)(param_2 + 0x4058);
  psVar2 = *(short **)(param_2 + 0x4060);
  if (psVar1 == psVar2) {
LAB_01ea3c68:
    if (psVar1 != psVar2) goto LAB_01ea3c70;
  }
  else {
    do {
      if (*psVar1 == *param_3) goto LAB_01ea3c68;
      psVar1 = psVar1 + 0x58;
    } while (psVar2 != psVar1);
  }
  psVar1 = *(short **)(param_2 + 0x4090);
  psVar2 = *(short **)(param_2 + 0x4098);
  if (psVar1 == psVar2) {
LAB_01ea3cb0:
    if (psVar1 != psVar2) {
LAB_01ea3c70:
      *param_1 = 0;
      param_1[1] = 0;
      FUN_00ca1a48(param_1,psVar1 + 4);
      return;
    }
  }
  else {
    do {
      if (*psVar1 == *param_3) goto LAB_01ea3cb0;
      psVar1 = psVar1 + 0xe4;
    } while (psVar2 != psVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


