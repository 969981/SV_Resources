/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6fed4; name: FUN_00c6fed4
 */


void FUN_00c6fed4(long param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  long alStack_80 [12];
  
  local_a0 = &LAB_02e55c88;
  local_98 = FUN_02e55dbc;
  local_90 = &LAB_02e55dc0;
  local_88 = &LAB_02e55dcc;
  plVar2 = *(long **)(param_1 + 0x30);
  pcVar1 = FUN_02e55dbc;
  alStack_80[0] = param_1;
  if (plVar2 != (long *)0x0) {
    do {
      FUN_00c6ff58(plVar2 + 6,&local_a0);
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
    pcVar1 = local_98;
    if (local_98 == (code *)0x0) {
      return;
    }
  }
  local_90 = (undefined1 *)0x0;
  local_88 = (undefined1 *)0x0;
  local_a0 = (undefined1 *)0x0;
  local_98 = (code *)0x0;
  (*pcVar1)(alStack_80);
  return;
}


