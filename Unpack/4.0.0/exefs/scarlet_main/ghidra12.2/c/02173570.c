/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02173570; name: FUN_02173570
 */


undefined2 FUN_02173570(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (7 < param_2) {
    return 0;
  }
  uVar3 = 0x49;
  if (param_2 != 5) {
    uVar3 = 0x1cb;
  }
  uVar2 = 0;
  if ((param_1 - 0x30 & 0xffff) < 10) {
    uVar2 = uVar3 >> (ulong)((param_1 & 0xffff) - 0x30 & 0x1f) & 1;
  }
  uVar1 = (int)((param_1 & 0xffff) - 0xac00) % 0x1c;
  uVar3 = uVar1 & 0xfffffff7;
  if (param_2 != 5) {
    uVar3 = uVar1;
  }
  if ((param_1 + 0x5400 >> 2 & 0x3fff) < 0xae9) {
    uVar2 = (uint)(uVar3 != 0);
  }
  return *(undefined2 *)(&UNK_03cbf3a0 + (ulong)param_2 * 2 + (ulong)uVar2 * 0x10);
}


