/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006057e8; name: FUN_006057e8
 */


void FUN_006057e8(long *param_1)

{
  long *plVar1;
  byte *pbVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_047ced00 + 0x10);
  pbVar2 = (byte *)param_1[2];
  if (pbVar2 != PTR_DAT_047cba80 && pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  }
  if ((param_1 != (long *)PTR_DAT_047cecf8) && (lVar3 = param_1[3], lVar3 != 0)) {
    FUN_006110c4(lVar3);
    FUN_0049e790(PTR_LAB_047cba48,lVar3);
  }
  if ((((param_1[1] & 1U) == 0) ||
      (plVar1 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar1 != 0)) || (plVar1 == (long *)0x0)
     ) {
    return;
  }
  if ((*(byte *)(plVar1 + 1) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,plVar1[3]);
  }
  FUN_0049e790(PTR_LAB_047cba48,plVar1);
  return;
}


