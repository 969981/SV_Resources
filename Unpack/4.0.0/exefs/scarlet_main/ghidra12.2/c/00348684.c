/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00348684; name: FUN_00348684
 */


void FUN_00348684(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 local_29;
  undefined7 uStack_28;
  
  uVar3 = *(undefined8 *)((long)param_4 + 1);
  uVar1 = *(undefined1 *)param_4;
  uStack_28 = (undefined7)((ulong)param_4[1] >> 8);
  local_29 = (undefined1)((ulong)uVar3 >> 0x38);
  *param_4 = 0;
  param_4[1] = 0;
  lVar4 = param_4[2];
  param_4[2] = 0;
  puVar2 = PTR_DAT_047ccd78;
  *(undefined1 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 2) = 4;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = 1;
  param_1[3] = -1;
  param_1[5] = CONCAT71(uStack_28,local_29);
  param_1[6] = lVar4;
  *(undefined8 *)((long)param_1 + 0x21) = uVar3;
                    /* try { // try from 003486fc to 00348707 has its CatchHandler @ 00348770 */
  uVar3 = FUN_0034ad58();
  FUN_0034ad64(uVar3,param_1);
  puVar2 = PTR_DAT_047ccd88;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  lVar5 = param_2[1];
  lVar4 = *param_2;
  param_1[0x13] = param_2[2];
  param_1[0x12] = lVar5;
  param_1[0x11] = lVar4;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  lVar5 = param_3[1];
  lVar4 = *param_3;
  param_1[0x16] = param_3[2];
  param_1[0x15] = lVar5;
  param_1[0x14] = lVar4;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}


