/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002268fc; name: FUN_002268fc
 */


void FUN_002268fc(undefined4 *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_047cbb08;
  lVar3 = *(long *)(param_2 + 8);
  if (*(long *)(lVar3 + 0x10) != 0) {
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0xc0))();
    *(undefined8 *)(lVar3 + 0x10) = 0;
  }
  if (*param_3 != 0) {
    uVar2 = (**(code **)(**(long **)puVar1 + 0xb8))();
    *(undefined8 *)(lVar3 + 0x10) = uVar2;
  }
  uVar2 = (**(code **)(**(long **)puVar1 + 0x1a0))();
  FUN_002246b8(local_68,uVar2);
  *(undefined8 *)(param_1 + 4) = uStack_58;
  *(undefined8 *)(param_1 + 2) = local_60;
  *(undefined8 *)(param_1 + 6) = local_50;
  *param_1 = local_68[0];
  *(undefined8 *)(param_1 + 0xc) = local_38;
  *(undefined8 *)(param_1 + 10) = uStack_40;
  *(undefined8 *)(param_1 + 8) = local_48;
  return;
}


