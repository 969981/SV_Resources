/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0217190c; name: FUN_0217190c
 */


bool FUN_0217190c(undefined8 param_1,undefined2 *param_2)

{
  long lVar1;
  undefined2 *puVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar5 = FUN_021718e4(*param_2,1);
  lVar1 = 2;
  puVar2 = param_2 + 1;
  if ((uVar5 & 1) == 0) {
    lVar1 = 0;
    puVar2 = param_2;
  }
  uVar3 = *(ushort *)((long)param_2 + lVar1);
  iVar4 = FUN_02171a14(param_1,puVar2);
  if (iVar4 == 2) {
    return true;
  }
  if (iVar4 != 1) {
    uVar6 = (uint)uVar3;
    if ((uVar3 < 0x100) &&
       ((*(uint *)(&DAT_03cbf2c0 + (ulong)(uVar3 >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1) != 0)) {
      return true;
    }
    if (uVar6 == 0xe5 || uVar3 < 0xe5) {
      if ((uVar6 == 0x59) || (uVar6 == 0x79)) {
        uVar3 = puVar2[1];
        if (uVar3 < 0x100) {
          return (*(uint *)(&DAT_03cbf2c0 + (ulong)(uVar3 >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1)
                 == 0;
        }
        return true;
      }
      if (uVar6 == 0xc6) {
        return true;
      }
    }
    else {
      if (uVar6 - 0x152 < 2) {
        return true;
      }
      if (uVar6 == 0xe6) {
        return true;
      }
    }
  }
  return false;
}


