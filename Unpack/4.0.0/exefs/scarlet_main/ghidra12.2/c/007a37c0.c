/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a37c0; name: FUN_007a37c0
 */


void FUN_007a37c0(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (param_3 != 0) {
    uVar1 = (*(uint *)(param_3 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_3 + 4) & 0xff00ff) << 8;
    *(uint *)(param_2 + 0xc) = uVar1 >> 0x10 | uVar1 << 0x10;
    *(ushort *)(param_2 + 0x10) = *(ushort *)(param_3 + 8) >> 8 | *(ushort *)(param_3 + 8) << 8;
    uVar2 = (*(ulong *)(param_3 + 10) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_3 + 10) & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_2 + 0x18) = uVar2 >> 0x20 | uVar2 << 0x20;
    uVar2 = (*(ulong *)(param_3 + 0x12) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_3 + 0x12) & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_2 + 0x20) = uVar2 >> 0x20 | uVar2 << 0x20;
    *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_3 + 0x1a);
    *(ushort *)(param_2 + 0x2a) =
         *(ushort *)(param_3 + 0x1b) >> 8 | *(ushort *)(param_3 + 0x1b) << 8;
    *(undefined1 *)(param_2 + 0x2c) = *(undefined1 *)(param_3 + 0x1d);
    if (0x1d < param_4) {
      local_28[0] = 0;
      goto LAB_007a3840;
    }
  }
  local_28[0] = 0x10407;
LAB_007a3840:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


