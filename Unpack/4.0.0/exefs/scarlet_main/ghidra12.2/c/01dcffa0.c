/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dcffa0; name: FUN_01dcffa0
 */


void FUN_01dcffa0(long param_1)

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
  FUN_0129e570(*(undefined8 *)(param_1 + 0x150));
  return;
}


