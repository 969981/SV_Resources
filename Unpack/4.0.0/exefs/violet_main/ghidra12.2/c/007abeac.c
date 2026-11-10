/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007abeac; name: FUN_007abeac
 */


void FUN_007abeac(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  int *piVar3;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  if (param_3 == 0) {
    local_48[0] = 0x10407;
    local_58[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_58);
    piVar3 = local_48;
  }
  else {
    (**(code **)(**(long **)(param_2[0xb] + 0x180) + 0x48))
              (local_48,*(long **)(param_2[0xb] + 0x180),param_2[0xf]);
    if (local_48[0] == 0) {
      lVar2 = FUN_00798120(param_4);
      puVar1 = PTR_DAT_047d0868;
      *(undefined8 *)(PTR_DAT_047d0868 + 0x1c0) = *(undefined8 *)(lVar2 + 0x10);
      lVar2 = FUN_00798120(param_4);
      *(undefined2 *)(puVar1 + 0x1a0) = *(undefined2 *)(lVar2 + 0x1a);
      (**(code **)(*param_2 + 0x10))(param_2,1);
      param_2[0xe] = param_3;
      FUN_0078cac8(param_3);
      FUN_0078cb14(param_2[0xe]);
      FUN_0078cd58(*(undefined8 *)(param_2[0xb] + 0x180),1);
      FUN_0079cbe8(param_2[0xb]);
      if (*(char *)(param_2[0xb] + 0x1168) != '\x01') {
        *(char *)(param_2[0xb] + 0x1168) = '\x01';
      }
      param_2[8] = (long)"NetConnectNetworkJob::WaitConnectNetwork";
      param_2[6] = (long)PTR_FUN_047d0cd0;
      param_2[7] = 0;
      local_58[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
      piVar3 = local_58;
    }
    else {
      piVar3 = local_48;
    }
  }
  FUN_00cbd7c0(param_1,piVar3);
  return;
}


