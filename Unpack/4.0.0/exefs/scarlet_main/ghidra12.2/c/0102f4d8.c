/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0102f4d8; name: FUN_0102f4d8
 */


void FUN_0102f4d8(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  FUN_0102f570(param_1,param_3);
  plVar2 = *(long **)(*(long *)(param_2 + 8) + 0x210);
  lVar1 = *(long *)(*(long *)(param_2 + 8) + 0x218) - (long)plVar2;
  if (lVar1 != 0) {
    uVar3 = (lVar1 >> 3) * -0x70a3d70a3d70a3d7;
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    do {
      if (*plVar2 == *param_3) {
        FUN_0102f6ec(param_1);
        return;
      }
      uVar3 = uVar3 - 1;
      plVar2 = plVar2 + 0x19;
    } while (uVar3 != 0);
  }
  return;
}


