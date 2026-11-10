/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006efc7c; name: FUN_006efc7c
 */


void FUN_006efc7c(long param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  
                    /* try { // try from 006efc8c to 006efc93 has its CatchHandler @ 006efd04 */
  FUN_007231a8(param_1,0);
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
                    /* try { // try from 006efcb4 to 006efcf3 has its CatchHandler @ 006efd00 */
    FUN_00723808(param_1,param_2);
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  FUN_00723880(param_1,param_2);
  return;
}


