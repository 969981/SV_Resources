/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a4130; name: FUN_028a4130
 */


void FUN_028a4130(long param_1)

{
  code *pcVar1;
  
  FUN_028a441c();
  FUN_028a337c(param_1);
  FUN_028a4594(param_1 + 0x3b0);
  pcVar1 = *(code **)(param_1 + 0x338);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x348) = 0;
    *(undefined8 *)(param_1 + 0x340) = 0;
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(undefined8 *)(param_1 + 0x330) = 0;
    (*pcVar1)(param_1 + 0x350);
  }
  FUN_028a463c(param_1 + 0x2c8);
  FUN_028a4664(param_1 + 0x290);
  FUN_028a4664(param_1 + 600);
  FUN_028a4664(param_1 + 0x220);
  FUN_028a4664(param_1 + 0x1e8);
  FUN_028a4664(param_1 + 0x1b0);
  FUN_028a4664(param_1 + 0x178);
  FUN_028a4664(param_1 + 0x140);
  FUN_028a4664(param_1 + 0x108);
  FUN_028a4704(param_1 + 0xa0);
  FUN_028a472c(param_1 + 0x30);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x20));
  return;
}


