/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005d7c0c; name: FUN_005d7c0c
 */


void FUN_005d7c0c(long param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  
                    /* try { // try from 005d7c1c to 005d7c23 has its CatchHandler @ 005d7c94 */
  FUN_005fed00(param_1,0);
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
                    /* try { // try from 005d7c44 to 005d7c83 has its CatchHandler @ 005d7c90 */
    FUN_005ff7b8(param_1,param_2);
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  FUN_005ff7f4(param_1,param_2);
  return;
}


