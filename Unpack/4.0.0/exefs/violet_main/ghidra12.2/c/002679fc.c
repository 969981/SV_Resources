/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002679fc; name: FUN_002679fc
 */


void FUN_002679fc(long param_1)

{
  ulong *puVar1;
  byte *pbVar2;
  long *plVar3;
  
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 6:
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 == (ulong *)0x0) && (pbVar2 = *(byte **)(param_1 + 0x10), pbVar2 != (byte *)0x0)) {
      FUN_00513c68(pbVar2);
LAB_00267b68:
      FUN_0049e790(PTR_LAB_047cba48,pbVar2);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return;
    }
    break;
  case 7:
  case 8:
  case 0xb:
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if (((puVar1 == (ulong *)0x0) &&
        (pbVar2 = *(byte **)(param_1 + 0x10), pbVar2 != PTR_DAT_047cba80)) &&
       (pbVar2 != (byte *)0x0)) {
      if ((*pbVar2 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(long *)(pbVar2 + 0x10));
      }
      goto LAB_00267b68;
    }
    break;
  case 9:
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 == (ulong *)0x0) && (pbVar2 = *(byte **)(param_1 + 0x10), pbVar2 != (byte *)0x0)) {
      FUN_0026976c(pbVar2);
      goto LAB_00267b68;
    }
    break;
  case 10:
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 == (ulong *)0x0) && (pbVar2 = *(byte **)(param_1 + 0x10), pbVar2 != (byte *)0x0)) {
      *(undefined **)pbVar2 = PTR_DAT_047cc2f8 + 0x10;
      if (((*(ulong *)(pbVar2 + 8) & 1) != 0) &&
         ((plVar3 = (long *)(*(ulong *)(pbVar2 + 8) & 0xfffffffffffffffe), *plVar3 == 0 &&
          (plVar3 != (long *)0x0)))) {
        if ((*(byte *)(plVar3 + 1) & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,plVar3[3]);
        }
        FUN_0049e790(PTR_LAB_047cba48,plVar3);
      }
      FUN_0026b8c8(pbVar2 + 0x10);
      goto LAB_00267b68;
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


