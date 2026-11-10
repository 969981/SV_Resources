/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02137a20; name: FUN_02137a20
 */


undefined8 FUN_02137a20(ulong *param_1,int param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong *puVar3;
  long lVar4;
  
  if (param_2 != 0) {
    uVar1 = FUN_02138b10();
    return uVar1;
  }
  lVar2 = (param_4 & 0xffffffff) + (param_3 - (long)param_1) * 8;
  if (0 < lVar2) {
    puVar3 = (ulong *)PTR_DAT_047dced0;
    if (0x3f < lVar2) {
      do {
        lVar4 = lVar2;
        if (*puVar3 != *param_1) {
          return 0;
        }
        lVar2 = lVar4 + -0x40;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      } while (0x7f < lVar4);
      if (lVar4 < 0x41) {
        return 1;
      }
    }
    if ((*param_1 ^ *puVar3) << (-lVar2 & 0x3fU) != 0) {
      return 0;
    }
  }
  return 1;
}


