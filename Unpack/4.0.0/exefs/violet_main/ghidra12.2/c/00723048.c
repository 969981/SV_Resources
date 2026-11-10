/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00723048; name: FUN_00723048
 */


void FUN_00723048(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 != param_1) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = uVar3 & 0xfffffffffffffffe;
      if ((*(byte *)(uVar3 + 8) & 1) != 0) {
        **(undefined1 **)(uVar3 + 0x18) = 0;
        *(undefined8 *)(uVar3 + 0x10) = 0;
        uVar3 = *(ulong *)(param_2 + 8);
        if ((uVar3 & 1) == 0) {
          return;
        }
        goto LAB_00723098;
      }
      *(undefined2 *)(uVar3 + 8) = 0;
    }
    uVar3 = *(ulong *)(param_2 + 8);
    if ((uVar3 & 1) != 0) {
LAB_00723098:
      uVar3 = uVar3 & 0xfffffffffffffffe;
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) == 0) {
        lVar2 = FUN_0021d48c();
      }
      else {
        lVar2 = (uVar4 & 0xfffffffffffffffe) + 8;
      }
      uVar4 = *(ulong *)(uVar3 + 0x10);
      lVar1 = *(long *)(uVar3 + 0x18);
      if ((*(byte *)(uVar3 + 8) & 1) == 0) {
        lVar1 = uVar3 + 9;
        uVar4 = (ulong)(*(byte *)(uVar3 + 8) >> 1);
      }
      FUN_0021d540(lVar2,lVar1,uVar4);
      return;
    }
  }
  return;
}


