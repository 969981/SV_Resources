/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00163d20; name: FUN_00163d20
 */


void FUN_00163d20(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  param_3 = param_3 - *(long *)(param_1 + 200);
  if (param_3 < 1) {
    lVar2 = 0;
LAB_00163d94:
    uVar5 = (ulong)(int)lVar2;
    lVar2 = *(long *)(param_1 + 0xf0);
    if ((long)uVar5 <= lVar2) goto LAB_00163dc4;
  }
  else {
    lVar3 = *(long *)(param_1 + 0xc0);
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = (param_3 + lVar3 + -1) / lVar3;
    }
    lVar4 = *(long *)(param_1 + 0xd0);
    if (lVar2 * lVar3 <= param_4 - *(long *)(param_1 + 200) && lVar2 * lVar3 <= lVar4)
    goto LAB_00163d94;
    if (lVar4 <= param_3) {
      param_3 = lVar4;
    }
    iVar1 = 0;
    if (lVar3 != 0) {
      iVar1 = (int)(param_3 / lVar3);
    }
    uVar5 = (ulong)iVar1;
    lVar2 = *(long *)(param_1 + 0xf0);
    if ((long)uVar5 <= lVar2) goto LAB_00163dc4;
  }
  do {
    if (*(long *)(param_1 + 0xe8) <= lVar2) break;
    FUN_00163500(param_1);
    lVar2 = *(long *)(param_1 + 0xf0);
  } while (lVar2 < (long)uVar5);
LAB_00163dc4:
  FUN_00163b30(param_1,param_2,uVar5 & 0xffffffff);
  return;
}


