/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d0a64; name: FUN_007d0a64
 */


void FUN_007d0a64(undefined8 param_1,long *param_2,long param_3,long param_4,undefined8 param_5)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  ulong *puVar4;
  ulong local_60 [2];
  int local_50 [4];
  undefined4 local_38 [2];
  
  puVar4 = local_60;
  if ((((param_3 == 0) || (param_4 == 0)) || (param_2[0xb] != 0)) ||
     (((*(long **)(param_4 + 8) == (long *)0x0 || (*(long *)(param_4 + 0x10) == 0)) ||
      ((sVar2 = (**(code **)(**(long **)(param_4 + 8) + 0x50))(), sVar2 == 0 ||
       (uVar1 = *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50),
       uVar3 = (**(code **)(**(long **)(param_4 + 8) + 0x50))(), uVar1 < uVar3)))))) {
    local_50[0] = 0x10407;
    local_60[0] = local_60[0] & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
  }
  else {
    (**(code **)(**(long **)(*(long *)PTR_DAT_047d0a08 + 0x18) + 0x68))
              (local_50,*(long **)(*(long *)PTR_DAT_047d0a08 + 0x18),param_2 + 0xc,param_4,param_5);
    if (local_50[0] == 0) {
      param_2[0xb] = param_3;
      FUN_0078cb14(param_3);
      local_60[0] = local_60[0] & 0xffffffff00000000;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
      FUN_018ff39c(param_2 + 0x14,local_60);
      local_60[0] = 0;
      FUN_007935cc(local_60);
      param_2[0x16] = local_60[0];
      *(undefined1 *)(param_2 + 0x1a) = 0;
      *(undefined4 *)((long)param_2 + 0x94) = 1;
      PTR_DAT_047d0868[0x3c7] = 0;
      (**(code **)(*param_2 + 0x10))(param_2,1);
      param_2[6] = (long)PTR_LAB_047d12d8;
      param_2[7] = 0;
      param_2[8] = (long)"JoinRandomSessionJob::WaitAutoConnect";
      local_60[0] = local_60[0] & 0xffffffff00000000;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
      goto LAB_007d0ab8;
    }
  }
  puVar4 = (ulong *)local_50;
LAB_007d0ab8:
  FUN_00cbd7c0(param_1,puVar4);
  return;
}


