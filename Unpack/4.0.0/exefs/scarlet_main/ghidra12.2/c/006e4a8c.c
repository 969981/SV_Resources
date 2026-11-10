/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006e4a8c; name: FUN_006e4a8c
 */


void FUN_006e4a8c(long param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  
                    /* try { // try from 006e4a9c to 006e4aa3 has its CatchHandler @ 006e4b14 */
  FUN_007119ac(param_1,0);
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
                    /* try { // try from 006e4ac4 to 006e4b03 has its CatchHandler @ 006e4b10 */
    FUN_00712290(param_1,param_2);
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  FUN_0071233c(param_1,param_2);
  return;
}


