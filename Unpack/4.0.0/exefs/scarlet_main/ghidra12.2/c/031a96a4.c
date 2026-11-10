/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031a96a4; name: FUN_031a96a4
 */


void FUN_031a96a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar4 = FUN_031b0360();
  if (DAT_0487e9e0 == uVar4) {
    uVar5 = uVar4;
    if ((int)(DAT_0487e9e4 & 0x7fffffff) <= (int)uVar4) {
      FUN_031b048c((long)(int)(uVar4 + 1));
      uVar5 = DAT_0487e9e0;
    }
    puVar1 = (undefined8 *)(DAT_0487e9d8 + (long)(int)uVar5 * 0x20);
    *puVar1 = *param_1;
    uVar3 = *param_2;
    uVar6 = param_2[2];
    puVar1[2] = param_2[1];
    puVar1[3] = uVar6;
    puVar1[1] = uVar3;
    DAT_0487e9e0 = uVar4 + 1;
  }
  else {
    lVar2 = DAT_0487e9d8 + ((long)((ulong)uVar4 << 0x20) >> 0x1b);
    uVar3 = *param_2;
    uVar6 = param_2[2];
    *(undefined8 *)(lVar2 + 0x10) = param_2[1];
    *(undefined8 *)(lVar2 + 0x18) = uVar6;
    *(undefined8 *)(lVar2 + 8) = uVar3;
  }
  return;
}


