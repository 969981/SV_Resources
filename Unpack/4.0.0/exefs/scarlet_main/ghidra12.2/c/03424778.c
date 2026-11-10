/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03424778; name: FUN_03424778
 */


void FUN_03424778(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar3 = **(long **)(param_1 + 0x50);
  if (*(uint *)(param_1 + 0x58) < 2) {
    lVar4 = 0;
  }
  else {
    lVar4 = (*(long **)(param_1 + 0x50))[1];
  }
  bVar2 = *(long *)(lVar3 + 0x70) != param_2;
  lVar1 = lVar4;
  if (bVar2) {
    lVar1 = lVar3;
  }
  local_50 = *param_4;
  local_48 = *(undefined4 *)(param_4 + 1);
  if (bVar2) {
    lVar3 = lVar4;
  }
  FUN_03423ac4(&local_40,param_1,*(undefined8 *)(lVar1 + 0x70),&local_50);
  local_60 = local_40;
  local_58 = local_38;
  local_70 = *(undefined4 *)(lVar3 + 0x2c);
  local_78 = *(undefined8 *)(lVar3 + 0x24);
  local_64 = *(undefined4 *)(lVar3 + 0x20);
  local_6c = *(undefined8 *)(lVar3 + 0x18);
  local_80 = *(undefined4 *)(param_4 + 1);
  local_88 = *param_4;
  FUN_03427db4(*(undefined4 *)(param_3 + 0x48),param_1 + 0x78,&local_88,param_3 + 0x88,
               *(undefined8 *)(*(long *)(*(long *)(param_3 + 8) + 0x58) + 0x68),&local_78,
               *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(lVar3 + 0x70),param_1 + 0x88);
  return;
}


