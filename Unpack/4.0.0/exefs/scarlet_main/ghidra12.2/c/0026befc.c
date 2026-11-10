/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0026befc; name: FUN_0026befc
 */


void FUN_0026befc(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  byte *pbVar3;
  long *plVar4;
  
  *param_1 = (long)(PTR_DAT_047cc308 + 0x10);
  puVar1 = (ulong *)(param_1[1] & 0xfffffffffffffffe);
  if ((param_1[1] & 1U) != 0) {
    puVar1 = (ulong *)*puVar1;
  }
  if (puVar1 == (ulong *)0x0) {
    pbVar3 = (byte *)param_1[2];
    if ((pbVar3 != PTR_DAT_047cba80) && (pbVar3 != (byte *)0x0)) {
      if ((*pbVar3 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
      }
      FUN_0049e790(PTR_LAB_047cba48,pbVar3);
    }
    plVar2 = (long *)param_1[3];
    if (plVar2 != (long *)0x0) {
      *plVar2 = (long)(PTR_DAT_047cc2c8 + 0x10);
      if (*(int *)((long)plVar2 + 0x1c) != 0) {
        FUN_002679fc(plVar2);
      }
      if ((((plVar2[1] & 1U) != 0) &&
          (plVar4 = (long *)(plVar2[1] & 0xfffffffffffffffe), *plVar4 == 0)) &&
         (plVar4 != (long *)0x0)) {
        if ((*(byte *)(plVar4 + 1) & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,plVar4[3]);
        }
        FUN_0049e790(PTR_LAB_047cba48,plVar4);
      }
      FUN_0049e790(PTR_LAB_047cba48,plVar2);
      return;
    }
  }
  return;
}


