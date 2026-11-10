/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a77b64; name: FUN_01a77b64
 */


void FUN_01a77b64(undefined1 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_047d5400;
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  puVar1 = PTR_DAT_047d53f0;
  *(undefined **)(param_1 + 0x20) = puVar2 + 0x10;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 10);
  uVar4 = *(undefined8 *)(param_2 + 8);
  *(undefined **)(param_1 + 0x40) = puVar1 + 0x10;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_00d0a71c(param_1 + 0x48,param_2 + 0xe);
  puVar1 = PTR_DAT_047d53f8;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x16);
  uVar4 = *(undefined8 *)(param_2 + 0x14);
  *(undefined **)(param_1 + 0x70) = puVar1 + 0x10;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_00d0a71c(param_1 + 0x78,param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  FUN_00c6c994(param_1 + 0x88,param_2 + 0x1e);
  plVar3 = *(long **)(param_2 + 0x22);
  *(long **)(param_1 + 0x98) = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  *param_1 = 1;
  return;
}


