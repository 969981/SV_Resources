/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029acddc; name: FUN_029acddc
 */


ulong * FUN_029acddc(long param_1,ulong param_2,int *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  if ((param_4 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*(ushort *)(param_1 + 8);
  }
  iVar3 = 0;
  iVar4 = *param_3 + -1;
  do {
    iVar1 = iVar4 - iVar3;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 1;
    }
    iVar1 = iVar3 + (iVar1 >> 1);
    uVar5 = *(ulong *)(param_3 + (long)iVar1 * 6 + 1);
    if (param_2 <= uVar5 && uVar5 != param_2) {
LAB_029ace24:
      iVar4 = iVar1 + -1;
    }
    else {
      if (param_2 <= uVar5) {
        if (uVar2 < (uint)param_3[(long)iVar1 * 6 + 6]) goto LAB_029ace24;
        if (uVar2 <= (uint)param_3[(long)iVar1 * 6 + 6]) {
          return (ulong *)(param_3 + (long)iVar1 * 6 + 1);
        }
      }
      iVar3 = iVar1 + 1;
    }
    if (iVar4 < iVar3) {
      return (ulong *)0x0;
    }
  } while( true );
}


