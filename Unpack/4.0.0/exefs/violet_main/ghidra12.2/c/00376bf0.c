/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00376bf0; name: FUN_00376bf0
 */


undefined8 FUN_00376bf0(ulong param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch((uint)param_1 & 3) {
  case 0:
    goto switchD_00376c10_caseD_0;
  case 1:
    return *(undefined8 *)
            (PTR_DAT_047ccf70 +
            ((long)((param_1 & 0xfffffffffffffffc) - *(long *)PTR_DAT_047ccb88) >> 4) *
            0x6666666666666668);
  case 2:
    if (*(long *)((param_1 & 0xfffffffffffffffc) + 0x70) != param_2) {
      return 0;
    }
    break;
  case 3:
    if (*(long *)((param_1 & 0xfffffffffffffffc) + 0x70) != param_2) {
      return 0;
    }
  }
  uVar1 = *(undefined8 *)((param_1 & 0xfffffffffffffffc) + 0x78);
switchD_00376c10_caseD_0:
  return uVar1;
}


