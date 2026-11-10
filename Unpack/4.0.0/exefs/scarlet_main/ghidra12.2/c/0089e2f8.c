/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0089e2f8; name: FUN_0089e2f8
 */


void FUN_0089e2f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00898c44(param_1,&DAT_03be7c7f);
  if (lVar1 != 0) {
    uVar2 = FUN_0089e4f4(param_1,param_2,&DAT_03be7c7f,0);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  lVar1 = FUN_00898c44(param_1,&DAT_03c4f682);
  if (lVar1 != 0) {
    uVar2 = FUN_0089e4f4(param_1,param_2,&DAT_03c4f682,0);
    *(undefined8 *)(param_1 + 0x70) = uVar2;
  }
  lVar1 = FUN_00898c44(param_1,&DAT_03c5c458);
  if (lVar1 != 0) {
    uVar2 = FUN_0089e4f4(param_1,param_2,&DAT_03c5c458,0);
    *(undefined8 *)(param_1 + 0x78) = uVar2;
  }
  return;
}


