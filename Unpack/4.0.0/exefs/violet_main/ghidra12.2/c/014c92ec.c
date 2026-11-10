/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014c92ec; name: FUN_014c92ec
 */


void FUN_014c92ec(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined4 *)FUN_01053840();
  lVar4 = nn::os::GetTlsValue(*puVar3);
  lVar5 = 0;
  if ((lVar4 != 0) && (lVar5 = 0, *(long *)(lVar4 + 0x80) != 0)) {
    lVar5 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
  }
  *param_1 = (long)&DAT_0456fe78;
  param_1[1] = lVar5;
  param_1[4] = (long)&PTR_LAB_0456fea8;
  if (((*PTR_DAT_047dc9f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047dc9f8), iVar2 != 0))
  {
    FUN_00100190(&LAB_02a7dd88,PTR_DAT_047dca00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dc9f8);
  }
  PTR_DAT_047dca00[8] = 1;
  return;
}


