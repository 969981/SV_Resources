/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ca714; name: FUN_004ca714
 */


void FUN_004ca714(ulong *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if (((*param_1 & 1) == 0) ||
     (plVar2 = (long *)(*param_1 & 0xfffffffffffffffe), *plVar2 != 0 || plVar2 == (long *)0x0)) {
    return;
  }
  plVar3 = plVar2 + 1;
  lVar1 = *plVar3;
  if (lVar1 != plVar2[2]) {
                    /* try { // try from 004ca758 to 004ca75f has its CatchHandler @ 004ca790 */
    FUN_00514600(plVar3);
    lVar1 = *plVar3;
  }
  if (lVar1 != 0) {
    plVar2[2] = lVar1;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  FUN_0049e790(PTR_LAB_047cba48,plVar2);
  return;
}


