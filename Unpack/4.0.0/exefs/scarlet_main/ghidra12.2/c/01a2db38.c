/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a2db38; name: FUN_01a2db38
 */


uint FUN_01a2db38(undefined8 param_1,char param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined1 local_98;
  undefined5 uStack_90;
  undefined3 local_8b;
  undefined5 uStack_88;
  undefined1 local_83;
  undefined5 local_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  undefined1 local_73;
  undefined5 local_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined1 local_63;
  undefined5 local_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  undefined1 local_53;
  undefined5 local_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  undefined1 local_43;
  undefined5 uStack_40;
  undefined3 local_3b;
  undefined5 uStack_38;
  undefined1 local_33;
  
  FUN_0124e480();
  uVar2 = FUN_01a2dc48();
  uVar1 = 0;
  if (((param_2 == '\0') && ((param_3 & 0xff) != 10)) && ((uVar2 & 1) != 0)) {
    uVar3 = FUN_0124e498(param_1,0);
    local_a0 = FUN_01238c38(param_1,param_3);
    uVar1 = 0;
    if (local_a0 != 0) {
      FUN_02988d14(param_1);
      uStack_88 = 0;
      uStack_90 = 0;
      local_8b = 0;
      local_83 = 1;
      local_80 = 0;
      uStack_7b = 0;
      uStack_78 = 0;
      local_73 = 1;
      local_70 = 0;
      uStack_6b = 0;
      uStack_68 = 0;
      local_63 = 1;
      local_60 = 0;
      uStack_5b = 0;
      uStack_58 = 0;
      local_53 = 1;
      local_50 = 0;
      uStack_4b = 0;
      uStack_48 = 0;
      local_43 = 1;
      uStack_38 = 0;
      uStack_40 = 0;
      local_3b = 0;
      local_33 = 1;
      local_b8 = FUN_0124e480(param_1);
      local_b0 = FUN_01582534(param_1);
      local_98 = 1;
      uStack_a8 = uVar3;
      FUN_018813a4(&uStack_90,&local_b8);
      uVar1 = FUN_02988dd8(param_1,uVar3,&uStack_90);
    }
  }
  return uVar1 & 1;
}


