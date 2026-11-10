/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a85728; name: FUN_01a85728
 */


void FUN_01a85728(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x58))(plVar2);
  }
  local_40 = 0x9778194a3162a086;
  pcStack_38 = "f_out";
  local_30 = 5;
  local_28 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    lVar1 = FUN_00e895f4(plVar2[0x2e],&local_40);
    if (lVar1 != 0) {
      FUN_00dfcea4();
    }
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    (**(code **)(*plVar2 + 0x60))(plVar2);
  }
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x58))(plVar2);
  }
  local_40 = 0xf1734e100977352b;
  pcStack_38 = "L_cursor_00";
  local_30 = 0xb;
  local_28 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x58))(plVar2);
    lVar1 = FUN_00c8c7b4(plVar2[0x2e],&local_40);
    (**(code **)(*plVar2 + 0x60))(plVar2);
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2);
  }
  return;
}


