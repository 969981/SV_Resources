/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012ecc40; name: FUN_012ecc40
 */


void FUN_012ecc40(long *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar2 = (undefined4 *)FUN_01053840();
  lVar3 = nn::os::GetTlsValue(*puVar2);
  lVar4 = 0;
  if ((lVar3 != 0) && (lVar4 = 0, *(long *)(lVar3 + 0x80) != 0)) {
    lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_045a0120;
  param_1[1] = lVar4;
  param_1[4] = (long)&PTR_LAB_045a0158;
  *(undefined8 *)((long)param_1 + 0x2c) = 0x42f0000042c80000;
  *(undefined1 *)((long)param_1 + 0x3c) = 1;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined8 *)((long)param_1 + 0x34) = 0x43200000430c0000;
  return;
}


