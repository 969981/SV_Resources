/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00806888; name: FUN_00806888
 */


void FUN_00806888(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_98 [4];
  int local_88 [8];
  undefined4 local_68 [8];
  long local_48;
  undefined4 local_38 [2];
  
  FUN_007fee78(*(undefined8 *)(param_2 + 0x58),param_3 + 0x30,0x5c0,(uint *)(param_3 + 0x5f8),
               &local_48);
  if (*(int *)(param_3 + 0x5f8) == 0) {
    local_68[0] = 0x2c09;
    local_88[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_88);
    puVar2 = local_68;
  }
  else {
    FUN_00796584(local_68);
    uVar5 = (uint)*(ushort *)(*(long *)(param_2 + 0x58) + 0x114e);
    if (uVar5 != 0) {
      uVar4 = 0;
      do {
        plVar1 = (long *)FUN_008013e4(*(undefined8 *)(param_2 + 0x88),uVar4);
        if ((plVar1 != (long *)0x0) && (*plVar1 == local_48)) {
          FUN_007fedb0(local_88,*(undefined8 *)(param_2 + 0x58));
          FUN_00796828(local_68,local_88);
          bVar3 = true;
          goto LAB_00806938;
        }
        uVar4 = uVar4 + 1;
      } while (uVar5 != uVar4);
    }
    bVar3 = false;
LAB_00806938:
    FUN_00796828(param_3 + 0x628,local_68);
    FUN_00796f04(local_88,param_3);
    if (((local_88[0] == 0) && (bVar3)) &&
       (*(uint *)(param_3 + 0x5f8) <= **(uint **)PTR_DAT_047d0928)) {
      local_98[0] = 0;
    }
    else {
      local_98[0] = 0x2c09;
    }
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_98 | 4),(Result *)local_38);
    puVar2 = local_98;
  }
  FUN_00cbd7c0(param_1,puVar2);
  return;
}


