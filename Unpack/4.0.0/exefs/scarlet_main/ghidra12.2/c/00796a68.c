/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00796a68; name: FUN_00796a68
 */


void FUN_00796a68(long param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  ulong local_28;
  
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    iVar2 = memcmp((void *)(param_1 + 8),&DAT_03d0b5ef,0x10);
    if (iVar2 == 0) {
      FUN_00793558(param_2,"IN_ANY_ADDR:%d",*(undefined2 *)(param_1 + 0x18));
      return;
    }
    iVar2 = memcmp((void *)(param_1 + 0xc),&DAT_03d0b5ef,0xc);
    if (iVar2 == 0) {
      FUN_00793558(param_2,"%d.%d.%d.%d:%d",*(undefined1 *)(param_1 + 8),
                   *(undefined1 *)(param_1 + 9),*(undefined1 *)(param_1 + 10),
                   *(undefined1 *)(param_1 + 0xb),*(undefined2 *)(param_1 + 0x18));
      return;
    }
    iVar2 = memcmp((void *)(param_1 + 8),&DAT_03d0b5ff,8);
    if (iVar2 == 0) {
      memcpy(&local_28,(void *)(param_1 + 0x10),8);
      uVar1 = (local_28 & 0xff00ff00ff00ff00) >> 8 | (local_28 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      FUN_00793558(param_2,"0x%016llX:%d",uVar1 >> 0x20 | uVar1 << 0x20,
                   *(undefined2 *)(param_1 + 0x18));
      return;
    }
    FUN_00793558(param_2,"%04X:%04X:%04X:%04X:%04X:%04X:%04X:%04X:%d",
                 ((*(ushort *)(param_1 + 8) & 0xff00) << 8 | (uint)*(ushort *)(param_1 + 8) << 0x18)
                 >> 0x10,((*(ushort *)(param_1 + 10) & 0xff00) << 8 |
                         (uint)*(ushort *)(param_1 + 10) << 0x18) >> 0x10,
                 ((*(ushort *)(param_1 + 0xc) & 0xff00) << 8 |
                 (uint)*(ushort *)(param_1 + 0xc) << 0x18) >> 0x10,
                 ((*(ushort *)(param_1 + 0xe) & 0xff00) << 8 |
                 (uint)*(ushort *)(param_1 + 0xe) << 0x18) >> 0x10,
                 ((*(ushort *)(param_1 + 0x10) & 0xff00) << 8 |
                 (uint)*(ushort *)(param_1 + 0x10) << 0x18) >> 0x10,
                 ((*(ushort *)(param_1 + 0x12) & 0xff00) << 8 |
                 (uint)*(ushort *)(param_1 + 0x12) << 0x18) >> 0x10,
                 ((*(ushort *)(param_1 + 0x14) & 0xff00) << 8 |
                 (uint)*(ushort *)(param_1 + 0x14) << 0x18) >> 0x10,
                 ((*(ushort *)(param_1 + 0x16) & 0xff00) << 8 |
                 (uint)*(ushort *)(param_1 + 0x16) << 0x18) >> 0x10,*(undefined2 *)(param_1 + 0x18))
    ;
  }
  return;
}


