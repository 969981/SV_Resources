/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078a4fc; name: FUN_0078a4fc
 */


void FUN_0078a4fc(long param_1,long *param_2)

{
  int iVar1;
  
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    iVar1 = memcmp((void *)(param_1 + 8),&DAT_03d0abac,0x10);
    if (iVar1 == 0) {
      FUN_00793558(param_2,"IN_ANY_ADDR:%d",*(undefined2 *)(param_1 + 0x18));
      return;
    }
    iVar1 = memcmp((void *)(param_1 + 8),&DAT_03d0abac,0x10);
    if ((iVar1 == 0) || (iVar1 = memcmp((void *)(param_1 + 0xc),&DAT_03d0abac,0xc), iVar1 == 0)) {
      FUN_00793558(param_2,"%d.%d.%d.%d:%d",*(undefined1 *)(param_1 + 0xb),
                   *(undefined1 *)(param_1 + 10),*(undefined1 *)(param_1 + 9),
                   *(undefined1 *)(param_1 + 8),*(undefined2 *)(param_1 + 0x18));
      return;
    }
    FUN_00793558(param_2,"[%04X:%04X:%04X:%04X:%04X:%04X:%04X:%04X]:%d",
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


