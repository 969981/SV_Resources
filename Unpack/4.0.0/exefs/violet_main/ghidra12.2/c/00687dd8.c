/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00687dd8; name: FUN_00687dd8
 */


void FUN_00687dd8(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = *(ulong *)(param_1 + 8);
  plVar3 = (long *)(uVar2 & 0xfffffffffffffffe);
  plVar1 = plVar3;
  if ((uVar2 & 1) != 0) {
    plVar1 = (long *)*plVar3;
  }
  if ((plVar1 == (long *)0x0) && (lVar5 = *(long *)(param_1 + 0x10), lVar5 != 0)) {
    FUN_006896fc(lVar5);
    FUN_0049e790(PTR_LAB_047cba48,lVar5);
    uVar2 = *(ulong *)(param_1 + 8);
    plVar3 = (long *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar4 = uVar2 & 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)*plVar3;
  }
  if ((plVar3 == (long *)0x0) && (lVar5 = *(long *)(param_1 + 0x18), lVar5 != 0)) {
    FUN_00267ec4(lVar5);
    FUN_0049e790(PTR_LAB_047cba48,lVar5);
    uVar2 = *(ulong *)(param_1 + 8);
    uVar4 = uVar2 & 1;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (uVar4 != 0) {
    uVar2 = uVar2 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar2 + 8) & 1) != 0) {
      **(undefined1 **)(uVar2 + 0x18) = 0;
      *(undefined8 *)(uVar2 + 0x10) = 0;
      return;
    }
    *(undefined2 *)(uVar2 + 8) = 0;
  }
  return;
}


