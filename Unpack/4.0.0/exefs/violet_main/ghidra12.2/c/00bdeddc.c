/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bdeddc; name: FUN_00bdeddc
 */


undefined1 * FUN_00bdeddc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    iVar9 = 0;
    do {
      plVar3 = *(long **)(*(long *)(param_1 + 0x28) + (long)iVar9 * 8 + 8);
      pbVar5 = param_3 + 1;
      *param_3 = 10;
      uVar7 = *(uint *)((long)plVar3 + 0x14);
      if (0x7f < uVar7) {
        pbVar6 = pbVar5;
        uVar8 = uVar7;
        do {
          uVar7 = uVar8 >> 7;
          uVar2 = uVar8 >> 0xe;
          pbVar5 = pbVar6 + 1;
          *pbVar6 = (byte)uVar8 | 0x80;
          pbVar6 = pbVar5;
          uVar8 = uVar7;
        } while (uVar2 != 0);
      }
      *pbVar5 = (byte)uVar7;
      param_3 = (undefined1 *)(**(code **)(*plVar3 + 0x80))(plVar3,0,pbVar5 + 1);
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_3;
  }
  puVar4 = (undefined1 *)FUN_00c02cac(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe,param_3);
  return puVar4;
}


