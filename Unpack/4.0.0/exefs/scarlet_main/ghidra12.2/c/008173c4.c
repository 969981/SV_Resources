/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008173c4; name: FUN_008173c4
 */


void FUN_008173c4(undefined8 param_1,long param_2,undefined1 *param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if ((param_3 == (undefined1 *)0x0) || (param_4 < 0x19)) {
    local_28[0] = 0x10407;
  }
  else {
    *(undefined1 *)(param_2 + 8) = *param_3;
    uVar1 = (*(uint *)(param_3 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_3 + 1) & 0xff00ff) << 8;
    *(uint *)(param_2 + 0xc) = uVar1 >> 0x10 | uVar1 << 0x10;
    *(ushort *)(param_2 + 0x10) = *(ushort *)(param_3 + 5) >> 8 | *(ushort *)(param_3 + 5) << 8;
    uVar1 = (*(uint *)(param_3 + 7) & 0xff00ff00) >> 8 | (*(uint *)(param_3 + 7) & 0xff00ff) << 8;
    *(uint *)(param_2 + 0x14) = uVar1 >> 0x10 | uVar1 << 0x10;
    *(ushort *)(param_2 + 0x18) = *(ushort *)(param_3 + 0xb) >> 8 | *(ushort *)(param_3 + 0xb) << 8;
    uVar2 = (*(ulong *)(param_3 + 0xd) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_3 + 0xd) & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_2 + 0x20) = uVar2 >> 0x20 | uVar2 << 0x20;
    *(ushort *)(param_2 + 0x28) =
         *(ushort *)(param_3 + 0x15) >> 8 | *(ushort *)(param_3 + 0x15) << 8;
    *(ushort *)(param_2 + 0x2a) =
         *(ushort *)(param_3 + 0x17) >> 8 | *(ushort *)(param_3 + 0x17) << 8;
    local_28[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


