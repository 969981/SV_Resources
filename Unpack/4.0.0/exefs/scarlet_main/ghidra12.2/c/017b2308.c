/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017b2308; name: FUN_017b2308
 */


void FUN_017b2308(long *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 local_50;
  long *local_48;
  long local_40;
  long local_38;
  
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar2 = (undefined4 *)FUN_01053840();
  lVar3 = nn::os::GetTlsValue(*puVar2);
  plVar5 = (long *)0x0;
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x80) == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = *(long **)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_LAB_045ee2c8;
  param_1[1] = (long)plVar5;
  param_1[4] = (long)&PTR_LAB_045ee300;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  plVar4 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x28,8);
  if (plVar4 == (long *)0x0) {
    local_40 = 0;
    local_38 = 0;
    local_48 = (long *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_01053840();
    lVar3 = nn::os::GetTlsValue(*puVar2);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
    puVar1 = PTR_DAT_047dcd38;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    *plVar4 = (long)(puVar1 + 0x10);
    plVar4[1] = 0xf4b17a579f18960;
    plVar4[2] = -0x7d5d4e8add6295a5;
    plVar4[3] = 0;
    plVar4[4] = 0;
    local_40 = 0x28;
    local_38 = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    local_48 = plVar5;
  }
  local_50 = 0;
  FUN_017b2480(param_1 + 6,plVar4);
  param_1[7] = (long)local_48;
  param_1[8] = local_40;
  param_1[9] = local_38;
  FUN_017b2480(&local_50,0);
  return;
}


