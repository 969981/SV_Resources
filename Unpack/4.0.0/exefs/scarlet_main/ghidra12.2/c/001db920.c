/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001db920; name: FUN_001db920
 */


undefined4 FUN_001db920(long param_1,uint param_2,void *param_3,size_t param_4)

{
  undefined4 uVar1;
  void *__dest;
  
  if (*(long *)(param_1 + 0x738) == 0) {
    if ((param_2 < 3) && (__dest = (void *)FUN_001ec2f8(param_4 + 1), __dest != (void *)0x0)) {
      memcpy(__dest,param_3,param_4);
      *(undefined1 *)((long)__dest + param_4) = 0;
      FUN_001ec308(__dest);
    }
    uVar1 = 0;
  }
  else {
    FUN_001d14e0(param_1,1);
    uVar1 = (**(code **)(param_1 + 0x738))
                      (param_1,param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x670));
    FUN_001d14e0(param_1,0);
  }
  return uVar1;
}


