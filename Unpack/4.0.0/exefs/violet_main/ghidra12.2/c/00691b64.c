/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00691b64; name: FUN_00691b64
 */


void FUN_00691b64(long param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_2 == param_1) {
    return;
  }
  puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar1 = (ulong *)*puVar1;
  }
  if ((puVar1 == (ulong *)0x0) && (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) {
    FUN_00513c68(lVar3);
    FUN_0049e790(PTR_LAB_047cba48,lVar3);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_00690efc(param_1);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar2 + 8) & 1) == 0) {
      *(undefined2 *)(uVar2 + 8) = 0;
    }
    else {
      **(undefined1 **)(uVar2 + 0x18) = 0;
      *(undefined8 *)(uVar2 + 0x10) = 0;
    }
  }
  FUN_0069198c(param_1,param_2);
  return;
}


