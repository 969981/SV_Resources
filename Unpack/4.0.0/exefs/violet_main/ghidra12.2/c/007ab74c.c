/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ab74c; name: FUN_007ab74c
 */


void FUN_007ab74c(undefined8 param_1,long param_2,long param_3,undefined4 param_4,undefined8 param_5
                 ,uint param_6)

{
  uint uVar1;
  ulong uVar2;
  uint local_5c;
  ulong local_58 [2];
  undefined4 local_48 [2];
  
  uVar2 = FUN_00796784(param_5);
  if (((uVar2 & 1) == 0) || (param_6 == 0)) {
    local_58[0] = CONCAT44(local_58[0]._4_4_,0x10407);
  }
  else {
    FUN_00796828(param_2 + 0x60,param_5);
    uVar1 = FUN_0079d1ec(*(undefined8 *)(param_2 + 0xa8));
    *(uint *)(param_2 + 0x80) = uVar1 & param_6;
    *(undefined4 *)(param_2 + 0x84) = 0;
    FUN_007a4c58(*(undefined8 *)(param_2 + 0x98),*(undefined8 *)(param_3 + 8),
                 *(int *)(param_3 + 0x1c) + *(int *)(param_3 + 0x18),*(undefined1 *)(param_3 + 0x14)
                );
    *(undefined4 *)(param_2 + 0x58) = param_4;
    local_5c = 0;
    (**(code **)(**(long **)(param_2 + 0xa8) + 0x140))
              (*(long **)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0x98),param_2 + 0x60,&local_5c);
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | local_5c;
    local_58[0] = 0;
    FUN_007935cc(local_58);
    *(ulong *)(param_2 + 0x88) = local_58[0];
    local_58[0] = local_58[0] & 0xffffffff00000000;
  }
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
  FUN_00cbd7c0(param_1,local_58);
  return;
}


