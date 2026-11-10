/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0088709c; name: FUN_0088709c
 */


void FUN_0088709c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  
  if ((char)param_1[8] == '\0') {
    lVar1 = param_1[3] + (ulong)*(uint *)(param_1[4] + 0xc);
    uVar2 = (**(code **)(*param_1 + 0x120))();
    if (*(uint *)(lVar1 + 0x14) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_1[3] + (ulong)*(uint *)(lVar1 + 0x14);
    }
    FUN_008874d4(param_1 + 5,lVar3,*(undefined2 *)(lVar1 + 10),*(undefined2 *)(lVar1 + 0x10),
                 *(undefined2 *)(lVar1 + 0x12),uVar2,1);
    uVar4 = (uint)*(ushort *)((long)param_1 + 0x3c);
    if (((uVar4 & 0x3ffc) < 0x14) &&
       ((7 < (uVar4 & 0x3fff) || ((1 << (ulong)(uVar4 & 0x1f) & 0xc2U) == 0)))) {
      FUN_00887228(param_1 + 5,param_2,param_1[0xd],(param_1[6] - param_1[2]) + param_1[0xe],
                   param_1[0xf]);
      return;
    }
  }
  return;
}


