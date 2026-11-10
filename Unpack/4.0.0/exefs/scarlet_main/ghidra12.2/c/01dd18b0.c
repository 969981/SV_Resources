/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd18b0; name: FUN_01dd18b0
 */


void FUN_01dd18b0(long param_1,byte param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN_01dc2a18(*(undefined8 *)(param_1 + 0x1a8),param_2 & 1);
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x58))(plVar2);
  }
  local_50 = 0xc2189a2cab8d4770;
  pcStack_48 = "L_crange_popup_00";
  local_40 = 0x11;
  uStack_38 = 0;
  if (plVar2 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar2 + 0x58))(plVar2);
  lVar1 = FUN_00c8c7b4(plVar2[0x2e],&local_50);
  (**(code **)(*plVar2 + 0x60))(plVar2);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | (param_2 ^ 1) & 1;
  }
                    /* WARNING: Could not recover jumptable at 0x01dd1978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x60))(plVar2);
  return;
}


