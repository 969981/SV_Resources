/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016b4f44; name: FUN_016b4f44
 */


void FUN_016b4f44(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x38);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    (*pcVar1)(param_1 + 0x50);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x50);
    uVar2 = param_2[3];
    *(undefined8 *)(param_1 + 0x38) = param_2[1];
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    uVar2 = *param_2;
    *(undefined8 *)(param_1 + 0x40) = param_2[2];
    *(undefined8 *)(param_1 + 0x30) = uVar2;
  }
  return;
}


