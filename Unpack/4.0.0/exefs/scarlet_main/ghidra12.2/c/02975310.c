/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02975310; name: FUN_02975310
 */


void FUN_02975310(long param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined4 local_78;
  ushort local_74;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined2 uStack_6b;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  plVar7 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  if (plVar7 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar7 + 0x2f8))();
    uVar6 = (**(code **)(*plVar7 + 0x348))(plVar7);
    uVar3 = (uVar5 & 0xffff) >> 10 & 0x1f;
    uVar4 = (uVar5 & 0xffff) >> 5 & 0x1f;
    local_48 = 0;
    uVar2 = 0x12;
    if (uVar3 != (param_3 & 0xff)) {
      uVar2 = uVar3;
    }
    uVar3 = 0x12;
    if (uVar4 != (param_3 & 0xff)) {
      uVar3 = uVar4;
    }
    uVar1 = 0x12;
    if ((uVar5 & 0x1f) != (param_3 & 0xff)) {
      uVar1 = (ushort)(uVar5 & 0x1f);
    }
    local_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    if (uVar2 != 0x12) {
      uStack_70 = uVar6;
    }
    local_74 = uVar1 | (ushort)(uVar3 << 5) | (ushort)(uVar2 << 10);
    local_58 = 0;
    uStack_50 = 0;
    uStack_6b = 0;
    uStack_6c = 1;
    local_78 = param_2;
    FUN_0293e940(param_1,&local_78);
  }
  return;
}


