/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c9ed8; name: FUN_006c9ed8
 */


void FUN_006c9ed8(long param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  
                    /* try { // try from 006c9ee8 to 006c9eef has its CatchHandler @ 006c9f60 */
  FUN_00707f24(param_1,0);
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
                    /* try { // try from 006c9f10 to 006c9f4f has its CatchHandler @ 006c9f5c */
    FUN_00708584(param_1,param_2);
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  FUN_007085fc(param_1,param_2);
  return;
}


