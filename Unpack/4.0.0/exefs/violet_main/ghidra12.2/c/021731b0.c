/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021731b0; name: FUN_021731b0
 */


ulong FUN_021731b0(short *param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if (param_1 == (short *)0x0) {
      return 0;
    }
  }
  else {
    do {
      for (; sVar1 = *param_1, sVar1 == 0x10; param_1 = param_1 + lVar3) {
        lVar3 = (ulong)(ushort)param_1[1] + 2;
LAB_021731d8:
      }
      if (sVar1 != 10) {
        if (sVar1 == 0) {
          return 0;
        }
        lVar3 = 1;
        goto LAB_021731d8;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    if (sVar1 == 0x10) {
      lVar3 = (ulong)(ushort)psVar2[1] + 2;
    }
    else {
      if ((sVar1 == 0) || (sVar1 == 10)) {
        return (ulong)((long)psVar2 - (long)param_1) >> 1;
      }
      lVar3 = 1;
    }
    psVar2 = psVar2 + lVar3;
  } while( true );
}


