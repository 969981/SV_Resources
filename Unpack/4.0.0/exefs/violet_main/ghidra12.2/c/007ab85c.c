/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ab85c; name: FUN_007ab85c
 */


void FUN_007ab85c(undefined8 param_1,long param_2,long param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  uint local_4c;
  ulong local_48 [2];
  undefined4 local_38 [2];
  
  if (param_5 == 0) {
    local_48[0] = CONCAT44(local_48[0]._4_4_,0x10407);
  }
  else {
    FUN_007965fc(param_2 + 0x60);
    uVar1 = FUN_0079d1ec(*(undefined8 *)(param_2 + 0xa8));
    *(uint *)(param_2 + 0x80) = uVar1 & param_5;
    *(undefined4 *)(param_2 + 0x84) = 0;
    FUN_007a4c58(*(undefined8 *)(param_2 + 0x98),*(undefined8 *)(param_3 + 8),
                 *(int *)(param_3 + 0x1c) + *(int *)(param_3 + 0x18),*(undefined1 *)(param_3 + 0x14)
                );
    *(undefined4 *)(param_2 + 0x58) = param_4;
    local_4c = 0;
    (**(code **)(**(long **)(param_2 + 0xa8) + 0x148))
              (*(long **)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0x98),
               *(uint *)(param_2 + 0x80) & (*(uint *)(param_2 + 0x84) ^ 0xffffffff),&local_4c);
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | local_4c;
    local_48[0] = 0;
    FUN_007935cc(local_48);
    *(ulong *)(param_2 + 0x88) = local_48[0];
    local_48[0] = local_48[0] & 0xffffffff00000000;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_48);
  return;
}


