/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e6b5ac; name: FUN_02e6b5ac
 */


void FUN_02e6b5ac(long param_1,byte param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0xe8);
  puVar1 = *(undefined8 **)(param_1 + 0xf0);
  *(byte *)(param_1 + 0xe0) = param_2 & 1;
  if ((puVar2 != puVar1) && ((**(code **)(*(long *)*puVar2 + 0x30))(), puVar2 + 1 != puVar1)) {
    (**(code **)(*(long *)puVar2[1] + 0x30))((long *)puVar2[1],param_2 & 1);
    if (puVar2 + 2 != puVar1) {
      (**(code **)(*(long *)puVar2[2] + 0x30))((long *)puVar2[2],param_2 & 1);
      for (puVar2 = puVar2 + 3; puVar2 != puVar1; puVar2 = puVar2 + 1) {
        (**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,param_2 & 1);
      }
    }
  }
  return;
}


