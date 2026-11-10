/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e71748; name: FUN_01e71748
 */


uint FUN_01e71748(long param_1,void *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  void *__dest;
  long lVar3;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_3 == 0x29c0) {
    __dest = *(void **)(param_1 + 0x40);
    if (__dest == (void *)0x0) {
      FUN_01e71820(&local_50,*(undefined8 *)(param_1 + 8));
      lVar1 = local_50;
      local_50 = 0;
      lVar3 = *(long *)(param_1 + 0x40);
      *(long *)(param_1 + 0x40) = lVar1;
      if (lVar3 == 0) {
        *(undefined8 *)(param_1 + 0x50) = local_40;
        *(undefined8 *)(param_1 + 0x58) = local_38;
        *(undefined8 *)(param_1 + 0x48) = local_48;
        local_50 = 0;
      }
      else {
        FUN_01e71394(param_1 + 0x48);
        lVar1 = local_50;
        *(undefined8 *)(param_1 + 0x48) = local_48;
        *(undefined8 *)(param_1 + 0x50) = local_40;
        *(undefined8 *)(param_1 + 0x58) = local_38;
        local_50 = 0;
        if (lVar1 != 0) {
          FUN_01e71394(&local_48);
        }
      }
      __dest = *(void **)(param_1 + 0x40);
      if (__dest == (void *)0x0) {
        uVar2 = 0;
        goto LAB_01e71794;
      }
    }
    memcpy(__dest,param_2,0x29c0);
    uVar2 = FUN_01e71950(param_1);
  }
  else {
    uVar2 = 0;
  }
LAB_01e71794:
  return uVar2 & 1;
}


