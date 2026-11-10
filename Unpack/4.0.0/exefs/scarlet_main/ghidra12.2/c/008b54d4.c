/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b54d4; name: FUN_008b54d4
 */


void FUN_008b54d4(long param_1,long param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t sVar4;
  
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  uVar1 = FUN_008f0054(param_2);
  FUN_008f0080(param_1,uVar1);
  uVar1 = FUN_008f005c(param_2);
  FUN_008f00bc(param_1,uVar1);
  FUN_008f0034(param_2);
  pvVar2 = (void *)FUN_00896e78();
  pvVar3 = (void *)FUN_008f0000(param_2);
  sVar4 = FUN_008f0034(param_2);
  memcpy(pvVar2,pvVar3,sVar4);
  FUN_008f0070(param_1,pvVar2);
  FUN_008f003c(param_2);
  pvVar2 = (void *)FUN_00896e78();
  pvVar3 = (void *)FUN_008efff8(param_2);
  sVar4 = FUN_008f003c(param_2);
  memcpy(pvVar2,pvVar3,sVar4);
  FUN_008f0078(param_1,pvVar2);
  return;
}


