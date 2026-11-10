/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ec0d30; name: FUN_00ec0d30
 */


void FUN_00ec0d30(long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined8 local_40;
  ulong local_38;
  long lStack_30;
  ulong local_28;
  
  lVar1 = *(long *)(param_2 + 0x88);
  lVar4 = *(long *)(*(long *)(param_1 + 0x70) + 0x30);
  if (*(long *)(param_2 + 0x80) == 0) {
    if (lVar1 == 0) {
      uVar5 = 0;
      local_38 = 0;
      goto LAB_00ec0d94;
    }
    local_40 = *(undefined8 *)(lVar1 + 8);
LAB_00ec0d60:
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
  }
  else {
    local_40 = *(undefined8 *)(*(long *)(param_2 + 0x80) + 8);
    if (lVar1 != 0) goto LAB_00ec0d60;
    uVar3 = 0;
  }
  local_38 = *(ulong *)(lVar4 + 8);
  lStack_30 = *(undefined8 *)(lVar4 + 0x6098);
  local_28 = lVar4 + 0x10;
  auVar6 = FUN_00ec13d4(*(undefined8 *)(lVar4 + 0x6140),&local_38,&local_40,param_3,uVar3);
  param_2 = auVar6._8_8_;
  local_38 = auVar6._0_8_ & 0xffffffffffffff00;
  uVar5 = auVar6._0_8_ & 0xff;
LAB_00ec0d94:
  local_38 = local_38 | uVar5;
  local_28 = local_28 & 0xffffffffffffff00;
  lStack_30 = param_2;
  FUN_00d56380(param_1 + 0x30,&local_38);
  uVar2 = FUN_00d56320(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  return;
}


