/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00832804; name: FUN_00832804
 */


undefined8 FUN_00832804(long param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined **local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  
  lVar5 = *(long *)(param_1 + 0x48);
  local_50 = *(undefined4 *)(param_1 + 0x20);
  local_c0 = &PTR_LAB_044e8f80;
  local_58 = param_2[0xb];
  local_68 = param_2[9];
  lVar1 = 0;
  if (lVar5 != 0) {
    lVar1 = lVar5 + param_1 + 0x48;
  }
  local_78 = param_2[7];
  local_88 = param_2[5];
  local_98 = param_2[3];
  local_a8 = param_2[1];
  local_b0 = *param_2;
  local_a0 = param_2[2];
  local_90 = param_2[4];
  local_80 = param_2[6];
  local_70 = param_2[8];
  local_60 = param_2[10];
  cVar3 = *(char *)((long)param_2 + 5);
  iVar4 = *(int *)(lVar1 + 0x50);
  uVar2 = 0;
  if (*(char *)((long)param_2 + 4) != '\0') {
    uVar2 = param_4;
  }
  lStack_b8 = param_1;
  if ((int)(*(uint *)(param_3 + 0x34) & 0x7fffffff) < iVar4 + *(int *)(param_3 + 0x30)) {
    FUN_02ecf594(param_3 + 0x28,PTR_PTR_047d1a50);
    iVar4 = *(int *)(lVar1 + 0x50);
  }
  if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) < iVar4 * 3 + *(int *)(param_3 + 0x20)) {
    FUN_02e9b11c(param_3 + 0x18,PTR_PTR_047d1a50);
  }
  if (0 < *(int *)(lVar1 + 0x68)) {
    iVar4 = 0;
    do {
      FUN_00844a24(lVar1 + 0x20,iVar4,param_3,uVar2,&local_c0,1,0,cVar3 != '\0');
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(lVar1 + 0x68));
  }
  FUN_03192894(0,param_3);
  return 0;
}


