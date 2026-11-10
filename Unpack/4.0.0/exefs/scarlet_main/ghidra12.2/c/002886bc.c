/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002886bc; name: FUN_002886bc
 */


void FUN_002886bc(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  *param_1 = 0;
  piVar2 = param_1 + 2;
  piVar2[0] = 0;
  piVar2[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  piVar4 = param_1 + 10;
  piVar4[0] = 0;
  piVar4[1] = 0;
  piVar3 = param_1 + 8;
  *(int **)piVar3 = piVar4;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  piVar4 = param_1 + 0xe;
  piVar4[0] = 0;
  piVar4[1] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  iVar1 = *param_2;
  *param_1 = iVar1;
  if (iVar1 - 3U < 2) {
    FUN_001fcec0(piVar2,param_2 + 2);
  }
  else if (iVar1 == 5) {
    if (piVar3 != param_2 + 8) {
      FUN_00288848(piVar3,*(undefined8 *)(param_2 + 8),param_2 + 10);
    }
  }
  else if ((iVar1 == 6) && (param_1 != param_2)) {
                    /* try { // try from 00288738 to 00288777 has its CatchHandler @ 00288794 */
    FUN_00288e1c(piVar4,*(undefined8 *)(param_2 + 0xe),*(undefined8 *)(param_2 + 0x10));
  }
  return;
}


