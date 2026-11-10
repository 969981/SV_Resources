/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02231004; name: FUN_02231004
 */


undefined4
FUN_02231004(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],long param_4,
            long param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_58;
  float local_50;
  undefined8 local_4c;
  float local_44;
  undefined8 local_40;
  float local_38;
  
  lVar3 = *(long *)(param_4 + 0x200);
  uVar2 = FUN_00cf8198(*(undefined8 *)(param_4 + 0x50));
  (**(code **)(**(long **)(lVar3 + 0x60) + 0x60))(*(long **)(lVar3 + 0x60),uVar2,"SourceTemp");
  local_38 = -param_1._8_4_;
  local_50 = -param_2._8_4_;
  local_44 = -param_3._8_4_;
  local_58 = param_2._0_8_;
  local_4c = param_3._0_8_;
  local_40 = param_1._0_8_;
  (**(code **)(**(long **)(lVar3 + 0x60) + 0x70))(*(long **)(lVar3 + 0x60),uVar2,&local_58);
  uVar1 = (**(code **)(**(long **)(lVar3 + 0x60) + 0xd0))
                    (*(long **)(lVar3 + 0x60),*(undefined8 *)(param_5 + 8),uVar2,1,&LAB_01080c70,
                     param_4,0,0,0);
  (**(code **)(**(long **)(lVar3 + 0x60) + 0x68))(*(long **)(lVar3 + 0x60),uVar2);
  return uVar1;
}


