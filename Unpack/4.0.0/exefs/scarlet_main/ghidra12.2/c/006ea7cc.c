/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006ea7cc; name: FUN_006ea7cc
 */


void FUN_006ea7cc(long param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  
                    /* try { // try from 006ea7dc to 006ea7e3 has its CatchHandler @ 006ea854 */
  FUN_00708784(param_1,0);
  plVar1 = (long *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    uVar3 = *(ulong *)(param_2 + 8);
  }
  else {
    plVar1 = (long *)*plVar1;
    uVar3 = *(ulong *)(param_2 + 8);
  }
  puVar2 = (ulong *)(uVar3 & 0xfffffffffffffffe);
  if ((uVar3 & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if ((ulong *)plVar1 != puVar2) {
                    /* try { // try from 006ea804 to 006ea843 has its CatchHandler @ 006ea850 */
    FUN_00709020(param_1,param_2);
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  FUN_00709084(param_1,param_2);
  return;
}


