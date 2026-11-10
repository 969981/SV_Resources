/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c4f60; name: FUN_006c4f60
 */


void FUN_006c4f60(SystemEventType *param_1)

{
  undefined *puVar1;
  undefined *local_98;
  undefined *puStack_90;
  undefined8 ***local_88;
  undefined8 ***pppuStack_80;
  MultiWaitHolderType aMStack_70 [64];
  undefined **local_30;
  undefined8 uStack_28;
  
  local_88 = &local_88;
  puVar1 = PTR_DAT_047cbb30 + 0x10;
  puStack_90 = PTR_DAT_047cbb38 + 0x10;
  local_30 = (undefined **)0x0;
  uStack_28 = 0;
  local_98 = puVar1;
  pppuStack_80 = local_88;
  nn::os::InitializeMultiWaitHolder(aMStack_70,param_1);
  local_30 = &puStack_90;
  FUN_006c4e40(&local_98);
  local_98 = puVar1;
  FUN_006c4274(&puStack_90);
  return;
}


