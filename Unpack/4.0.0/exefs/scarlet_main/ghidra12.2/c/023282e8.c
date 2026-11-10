/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023282e8; name: FUN_023282e8
 */


int FUN_023282e8(undefined1 param_1 [16],long param_2,long param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [104];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  float local_48;
  
  memset(&local_f0,0,0x80);
  lVar4 = *(long *)(param_2 + 0x200);
  uVar3 = FUN_00cf8198(*(undefined8 *)(param_2 + 0x50));
  (**(code **)(**(long **)(lVar4 + 0x60) + 0x60))(*(long **)(lVar4 + 0x60),uVar3,"SourceTemp");
  local_48 = -param_1._8_4_;
  local_68 = 0;
  uStack_60 = 0xbf800000;
  local_58 = 0x800000003f800000;
  local_50 = param_1._0_8_;
  (**(code **)(**(long **)(lVar4 + 0x60) + 0x70))(*(long **)(lVar4 + 0x60),uVar3,&local_68);
  iVar2 = (**(code **)(**(long **)(lVar4 + 0x60) + 0xd0))
                    (*(long **)(lVar4 + 0x60),*(undefined8 *)(param_3 + 8),uVar3,1,&LAB_01080c70,
                     param_2,0,0,0);
  (**(code **)(**(long **)(lVar4 + 0x60) + 0x68))(*(long **)(lVar4 + 0x60),uVar3);
  if (iVar2 != 0) {
    FUN_0104f218(*(undefined8 *)(param_2 + 0x220),param_3,iVar2,0xffffffffffffffff,0,&local_f0,0);
    pcVar1 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar1)(auStack_d0);
    }
  }
  return iVar2;
}


