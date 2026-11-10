/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bf320c; name: FUN_00bf320c
 */


void FUN_00bf320c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  int *piVar5;
  
  if ((*(int *)(param_4 + 0x3c) != 0xb) ||
     (*(char *)(*(long *)(*(long *)(param_4 + 0x68) + 0x20) + 0x53) == '\0')) {
    FUN_00be9330(*(undefined8 *)(param_2 + 8),param_4,"\"MapEnd\"","Field is not a map field.");
  }
  FUN_00bf2d7c(param_1,param_3,param_4);
  lVar2 = *(long *)(param_4 + 0x58);
  if (lVar2 == 0) {
    if (*(char *)(param_4 + 0x44) == '\0') {
      plVar4 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
    }
    else if (*(long *)(param_4 + 0x60) == 0) {
      plVar4 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
    }
    else {
      plVar4 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
    }
    iVar1 = (int)((ulong)(param_4 - *plVar4) >> 4) * 0x38e38e39;
  }
  else {
    lVar2 = lVar2 - *(long *)(*(long *)(lVar2 + 0x10) + 0x40) >> 4;
    uVar3 = lVar2 * -0x5555555555555555;
    if (*(int *)(param_3 + *(int *)(param_2 + 0x2c) +
                (-(uVar3 >> 0x1f & 1) & 0xfffffffc00000000 |
                lVar2 * -0x5555555555555554 & 0x3fffffffcU)) != *(int *)(param_4 + 0x38)) {
      param_3 = *(long *)(param_2 + 0x18);
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar4 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar4 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar4 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      piVar5 = (int *)(*(long *)(param_2 + 0x20) +
                      ((long)((ulong)(uint)((int)((ulong)(param_4 - *plVar4) >> 4) * 0x38e38e39) <<
                             0x20) >> 0x1e));
      goto LAB_00bf3364;
    }
    iVar1 = *(int *)(*(long *)(param_2 + 8) + 0x2c) + (int)uVar3;
  }
  piVar5 = (int *)(*(long *)(param_2 + 0x20) + (long)iVar1 * 4);
LAB_00bf3364:
                    /* WARNING: Could not recover jumptable at 0x00bf3384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + *piVar5) + 0x38))((long *)(param_3 + *piVar5),param_1);
  return;
}


