/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e99f0; name: FUN_003e99f0
 */


undefined8 FUN_003e99f0(long *param_1,long param_2,long *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_003e8a30(&DAT_044a2610);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_003e8a30(&DAT_044a2610);
    if ((((lVar3 != 0) &&
         ((param_2 == 0 || (iVar1 = FUN_003e9560(lVar2,0x88,param_2,0), iVar1 != 0)))) &&
        ((param_4 == 0 || (iVar1 = FUN_003e9560(lVar3,0x88,param_4,0), iVar1 != 0)))) &&
       (iVar1 = FUN_003e9560(lVar2,0x8a,0,lVar3), iVar1 != 0)) {
      uVar4 = 1;
      goto LAB_003e9ab0;
    }
  }
  FUN_003e8b90(lVar2);
  FUN_003e8b90(lVar3);
  uVar4 = 0;
  lVar2 = 0;
  lVar3 = 0;
LAB_003e9ab0:
  *param_1 = lVar2;
  *param_3 = lVar3;
  return uVar4;
}


