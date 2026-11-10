/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cd644c; name: FUN_00cd644c
 */


void FUN_00cd644c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_1[2] - param_1[1];
  if (lVar4 != 0) {
    param_1[2] = param_1[2] + (lVar4 - 0x10U >> 4 ^ 0xffffffffffffffff) * 0x10;
  }
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  lVar1 = param_1[3];
  plVar5 = *(long **)param_1[4];
  uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00c4e600();
    if (0 < *(int *)(lVar3 + 0x12c8)) {
      FUN_00c48fe8(plVar5,lVar4,lVar1 - lVar4,4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00cd64dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar1 - lVar4,4);
  return;
}


