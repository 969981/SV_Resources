/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0284e074; name: FUN_0284e074
 */


void FUN_0284e074(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  long local_140;
  long local_138;
  in_addr aiStack_130 [8];
  uint local_128;
  undefined4 uStack_124;
  undefined8 local_118 [4];
  undefined1 auStack_f8 [136];
  undefined1 local_70 [16];
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  in_addr aiStack_28 [8];
  
  auVar6 = FUN_018dd480();
  FUN_0284e470(&local_60,*(undefined8 *)(param_1 + 0x40));
  FUN_018dd988(auStack_f8);
  FUN_018dd980(auStack_f8);
  local_70 = auVar6;
  FUN_018dd540(local_118,&DAT_03bf391f);
  FUN_018dd768(&local_128,auStack_f8,local_118);
  lVar5 = local_60;
  FUN_018dd4a4(local_60 + 0x28,auStack_f8);
  *(undefined1 (*) [16])(local_60 + 0xb0) = local_70;
  FUN_018dd4f0(local_118);
  FUN_018dd4c8(local_60 + 8,local_118);
  *(undefined8 *)(local_60 + 0x28c) = 0x3e800002710;
  *(undefined8 *)(local_60 + 0x20) = 0;
  iVar3 = nn::nifm::GetCurrentIpConfigInfo
                    ((in_addr *)&local_128,(in_addr *)&local_138,(in_addr *)&local_140,aiStack_28,
                     aiStack_130);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_0284e338(local_118);
  uVar1 = ((uint)local_138 & 0xff00ff00) >> 8 | ((uint)local_138 & 0xff00ff) << 8;
  uVar2 = (local_128 & 0xff00ff00) >> 8 | (local_128 & 0xff00ff) << 8;
  FUN_0284e360(local_118,uVar2 >> 0x10 | uVar2 << 0x10);
  FUN_0284e39c(local_60 + 0x298,local_118);
  *(uint *)(local_60 + 0x2b8) = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_0284e3d4(local_118);
  local_60 = 0;
  lVar4 = *(long *)(param_1 + 0x50);
  *(long *)(param_1 + 0x50) = lVar5;
  if (lVar4 != 0) {
    FUN_0284d674(param_1 + 0x58);
    lVar5 = *(long *)(param_1 + 0x50);
  }
  *(undefined8 *)(param_1 + 0x58) = local_58;
  *(undefined8 *)(param_1 + 0x60) = uStack_50;
  *(undefined8 *)(param_1 + 0x68) = local_48;
  local_140 = param_1;
  local_138 = lVar5;
  FUN_0284e574(&local_128,*(undefined8 *)(param_1 + 0x40),(undefined8 *)(param_1 + 0x40),&local_138,
               &local_140);
  local_118[0] = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_018dd220(local_118);
  *(ulong *)(param_1 + 0x48) = CONCAT44(uStack_124,local_128);
  FUN_018dd490(auStack_f8);
  return;
}


