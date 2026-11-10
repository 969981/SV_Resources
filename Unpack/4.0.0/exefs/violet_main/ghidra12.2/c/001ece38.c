/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ece38; name: FUN_001ece38
 */


void FUN_001ece38(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long local_8;
  
  if ((param_1 != 0) && (lVar3 = *(long *)(param_1 + 8), lVar3 != 0)) {
    local_8 = 0;
    if (*(long *)(lVar3 + 0x100) != 0) {
      uVar1 = nnsslContextGetContextId(*(long *)(lVar3 + 0x100),&local_8);
      uVar2 = nnResultIsFailure(uVar1);
      if (((uVar2 & 1) == 0) && (local_8 != 0)) {
        uVar1 = nnsslContextDestroy(*(undefined8 *)(lVar3 + 0x100));
        nnResultIsFailure(uVar1);
      }
    }
  }
  return;
}


