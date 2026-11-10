/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bd0f60; name: FUN_01bd0f60
 */


void FUN_01bd0f60(undefined4 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined4 *)FUN_01bd1030();
  puVar1 = PTR_DAT_047d5400 + 0x10;
  *param_1 = *puVar3;
  *(undefined **)(param_1 + 4) = puVar1;
  puVar1 = PTR_DAT_047d53f0;
  uVar5 = *(undefined8 *)(puVar3 + 8);
  uVar2 = *(undefined8 *)(puVar3 + 10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = uVar5;
  *(undefined8 *)(param_1 + 10) = uVar2;
  *(undefined **)(param_1 + 0xc) = puVar1 + 0x10;
  *(undefined8 *)(param_1 + 0xe) = 0;
  FUN_00d0a71c(param_1 + 0xe,puVar3 + 0xe);
  puVar1 = PTR_DAT_047d53f8;
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(puVar3 + 0x16);
  uVar5 = *(undefined8 *)(puVar3 + 0x14);
  *(undefined **)(param_1 + 0x18) = puVar1 + 0x10;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x14) = uVar5;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  FUN_00d0a71c(param_1 + 0x1a,puVar3 + 0x1a);
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_00c6c994(param_1 + 0x1e,puVar3 + 0x1e);
  plVar4 = *(long **)(puVar3 + 0x22);
  *(long **)(param_1 + 0x22) = plVar4;
  if (plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01bd102c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))();
  return;
}


