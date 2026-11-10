/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019d4cec; name: FUN_019d4cec
 */


void FUN_019d4cec(long *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  
  memset(param_1 + 1,0,0x171);
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
  puVar1 = PTR_DAT_047dcd48 + 0x298;
  *param_1 = (long)(PTR_DAT_047dcd48 + 0x10);
  param_1[1] = lVar4;
  param_1[4] = (long)puVar1;
  memset(param_1 + 0x1a,0,0x41);
  memset(param_1 + 9,0,0x48);
  FUN_019d4de4(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x2e) = 1;
  *param_1 = (long)&DAT_04592fb8;
  param_1[4] = (long)&PTR_LAB_04593240;
  *(undefined2 *)((long)param_1 + 0x179) = 0;
  *(undefined8 *)((long)param_1 + 0x19c) = 0;
  *(undefined8 *)((long)param_1 + 0x1a1) = 0;
  *(undefined8 *)((long)param_1 + 0x17c) = 0;
  *(undefined8 *)((long)param_1 + 0x184) = 0;
  *(undefined8 *)((long)param_1 + 0x18c) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = 0;
  return;
}


