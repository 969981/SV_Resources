/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ebdcdc; name: FUN_01ebdcdc
 */


void FUN_01ebdcdc(long param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 local_28 [2];
  undefined2 local_26;
  undefined1 local_24;
  undefined2 local_22;
  undefined1 local_4 [4];
  
  local_28[0] = 0;
  local_26 = 0;
  local_24 = 0;
  local_22 = 0;
  if (((*param_2 != 0) && (uVar1 = FUN_01ebf39c(*param_2,local_28), (uVar1 & 1) != 0)) &&
     (*(char *)(param_1 + 0x2c0) != '\0')) {
    if (*(code **)(param_1 + 0x2f0) != (code *)0x0) {
      local_4[0] = 0;
      (**(code **)(param_1 + 0x2f0))(param_1 + 0x310,local_4);
      if (*(char *)(param_1 + 0x2c0) == '\0') {
        return;
      }
    }
    pcVar2 = *(code **)(param_1 + 0x2f8);
    if (pcVar2 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x300) = 0;
      *(undefined8 *)(param_1 + 0x308) = 0;
      *(undefined8 *)(param_1 + 0x2f0) = 0;
      *(undefined8 *)(param_1 + 0x2f8) = 0;
      (*pcVar2)(param_1 + 0x310);
    }
    *(undefined1 *)(param_1 + 0x2c0) = 0;
  }
  return;
}


