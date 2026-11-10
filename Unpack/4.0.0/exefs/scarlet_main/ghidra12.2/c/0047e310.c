/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0047e310; name: FUN_0047e310
 */


undefined8 FUN_0047e310(int *param_1)

{
  uint uVar1;
  undefined8 *__dest;
  int iVar2;
  undefined8 uVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  __dest = *(undefined8 **)(param_1 + 2);
  uVar1 = *param_1 - 1;
  uVar3 = *__dest;
  iVar2 = 0;
  if (uVar1 != 0) {
    memmove(__dest,__dest + 1,-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
    iVar2 = *param_1 + -1;
  }
  *param_1 = iVar2;
  return uVar3;
}


