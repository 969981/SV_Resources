/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d9994; name: FUN_001d9994
 */


void FUN_001d9994(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0xee8) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0xee8) + 0x1e8), lVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x218);
  }
  FUN_001eda0c(param_2,uVar1,*(undefined4 *)(param_1 + 0xef0),
               *(ulong *)(param_1 + 0xf40) >> 0x34 & 1);
  *(undefined4 *)(param_1 + 0x1540) = *(undefined4 *)(param_1 + 0xef0);
  *(ushort *)(param_1 + 0x15a4) =
       (ushort)((ulong)*(undefined8 *)(param_1 + 0xf40) >> 0x28) & 0x1000 |
       *(ushort *)(param_1 + 0x15a4) & 0xefff;
  *(undefined8 *)(param_1 + 0x1538) = *(undefined8 *)(param_1 + 0xee8);
  return;
}


