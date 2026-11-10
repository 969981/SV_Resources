/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011dbea0; name: FUN_011dbea0
 */


undefined8 * FUN_011dbea0(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *__src;
  
  if (param_1 != param_2) {
    __src = (void *)(param_1 + 0x2a);
    do {
      uVar2 = *(undefined8 *)((long)__src + -0x2a);
      *(undefined8 *)((long)param_3 + 6) = *(undefined8 *)((long)__src + -0x24);
      *param_3 = uVar2;
      if (*(char *)(param_3 + 2) == '\0') {
        if (*(char *)((long)__src + -0x1a) != '\0') {
          uVar2 = *(undefined8 *)((long)__src + -0x16);
          uVar3 = *(undefined8 *)((long)__src + -0xe);
          *(undefined4 *)((long)param_3 + 0x24) = *(undefined4 *)((long)__src + -6);
          *(undefined8 *)((long)param_3 + 0x1c) = uVar3;
          *(undefined8 *)((long)param_3 + 0x14) = uVar2;
          *(undefined1 *)(param_3 + 2) = 1;
        }
      }
      else if (*(char *)((long)__src + -0x1a) == '\0') {
        *(undefined1 *)(param_3 + 2) = 0;
      }
      else {
        uVar2 = *(undefined8 *)((long)__src + -0x16);
        uVar3 = *(undefined8 *)((long)__src + -0xe);
        *(undefined4 *)((long)param_3 + 0x24) = *(undefined4 *)((long)__src + -6);
        *(undefined8 *)((long)param_3 + 0x1c) = uVar3;
        *(undefined8 *)((long)param_3 + 0x14) = uVar2;
      }
      if (*(char *)(param_3 + 5) == '\0') {
        if (*(char *)((long)__src + -2) != '\0') {
          memcpy((void *)((long)param_3 + 0x2a),__src,0x15a);
          *(undefined1 *)(param_3 + 5) = 1;
        }
      }
      else if (*(char *)((long)__src + -2) == '\0') {
        *(undefined1 *)(param_3 + 5) = 0;
      }
      else {
        memcpy((void *)((long)param_3 + 0x2a),__src,0x15a);
      }
      lVar1 = (long)__src + 0x15e;
      param_3 = param_3 + 0x31;
      __src = (void *)((long)__src + 0x188);
    } while (lVar1 != param_2);
  }
  return param_3;
}


