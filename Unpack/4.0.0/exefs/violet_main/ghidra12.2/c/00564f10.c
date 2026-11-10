/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00564f10; name: FUN_00564f10
 */


void FUN_00564f10(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 local_48;
  byte local_40;
  undefined7 uStack_3f;
  ulong local_30;
  long *plStack_28;
  
  pbVar4 = *(byte **)(param_2 + 0x10);
  if ((*pbVar4 & 1) == 0) {
    pbVar4 = pbVar4 + 1;
  }
  else {
    pbVar4 = *(byte **)(pbVar4 + 0x10);
  }
  FUN_0056d5f0(&local_40,pbVar4);
  pbVar4 = *(byte **)(param_2 + 0x18);
  uVar1 = (ulong)&local_40 | 1;
  if ((local_40 & 1) != 0) {
    uVar1 = local_30;
  }
  if ((*pbVar4 & 1) == 0) {
    pbVar4 = pbVar4 + 1;
    pbVar5 = *(byte **)(param_2 + 0x20);
    bVar3 = *pbVar5;
  }
  else {
    pbVar4 = *(byte **)(pbVar4 + 0x10);
    pbVar5 = *(byte **)(param_2 + 0x20);
    bVar3 = *pbVar5;
  }
  if ((bVar3 & 1) == 0) {
    pbVar5 = pbVar5 + 1;
  }
  else {
    pbVar5 = *(byte **)(pbVar5 + 0x10);
  }
  puVar2 = PTR_DAT_047cbb60;
  if (*(undefined **)(param_2 + 0x28) != (undefined *)0x0) {
    puVar2 = *(undefined **)(param_2 + 0x28);
  }
  local_48 = *(undefined8 *)(puVar2 + 0x10);
  FUN_00201264(param_1,uVar1,pbVar4,pbVar5,&local_48);
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  return;
}


