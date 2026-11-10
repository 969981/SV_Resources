/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004c0a90; name: FUN_004c0a90
 */


void FUN_004c0a90(long param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  ulong uVar1;
  byte *pbVar2;
  bool bVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)(param_1 + 8);
  if ((*pbVar4 & 1) == 0) {
    if (*pbVar4 >> 1 == 0) goto LAB_004c0ad0;
  }
  else if (*(long *)(param_1 + 0x10) == 0) goto LAB_004c0ad0;
  FUN_0021d540(pbVar4,&DAT_03c9ca55,2);
LAB_004c0ad0:
  bVar3 = (*param_4 & 1) == 0;
  pbVar2 = *(byte **)(param_4 + 0x10);
  if (bVar3) {
    pbVar2 = param_4 + 1;
  }
  uVar1 = (ulong)(*param_4 >> 1);
  if (!bVar3) {
    uVar1 = *(ulong *)(param_4 + 8);
  }
  FUN_0021d540(pbVar4,pbVar2,uVar1);
  return;
}


