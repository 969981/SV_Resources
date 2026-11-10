/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017e1484; name: FUN_017e1484
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_017e1484(long param_1,long param_2)

{
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  FUN_017e1558(param_1,param_2 + 0xd0);
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


