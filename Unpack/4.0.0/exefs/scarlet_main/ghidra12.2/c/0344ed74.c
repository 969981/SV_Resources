/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0344ed74; name: FUN_0344ed74
 */


undefined8 FUN_0344ed74(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  
  puVar2 = PTR_DAT_047e2fd0;
  uVar6 = *(uint *)(PTR_DAT_047e6ce8 + 0xc);
  uVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0x10,(ulong)uVar6);
  param_1[2] = uVar3;
  if (param_1[2] == 0) {
    uVar3 = 2;
  }
  else {
    *param_1 = param_1[2];
    param_1[1] = param_1[2];
    param_1[3] = param_1[2] + (ulong)uVar6;
    *(uint *)(param_1 + 4) = uVar6;
    puVar4 = (undefined8 *)(**(code **)(puVar2 + 0x10))(0,0x300);
    param_1[8] = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      uVar6 = 0;
      param_1[7] = puVar4;
      *(undefined4 *)(param_1 + 9) = 0x20;
      do {
        puVar1 = puVar4;
        *puVar1 = puVar1 + 3;
        uVar6 = uVar6 + 1;
        puVar4 = puVar1 + 3;
      } while (uVar6 < *(uint *)(param_1 + 9));
      *puVar1 = 0;
      puVar4 = (undefined8 *)(**(code **)(puVar2 + 0x10))(0,0x300);
      param_1[0xd] = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        uVar6 = 0;
        param_1[0xc] = puVar4;
        *(undefined4 *)(param_1 + 0xe) = 0x20;
        do {
          puVar1 = puVar4;
          *puVar1 = puVar1 + 3;
          uVar6 = uVar6 + 1;
          puVar4 = puVar1 + 3;
        } while (uVar6 < *(uint *)(param_1 + 0xe));
        uVar3 = 1;
        *puVar1 = 0;
        goto LAB_0344ee7c;
      }
    }
    uVar3 = 0x34;
  }
LAB_0344ee7c:
  uVar5 = nn::os::GetSystemTick();
  param_1[0x11] = uVar5;
  return uVar3;
}


