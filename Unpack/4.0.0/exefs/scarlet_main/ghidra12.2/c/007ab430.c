/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ab430; name: FUN_007ab430
 */


void FUN_007ab430(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  FUN_00792e30();
  puVar2 = PTR_DAT_047d0ca0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  FUN_00796584(param_1 + 0xc);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 500;
  param_1[0x15] = param_2;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  uVar3 = FUN_0078a12c();
  lVar4 = FUN_007bf9f0(0x4d8,uVar3);
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(lVar4 + 8 + lVar5);
      lVar5 = lVar5 + 0x14;
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
    } while (lVar5 != 0x4d8);
  }
  param_1[0x14] = lVar4;
  uVar3 = FUN_0078a12c();
  lVar5 = FUN_007bf9f0(0x18,uVar3);
  if (lVar5 != 0) {
    FUN_007a4c48(lVar5,lVar4,0x4d8);
  }
  param_1[0x13] = lVar5;
  return;
}


