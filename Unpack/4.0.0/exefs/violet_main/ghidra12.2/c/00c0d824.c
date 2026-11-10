/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c0d824; name: FUN_00c0d824
 */


undefined8 FUN_00c0d824(ulong *param_1,byte *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[1];
  if (pbVar4 < pbVar3) {
    uVar2 = (ulong)*pbVar4;
    if (-1 < (char)*pbVar4) {
      pbVar4 = pbVar4 + 1;
      *param_1 = (ulong)pbVar4;
      goto LAB_00c0d85c;
    }
  }
  else {
    uVar2 = 0;
  }
  uVar2 = FUN_00c0944c(param_1,uVar2);
  if ((uVar2 & 0x8000000080000000) != 0) {
    return 0;
  }
  pbVar4 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[1];
LAB_00c0d85c:
  if ((int)pbVar3 - (int)pbVar4 < (int)uVar2) {
    uVar1 = FUN_00c09150(param_1,param_2);
    return uVar1;
  }
  uVar2 = uVar2 & 0xffffffff;
  std::string::resize((ulong)param_2,(char)uVar2);
  if ((*param_2 & 1) == 0) {
    if (*param_2 < 2) {
      return 1;
    }
    param_2 = param_2 + 1;
  }
  else {
    if (*(long *)(param_2 + 8) == 0) {
      return 1;
    }
    param_2 = *(byte **)(param_2 + 0x10);
    if (param_2 == (byte *)0x0) {
      return 1;
    }
  }
  memcpy(param_2,(void *)*param_1,uVar2);
  *param_1 = *param_1 + uVar2;
  return 1;
}


