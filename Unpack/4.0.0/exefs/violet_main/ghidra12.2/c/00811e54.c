/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00811e54; name: FUN_00811e54
 */


undefined1 FUN_00811e54(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined4 local_88 [4];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [32];
  undefined8 local_48 [4];
  undefined4 local_28 [2];
  
  puVar1 = PTR_FUN_047d1890;
  if ((*(long *)(param_1 + 0x60) == 0) || (*(char *)(*(long *)(param_1 + 0x60) + 0x28) == '\0')) {
    local_48[0] = 0;
    FUN_007935cc(local_48);
    *(undefined8 *)(param_1 + 0x80) = local_48[0];
    FUN_0284e338(local_48);
    FUN_0284e338(auStack_68);
    uVar2 = FUN_00793098(*(long *)(param_1 + 0x68) + 0x430);
    uVar3 = FUN_00792bd8(uVar2,0,2,0,auStack_68);
    uVar4 = (uVar3 & 1) == 0;
    if ((bool)uVar4) {
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      local_88[0] = 0xc436;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_28);
      FUN_00cbd7c0(auStack_78,local_88);
      FUN_0078cb94(uVar2,auStack_78);
      FUN_00810f24(*(undefined8 *)(param_1 + 0x68));
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x68);
      FUN_0284e39c(lVar5 + 0x898,local_48);
      *(undefined2 *)(lVar5 + 0x8b0) = *(undefined2 *)(lVar5 + 0x890);
      FUN_0284e39c(lVar5 + 0x8b8,auStack_68);
      *(undefined2 *)(lVar5 + 0x8d0) = *(undefined2 *)(lVar5 + 0x890);
      FUN_0284e39c(lVar5 + 0x918,local_48);
      FUN_0284e39c(lVar5 + 0x938,auStack_68);
      *(undefined2 *)(lVar5 + 0x930) = 0x8236;
      puVar1 = PTR_LAB_047d1898;
      *(undefined2 *)(lVar5 + 0x950) = 0x8236;
      *(char **)(param_1 + 0x40) = "NatCheckJob::StepResolveSecondaryAddress";
      *(undefined **)(param_1 + 0x30) = puVar1;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    FUN_0284e3d4(auStack_68);
    FUN_0284e3d4(local_48);
  }
  else {
    *(char **)(param_1 + 0x40) = "NatCheckJob::StepComplete";
    uVar4 = 6;
    *(undefined **)(param_1 + 0x30) = puVar1;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return uVar4;
}


