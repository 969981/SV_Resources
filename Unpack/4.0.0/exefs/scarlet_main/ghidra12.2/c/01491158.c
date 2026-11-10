/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01491158; name: FUN_01491158
 */


void FUN_01491158(undefined8 param_1,long *param_2,byte param_3)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  long *local_80;
  byte *pbStack_78;
  byte local_4 [4];
  
  local_4[0] = param_3 & 1;
  if (*param_2 != 0) {
    pbStack_78 = local_4;
    local_a0 = &LAB_02bd8328;
    local_98 = FUN_02bd8348;
    local_90 = &LAB_02bd834c;
    puStack_88 = &LAB_02bd8358;
    local_80 = param_2;
    FUN_014911dc(param_1,&local_a0);
    pcVar1 = local_98;
    if (local_98 != (code *)0x0) {
      local_90 = (undefined1 *)0x0;
      puStack_88 = (undefined1 *)0x0;
      local_a0 = (undefined1 *)0x0;
      local_98 = (code *)0x0;
      (*pcVar1)(&local_80);
    }
  }
  return;
}


