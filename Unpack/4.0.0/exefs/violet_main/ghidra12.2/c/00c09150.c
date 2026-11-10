/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c09150; name: FUN_00c09150
 */


undefined8 FUN_00c09150(ulong *param_1,byte *param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  
  if ((*param_2 & 1) == 0) {
    if (1 < *param_2) {
      param_2[0] = 0;
      param_2[1] = 0;
    }
  }
  else if (*(long *)(param_2 + 8) != 0) {
    **(undefined1 **)(param_2 + 0x10) = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
  }
  iVar2 = (int)param_1[6];
  if ((int)param_1[5] <= (int)param_1[6]) {
    iVar2 = (int)param_1[5];
  }
  if ((iVar2 != 0x7fffffff) &&
     (iVar2 = (iVar2 - (int)param_1[3]) + *(int *)((long)param_1 + 0x2c) +
              ((int)param_1[1] - (int)*param_1), (param_3 <= iVar2 && 0 < param_3) && 0 < iVar2)) {
    std::string::reserve((ulong)param_2);
  }
  do {
    uVar1 = *param_1;
    iVar2 = (int)param_1[1] - (int)uVar1;
    if (param_3 - iVar2 == 0 || param_3 < iVar2) {
      std::string::append((char *)param_2,uVar1);
      *param_1 = *param_1 + (long)param_3;
      return 1;
    }
    if (iVar2 != 0) {
      std::string::append((char *)param_2,uVar1);
      *param_1 = *param_1 + (long)iVar2;
      param_3 = param_3 - iVar2;
    }
    uVar1 = FUN_00c08eb0(param_1);
  } while ((uVar1 & 1) != 0);
  return 0;
}


