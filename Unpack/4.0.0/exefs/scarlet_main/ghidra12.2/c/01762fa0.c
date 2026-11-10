/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01762fa0; name: FUN_01762fa0
 */


void FUN_01762fa0(long *param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong *__s;
  
  uVar5 = param_1[1];
  param_1[1] = uVar5 + 5;
  if (uVar5 == 0) {
    puVar6 = (undefined8 *)*param_1;
  }
  else {
    if ((uVar5 + 4 ^ uVar5 - 1) < 0x40) goto LAB_01762fc4;
    puVar6 = (undefined8 *)*param_1;
    if (0x40 < uVar5 + 5) {
      puVar6 = (undefined8 *)(*param_1 + (uVar5 + 4 >> 3 & 0x1ffffffffffffff8));
    }
  }
  *puVar6 = 0;
LAB_01762fc4:
  uVar2 = (uint)uVar5 & 0x3f;
  puVar1 = (ulong *)(*param_1 + (uVar5 >> 3 & 0x1ffffffffffffff8));
  if ((uVar5 & 0x3f) == 0) {
    uVar5 = 5;
    __s = puVar1;
  }
  else {
    uVar4 = 0x40 - uVar2;
    uVar3 = (ulong)uVar4;
    if (4 < uVar4) {
      uVar3 = 5;
    }
    uVar5 = 5 - uVar3;
    __s = puVar1 + 1;
    *puVar1 = *puVar1 & (0xffffffffffffffffU >> (uVar4 - uVar3 & 0x3f) & -1L << uVar2 ^
                        0xffffffffffffffff);
    memset(__s,0,uVar5 >> 3 & 0x1ffffffffffffff8);
    if (uVar5 == 0) {
      return;
    }
  }
  *__s = *__s & (0xffffffffffffffffU >> (-uVar5 & 0x3f) ^ 0xffffffffffffffff);
  return;
}


