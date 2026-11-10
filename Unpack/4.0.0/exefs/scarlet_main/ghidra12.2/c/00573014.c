/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00573014; name: FUN_00573014
 */


void FUN_00573014(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong *puVar3;
  byte *pbVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 4) {
    puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar3 = (ulong *)*puVar3;
    }
    if ((puVar3 != (ulong *)0x0) || (pbVar4 = *(byte **)(param_1 + 0x18), pbVar4 == (byte *)0x0))
    goto LAB_005730b0;
    FUN_00575718(pbVar4);
  }
  else {
    if (iVar1 == 3) {
      puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar3 = (ulong *)*puVar3;
      }
      if ((puVar3 != (ulong *)0x0) || (pbVar4 = *(byte **)(param_1 + 0x18), pbVar4 == (byte *)0x0))
      goto LAB_005730b0;
      *(undefined **)pbVar4 = PTR_DAT_047ce1a0 + 0x10;
      if ((pbVar4 != PTR_DAT_047ce198) && (lVar5 = *(long *)(pbVar4 + 0x10), lVar5 != 0)) {
        FUN_00578d84(lVar5);
        FUN_0049e790(PTR_LAB_047cba48,lVar5);
      }
      if ((((*(ulong *)(pbVar4 + 8) & 1) == 0) ||
          (plVar2 = (long *)(*(ulong *)(pbVar4 + 8) & 0xfffffffffffffffe), *plVar2 != 0)) ||
         (plVar2 == (long *)0x0)) goto LAB_00573168;
      if ((*(byte *)(plVar2 + 1) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,plVar2[3]);
      }
    }
    else {
      if (iVar1 != 2) {
LAB_005730b0:
        *(undefined4 *)(param_1 + 0x24) = 0;
        return;
      }
      puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar3 = (ulong *)*puVar3;
      }
      if (((puVar3 != (ulong *)0x0) ||
          (pbVar4 = *(byte **)(param_1 + 0x18), pbVar4 == PTR_DAT_047cba80)) ||
         (pbVar4 == (byte *)0x0)) goto LAB_005730b0;
      if ((*pbVar4 & 1) == 0) goto LAB_00573168;
      plVar2 = *(long **)(pbVar4 + 0x10);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar2);
  }
LAB_00573168:
  FUN_0049e790(PTR_LAB_047cba48,pbVar4);
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


