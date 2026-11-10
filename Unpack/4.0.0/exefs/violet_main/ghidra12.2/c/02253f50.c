/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02253f50; name: FUN_02253f50
 */


int FUN_02253f50(long *param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  long lVar4;
  
  if ((*param_1 == 0) || (iVar2 = FUN_0196c63c(), iVar2 == 0)) {
    return 0;
  }
  psVar3 = *(short **)(*param_1 + 0x30);
  iVar2 = 1;
  do {
    sVar1 = *psVar3;
    if (sVar1 == 0x10) {
      lVar4 = (ulong)(ushort)psVar3[1] + 2;
    }
    else {
      if (sVar1 == 0) {
        return iVar2;
      }
      lVar4 = 1;
      if (sVar1 == 10) {
        iVar2 = iVar2 + 1;
      }
    }
    psVar3 = psVar3 + lVar4;
  } while( true );
}


