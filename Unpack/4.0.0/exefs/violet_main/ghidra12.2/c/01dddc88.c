/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dddc88; name: FUN_01dddc88
 */


void FUN_01dddc88(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x58))(plVar2);
  }
  local_40 = 0xc2189a2cab8d4770;
  pcStack_38 = "L_crange_popup_00";
  local_30 = 0x11;
  uStack_28 = 0;
  if (plVar2 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar2 + 0x58))(plVar2);
  lVar1 = FUN_00c8c7b4(plVar2[0x2e],&local_40);
  (**(code **)(*plVar2 + 0x60))(plVar2);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  }
                    /* WARNING: Could not recover jumptable at 0x01dddd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x60))(plVar2);
  return;
}


