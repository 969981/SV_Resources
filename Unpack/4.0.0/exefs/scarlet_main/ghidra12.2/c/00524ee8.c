/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00524ee8; name: FUN_00524ee8
 */


bool FUN_00524ee8(undefined8 param_1,uint param_2,undefined4 param_3,long *param_4,byte *param_5,
                 undefined1 *param_6)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar4 = (**(code **)(*param_4 + 0x10))(param_4,param_3,param_5);
  puVar3 = PTR_DAT_047cdbd0;
  if ((uVar4 & 1) == 0) {
    return false;
  }
  bVar2 = *param_5;
  *param_6 = 0;
  uVar1 = *(uint *)(puVar3 + (ulong)bVar2 * 4);
  if (((param_2 == 2) && (param_5[1] != 0)) &&
     (uVar1 < 6 && (1 << (ulong)(uVar1 & 0x1f) & 0x23U) != 0)) {
    *param_6 = 1;
    return true;
  }
  return uVar1 == param_2;
}


