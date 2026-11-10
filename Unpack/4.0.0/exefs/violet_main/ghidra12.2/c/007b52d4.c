/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b52d4; name: FUN_007b52d4
 */


void FUN_007b52d4(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_00792e30();
  plVar1 = param_1 + 0xc;
  *param_1 = (long)(PTR_DAT_047d0e30 + 0x10);
  FUN_00796584(plVar1);
  FUN_00796584(param_1 + 0x10);
  FUN_00796584(param_1 + 0x14);
  FUN_00796584(param_1 + 0x18);
  FUN_00796584(param_1 + 0x1c);
  FUN_00796584(param_1 + 0x20);
  FUN_00796584(param_1 + 0x24);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  FUN_0078ca60(param_1 + 0x2b);
  param_1[0x31] = param_2;
  uVar2 = FUN_0078a12c();
  lVar3 = FUN_007bf9f0(0x88,uVar2);
  if (lVar3 != 0) {
    FUN_007b58d4(lVar3,param_2);
  }
  param_1[0xb] = lVar3;
  FUN_007965fc(plVar1);
  FUN_007965fc(param_1 + 0x10);
  FUN_007965fc(param_1 + 0x14);
  FUN_007965fc(param_1 + 0x18);
  FUN_007965fc(param_1 + 0x1c);
  FUN_007965fc(param_1 + 0x20);
  FUN_007965fc(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x28] = (long)plVar1;
  param_1[0x29] = 7;
  return;
}


