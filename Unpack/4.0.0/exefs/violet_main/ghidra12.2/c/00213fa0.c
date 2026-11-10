/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00213fa0; name: FUN_00213fa0
 */


void FUN_00213fa0(undefined *param_1)

{
  long *plVar1;
  byte *pbVar2;
  long lVar3;
  long *plVar4;
  
  pbVar2 = *(byte **)(param_1 + 0x10);
  if (pbVar2 != PTR_DAT_047cba80 && pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  }
  if (param_1 != PTR_DAT_047cbd08) {
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != 0) {
      FUN_0021d964(lVar3);
      FUN_0049e790(PTR_LAB_047cba48,lVar3);
    }
    plVar1 = *(long **)(param_1 + 0x20);
    if (plVar1 != (long *)0x0) {
      *plVar1 = (long)(PTR_DAT_047cbd38 + 0x10);
      if (*(int *)((long)plVar1 + 0x1c) != 0) {
        FUN_0021c298(plVar1);
      }
      if ((((plVar1[1] & 1U) != 0) &&
          (plVar4 = (long *)(plVar1[1] & 0xfffffffffffffffe), *plVar4 == 0)) &&
         (plVar4 != (long *)0x0)) {
        if ((*(byte *)(plVar4 + 1) & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,plVar4[3]);
        }
        FUN_0049e790(PTR_LAB_047cba48,plVar4);
      }
      FUN_0049e790(PTR_LAB_047cba48,plVar1);
      return;
    }
  }
  return;
}


