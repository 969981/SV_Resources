/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f0d6c; name: FUN_001f0d6c
 */


int FUN_001f0d6c(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  if (((param_2 & 1) == 0) || (*(ulong *)(param_1 + 0x920) >> 4 < 0x271)) {
    lVar2 = FUN_001f45a0(param_1 + 0x890,0x98);
    if (lVar2 == 0) {
      iVar1 = -0x385;
    }
    else {
      FUN_001f9154();
      FUN_001f47c8(lVar2,param_2,param_3);
      iVar1 = FUN_001ee7d8(param_1,lVar2);
      if (iVar1 == 0) {
        iVar1 = 0;
        if ((param_2 & 1) != 0) {
          *(long *)(param_1 + 0x920) = *(long *)(param_1 + 0x920) + 1;
        }
      }
      else {
        FUN_001f47fc(lVar2);
        FUN_001f45b0(param_1 + 0x890,lVar2);
      }
    }
  }
  else {
    iVar1 = -0x388;
  }
  return iVar1;
}


