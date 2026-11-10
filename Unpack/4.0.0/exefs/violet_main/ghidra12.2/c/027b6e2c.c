/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027b6e2c; name: FUN_027b6e2c
 */


void FUN_027b6e2c(undefined8 *param_1,long *param_2)

{
  void *__src;
  char local_40 [4];
  undefined4 local_3c;
  undefined2 uStack_38;
  undefined2 uStack_36;
  
  *(undefined1 *)((long)param_1 + 0x104) = 0;
  *param_1 = &PTR_LAB_045e0ec8;
  __src = (void *)(**(code **)(*param_2 + 0x10))(param_2);
  memcpy(param_1 + 1,__src,0xfc);
  (**(code **)(*param_2 + 0x18))(local_40,param_2);
  if (*(char *)((long)param_1 + 0x104) == '\0') {
    if (local_40[0] != '\0') {
      param_1[0x21] = CONCAT26(uStack_36,CONCAT24(uStack_38,local_3c));
      *(undefined1 *)((long)param_1 + 0x104) = 1;
    }
  }
  else if (local_40[0] == '\0') {
    *(undefined1 *)((long)param_1 + 0x104) = 0;
  }
  else {
    *(undefined2 *)((long)param_1 + 0x10c) = uStack_38;
    *(undefined4 *)(param_1 + 0x21) = local_3c;
  }
  return;
}


