/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f1820; name: FUN_026f1820
 */


void FUN_026f1820(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  byte bVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_019462f4(param_5);
  if (*pcVar2 == *(char *)(param_1 + 0x41)) {
    bVar1 = pcVar2[1];
    if (bVar1 < 2) {
      FUN_026f1634(param_1,param_2,param_3,param_4);
      return;
    }
    if (bVar1 == 2) {
      FUN_026f0ac0(param_1,param_2,param_3,param_4);
      return;
    }
    if (bVar1 == 3) {
      FUN_026f1250(param_1,param_2,param_3);
      return;
    }
  }
  return;
}


