/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd78b4; name: FUN_01dd78b4
 */


void FUN_01dd78b4(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 500) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x58))(plVar2);
  }
  local_50 = 0x7621504d451e091d;
  pcStack_48 = "L_cursor_range_00";
  local_40 = 0x11;
  uStack_38 = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x58))(plVar2);
    lVar1 = FUN_00c8c7b4(plVar2[0x2e],&local_50);
    (**(code **)(*plVar2 + 0x60))(plVar2);
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2);
  }
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x58))(plVar2);
  }
  local_50 = 0x76214f4d451e076a;
  pcStack_48 = "L_cursor_range_01";
  local_40 = 0x11;
  uStack_38 = 0;
  if (plVar2 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar2 + 0x58))(plVar2);
  lVar1 = FUN_00c8c7b4(plVar2[0x2e],&local_50);
  (**(code **)(*plVar2 + 0x60))(plVar2);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  }
                    /* WARNING: Could not recover jumptable at 0x01dd79fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x60))(plVar2);
  return;
}


