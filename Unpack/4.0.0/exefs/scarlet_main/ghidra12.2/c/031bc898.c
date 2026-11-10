/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031bc898; name: FUN_031bc898
 */


void FUN_031bc898(undefined8 *param_1,undefined8 param_2)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  
  puVar1 = (ulong *)param_1[1];
  while( true ) {
    uVar2 = (uint)*puVar1;
    if ((uVar2 >> 0x14 & 1) != 0) break;
    if (((*puVar1 & 1) != 0) || (puVar1 = (ulong *)puVar1[1], puVar1 == (ulong *)0x0))
    goto LAB_031bc908;
  }
  if (puVar1 != (ulong *)0x0) {
    uVar3 = CONCAT44(uVar2,uVar2) & 0xfffff000fffff;
    param_1 = (undefined8 *)*param_1;
    if ((short)puVar1[(ulong)(byte)(POPCOUNT((char)uVar3) + POPCOUNT((char)(uVar3 >> 8)) +
                                   POPCOUNT((char)(uVar3 >> 0x10))) + 2] == 8) {
      FUN_031c6c18(param_2,"%#018llx",*param_1);
      return;
    }
    goto LAB_031bc90c;
  }
LAB_031bc908:
  param_1 = (undefined8 *)*param_1;
LAB_031bc90c:
  FUN_031c6c18(param_2,"%#010x",*(undefined4 *)param_1);
  return;
}


