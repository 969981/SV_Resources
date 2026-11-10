/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002587ac; name: FUN_002587ac
 */


void FUN_002587ac(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  
  *param_1 = 0;
  lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x30);
  if (lVar1 != 0) {
                    /* try { // try from 002587d8 to 002587e3 has its CatchHandler @ 00258854 */
    FUN_00269fa4(lVar1,0);
  }
  *param_1 = lVar1;
  plVar2 = (long *)(*(ulong *)(lVar1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(lVar1 + 8) & 1) == 0) {
    uVar4 = *(ulong *)(param_2 + 8);
  }
  else {
    plVar2 = (long *)*plVar2;
    uVar4 = *(ulong *)(param_2 + 8);
  }
  puVar3 = (ulong *)(uVar4 & 0xfffffffffffffffe);
  if ((uVar4 & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  if ((ulong *)plVar2 != puVar3) {
                    /* try { // try from 00258808 to 00258847 has its CatchHandler @ 00258858 */
    FUN_0026ac80(lVar1,param_2);
    return;
  }
  if (lVar1 == param_2) {
    return;
  }
  FUN_0026ad40(lVar1,param_2);
  return;
}


