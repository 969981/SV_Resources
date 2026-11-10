/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fdc568; name: FUN_01fdc568
 */


ulong FUN_01fdc568(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_2;
  lVar4 = *(long *)(lVar3 + (ulong)*(uint *)(param_1 + 0x60));
  if (lVar4 == 0x133a8707be4aa423) {
    uVar1 = FUN_01e036c4(*(undefined4 *)(lVar3 + (ulong)*(uint *)(param_1 + 100)),
                         *(undefined4 *)(lVar3 + (ulong)*(uint *)(param_1 + 0x68)),
                         *(undefined4 *)(lVar3 + (ulong)*(uint *)(param_1 + 0x6c)),
                         *(undefined4 *)(lVar3 + (ulong)*(uint *)(param_1 + 0x70)));
    uVar1 = uVar1 ^ 1;
  }
  else {
    if (lVar4 == 0x137e8707be8470ef) {
      uVar2 = FUN_01e036c4(*(undefined4 *)(lVar3 + (ulong)*(uint *)(param_1 + 100)),
                           *(undefined4 *)(lVar3 + (ulong)*(uint *)(param_1 + 0x68)),
                           *(undefined4 *)(lVar3 + (ulong)*(uint *)(param_1 + 0x6c)),
                           *(undefined4 *)(lVar3 + (ulong)*(uint *)(param_1 + 0x70)));
      return uVar2;
    }
    uVar1 = 0;
  }
  return (ulong)(uVar1 & 1);
}


