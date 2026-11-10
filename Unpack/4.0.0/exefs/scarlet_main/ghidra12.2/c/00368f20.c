/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00368f20; name: FUN_00368f20
 */


void FUN_00368f20(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar3 = *(long **)(param_2 + 8);
  lVar4 = *plVar3;
  lVar6 = plVar3[3];
  lVar5 = plVar3[2];
  param_1[1] = plVar3[1];
  *param_1 = lVar4;
  param_1[3] = lVar6;
  param_1[2] = lVar5;
  *(long **)(param_2 + 8) = plVar3 + 4;
  *(long *)(param_2 + 0x10) = lVar2 + -1;
  uVar1 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uVar1 = param_1[1];
  }
  *(ulong *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) - uVar1;
  return;
}


