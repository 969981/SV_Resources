/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0039fb40; name: FUN_0039fb40
 */


void FUN_0039fb40(long *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  size_t __n;
  ulong uVar3;
  
  *param_1 = (long)(PTR_DAT_047cd078 + 0x10);
  bVar1 = *param_2;
  if ((bVar1 & 1) == 0) {
    if ((bVar1 & 0xfe) != 0x12) goto LAB_0039fbe4;
    uVar3 = (ulong)(bVar1 >> 1);
    param_2 = param_2 + 1;
    __n = 9;
    if (uVar3 < 10) {
      __n = uVar3;
    }
    if (__n != 0) goto LAB_0039fbb0;
  }
  else {
    if (*(long *)(param_2 + 8) != 9) {
LAB_0039fbe4:
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
    param_2 = *(byte **)(param_2 + 0x10);
    uVar3 = 9;
    __n = 9;
LAB_0039fbb0:
    uVar2 = memcmp(param_2,"localtime",__n);
    if (uVar2 != 0) goto LAB_0039fbcc;
  }
  uVar2 = (uint)(9 < uVar3);
  if (uVar3 < 9) {
    uVar2 = 0xffffffff;
  }
LAB_0039fbcc:
  *(bool *)(param_1 + 1) = uVar2 == 0;
  return;
}


