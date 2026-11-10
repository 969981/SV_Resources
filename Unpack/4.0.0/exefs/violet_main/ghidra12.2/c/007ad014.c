/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ad014; name: FUN_007ad014
 */


void FUN_007ad014(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_00792e30();
  puVar1 = PTR_DAT_047d0d20;
  param_1[0xb] = param_2;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  uVar2 = FUN_0078a12c();
  lVar3 = FUN_007bf9f0(0x68,uVar2);
  if (lVar3 != 0) {
    FUN_007ad3f0(lVar3,param_2);
  }
  param_1[0xd] = lVar3;
  uVar2 = FUN_0078a12c();
  lVar3 = FUN_007bf9f0(0x30,uVar2);
  if (lVar3 != 0) {
    FUN_0078ca60(lVar3);
  }
  param_1[0xe] = lVar3;
  return;
}


