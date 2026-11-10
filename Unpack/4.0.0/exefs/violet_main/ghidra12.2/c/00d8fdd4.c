/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d8fdd4; name: FUN_00d8fdd4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00d8fdd4(long param_1)

{
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(char *)(param_1 + 0x91) != '\0') {
    *(undefined2 *)(param_1 + 0x90) = 1;
    if (*(int *)(param_1 + 0xd8) == 1) {
      FUN_00d900b4(local_90,*(undefined4 *)(param_1 + 0xd4),param_1);
    }
    else if (*(int *)(param_1 + 0xd8) == 0) {
      FUN_015ed920(local_90,*(undefined4 *)(param_1 + 0xd4),param_1);
    }
    else {
      local_90[0] = 0;
      local_80 = 0;
      uStack_78 = 0;
      uStack_68 = _UNK_03caa728;
      local_70 = _DAT_03caa720;
    }
    memcpy((void *)(param_1 + 0xa0),local_90,0x30);
  }
  if (*(char *)(param_1 + 0x90) != '\0') {
    *(undefined1 *)(param_1 + 0x90) = 0;
    FUN_00d903c4(local_90,*(undefined4 *)(param_1 + 0xd0),param_1 + 0xa0,1);
    memcpy((void *)(param_1 + 0xe0),local_90,100);
  }
  return param_1 + 0xe0;
}


