/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0056f8dc; name: FUN_0056f8dc
 */


void FUN_0056f8dc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  
  if (param_2 == param_1) {
    return;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  uVar2 = uVar1 & 1;
  puVar3 = (ulong *)(uVar1 & 0xfffffffffffffffe);
  if ((uVar1 & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  if ((puVar3 == (ulong *)0x0) && (lVar4 = *(long *)(param_1 + 0x10), lVar4 != 0)) {
    FUN_00584560(lVar4);
    FUN_0049e790(PTR_LAB_047cba48,lVar4);
    uVar1 = *(ulong *)(param_1 + 8);
    uVar2 = uVar1 & 1;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (uVar2 != 0) {
    uVar1 = uVar1 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar1 + 8) & 1) == 0) {
      *(undefined2 *)(uVar1 + 8) = 0;
    }
    else {
      **(undefined1 **)(uVar1 + 0x18) = 0;
      *(undefined8 *)(uVar1 + 0x10) = 0;
    }
  }
  FUN_0056f80c(param_1,param_2);
  return;
}


