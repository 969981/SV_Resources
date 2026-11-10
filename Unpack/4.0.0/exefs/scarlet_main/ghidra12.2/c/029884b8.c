/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029884b8; name: FUN_029884b8
 */


uint FUN_029884b8(undefined8 param_1,undefined4 param_2,byte *param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    lVar1 = (uVar3 >> 3 & 0xff) + 1;
    if ((((uint)lVar1 & 0xff) < (uint)*param_3) &&
       ((param_3[lVar1] >> (ulong)((uint)uVar3 & 7) & 1) != 0)) {
      uVar2 = FUN_02988544(param_1,param_2,uVar3,param_4 & 1);
      uVar4 = uVar4 | uVar2;
    }
    uVar2 = (uint)uVar3 + 1;
    uVar3 = (ulong)uVar2;
  } while (uVar2 != 0x13);
  return uVar4 & 1;
}


