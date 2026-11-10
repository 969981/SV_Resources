/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00777378; name: FUN_00777378
 */


void FUN_00777378(undefined4 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  char local_24 [4];
  
  puVar1 = PTR_DAT_047cbb08;
  plVar3 = (long *)(*(long *)(param_2 + 8) + 0x10);
  if (*plVar3 != 0) {
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0xc0))();
    *plVar3 = 0;
  }
  FUN_00777430(local_68,param_3,plVar3,local_24);
  if (local_24[0] == '\0') {
    lVar2 = (**(code **)(**(long **)puVar1 + 0xb8))(*(long **)puVar1,*plVar3);
    *plVar3 = lVar2;
  }
  *(undefined8 *)(param_1 + 4) = uStack_58;
  *(undefined8 *)(param_1 + 2) = local_60;
  *(undefined8 *)(param_1 + 6) = local_50;
  *param_1 = local_68[0];
  *(undefined8 *)(param_1 + 0xc) = local_38;
  *(undefined8 *)(param_1 + 10) = uStack_40;
  *(undefined8 *)(param_1 + 8) = local_48;
  return;
}


