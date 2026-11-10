/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0026bba8; name: FUN_0026bba8
 */


void FUN_0026bba8(long *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  byte *pbVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long local_50;
  long lStack_48;
  long local_40;
  
  lStack_48 = param_3[1];
  local_50 = *param_3;
  pbVar2 = *(byte **)(*param_3 + 8);
  local_40 = param_3[2];
  FUN_002597f8(param_3);
  FUN_0025a790(param_2[2],&local_50);
  if (pbVar2 != (byte *)0x0 && *param_2 == 0) {
    *(undefined **)(pbVar2 + 0x18) = PTR_DAT_047cc2c8 + 0x10;
    if (*(int *)(pbVar2 + 0x34) != 0) {
      FUN_002679fc();
    }
    if (((*(ulong *)(pbVar2 + 0x20) & 1) == 0) ||
       (plVar3 = (long *)(*(ulong *)(pbVar2 + 0x20) & 0xfffffffffffffffe),
       *plVar3 != 0 || plVar3 == (long *)0x0)) {
      bVar1 = *pbVar2;
    }
    else {
      if ((*(byte *)(plVar3 + 1) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,plVar3[3]);
      }
      FUN_0049e790(PTR_LAB_047cba48,plVar3);
      bVar1 = *pbVar2;
    }
    if ((bVar1 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  }
  lVar5 = param_3[1];
  lVar4 = *param_3;
  param_1[2] = param_3[2];
  param_1[1] = lVar5;
  *param_1 = lVar4;
  return;
}


