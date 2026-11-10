/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004d5460; name: FUN_004d5460
 */


undefined1 * FUN_004d5460(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *__src;
  size_t __n;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) == 0) goto joined_r0x004d55c0;
  pbVar6 = *(byte **)(param_1 + 0x18);
  if ((*pbVar6 & 1) == 0) {
    __n = (size_t)(*pbVar6 >> 1);
LAB_004d54c0:
    if ((long)__n <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 10;
      param_2[1] = (char)__n;
      __src = *(byte **)(pbVar6 + 0x10);
      if ((*pbVar6 & 1) == 0) {
        __src = pbVar6 + 1;
      }
      memcpy(param_2 + 2,__src,__n);
      param_2 = param_2 + 2 + __n;
      goto joined_r0x004d55c0;
    }
  }
  else {
    __n = *(size_t *)(pbVar6 + 8);
    if ((long)__n < 0x80) goto LAB_004d54c0;
  }
  param_2 = (undefined1 *)FUN_0052c95c(param_3,1);
joined_r0x004d55c0:
  if ((uVar1 >> 1 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar4 = *(long *)(param_1 + 0x20);
    *param_2 = 0x12;
    uVar1 = *(uint *)(lVar4 + 0x40);
    if (uVar1 < 0x80) {
      param_2[1] = (byte)uVar1;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar1 | 0x80;
      if (uVar1 >> 0xe == 0) {
        param_2[2] = (char)(uVar1 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar1 = uVar1 >> 7;
        do {
          puVar5 = param_2;
          uVar2 = uVar1 >> 7;
          puVar5[-1] = (byte)uVar1 | 0x80;
          param_2 = puVar5 + 1;
          uVar3 = uVar1 >> 0xe;
          uVar1 = uVar2;
        } while (uVar3 != 0);
        *puVar5 = (char)uVar2;
      }
    }
    param_2 = (undefined1 *)FUN_004ded44(lVar4,param_2,param_3);
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if ((uVar7 & 1) == 0) {
    return param_2;
  }
  puVar5 = (undefined1 *)FUN_005161f8((uVar7 & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar5;
}


