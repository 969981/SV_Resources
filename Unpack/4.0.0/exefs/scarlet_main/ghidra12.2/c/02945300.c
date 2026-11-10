/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02945300; name: FUN_02945300
 */


uint FUN_02945300(undefined8 *param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  int local_90;
  undefined4 local_8c;
  int iStack_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar4 = *(long *)(*(long *)(param_1[7] + 0x78) + 0x18);
  iVar3 = 0;
  if (lVar4 != 0) {
    iVar3 = *(int *)(lVar4 + 0xc);
  }
  if ((iVar3 == param_2) && (uVar2 = FUN_02945400(param_1,param_2,param_3), (uVar2 & 1) != 0)) {
    local_5c = 0;
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
    local_5e = FUN_029454c8(*param_1,param_4);
    local_60 = 1;
    local_8c = param_3;
    iStack_88 = param_2;
    uVar1 = FUN_01852330(param_1,&local_90);
    if (((((uVar1 & 1) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_1[7] + 0x78) + 0x288), lVar4 != 0)) &&
        (*(byte *)(lVar4 + 10) < 2)) &&
       (*(undefined4 *)(lVar4 + 0xc) = 1, *(byte *)(lVar4 + 10) == 1)) {
      *(undefined1 *)(lVar4 + 10) = 2;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}


