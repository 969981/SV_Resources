/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00603720; name: FUN_00603720
 */


void FUN_00603720(long *param_1)

{
  byte *pbVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = (long)(PTR_DAT_047ced20 + 0x10);
  pbVar1 = (byte *)param_1[5];
  if (pbVar1 != PTR_DAT_047cba80 && pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar1 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar1);
  }
  if ((param_1 != (long *)PTR_DAT_047ced18) && (lVar2 = param_1[6], lVar2 != 0)) {
    FUN_0060ac04(lVar2);
    FUN_0049e790(PTR_LAB_047cba48,lVar2);
  }
  if ((((param_1[1] & 1U) == 0) ||
      (plVar3 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar3 != 0)) || (plVar3 == (long *)0x0)
     ) {
    FUN_005322a4(param_1 + 2);
    return;
  }
  if ((*(byte *)(plVar3 + 1) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,plVar3[3]);
  }
  FUN_0049e790(PTR_LAB_047cba48,plVar3);
  FUN_005322a4(param_1 + 2);
  return;
}


