/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c06c0; name: FUN_014c06c0
 */


void FUN_014c06c0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_18;
  
  FUN_0169fe68();
  *(undefined2 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x4a0) = 0x3f800000;
  if (((*PTR_DAT_047d8c28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar4 != 0))
  {
    local_18 = FUN_00d44228();
    puVar3 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_18);
    FUN_00100190(PTR_LAB_047d9240,puVar3,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  *(undefined8 *)(param_1 + 0x708) = 0;
  *(undefined8 *)(param_1 + 0x4bc) = 0x3f8000003f800000;
  *(undefined8 *)(param_1 + 0x4c4) = 0x3f8000003f800000;
  *(undefined8 *)(param_1 + 0x4cc) = 0x3f8000003f800000;
  *(undefined8 *)(param_1 + 0x4d4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x4dc) = 0;
  FUN_016a0110(param_1 + 200);
  FUN_016a0110(param_1 + 0x188);
  FUN_016a0110(param_1 + 0x248);
  FUN_016a0110(param_1 + 0x308);
  FUN_016a0110(param_1 + 0x3c8);
  FUN_014c07cc(param_1);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar5 = param_2[2];
  *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 0x4c) = uVar5;
  *(undefined8 *)(param_1 + 0x44) = uVar2;
  *(undefined8 *)(param_1 + 0x3c) = uVar1;
  return;
}


