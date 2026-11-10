/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0189a140; name: FUN_0189a140
 */


void FUN_0189a140(long param_1,int param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  int local_90;
  uint local_8c;
  int iStack_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5e;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x18);
  iVar3 = 0;
  if (lVar4 != 0) {
    iVar3 = *(int *)(lVar4 + 0xc);
  }
  if (iVar3 == param_2) {
    plVar1 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_2);
    uVar2 = (**(code **)(*plVar1 + 0x220))(plVar1,param_3);
    if ((uVar2 & 1) != 0) {
      FUN_01852230(param_1,param_2);
      local_60 = 1;
      local_8c = param_3 & 0xffff;
      local_5e = 0;
      local_84 = 0;
      local_7c = 0;
      local_74 = 0;
      local_6c = 0;
      local_64 = 0;
      local_38 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_90 = param_2;
      iStack_88 = param_2;
      FUN_01852330(param_1,&local_90);
      FUN_01852150(param_1,param_2);
    }
  }
  return;
}


