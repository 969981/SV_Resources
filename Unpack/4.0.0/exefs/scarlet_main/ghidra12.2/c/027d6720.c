/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027d6720; name: FUN_027d6720
 */


void FUN_027d6720(long *param_1,long param_2,undefined4 *param_3,long *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_2 + 8);
  plVar4 = *(long **)(param_2 + 0x18);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  FUN_0191e33c(param_1);
  puVar2 = PTR_DAT_047e2118;
  *param_1 = (long)(PTR_DAT_047e2118 + 0x10);
  param_1[4] = (long)(puVar2 + 0xb8);
  param_1[5] = (long)(puVar2 + 0x108);
  FUN_00ddaef8(param_1 + 8,uVar5,0);
  *(undefined4 *)(param_1 + 9) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  *param_1 = (long)&PTR_FUN_045e1e90;
  param_1[4] = (long)&PTR_LAB_045e1f38;
  param_1[5] = (long)&DAT_045e1f88;
  uVar1 = *param_3;
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = uVar1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,param_1 + 0xe);
    lVar3 = param_4[3];
    param_1[0xb] = param_4[1];
    param_1[0xd] = lVar3;
    lVar3 = *param_4;
    param_1[0xc] = param_4[2];
    param_1[10] = lVar3;
  }
  param_1[0x1c] = param_1[1];
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = param_1[1];
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x22] = 0x1fffffffffffffff;
  param_1[0x23] = 0;
  return;
}


