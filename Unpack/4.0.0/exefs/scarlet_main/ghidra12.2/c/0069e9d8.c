/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0069e9d8; name: FUN_0069e9d8
 */


undefined8
FUN_0069e9d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x18))
            (&local_60,*(long **)(param_1 + 8),param_1 + 0x40,param_2);
  uVar1 = (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x128))
                    (*(long **)PTR_DAT_047cbb08,local_50,0x5f8);
  uStack_68 = uStack_38;
  local_70 = local_40;
  uStack_88 = uStack_58;
  local_90 = local_60;
  uStack_78 = uStack_48;
  uStack_80 = local_50;
  FUN_006a8d40(uVar1,&local_90,param_2,param_3,1,param_5);
  return uVar1;
}


