/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0157d458; name: FUN_0157d458
 */


void FUN_0157d458(long param_1)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  
  cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if (cVar2 == '\0') {
    return;
  }
  uVar1 = *(ushort *)(param_1 + 0x90);
  if (uVar1 != 0x13d) {
    uVar3 = (uint)uVar1;
    if (uVar3 < 0x155) {
      if (uVar1 != 0xc4) {
        return;
      }
    }
    else if ((((0x3b < uVar3 - 0x1ea) ||
              ((1L << ((ulong)(uVar3 - 0x1ea) & 0x3f) & 0x800002200000001U) == 0)) &&
             (uVar3 != 0x155)) && (uVar3 != 0x30a)) {
      return;
    }
  }
  FUN_0157d500(param_1);
  return;
}


