/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0080fde0; name: FUN_0080fde0
 */


void FUN_0080fde0(undefined4 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  FUN_00792120(param_1 + 2);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_008101dc(param_1 + 0xc);
  pcVar4 = *(code **)(PTR_DAT_047d1868 + 0x38);
  puVar1 = PTR_DAT_047d1868 + 0x10;
  *(undefined **)(param_1 + 0xf4) = puVar1;
  (*pcVar4)(param_1 + 0xf4);
  param_1[0xfa] = 0;
  *(undefined **)(param_1 + 0xfc) = puVar1;
  (*pcVar4)(param_1 + 0xfc);
  param_1[0x102] = 0;
  *(undefined **)(param_1 + 0x104) = puVar1;
  (*pcVar4)(param_1 + 0x104);
  param_1[0x10a] = 0;
  puVar1 = PTR_DAT_047d15f8;
  *(undefined4 **)(param_1 + 0x10e) = param_1 + 0x116;
  *(undefined8 *)(param_1 + 0x110) = 0x200;
  param_1[0x112] = 0;
  *(undefined **)(param_1 + 0x10c) = puVar1 + 0x10;
  *(undefined **)(param_1 + 0x114) = puVar1 + 0x68;
  lVar3 = 0;
  do {
    lVar2 = lVar3 + 3;
    *(undefined2 *)((long)param_1 + lVar3 + 0x458) = 0;
    *(undefined1 *)((long)param_1 + lVar3 + 0x45a) = 0;
    lVar3 = lVar2;
  } while (lVar2 != 0x201);
  *(undefined8 *)(param_1 + 0x111) = 0;
  *(undefined **)(param_1 + 0x1a0) = puVar1 + 0x68;
  param_1[0x19e] = 0;
  *(undefined **)(param_1 + 0x198) = puVar1 + 0x10;
  *(undefined4 **)(param_1 + 0x19a) = param_1 + 0x1a2;
  *(undefined8 *)(param_1 + 0x19c) = 0x200;
  lVar3 = 0;
  do {
    lVar2 = lVar3 + 3;
    *(undefined2 *)((long)param_1 + lVar3 + 0x688) = 0;
    *(undefined1 *)((long)param_1 + lVar3 + 0x68a) = 0;
    lVar3 = lVar2;
  } while (lVar2 != 0x201);
  *(undefined8 *)(param_1 + 0x19d) = 0;
  param_1[0x224] = 0;
  FUN_0284e338(param_1 + 0x226);
  FUN_0284e338(param_1 + 0x22e);
  FUN_0284e338(param_1 + 0x236);
  FUN_0284e338(param_1 + 0x23e);
  FUN_0284e338(param_1 + 0x246);
  FUN_0284e338(param_1 + 0x24e);
  FUN_00811d4c(param_1 + 0x256);
  *(undefined8 *)(param_1 + 0x27e) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x282) = 0;
  *(undefined2 *)(param_1 + 0x284) = 0;
  param_1[0x285] = 0;
  *(undefined1 *)(param_1 + 0x286) = 0;
  return;
}


