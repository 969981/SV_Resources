/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f67b8; name: FUN_001f67b8
 */


undefined8 FUN_001f67b8(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long local_58;
  long lStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  uStack_44 = CONCAT31(uStack_44._1_3_,*(char *)(param_1 + 0xea) != '\0');
  lVar2 = *(long *)(param_1 + 0x98);
  lVar3 = *(long *)(param_1 + 0xa0);
  local_58 = lVar2;
  lStack_50 = lVar3;
  local_48 = FUN_001f6c08(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
  if ((*(char *)(param_1 + 0xe9) == '\0') ||
     (uVar1 = FUN_001f7a10(param_1,&local_58,0,0), (int)uVar1 == 0)) {
    uVar1 = 0;
    param_2[1] = lStack_50;
    param_2[2] = CONCAT44(uStack_44,local_48);
    *param_2 = local_58;
    *(long *)(param_1 + 0xa8) = lVar2;
    *(long *)(param_1 + 0xb0) = lVar3;
    *(long *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  return uVar1;
}


