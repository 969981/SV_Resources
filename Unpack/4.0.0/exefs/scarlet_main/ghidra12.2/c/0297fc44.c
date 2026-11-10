/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297fc44; name: FUN_0297fc44
 */


uint FUN_0297fc44(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  plVar4 = (long *)FUN_0124acbc();
  local_30 = (**(code **)(*plVar4 + 0x68))(plVar4,&DAT_03d6a4b8);
  local_28 = (**(code **)(*param_2 + 0x170))(param_2);
  local_28 = local_28 & 0xffff;
  local_2c = (**(code **)(*param_2 + 0x118))(param_2);
  local_2c = local_2c & 0xff;
  local_24 = (**(code **)(*param_2 + 0x178))(param_2);
  local_24 = local_24 & 0xffff;
  uVar2 = FUN_029764e0(*(undefined8 *)(param_1 + 8),&local_30);
  plVar4 = (long *)FUN_0124acbc(param_1);
  iVar3 = (**(code **)(*plVar4 + 0x68))(plVar4,PTR_DAT_047e26c8);
  iVar3 = FUN_012421f0(param_1,iVar3 + 1);
  uVar1 = (100 - iVar3) * (uVar2 & 0xffff);
  uVar2 = uVar1 / 100;
  if (((ulong)uVar1 / 100 & 0xffff) == 0) {
    uVar2 = 1;
  }
  return uVar2;
}


