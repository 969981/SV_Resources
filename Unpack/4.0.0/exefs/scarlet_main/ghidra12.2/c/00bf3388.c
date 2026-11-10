/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bf3388; name: FUN_00bf3388
 */


void FUN_00bf3388(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  int *piVar5;
  
  if ((*(int *)(param_3 + 0x3c) != 0xb) ||
     (*(char *)(*(long *)(*(long *)(param_3 + 0x68) + 0x20) + 0x53) == '\0')) {
    FUN_00be9330(*(undefined8 *)(param_1 + 8),param_3,"\"MapSize\"","Field is not a map field.");
  }
  lVar2 = *(long *)(param_3 + 0x58);
  if (lVar2 == 0) {
    if (*(char *)(param_3 + 0x44) == '\0') {
      plVar4 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
    }
    else if (*(long *)(param_3 + 0x60) == 0) {
      plVar4 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
    }
    else {
      plVar4 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
    }
    iVar1 = (int)((ulong)(param_3 - *plVar4) >> 4) * 0x38e38e39;
  }
  else {
    lVar2 = lVar2 - *(long *)(*(long *)(lVar2 + 0x10) + 0x40) >> 4;
    uVar3 = lVar2 * -0x5555555555555555;
    if (*(int *)(param_2 + *(int *)(param_1 + 0x2c) +
                (-(uVar3 >> 0x1f & 1) & 0xfffffffc00000000 |
                lVar2 * -0x5555555555555554 & 0x3fffffffcU)) != *(int *)(param_3 + 0x38)) {
      param_2 = *(long *)(param_1 + 0x18);
      if (*(char *)(param_3 + 0x44) == '\0') {
        plVar4 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar4 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
      }
      else {
        plVar4 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
      }
      piVar5 = (int *)(*(long *)(param_1 + 0x20) +
                      ((long)((ulong)(uint)((int)((ulong)(param_3 - *plVar4) >> 4) * 0x38e38e39) <<
                             0x20) >> 0x1e));
      goto LAB_00bf34cc;
    }
    iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x2c) + (int)uVar3;
  }
  piVar5 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 4);
LAB_00bf34cc:
                    /* WARNING: Could not recover jumptable at 0x00bf34e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + *piVar5) + 0x40))();
  return;
}


