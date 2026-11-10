/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00507dd8; name: FUN_00507dd8
 */


uint FUN_00507dd8(undefined8 *param_1,byte *param_2,undefined8 param_3)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auStack_40 [32];
  
  uVar4 = *(ulong *)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
    uVar4 = (ulong)(*param_2 >> 1);
  }
  uVar4 = FUN_00507e70(pbVar1,uVar4,*param_1);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    bVar2 = (*param_2 & 1) != 0;
    pbVar1 = param_2 + 1;
    if (bVar2) {
      pbVar1 = *(byte **)(param_2 + 0x10);
    }
    uVar3 = (uint)(*param_2 >> 1);
    if (bVar2) {
      uVar3 = *(uint *)(param_2 + 8);
    }
    FUN_0052cf70(auStack_40,pbVar1,uVar3,0xffffffff);
    uVar3 = FUN_0050795c(param_1,auStack_40,param_3);
  }
  return uVar3 & 1;
}


