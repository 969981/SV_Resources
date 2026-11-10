/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ddf1e0; name: FUN_00ddf1e0
 */


void FUN_00ddf1e0(undefined1 *param_1,undefined8 param_2,char *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(param_3 + 0x30) + 8);
  *(undefined1 **)(param_1 + 0x10) = param_1 + 0x18;
  (**(code **)PTR_DAT_047d2228)();
  (**(code **)PTR_DAT_047d2230)
            (*(undefined8 *)(param_1 + 0x10),*(undefined2 *)(param_3 + 0x10),
             *(undefined2 *)(param_3 + 0x12));
  if (*param_3 != '\x02') {
    (**(code **)PTR_DAT_047d2e50)
              (*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_3 + 0x20),
               *(undefined4 *)(param_3 + 0x24));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008f1240(*(undefined4 *)(param_3 + 4));
  FUN_008f29a4(uVar2,uVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)PTR_DAT_047d2e60)
            (*(undefined8 *)(param_1 + 0x10),
             *(undefined4 *)(&DAT_03d2e938 + (ulong)(byte)param_3[8] * 4),
             *(undefined4 *)(&DAT_03d2e938 + (ulong)(byte)param_3[9] * 4),
             *(undefined4 *)(&DAT_03d2e938 + (ulong)(byte)param_3[10] * 4),
             *(undefined4 *)(&DAT_03d2e938 + (ulong)(byte)param_3[0xb] * 4));
  (**(code **)PTR_DAT_047d2e68)(*(undefined8 *)(param_1 + 0x10),param_3[1] != '\0');
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008f12f8(*param_3);
  (**(code **)PTR_DAT_047d2e70)(uVar2,uVar1);
  param_1[1] = param_1[1] & 0xfe;
  *param_1 = 1;
  return;
}


