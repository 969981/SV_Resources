/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052e7f0; name: FUN_0052e7f0
 */


byte * FUN_0052e7f0(undefined8 param_1,byte *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  
  pbVar3 = param_2 + 1;
  uVar1 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar1 = (uVar1 + (uint)*pbVar3 * 0x80) - 0x80;
    if ((char)*pbVar3 < '\0') {
      uVar1 = (uVar1 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar1 = (uVar1 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if ((7 < param_2[4]) ||
             (uVar1 = uVar1 + (uint)param_2[4] * 0x10000000 + 0xf0000000, 0x7fffffef < uVar1)) {
            return (byte *)0x0;
          }
          pbVar3 = param_2 + 5;
          goto LAB_0052e82c;
        }
        lVar2 = 3;
      }
      else {
        lVar2 = 2;
      }
    }
    else {
      lVar2 = 1;
    }
    pbVar3 = param_2 + lVar2 + 1;
  }
LAB_0052e82c:
  lVar2 = (long)(int)uVar1;
  if ((*(long *)(param_3 + 8) - (long)pbVar3) + 0x10 < lVar2) {
    pbVar3 = (byte *)FUN_0052ddec(param_3,pbVar3,uVar1);
    return pbVar3;
  }
  FUN_0026c6b8(param_1,pbVar3,lVar2);
  return pbVar3 + lVar2;
}


