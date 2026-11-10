/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a8144; name: FUN_028a8144
 */


uint FUN_028a8144(byte *param_1,undefined8 *param_2)

{
  size_t __n;
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_2[1];
  if ((*param_1 & 1) == 0) {
    uVar3 = (ulong)(*param_1 >> 1);
    param_1 = param_1 + 1;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 8);
    param_1 = *(byte **)(param_1 + 0x10);
  }
  __n = uVar2;
  if (uVar3 <= uVar2) {
    __n = uVar3;
  }
  if (((__n == 0) || (uVar1 = memcmp(param_1,(void *)*param_2,__n), uVar1 == 0)) &&
     (uVar1 = (uint)(uVar2 < uVar3), uVar3 < uVar2)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


