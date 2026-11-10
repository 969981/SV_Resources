/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c6b00; name: FUN_001c6b00
 */


undefined8 FUN_001c6b00(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_14 [4];
  
  if ((*(byte *)(param_1 + 0x2a0) & 1) == 0) {
    if (*(int *)(param_1 + 600) == -1) {
      return 0;
    }
    lVar1 = nnsocketRecv(*(int *)(param_1 + 600),auStack_14,1,2);
    if (lVar1 == 0) {
      return 0;
    }
  }
  else {
    uVar2 = thunk_FUN_001ec460();
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  return 1;
}


