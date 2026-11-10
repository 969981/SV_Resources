/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0145423c; name: FUN_0145423c
 */


void FUN_0145423c(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  long *plVar2;
  long local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [96];
  
  uStack_c0 = *param_2;
  local_b8 = param_2[1];
  uStack_b0 = param_2[2];
  plVar2 = (long *)param_2[3];
  local_c8 = param_1;
  local_a8 = plVar2;
  if (plVar2 == (long *)0x0) {
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    local_98 = (code *)0x0;
    FUN_014542f4(&local_a0,&local_c8);
  }
  else {
    (**(code **)(*plVar2 + 0x18))(plVar2);
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    local_98 = (code *)0x0;
    FUN_014542f4(&local_a0,&local_c8);
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  FUN_014540c0(param_1 + 0x158,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    local_98 = (code *)0x0;
    (*pcVar1)(auStack_80);
  }
  return;
}


