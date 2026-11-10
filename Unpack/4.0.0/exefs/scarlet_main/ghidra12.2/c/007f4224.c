/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f4224; name: FUN_007f4224
 */


void FUN_007f4224(long param_1,byte param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_047d0860;
  if (param_2 < 0x18) {
    lVar3 = FUN_01f7c4f0(*(undefined8 *)PTR_DAT_047d0860);
    lVar3 = lVar3 + (ulong)param_2 * 0x30;
    *(undefined8 *)(lVar3 + 0x6450) = 0;
    *(undefined8 *)(lVar3 + 0x6458) = 0;
    *(undefined8 *)(lVar3 + 0x6460) = 0;
    *(undefined8 *)(lVar3 + 0x6468) = 0;
    *(undefined8 *)(lVar3 + 0x6470) = 0;
    *(undefined4 *)(lVar3 + 0x6478) = 0;
    *(undefined1 *)(lVar3 + 0x647c) = 0;
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  if (bVar1 < 0x18) {
    lVar3 = FUN_01f7c4f0(*(undefined8 *)puVar2);
    lVar3 = lVar3 + (ulong)*(byte *)(param_1 + 0x28) * 0x30;
    *(undefined8 *)(lVar3 + 0x6450) = 0;
    *(undefined8 *)(lVar3 + 0x6458) = 0;
    *(undefined8 *)(lVar3 + 0x6460) = 0;
    *(undefined8 *)(lVar3 + 0x6468) = 0;
    *(undefined8 *)(lVar3 + 0x6470) = 0;
    *(undefined4 *)(lVar3 + 0x6478) = 0;
    *(undefined1 *)(lVar3 + 0x647c) = 0;
    *(byte *)(param_1 + 0x28) = param_2;
    return;
  }
  *(byte *)(param_1 + 0x28) = param_2;
  return;
}


