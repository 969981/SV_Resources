/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001dc000; name: FUN_001dc000
 */


undefined4 FUN_001dc000(void)

{
  int iVar1;
  long lVar2;
  long *in_x3;
  undefined4 uVar3;
  
  lVar2 = nnsocketRecv();
  if (lVar2 == -1) {
    iVar1 = nnsocketGetLastErrno();
    uVar3 = 0x51;
    if (iVar1 != 4 && iVar1 != 0xb) {
      uVar3 = 0x38;
    }
  }
  else {
    uVar3 = 0;
    *in_x3 = lVar2;
  }
  return uVar3;
}


