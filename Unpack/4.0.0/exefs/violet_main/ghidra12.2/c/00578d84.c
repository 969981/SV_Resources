/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00578d84; name: FUN_00578d84
 */


void FUN_00578d84(long *param_1)

{
  long *plVar1;
  byte *pbVar2;
  
  *param_1 = (long)(PTR_DAT_047ce2f8 + 0x10);
  pbVar2 = (byte *)param_1[2];
  if (pbVar2 != PTR_DAT_047cba80 && pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  }
  if (*(int *)((long)param_1 + 0x24) != 0) {
    FUN_00578bac(param_1);
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


