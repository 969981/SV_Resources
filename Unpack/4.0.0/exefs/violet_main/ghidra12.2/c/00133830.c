/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00133830; name: FUN_00133830
 */


void FUN_00133830(long *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = *(byte *)((long)param_1 + 0x44);
  iVar1 = (uint)bVar2 + param_2;
  if ((int)(uint)*(byte *)(*param_1 + 0xc) < iVar1) {
    if (0xfe < iVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00138770(param_1[2],"function or expression needs too many registers");
    }
    *(char *)(*param_1 + 0xc) = (char)iVar1;
    bVar2 = *(byte *)((long)param_1 + 0x44);
  }
  *(byte *)((long)param_1 + 0x44) = bVar2 + (char)param_2;
  return;
}


