/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038ebe8; name: FUN_0038ebe8
 */


ulong FUN_0038ebe8(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  char *__nptr;
  ulong uVar4;
  uint __c;
  char *local_60;
  byte local_58 [16];
  ulong local_48;
  char *local_40;
  undefined *puStack_38;
  byte *local_30;
  undefined *puStack_28;
  
  pbVar3 = (byte *)*param_1;
  bVar1 = *pbVar3;
  if (bVar1 != 0) {
    do {
      iVar2 = toupper((uint)bVar1);
      *pbVar3 = (byte)iVar2;
      bVar1 = pbVar3[1];
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    pbVar3 = (byte *)*param_1;
  }
  __nptr = (char *)FUN_0038c920(pbVar3);
  if (__nptr == (char *)0x0) {
    uVar4 = (ulong)*(uint *)(param_1 + 1);
  }
  else {
    local_60 = __nptr;
    uVar4 = strtol(__nptr,&local_60,10);
    if (*local_60 != '\0') {
      pbVar3 = (byte *)*param_1;
      __c = (uint)*pbVar3;
      if (*pbVar3 != 0) {
        do {
          iVar2 = toupper(__c);
          *pbVar3 = (byte)iVar2;
          __c = (uint)pbVar3[1];
          pbVar3 = pbVar3 + 1;
        } while (__c != 0);
        pbVar3 = (byte *)*param_1;
      }
      puStack_38 = PTR_LAB_047cc7b8;
      puStack_28 = PTR_LAB_047cc7b8;
                    /* try { // try from 0038ec80 to 0038ec9f has its CatchHandler @ 0038ed28 */
      local_40 = __nptr;
      local_30 = pbVar3;
      FUN_00391b20(local_58,"Illegal value \'%s\' specified for environment variable \'%s\'",0x3a,
                   &local_40,2);
      uVar4 = (ulong)local_58 | 1;
      if ((local_58[0] & 1) != 0) {
        uVar4 = local_48;
      }
                    /* try { // try from 0038ecbc to 0038ecbf has its CatchHandler @ 0038ed08 */
      (*(code *)PTR_FUN_04497278)(uVar4);
      if ((local_58[0] & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_48);
      }
      uVar4 = (ulong)*(uint *)(param_1 + 1);
    }
                    /* try { // try from 0038ecec to 0038ecf3 has its CatchHandler @ 0038ed40 */
    free(__nptr);
  }
  return uVar4 & 0xffffffff;
}


