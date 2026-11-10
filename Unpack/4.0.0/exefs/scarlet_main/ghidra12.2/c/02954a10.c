/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02954a10; name: FUN_02954a10
 */


void FUN_02954a10(long param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined7 local_74;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined2 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined8 local_5e;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  
  plVar1 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  uVar2 = (**(code **)(*plVar1 + 0x270))(plVar1,param_3,param_4);
  local_a0 = param_2;
  if ((uVar2 & 1) == 0) {
    local_9c = 1;
    uStack_78 = 0;
    uStack_88 = 0;
    local_84 = 0;
    uStack_80 = 0;
    local_7c = 0;
    uStack_90 = 0;
    local_8c = 0;
    local_98 = 0x820048;
    local_94 = param_2;
    FUN_01907920(param_1,&local_a0);
  }
  else {
    local_5e = 0x1000000;
    local_68 = 0;
    local_64 = 0;
    uStack_6a = 0;
    local_94 = 0;
    uStack_90 = 0;
    local_8c = 0;
    uStack_88 = 0;
    local_84 = 0;
    uStack_80 = 0;
    local_7c = 0;
    uStack_78 = 0;
    local_74 = 0;
    uStack_6d = 0;
    local_54 = 0;
    local_4c = 0;
    local_44 = 0;
    local_3c = 0;
    local_34 = 0;
    local_9c = 1;
    uStack_6b = (undefined1)param_4;
    local_60 = 1;
    local_98 = param_2;
    uStack_6c = param_3;
    FUN_0293e270(param_1,&local_a0);
  }
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x3b0);
  if (((lVar3 != 0) && (*(byte *)(lVar3 + 10) < 2)) &&
     (*(undefined4 *)(lVar3 + 0xc) = 1, *(byte *)(lVar3 + 10) == 1)) {
    *(undefined1 *)(lVar3 + 10) = 2;
  }
  return;
}


