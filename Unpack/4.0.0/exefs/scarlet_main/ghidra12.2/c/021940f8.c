/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021940f8; name: FUN_021940f8
 */


undefined4
FUN_021940f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [96];
  
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  local_b0 = 0;
  local_a8 = 0;
  local_c0 = 0;
  local_b8 = (code *)0x0;
  if ((code *)param_5[2] != (code *)0x0) {
    (*(code *)param_5[2])(param_5 + 4,auStack_a0);
    local_a8 = param_5[3];
    local_b8 = (code *)param_5[1];
    local_c0 = *param_5;
    local_b0 = param_5[2];
  }
  uVar2 = FUN_021941b4(uVar3,param_2,param_3,param_4,&local_c0);
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = 0;
    local_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar1)(auStack_a0);
  }
  return uVar2;
}


