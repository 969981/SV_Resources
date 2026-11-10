/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f78704; name: FUN_01f78704
 */


void FUN_01f78704(undefined8 *param_1,long param_2,byte *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined1 auStack_60 [8];
  undefined8 local_58 [3];
  byte local_40;
  undefined7 uStack_3f;
  undefined8 local_30;
  long *plStack_28;
  
  pbVar3 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
  }
  FUN_01f785b0(&local_40,pbVar3);
  FUN_01f784a0(auStack_60,param_2 + 0x70);
  puVar1 = (undefined8 *)FUN_01f785ec(auStack_60,&local_40);
  if (local_58 == puVar1) {
    uVar2 = FUN_01cf7e20();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = uVar2;
  }
  else {
    FUN_01cfa5b0(param_1,puVar1 + 8);
  }
  FUN_01cfa44c(auStack_60,local_58[0]);
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  return;
}


