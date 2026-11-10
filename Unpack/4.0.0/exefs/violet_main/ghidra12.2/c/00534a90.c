/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00534a90; name: FUN_00534a90
 */


void FUN_00534a90(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  *param_1 = (long)(PTR_DAT_047cdca8 + 0x10);
  if (((param_1[1] & 1U) == 0) ||
     (plVar2 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar2 != 0 || plVar2 == (long *)0x0)) {
    FUN_005322a4(param_1 + 2);
    return;
  }
  plVar3 = plVar2 + 1;
  lVar1 = *plVar3;
  if (lVar1 != plVar2[2]) {
                    /* try { // try from 00534aec to 00534af3 has its CatchHandler @ 00534b2c */
    FUN_00514600(plVar3);
    lVar1 = *plVar3;
  }
  if (lVar1 != 0) {
    plVar2[2] = lVar1;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  FUN_0049e790(PTR_LAB_047cba48,plVar2);
  FUN_005322a4(param_1 + 2);
  return;
}


