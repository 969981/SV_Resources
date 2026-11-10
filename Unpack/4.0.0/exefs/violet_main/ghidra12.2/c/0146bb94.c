/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0146bb94; name: FUN_0146bb94
 */


void FUN_0146bb94(long param_1,ushort param_2,int param_3)

{
  ushort uVar1;
  short sVar2;
  ushort *puVar3;
  ushort local_34 [2];
  ushort local_18 [2];
  ushort local_14 [2];
  
  if (*(char *)(param_1 + 0xa5) == '\0') {
    uVar1 = param_2 & 0xff | (ushort)(param_3 << 8);
    if (*(char *)(param_1 + 0xa6) == '\0') {
      puVar3 = *(ushort **)(param_1 + 0x78);
      if (puVar3 < *(ushort **)(param_1 + 0x80)) goto LAB_0146bc20;
      puVar3 = local_34;
      local_34[0] = uVar1;
    }
    else {
      puVar3 = *(ushort **)(param_1 + 0x78);
      if (puVar3 < *(ushort **)(param_1 + 0x80)) {
LAB_0146bc20:
        *puVar3 = uVar1;
        goto LAB_0146bbf8;
      }
      puVar3 = local_18;
      local_18[0] = uVar1;
    }
LAB_0146bc30:
    FUN_028a90cc(param_1 + 0x70,puVar3);
  }
  else {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
    sVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_3);
    local_14[0] = uVar1 & 0xff | sVar2 << 8;
    puVar3 = *(ushort **)(param_1 + 0x78);
    if (*(ushort **)(param_1 + 0x80) <= puVar3) {
      puVar3 = local_14;
      goto LAB_0146bc30;
    }
    *puVar3 = local_14[0];
LAB_0146bbf8:
    *(ushort **)(param_1 + 0x78) = puVar3 + 1;
  }
  return;
}


