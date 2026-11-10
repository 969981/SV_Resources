/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd12f0; name: FUN_01dd12f0
 */


void FUN_01dd12f0(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x1928);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1930) = 0;
    *(undefined8 *)(param_1 + 0x1938) = 0;
    *(undefined8 *)(param_1 + 0x1920) = 0;
    *(undefined8 *)(param_1 + 0x1928) = 0;
    (*pcVar1)(param_1 + 0x1940);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x1940);
    uVar2 = param_2[3];
    *(undefined8 *)(param_1 + 0x1928) = param_2[1];
    *(undefined8 *)(param_1 + 0x1938) = uVar2;
    uVar2 = *param_2;
    *(undefined8 *)(param_1 + 0x1930) = param_2[2];
    *(undefined8 *)(param_1 + 0x1920) = uVar2;
  }
  FUN_018895f0(param_1);
  return;
}


