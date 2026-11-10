/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ab9b0; name: FUN_007ab9b0
 */


void FUN_007ab9b0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_00792e30();
  puVar1 = PTR_DAT_047d0cb0;
  param_1[0xb] = 0;
  param_1[0xd] = param_2;
  *param_1 = (long)(puVar1 + 0x10);
  uVar2 = FUN_0078a12c();
  lVar3 = FUN_007bf9f0(0x30,uVar2);
  if (lVar3 != 0) {
    FUN_0078ca60(lVar3);
  }
  param_1[0xc] = lVar3;
  return;
}


