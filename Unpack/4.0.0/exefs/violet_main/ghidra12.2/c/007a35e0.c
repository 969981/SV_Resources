/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a35e0; name: FUN_007a35e0
 */


void FUN_007a35e0(undefined8 param_1,long *param_2,long param_3,undefined4 *param_4,uint param_5)

{
  ulong uVar1;
  uint uVar2;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if (((param_3 == 0) || (param_4 == (undefined4 *)0x0)) ||
     (uVar2 = (**(code **)(*param_2 + 0x20))(), param_5 < uVar2)) {
    local_48[0] = 0x10407;
  }
  else {
    uVar2 = (*(uint *)((long)param_2 + 0xc) & 0xff00ff00) >> 8 |
            (*(uint *)((long)param_2 + 0xc) & 0xff00ff) << 8;
    *(uint *)(param_3 + 4) = uVar2 >> 0x10 | uVar2 << 0x10;
    *(ushort *)(param_3 + 8) = *(ushort *)(param_2 + 2) >> 8 | *(ushort *)(param_2 + 2) << 8;
    uVar1 = (param_2[3] & 0xff00ff00ff00ff00U) >> 8 | (param_2[3] & 0xff00ff00ff00ffU) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_3 + 10) = uVar1 >> 0x20 | uVar1 << 0x20;
    uVar1 = (param_2[4] & 0xff00ff00ff00ff00U) >> 8 | (param_2[4] & 0xff00ff00ff00ffU) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_3 + 0x12) = uVar1 >> 0x20 | uVar1 << 0x20;
    *(char *)(param_3 + 0x1a) = (char)param_2[5];
    *(ushort *)(param_3 + 0x1b) =
         *(ushort *)((long)param_2 + 0x2a) >> 8 | *(ushort *)((long)param_2 + 0x2a) << 8;
    *(undefined1 *)(param_3 + 0x1d) = *(undefined1 *)((long)param_2 + 0x2c);
    *param_4 = 0x1e;
    local_48[0] = 0;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_48);
  return;
}


