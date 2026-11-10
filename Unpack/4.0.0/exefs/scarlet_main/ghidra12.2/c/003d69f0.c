/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d69f0; name: FUN_003d69f0
 */


undefined8 FUN_003d69f0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  
  iVar1 = FUN_0043e840(param_2);
  if (iVar1 == 0x198) {
    uVar2 = FUN_0043e6b0(param_2);
    uVar3 = FUN_0040c210();
    iVar1 = FUN_0040c2c0(uVar2);
    if (iVar1 == 4) {
      cVar4 = '\0';
      lVar5 = *(long *)(param_1 + 0x760);
    }
    else {
      if ((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) == 0) &&
          (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
        return 1;
      }
      FUN_0040d100(uVar3);
      iVar1 = FUN_0040d110();
      if (iVar1 == 0x196) {
        cVar4 = '\x01';
        lVar5 = *(long *)(param_1 + 0x760);
      }
      else {
        if (iVar1 != 0x197) {
          return 0;
        }
        cVar4 = '\x02';
        lVar5 = *(long *)(param_1 + 0x760);
      }
    }
    if (lVar5 != 0) {
      if (*(ulong *)(param_1 + 0x758) != 0) {
        uVar6 = 0;
        do {
          if (*(char *)(lVar5 + uVar6) == cVar4) {
            return 1;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(ulong *)(param_1 + 0x758));
      }
      return 0;
    }
  }
  return 1;
}


