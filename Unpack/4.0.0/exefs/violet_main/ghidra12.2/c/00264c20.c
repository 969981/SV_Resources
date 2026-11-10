/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00264c20; name: FUN_00264c20
 */


void FUN_00264c20(long *param_1,long *param_2)

{
  undefined *puVar1;
  long extraout_x1;
  undefined8 *puVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_1 == param_2) {
    return;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 3);
  if (0 < (int)*(uint *)(param_1 + 3)) {
    puVar2 = (undefined8 *)param_1[4];
    do {
      puVar2 = puVar2 + 1;
      FUN_0049e9ec(*puVar2);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *(undefined4 *)(param_1 + 3) = 0;
  }
  pbVar3 = (byte *)param_1[5];
  if (pbVar3 != PTR_DAT_047cba80) {
    if ((*pbVar3 & 1) != 0) {
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      uVar4 = param_1[1];
      *(undefined4 *)(param_1 + 6) = 0;
      goto joined_r0x00264c8c;
    }
    pbVar3[0] = 0;
    pbVar3[1] = 0;
  }
  uVar4 = param_1[1];
  *(undefined4 *)(param_1 + 6) = 0;
joined_r0x00264c8c:
  if (((uVar4 & 1) != 0) &&
     (*(long *)((uVar4 & 0xfffffffffffffffe) + 8) != *(long *)((uVar4 & 0xfffffffffffffffe) + 0x10))
     ) {
    FUN_00514600();
  }
  if (*(int *)PTR_DAT_047cc278 != 0) {
    FUN_0052b230(PTR_DAT_047cc278);
  }
  puVar1 = PTR_DAT_047cc280;
  FUN_004f9370(PTR_DAT_047cc280,0);
  lVar5 = *(long *)(*(long *)(puVar1 + 0x58) + 8);
  (**(code **)(*param_2 + 0x98))(param_2);
  if (lVar5 == extraout_x1) {
    FUN_00264a48(param_1,param_2);
    return;
  }
  FUN_00505148(param_2,param_1);
  return;
}


