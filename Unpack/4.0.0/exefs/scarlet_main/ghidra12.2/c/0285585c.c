/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0285585c; name: FUN_0285585c
 */


void FUN_0285585c(undefined8 *param_1,long param_2)

{
  undefined1 auStack_48 [16];
  char local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  
  FUN_02858720(*(undefined8 *)(param_2 + 0x68));
  if ((((*(char *)(param_2 + 0x58) != '\0') ||
       ((*(long *)(param_2 + 0x40) != 0 && (*(short *)(*(long *)(param_2 + 0x40) + 0x1a) != 0)))) &&
      (*(long **)(param_2 + 0x50) != (long *)0x0)) &&
     ((**(code **)(**(long **)(param_2 + 0x50) + 8))(local_38), local_38[0] != '\0')) {
    (**(code **)(*(long *)*param_1 + 0x18))(auStack_48,(long *)*param_1,local_30,local_28);
  }
  return;
}


