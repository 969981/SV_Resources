/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0333dcf8; name: FUN_0333dcf8
 */


void FUN_0333dcf8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = (undefined8 *)
           (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(*(long **)(param_1 + 0x18),0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  iVar3 = *(int *)(param_1 + 0x28);
  lVar4 = (long)iVar3;
  if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) <= iVar3) {
    FUN_03340c3c(param_1 + 0x20,lVar4 + 1);
    iVar3 = *(int *)(param_1 + 0x28);
  }
  *(undefined8 **)(*(long *)(param_1 + 0x20) + (long)iVar3 * 8) = puVar1;
  *(int *)(param_1 + 0x28) = (int)(lVar4 + 1);
  uVar2 = FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,*param_2,
                       *(int *)(param_2 + 1) - (int)*param_2,1);
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined2 *)((long)puVar1 + 0xc) = 0;
  *puVar1 = uVar2;
  puVar1[2] = 0x22222222;
  local_70 = *(long *)(param_1 + 0x18);
  local_60 = *(undefined8 *)(local_70 + 0x88);
  local_50 = *(undefined8 *)(local_70 + 0x90);
  uStack_58 = *(undefined8 *)(local_70 + 0x98);
  uStack_48 = *(undefined8 *)(local_70 + 0xa0);
  lStack_68 = local_70;
  FUN_0333dde4(&local_70,param_3,puVar1 + 2);
  return;
}


