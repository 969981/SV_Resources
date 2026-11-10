/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012ec644; name: FUN_012ec644
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012ec644(long *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  long *local_28;
  
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
  *param_1 = (long)&PTR_LAB_0459f660;
  param_1[1] = lVar4;
  param_1[4] = (long)&PTR_LAB_0459f6c8;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x42) = 0;
  param_1[0xe] = 0;
  param_1[6] = (long)&PTR_LAB_0459f6f8;
  param_1[7] = (long)&PTR_LAB_0459f728;
  lVar3 = _UNK_03caa948;
  lVar4 = _DAT_03caa940;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = lVar3;
  param_1[10] = lVar4;
  FUN_012ec848(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_012ec758(param_1 + 0x19);
  FUN_012eccd8(param_1 + 0x19,8);
  param_1[0x26] = 0;
  *(undefined4 *)((long)param_1 + 0x144) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x27,0,1);
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  local_28 = param_1;
  FUN_012ec8a8(&local_28,param_1 + 0x29);
  FUN_012eca10(&local_28,param_1 + 0x2a);
  return;
}


