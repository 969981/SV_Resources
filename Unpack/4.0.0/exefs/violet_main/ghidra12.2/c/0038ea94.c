/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038ea94; name: FUN_0038ea94
 */


bool FUN_0038ea94(undefined8 *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  void *__ptr;
  ulong uVar5;
  uint __c;
  char local_5c [4];
  byte local_58 [16];
  ulong local_48;
  void *local_40;
  undefined *puStack_38;
  byte *local_30;
  undefined *puStack_28;
  
  pbVar4 = (byte *)*param_1;
  bVar1 = *pbVar4;
  if (bVar1 != 0) {
    do {
      iVar3 = toupper((uint)bVar1);
      *pbVar4 = (byte)iVar3;
      bVar1 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    pbVar4 = (byte *)*param_1;
  }
  __ptr = (void *)FUN_0038c920(pbVar4);
  if (__ptr == (void *)0x0) {
    cVar2 = *(char *)(param_1 + 1);
  }
  else {
    local_5c[0] = '\0';
                    /* try { // try from 0038eadc to 0038eb4f has its CatchHandler @ 0038ebd0 */
    uVar5 = FUN_0038d620(__ptr,local_5c);
    if ((uVar5 & 1) == 0) {
      pbVar4 = (byte *)*param_1;
      __c = (uint)*pbVar4;
      if (*pbVar4 != 0) {
        do {
          iVar3 = toupper(__c);
          *pbVar4 = (byte)iVar3;
          __c = (uint)pbVar4[1];
          pbVar4 = pbVar4 + 1;
        } while (__c != 0);
        pbVar4 = (byte *)*param_1;
      }
      puStack_38 = PTR_LAB_047cc7b8;
      puStack_28 = PTR_LAB_047cc7b8;
      local_40 = __ptr;
      local_30 = pbVar4;
      FUN_00391b20(local_58,"Illegal value \'%s\' specified for environment variable \'%s\'",0x3a,
                   &local_40,2);
      uVar5 = (ulong)local_58 | 1;
      if ((local_58[0] & 1) != 0) {
        uVar5 = local_48;
      }
                    /* try { // try from 0038eb6c to 0038eb6f has its CatchHandler @ 0038ebac */
      (*(code *)PTR_FUN_04497278)(uVar5);
      if ((local_58[0] & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_48);
      }
      cVar2 = *(char *)(param_1 + 1);
    }
    else {
      cVar2 = local_5c[0];
    }
                    /* try { // try from 0038eb8c to 0038eb93 has its CatchHandler @ 0038ebcc */
    free(__ptr);
  }
  return cVar2 != '\0';
}


