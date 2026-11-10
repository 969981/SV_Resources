/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351fe94; name: FUN_0351fe94
 */


void FUN_0351fe94(long *param_1,long param_2,long param_3,long *param_4,long param_5,long param_6,
                 long *param_7,undefined8 *param_8,long param_9,undefined8 param_10,
                 undefined4 param_11,undefined4 param_12)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  int *piVar4;
  long lVar5;
  
  puVar3 = PTR_DAT_047e6fc8;
  param_1[2] = param_6;
  param_1[3] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_8 + 0x14);
  param_1[4] = param_8[1];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_8 + 2);
  piVar4 = (int *)*param_8;
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
    param_6 = param_1[2];
  }
  param_1[3] = (long)piVar4;
  lVar5 = *param_7;
  lVar2 = param_7[1];
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[6] = lVar5;
  *(int *)(param_1 + 7) = (int)lVar2;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 1;
  *(undefined1 *)(param_1 + 10) = 0;
  if (param_6 != 0) {
    uVar1 = *(uint *)(param_6 + 0x80);
    if (uVar1 < 2) {
      *(uint *)(param_6 + 0x80) = uVar1 + 1;
      if ((uVar1 != 0) && (*(char *)(param_6 + 0x84) != '\0')) {
        FUN_034c60b0(*(undefined8 *)PTR_DAT_047e6cc0,param_6);
      }
    }
    else {
      *(uint *)(param_6 + 0x80) = uVar1 + 1;
    }
  }
  *(undefined1 *)(param_1 + 0x13) = 0xff;
  *(undefined1 *)(param_1 + 0x14) = 0xff;
  *param_1 = (long)&PTR_FUN_047c7a40;
  param_1[0xb] = (long)&PTR_LAB_047c7b00;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0xd] = param_2;
  param_1[0xe] = (long)&PTR_LAB_047c7b70;
  param_1[0x17] = param_3;
  param_1[0x18] = (long)param_4;
  param_1[0x19] = param_5;
  param_1[0x1a] = param_9;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = (long)(PTR_DAT_047e7510 + 0x10);
  *(undefined1 *)((long)param_1 + 0x13a) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(byte *)((long)param_1 + 0x15c) = *(byte *)((long)param_1 + 0x15c) & 0xf8 | 4;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined8 *)((long)param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x2e) = param_11;
  *(undefined4 *)((long)param_1 + 0x174) = param_12;
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  *(byte *)((long)param_1 + 0x17c) = *(byte *)((long)param_1 + 0x17c) & 0xf0 | 4;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
                    /* WARNING: Could not recover jumptable at 0x0352004c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x28))(param_4);
  return;
}


