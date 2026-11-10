/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e5728; name: FUN_004e5728
 */


void FUN_004e5728(long *param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long extraout_x1;
  byte *pbVar4;
  long lVar5;
  
  if (param_1 == param_2) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 2);
  *(undefined4 *)(param_1 + 3) = 0;
  if ((uVar1 & 1) != 0) {
    pbVar4 = (byte *)param_1[6];
    if ((*pbVar4 & 1) == 0) {
      pbVar4[0] = 0;
      pbVar4[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar4 + 0x10) = 0;
      pbVar4[8] = 0;
      pbVar4[9] = 0;
      pbVar4[10] = 0;
      pbVar4[0xb] = 0;
      pbVar4[0xc] = 0;
      pbVar4[0xd] = 0;
      pbVar4[0xe] = 0;
      pbVar4[0xf] = 0;
    }
  }
  if ((uVar1 & 6) != 0) {
    param_1[7] = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (((param_1[1] & 1U) != 0) &&
     (uVar3 = param_1[1] & 0xfffffffffffffffe, *(long *)(uVar3 + 8) != *(long *)(uVar3 + 0x10))) {
    FUN_00514600();
  }
  if (*(int *)PTR_DAT_047cd8c8 != 0) {
    FUN_0052b230(PTR_DAT_047cd8c8);
  }
  puVar2 = PTR_DAT_047cd738;
  FUN_004f9370(PTR_DAT_047cd738,0);
  lVar5 = *(long *)(*(long *)(puVar2 + 0x58) + 0x198);
  (**(code **)(*param_2 + 0x98))(param_2);
  if (lVar5 == extraout_x1) {
    FUN_004e5604(param_1,param_2);
    return;
  }
  FUN_00505148(param_2,param_1);
  return;
}


