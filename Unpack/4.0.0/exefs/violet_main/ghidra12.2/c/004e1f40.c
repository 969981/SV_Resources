/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e1f40; name: FUN_004e1f40
 */


void FUN_004e1f40(long *param_1,long *param_2)

{
  undefined *puVar1;
  long extraout_x1;
  byte *pbVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_1 == param_2) {
    return;
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    pbVar2 = (byte *)param_1[3];
    if ((*pbVar2 & 1) != 0) {
      **(undefined1 **)(pbVar2 + 0x10) = 0;
      pbVar2[8] = 0;
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
      uVar3 = param_1[1];
      *(undefined1 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 2) = 0;
      goto joined_r0x004e1f7c;
    }
    pbVar2[0] = 0;
    pbVar2[1] = 0;
  }
  uVar3 = param_1[1];
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
joined_r0x004e1f7c:
  if (((uVar3 & 1) != 0) &&
     (*(long *)((uVar3 & 0xfffffffffffffffe) + 8) != *(long *)((uVar3 & 0xfffffffffffffffe) + 0x10))
     ) {
    FUN_00514600();
  }
  if (*(int *)PTR_DAT_047cd9c0 != 0) {
    FUN_0052b230(PTR_DAT_047cd9c0);
  }
  puVar1 = PTR_DAT_047cd738;
  FUN_004f9370(PTR_DAT_047cd738,0);
  lVar4 = *(long *)(*(long *)(puVar1 + 0x58) + 0x158);
  (**(code **)(*param_2 + 0x98))(param_2);
  if (lVar4 == extraout_x1) {
    FUN_004e1e74(param_1,param_2);
    return;
  }
  FUN_00505148(param_2,param_1);
  return;
}


