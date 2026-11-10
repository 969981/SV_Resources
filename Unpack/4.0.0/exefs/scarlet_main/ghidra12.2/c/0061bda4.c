/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0061bda4; name: FUN_0061bda4
 */


undefined8 FUN_0061bda4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x18))
            (&local_50,*(long **)(param_1 + 8),param_1 + 0xa0,param_2);
  uVar1 = (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x128))
                    (*(long **)PTR_DAT_047cbb08,local_40,0x3f0);
  uStack_58 = uStack_28;
  local_60 = local_30;
  uStack_78 = uStack_48;
  local_80 = local_50;
  uStack_68 = uStack_38;
  uStack_70 = local_40;
  FUN_0063404c(uVar1,&local_80,param_2,param_3,0);
  return uVar1;
}


