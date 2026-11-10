/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ad170; name: FUN_003ad170
 */


undefined8 FUN_003ad170(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(int **)(param_1 + 2) + 0x30);
  if (((((*(byte *)(lVar4 + 0x60) >> 3 & 1) == 0) &&
       (iVar2 = **(int **)(param_1 + 2), 0x303 < iVar2)) && (iVar2 != 0x10000)) ||
     ((param_1[0x21] - 1U < 4 || (param_1[0x168] == 1)))) {
    iVar2 = FUN_003dc830(param_3);
  }
  else {
    iVar2 = (**(code **)(lVar4 + 0x50))(param_3);
  }
  iVar1 = 0x28;
  if (*param_1 != 0x300 || iVar2 != 0x46) {
    iVar1 = iVar2;
  }
  if ((-1 < iVar1) && ((iVar1 == 0 || ((param_1[0x11] & 1U) == 0)))) {
    if ((param_2 == 2) && (*(long *)(param_1 + 0x174) != 0)) {
      FUN_003b9ac0(*(undefined8 *)(param_1 + 0x21e));
    }
    lVar4 = *(long *)(param_1 + 0x2a);
    *(undefined4 *)(lVar4 + 0xfc) = 1;
    *(char *)(lVar4 + 0x100) = (char)param_2;
    *(char *)(*(long *)(param_1 + 0x2a) + 0x101) = (char)iVar1;
    iVar2 = FUN_003a45d0(param_1 + 0x252);
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003ad260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(long *)(param_1 + 2) + 0x78))(param_1);
      return uVar3;
    }
  }
  return 0xffffffff;
}


