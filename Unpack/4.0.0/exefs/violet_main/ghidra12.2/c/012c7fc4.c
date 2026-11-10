/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012c7fc4; name: FUN_012c7fc4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012c7fc4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar2 = _UNK_03caa5b8;
  uVar1 = _DAT_03caa5b0;
  *(undefined2 *)(param_1 + 2) = 0x101;
  *(undefined8 *)((long)param_1 + 0x94) = 0x64ffffffff;
  *(undefined8 *)((long)param_1 + 0x9c) = 0x3f00000000000400;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_030b9058(param_1 + 0x16,0);
  param_1[0x38] = 1;
  puVar3 = PTR_DAT_047e5100;
  *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
  param_1[0x43] = 0;
  param_1[0x36] = puVar3 + 0x10;
  param_1[0x37] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x41) = 100000;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0x8000000000000000;
  param_1[0x3f] = 0;
  param_1[0x40] = 0x8000000000000000;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)((long)param_1 + 0x244) = 0x7f7fffee3f800000;
  *(undefined8 *)((long)param_1 + 0x24c) = 0;
  *(undefined1 *)((long)param_1 + 0x15d) = 1;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0x3fc000003fc00000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0x3fc000003fc00000;
  *(undefined8 *)((long)param_1 + 0x24) = 0x3fc000003fc00000;
  *(undefined8 *)((long)param_1 + 0x2c) = 0x3fc000003fc00000;
  *(undefined8 *)((long)param_1 + 0x34) = 0x3fc000003fc00000;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x3fc000003fc00000;
  *(undefined8 *)((long)param_1 + 0x44) = 0x3fc000003fc00000;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3fc000003fc00000;
  *(undefined8 *)((long)param_1 + 0x54) = 0x3fc000003fc00000;
  *(undefined8 *)((long)param_1 + 0x5c) = 0x3fc000003fc00000;
  *(undefined8 *)((long)param_1 + 100) = 0x3fc000003fc00000;
  *(undefined8 *)((long)param_1 + 0x6c) = 0x3fc000003fc00000;
  *(undefined8 *)((long)param_1 + 0x74) = 0x3fc000003fc00000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0x3fc000003fc00000;
  *(undefined8 *)((long)param_1 + 0x84) = 0x3fc000003fc00000;
  *(undefined8 *)((long)param_1 + 0x8c) = 0x3fc000003fc00000;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  return;
}


